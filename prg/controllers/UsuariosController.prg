#include "FiveWin.Ch"
#include "Factu.ch" 

#define  __encryption_key__ "snorlax"

//---------------------------------------------------------------------------//

CLASS UsuariosController FROM SQLNavigatorController
   
   DATA oAjustableController 

   METHOD New()

   METHOD End()

   METHOD setConfig()

END CLASS

//---------------------------------------------------------------------------//

METHOD New() CLASS UsuariosController

   ::Super:New()

   ::cTitle                := "Usuarios"

   ::setName( "usuarios" )

   ::lTransactional        := .t.

   ::lConfig               := .t.

   ::hImage                := { "16" => "gc_businesspeople_16" }

   ::nLevel                := nLevelUsr( "01052" )

   ::oModel                := SQLUsuariosModel():New( self )

   ::oRepository           := UsuariosRepository():New( self )

   ::oBrowseView           := UsuariosBrowseView():New( self )

   ::oDialogView           := UsuariosView():New( self )

   ::oValidator            := UsuariosValidator():New( self )

   ::oAjustableController  := AjustableController():New( self )

   ::oFilterController:setTableToFilter( ::getName() )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD End()

   if !empty( ::oModel )
      ::oModel:End()
   endif

   if !empty( ::oBrowseView )
      ::oBrowseView:End()
   endif

   if !empty( ::oDialogView )
      ::oDialogView:End()
   endif

   if !empty( ::oValidator )
      ::oValidator:End()
   endif

   if !empty( ::oAjustableController )
      ::oAjustableController:End()
   end if 

   ::Super:End()

RETURN ( nil )

//---------------------------------------------------------------------------//

METHOD setConfig()

   local aItems   := {}
   local cUuid    := ::getRowSet():fieldGet( 'uuid' )

   if empty( cUuid )
      msgalert( cUuid, "cUuid" )
      RETURN ( self )
   end if 

   msgalert( hb_valtoexp( EmpresasModel():aNombres() ), "EmpresasModel():aNombres()stock" )

   aadd( aItems,  {  'clave'  => 'Empresa en uso',;
                     'valor'  => ::oAjustableController:oRepository:getValue( cUuid, 'usuarios', 'empresa_en_uso', space( 3 ) ) ,;
                     'tipo'   => "B",;
                     'lista'  => EmpresasModel():aNombres() } )

   msgalert( hb_valtoexp( aItems ), "aItems" )

   ::oAjustableController:oDialogView:setItems( aItems )

   ::oAjustableController:DialogViewActivate()
   
/*
   ::aItems    := {}

   aadd( ::aItems, { 'clave'  => 'empresa_en_uso',;
                     'valor'  => ::getValue( 'usuarios', 'empresa_en_uso', '' ),;
                     'tipo'   => "B",;
                     'lista'  => {"uno", "dos", "tres"} } )

   aadd( ::aItems, { 'clave'  => 'caja_en_uso',;
                     'valor'  => ::getValue( 'usuarios', 'caja_en_uso', '' ),;
                     'tipo'   => "C" } )

   aadd( ::aItems, { 'clave'  => 'almacen_en_uso',;
                     'valor'  => ::getValue( 'usuarios', 'almacen_en_uso', '' ),;
                     'tipo'   => "B",;
                     'lista'  => {"uno", "dos", "tres"} } )

   ::oAjustableController:Edit()
*/

RETURN ( self )

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//

CLASS SQLUsuariosModel FROM SQLBaseModel

   DATA cTableName               INIT "usuarios"

   DATA cConstraints             INIT "PRIMARY KEY (id), KEY (uuid)"

   METHOD getColumns()

   METHOD getInsertUsuariosSentence()

   METHOD Crypt( cPassword )     INLINE ( hb_crypt( alltrim( cPassword ), __encryption_key__ ) )
   METHOD Decrypt( cPassword )   INLINE ( hb_decrypt( alltrim( cPassword ), __encryption_key__ ) )

END CLASS

//---------------------------------------------------------------------------//

METHOD getColumns() CLASS SQLUsuariosModel

   hset( ::hColumns, "id",             {  "create"    => "INTEGER AUTO_INCREMENT"                  ,;
                                          "default"   => {|| 0 } }                                 )

   hset( ::hColumns, "uuid",           {  "create"    => "VARCHAR(40) NOT NULL UNIQUE"             ,;
                                          "default"   => {|| win_uuidcreatestring() } }            )

   hset( ::hColumns, "nombre",         {  "create"    => "VARCHAR ( 100 ) NOT NULL UNIQUE"                         ,;
                                          "default"   => {|| space( 100 ) } }                      )

   hset( ::hColumns, "email",          {  "create"    => "VARCHAR ( 100 ) NOT NULL"                         ,;
                                          "default"   => {|| space( 100 ) } }                      )

   hset( ::hColumns, "password",       {  "create"    => "VARCHAR ( 100 )"                         ,;
                                          "default"   => {|| space( 100 ) } }                      )

   hset( ::hColumns, "remember_token", {  "create"    => "VARCHAR ( 100 )"                         ,;
                                          "default"   => {|| "" } }                                )

   ::getTimeStampColumns()   

RETURN ( ::hColumns )

//---------------------------------------------------------------------------//

METHOD getInsertUsuariosSentence()

   local cStatement 

   cStatement  := "INSERT IGNORE INTO " + ::cTableName + " "
   cStatement  +=    "( uuid, nombre, email, password ) "
   cStatement  += "VALUES "
   cStatement  +=    "( UUID(), 'administrador', 'admin@admin.com', " + quoted( ::Crypt( '12345678' ) ) + " )"

RETURN ( cStatement )

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//

CLASS UsuariosBrowseView FROM SQLBrowseView

   METHOD addColumns()                       

ENDCLASS

//----------------------------------------------------------------------------//

METHOD addColumns() CLASS UsuariosBrowseView

   with object ( ::oBrowse:AddCol() )
      :cSortOrder          := 'id'
      :cHeader             := 'Id'
      :nWidth              := 80
      :bEditValue          := {|| ::getRowSet():fieldGet( 'id' ) }
      :bLClickHeader       := {| row, col, flags, oColumn | ::onClickHeader( oColumn ) }
   end with

   with object ( ::oBrowse:AddCol() )
      :cSortOrder          := 'uuid'
      :cHeader             := 'Uuid'
      :nWidth              := 180
      :bEditValue          := {|| ::getRowSet():fieldGet( 'uuid' ) }
      :bLClickHeader       := {| row, col, flags, oColumn | ::onClickHeader( oColumn ) }
      :lHide               := .t.
   end with

   with object ( ::oBrowse:AddCol() )
      :cSortOrder          := 'nombre'
      :cHeader             := 'Nombre'
      :nWidth              := 300
      :bEditValue          := {|| ::getRowSet():fieldGet( 'nombre' ) }
      :bLClickHeader       := {| row, col, flags, oColumn | ::onClickHeader( oColumn ) }
   end with

   with object ( ::oBrowse:AddCol() )
      :cSortOrder          := 'email'
      :cHeader             := 'Email'
      :nWidth              := 300
      :bEditValue          := {|| ::getRowSet():fieldGet( 'email' ) }
      :bLClickHeader       := {| row, col, flags, oColumn | ::onClickHeader( oColumn ) }
   end with

   with object ( ::oBrowse:AddCol() )
      :cSortOrder          := 'password'
      :cHeader             := 'Contrase�a'
      :nWidth              := 180
      :bEditValue          := {|| ::getRowSet():fieldGet( 'password' ) }
      :bLClickHeader       := {| row, col, flags, oColumn | ::onClickHeader( oColumn ) }
   end with

   with object ( ::oBrowse:AddCol() )
      :cSortOrder          := 'creado'
      :cHeader             := 'Creado'
      :cEditPicture        := '@DT'
      :nWidth              := 140
      :nHeadStrAlign       := AL_LEFT
      :nDataStrAlign       := AL_LEFT
      :lHide               := .t.
      :bEditValue          := {|| ::getRowSet():fieldGet( 'created_at' ) }
      :bLClickHeader       := {| row, col, flags, oColumn | ::onClickHeader( oColumn ) }
   end with

   with object ( ::oBrowse:AddCol() )
      :cSortOrder          := 'modificado'
      :cHeader             := 'Modificado'
      :cEditPicture        := '@DT'
      :nWidth              := 140
      :nHeadStrAlign       := AL_LEFT
      :nDataStrAlign       := AL_LEFT
      :lHide               := .t.
      :bEditValue          := {|| ::getRowSet():fieldGet( 'updated_at' ) }
      :bLClickHeader       := {| row, col, flags, oColumn | ::onClickHeader( oColumn ) }
   end with

RETURN ( self )

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//

CLASS UsuariosView FROM SQLBaseView

   DATA oGetPassword
   DATA cGetPassword          INIT space( 100 )
   DATA oGetRepeatPassword
   DATA cGetRepeatPassword    INIT space( 100 )   

   METHOD Activate()
   
   METHOD saveView( oDlg )

END CLASS

//---------------------------------------------------------------------------//

METHOD Activate() CLASS UsuariosView

   local oDlg
   local oBtnOk
   local oBmpGeneral

   ::cGetPassword          := space( 100 )
   ::cGetRepeatPassword    := space( 100 )

   DEFINE DIALOG  oDlg ;
      RESOURCE    "USUARIO" ;
      TITLE       ::lblTitle() + "usuario" 

   REDEFINE BITMAP oBmpGeneral ;
      ID          900 ;
      RESOURCE    "gc_businessman_48" ;
      TRANSPARENT ;
      OF          oDlg

   REDEFINE GET   ::getModel():hBuffer[ "id" ] ;
      ID          100 ;
      WHEN        ( .f. ) ;
      OF          oDlg

   REDEFINE GET   ::getModel():hBuffer[ "nombre" ] ;
      ID          110 ;
      WHEN        ( ::oController:isNotZoomMode() ) ;
      VALID       ( ::oController:validate( "nombre" ) ) ;
      OF          oDlg

   REDEFINE GET   ::getModel():hBuffer[ "email" ] ;
      ID          120 ;
      WHEN        ( ::oController:isNotZoomMode() ) ;
      VALID       ( ::oController:validate( "email" ) ) ;
      OF          oDlg

   REDEFINE GET   ::oGetPassword ;
      VAR         ::cGetPassword ;
      ID          130 ;
      WHEN        ( ::oController:isNotZoomMode() ) ;
      OF          oDlg
   
   ::oGetPassword:bValid         := {|| ::oController:validate( "password", ::cGetPassword ) }

   REDEFINE GET   ::oGetRepeatPassword ;
      VAR         ::cGetRepeatPassword ;
      ID          131 ;
      WHEN        ( ::oController:isNotZoomMode() ) ;
      OF          oDlg

   ::oGetRepeatPassword:bValid   := {|| ::oController:validate( "repeatPassword", ::cGetRepeatPassword ) }

   REDEFINE BUTTON oBtnOk ;
      ID          IDOK ;
      OF          oDlg ;
      WHEN        ( ::oController:isNotZoomMode() ) ;
      ACTION      ( ::saveView( oDlg ) )

   REDEFINE BUTTON ;
      ID          IDCANCEL ;
      OF          oDlg ;
      CANCEL ;
      ACTION      ( oDlg:end() )

   oDlg:AddFastKey( VK_F5, {|| oBtnOk:Click() } )

   oDlg:Activate( , , , .t. )

   oBmpGeneral:end()

RETURN ( oDlg:nResult )

//---------------------------------------------------------------------------//

METHOD saveView( oDlg )

   if !( validateDialog( oDlg ) )
      RETURN ( .f. )
   end if 

   if !empty( ::cGetPassword )
      ::getModel():setBuffer( "password", ::oModel:Crypt( ::cGetPassword ) )
   end if 

   oDlg:end( IDOK )

RETURN ( oDlg:nResult )

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//

CLASS UsuariosValidator FROM SQLBaseValidator

   METHOD getValidators()

   METHOD Password()

   METHOD RepeatPassword()

END CLASS

//---------------------------------------------------------------------------//

METHOD getValidators() CLASS UsuariosValidator

   ::hValidators  := {  "nombre" =>          {  "required"        => "El nombre es un dato requerido",;
                                                "unique"          => "El nombre ya existe" },; 
                        "email" =>           {  "required"        => "El email es un dato requerido",;
                                                "mail"            => "El email no es valido" },;
                        "password" =>        {  "password"        => "- Contrase�a debe de tener al menos ocho caracteres y un m�ximo de dieciseis" + CRLF + ;
                                                                     "- No puede contener espacios"  },;
                        "repeatPassword" =>  {  "repeatPassword"  => "Las contrase�as no coinciden" } }

RETURN ( ::hValidators )

//---------------------------------------------------------------------------//

METHOD Password( uValue )

   uValue         := alltrim( uValue )

   if ::oController:isAppendMode()
      RETURN ( ::Super:Password( uValue ) )
   end if 

   if ::oController:isEditMode() .and. !empty( uValue )
      RETURN ( ::Super:Password( uValue ) )
   end if       

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD RepeatPassword( uValue )

   if empty( ::oController:oDialogView:cGetPassword ) 
      RETURN ( .t. )
   end if 
      
RETURN ( alltrim( ::oController:oDialogView:cGetPassword ) == alltrim( uValue ) )

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//

CLASS UsuariosRepository FROM SQLBaseRepository

   METHOD getTableName()      INLINE ( SQLUsuariosModel():getTableName() ) 

END CLASS

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//