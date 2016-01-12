#include "FiveWin.Ch"
#include "Factu.ch" 
#include "MesDbf.ch"
#include "Report.ch"
#include "XBrowse.ch"

//---------------------------------------------------------------------------//

CLASS TConversionDocumentos 

   DATA oDocumentHeaders
   DATA oDocumentLines

   DATA aliasDocumentLine

   DATA oDlg
   DATA oFld

   DATA oTitle
   DATA cTitle 

   DATA oBtnAnterior
   DATA oBtnSiguiente
   DATA oBtnSalir

   DATA nView
   DATA lOpenFiles

   DATA oHeaderTable
   DATA oLineTable

   DATA oDocument
   DATA cDocument   
   DATA aDocuments   

   DATA cTargetDocument
   DATA aTargetEmpresa
   DATA cTargetEmpresa

   DATA oSearch
   DATA cSearch
   DATA oSortDocument
   DATA cSortDocument                              INIT "N�mero"
   DATA aSortDocument                              INIT { "N�mero", "Fecha", "Nombre" }

   DATA oSearchLines
   DATA cSearchLines
   DATA oSortLines
   DATA cSortLines                                 INIT ""
   DATA aSortLines                                 INIT {}

   DATA oBrwDocuments
   DATA oBrwLines

   DATA cPictureRound
   DATA nDecimalPrice
   DATA nRoundDecimalPrice

   DATA oPeriodo
   DATA oCliente
   DATA oProveedor
   DATA oArticulo
   DATA oEmpresa
   DATA oSerie
   DATA oFecha

   DATA aPropertiesTable

   METHOD New()

   METHOD Dialog()
      METHOD DialogSelectionCriteria()
      METHOD DialogSelectionDocument()
      METHOD DialogSelectionLines()
         METHOD changeUnits( oColumn, uValue, nKey )
      METHOD DialogSummary()
      METHOD startDialog()

      METHOD changeSortDocument()
      METHOD changeSearch()                        INLINE ( ::oBrwDocuments:Seek( alltrim( ::cSearch ) ) )
      METHOD setOrderInColumn( oColumn )  
      METHOD getDocument()                         INLINE ( alltrim( ::cDocument ) )
      METHOD getDocumentName()                     INLINE ( if( !empty( ::getHeaderAlias() ), ::getDocument() + space( 1 ) + ::getHeaderTextId(), "" ) )
      
      METHOD setTitle( cTitle )                    INLINE ( if( !empty( ::oTitle ), ::oTitle:setText( cTitle ), ::cTitle := cTitle ) )

      METHOD isValidDialogRequisite()
      METHOD isValidTargetDocument()
      
      METHOD getActionDocument()                   INLINE ( hget( ::aDocuments, ::cDocument ) )
      METHOD getActionTargetDocument()             INLINE ( hget( ::aDocuments, ::cTargetDocument ) )

   METHOD OpenFiles()
   METHOD CloseFiles()
   METHOD getView()                                INLINE ( ::nView )

   METHOD BotonSiguiente()
   METHOD BotonAnterior()

   METHOD selectLine()                             
   METHOD unSelectLine()                           
   METHOD toogleSelectLine()                       

   METHOD selectAllLine()                          INLINE ( ::oDocumentLines:selectAll(),       ::oBrwLines:Refresh() )
   METHOD unselectAllLine()                        INLINE ( ::oDocumentLines:unSelectAll(),     ::oBrwLines:Refresh() )
   METHOD propertiesLine()

   METHOD opcionInvalida()                         INLINE ( msgStop( "Opci�n invalida, por favor elija una opci�n valida." ), .f. )

   METHOD setSalesPictures()                       INLINE ( ::cPictureRound      := cPorDiv(),;
                                                            ::nDecimalPrice      := nDinDiv(),;
                                                            ::nRoundDecimalPrice := nRinDiv() )

   METHOD setShoppingPictures()                    INLINE ( ::cPictureRound      := cPirDiv(),;
                                                            ::nDecimalPrice      := nDouDiv(),;
                                                            ::nRoundDecimalPrice := nRouDiv() )

   METHOD setSalesControls()                       INLINE ( if( !empty(::oProveedor), ::oProveedor:Hide(), ),;
                                                            if( !empty(::oCliente), ::oCliente:Show(), ) )

   METHOD setShoppingControls()                    INLINE ( if( !empty(::oProveedor), ::oProveedor:Show(), ),;
                                                            if( !empty(::oCliente), ::oCliente:Hide(), ) )

   // get the documents data---------------------------------------------------

   METHOD setDocumentType( cDataTable )

   METHOD setSalesDocumentType( cHeaderTable, cLineTable ) ;
                                                   INLINE ( ::setSalesPictures(),;
                                                            ::setSalesControls(),;
                                                            ::setDocumentType( cHeaderTable, cLineTable ) )

   METHOD setShoppingDocumentType( cHeaderTable, cLineTable ) ;
                                                   INLINE ( ::setShoppingPictures(),;
                                                            ::setShoppingControls(),;
                                                            ::setDocumentType( cHeaderTable, cLineTable ) )

   METHOD setDocumentPedidosProveedores()          INLINE ( ::setShoppingDocumentType( D():PedidosProveedoresTableName(), D():PedidosProveedoresLineasTableName() ) )

   METHOD setDocumentPedidosClientes()             INLINE ( ::setSalesDocumentType( D():PedidosClientesTableName(), D():PedidosClientesLineasTableName() ) )
   METHOD setDocumentSATClientes()                 INLINE ( ::setSalesDocumentType( D():SATClientesTableName(), D():SATClientesLineasTableName() ) )

   METHOD setHeaderTable( cTableName )             INLINE ( ::oHeaderTable := TDataCenter():scanDataTableInView( cTableName, ::nView ) )
   METHOD getHeaderAlias()                         INLINE ( ::oHeaderTable:getAlias() )
   METHOD getHeaderEof()                           INLINE ( ( ::oHeaderTable:getAlias() )->( eof() ) )
   METHOD getHeaderDictionary()                    INLINE ( ::oHeaderTable:getDictionary() )
   METHOD getHeaderIndex()                         INLINE ( ::oHeaderTable:getIndex() )

   METHOD getHeaderId()                            INLINE ( D():getFieldFromAliasDictionary( "Serie", ::getHeaderAlias(), ::getHeaderDictionary() ) + ;
                                                            str( D():getFieldFromAliasDictionary( "Numero", ::getHeaderAlias(), ::getHeaderDictionary() ) ) + ;
                                                            D():getFieldFromAliasDictionary( "Sufijo", ::getHeaderAlias(), ::getHeaderDictionary() ) )
   METHOD getHeaderDate()                          INLINE ( D():getFieldFromAliasDictionary( "Fecha", ::getHeaderAlias(), ::getHeaderDictionary() ) )

   METHOD setLineTable( cTableName )               INLINE ( ::oLineTable := TDataCenter():scanDataTableInView( cTableName, ::nView ) )
   METHOD getLineAlias()                           INLINE ( ::oLineTable:getAlias() )
   METHOD getLineDictionary()                      INLINE ( ::oLineTable:getDictionary() )
   METHOD getLineIndex()                           INLINE ( ::oLineTable:getIndex() )

   METHOD getLinesDocument()                       INLINE ( ::oDocumentLines:getLines() )
   METHOD injectValuesBrowseProperties( idProduct )
   METHOD saveValuesBrowseProperties()
   METHOD setValuesBrowseProperties()
   METHOD getLineDocument( nPosition )             INLINE ( ::oDocumentLines:getLine( if( !empty( nPosition ), nPosition, ::oBrwLines:nArrayAt ) ) )
   METHOD getHeaderDocument( nPosition )           INLINE ( ::oDocumentHeaders:getLine( if( !empty( nPosition ), nPosition, ::oBrwDocuments:nArrayAt ) ) )

   METHOD loadHeaderDocument()
      METHOD isValidHeaderDocument()   
   METHOD setBrowseHeaderDocument()

   METHOD loadLinesDocument() 
   METHOD setBrowseLinesDocument()                 

   METHOD showDocuments() 
   METHOD showDocumentsLines()

   METHOD changeSearchLines()                      INLINE ( ::oBrwLines:Seek( alltrim( ::cSearchLines ) ) )
   METHOD changeSortLines()                        

   METHOD clikcOnLineHeader( oColumn )     
   METHOD seekLine( c )                    

   METHOD clickOnDocumentHeader( oColumn )        
   METHOD seekHeader()

ENDCLASS

//----------------------------------------------------------------------------//

METHOD New()

   ::OpenFiles()

   ::cDocument          := space( 3 ) + "Pedido proveedores"
   ::cTargetDocument    := space( 3 ) + "S.A.T. clientes"
   
   ::aDocuments         := {  "Compras" =>                                                   nil,;                                    
                              space( 3 ) + "Pedido proveedores" =>                           {|| ::setDocumentPedidosProveedores() },;
                              space( 3 ) + "Albar�n proveedores" =>                          {|| msgAlert( "Albar�n proveedores" ) },;
                              space( 3 ) + "Factura proveedores" =>                          {|| msgAlert( "Factura proveedores" ) },;
                              space( 3 ) + "Factura rectificativas proveedores" =>           {|| msgAlert( "Factura rectificativas proveedores" ) },;
                              space( 3 ) + "Recibos de proveedores" =>                       {|| msgAlert( "Recibos de proveedores" ) },;
                              "Ventas" =>                                                    nil,;                                    
                              space( 3 ) + "S.A.T. clientes" =>                              {|| ::setDocumentSATClientes() },;
                              space( 3 ) + "Presupuesto clientes" =>                         {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Pedido clientes" =>                              {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Albar�n clientes" =>                             {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Factura clientes" =>                             {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Factura de anticipos" =>                         {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Factura rectificativa" =>                        {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Recibos facturas clientes" =>                    {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Tickets clientes" =>                             {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Parte de producci�n" =>                          {|| msgAlert( "" ), .t. },;
                              space( 3 ) + "Recibos de clientes" =>                          {|| msgAlert( "" ), .t. } }

   ::aTargetEmpresa     := aSerializedEmpresas()

   ::aliasDocumentLine  := aliasDocumentLine():New( Self )

   ::oDocumentHeaders   := DocumentLines():New( Self )

   ::oDocumentLines     := DocumentLines():New( Self ) // AliasDocumentLine():New( Self )   

   // ::setDocumentPedidosProveedores()

RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD OpenFiles()

   local oError
   local oBlock         := ErrorBlock( {| oError | ApoloBreak( oError ) } )

   BEGIN SEQUENCE

      ::lOpenFiles      := .t.

      ::nView           := D():CreateView()

      D():Empresa( ::nView )

      D():Proveedores( ::nView )
      
      D():Clientes( ::nView )

      D():GruposProveedores( ::nView )

      D():PedidosProveedores( ::nView )

      D():PedidosProveedoresLineas( ::nView )

      D():PedidosProveedoresIncidencias( ::nView )

      D():PedidosProveedoresDocumentos( ::nView )

      D():PedidosClientes( ::nView )

      D():PedidosClientesLineas( ::nView )

      D():PedidosClientesIncidencias( ::nView )

      D():SATClientes( ::nView )
      
      D():SATClientesLineas( ::nView )

      D():PropiedadesLineas( ::nView )

   RECOVER USING oError

      ::lOpenFiles      := .f.

      msgStop( "Imposible abrir todas las bases de datos" + CRLF + ErrorMessage( oError ) )

   END SEQUENCE

   ErrorBlock( oBlock )

   if !::lOpenFiles
      ::CloseFiles()
   end if

RETURN ( ::lOpenFiles )

//---------------------------------------------------------------------------//

METHOD CloseFiles()

   D():DeleteView( ::nView )

   ::lOpenFiles         := .f.

Return ( Self )

//---------------------------------------------------------------------------//
   
METHOD Dialog() 

   local oBmp

   DEFINE DIALOG ::oDlg RESOURCE "ASS_CONVERSION_DOCUMENTO"

   REDEFINE BITMAP oBmp ;
      ID          500 ;
      RESOURCE    "hand_point_48" ;
      TRANSPARENT ;
      OF          ::oDlg

   REDEFINE PAGES ::oFld ;
      ID          100;
      OF          ::oDlg ;
      DIALOGS     "ASS_CONVERSION_DOCUMENTO_1",;
                  "ASS_CONVERSION_DOCUMENTO_2",;
                  "ASS_CONVERSION_DOCUMENTO_3",;
                  "ASS_CONVERSION_DOCUMENTO_4"

   ::DialogSelectionCriteria( ::oFld:aDialogs[1] )

   // segundo dialogo----------------------------------------------------------

   ::DialogSelectionDocument( ::oFld:aDialogs[2] )

   // tercera caja de dialogo -------------------------------------------------

   ::DialogSelectionLines( ::oFld:aDialogs[3] )
   
   // Resumen de la exportacion------------------------------------------------

   ::DialogSummary( ::oFld:aDialogs[4] )

   // Botones -----------------------------------------------------------------

   REDEFINE BUTTON ::oBtnAnterior;
      ID          3 ;
      OF          ::oDlg ;
      ACTION      ( ::BotonAnterior() )

   REDEFINE BUTTON ::oBtnSiguiente;
      ID          IDOK ;
      OF          ::oDlg ;
      ACTION      ( ::BotonSiguiente() )

   REDEFINE BUTTON ;
      ID          IDCANCEL ;
      OF          ::oDlg ;
      ACTION      ( ::oDlg:End() )

   ::oDlg:bStart  := {|| ::startDialog() }

   ACTIVATE DIALOG ::oDlg CENTER

   ::CloseFiles()

   oBmp:End()

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD DialogSelectionCriteria( oDlg )

   REDEFINE COMBOBOX ::oDocument ;
      VAR         ::cDocument ;
      ITEMS       hgetkeys( ::aDocuments );
      ID          100 ;
      OF          oDlg

   ::oDocument:bChange  := {|| ::showDocuments() }

   ::oPeriodo     := GetPeriodo()
      ::oPeriodo:New( 110, 120, 130 )
      ::oPeriodo:Resource( oDlg )

   ::oCliente     := GetCliente()
      ::oCliente:New( 140, 141, 142 )
      ::oCliente:Resource( oDlg )
      ::oCliente:setView( ::nView )

   ::oProveedor   := GetProveedor() 
      ::oProveedor:New( 150, 151, 152 )
      ::oProveedor:Resource( oDlg )
      ::oProveedor:setView( ::nView )

   ::oArticulo    := GetArticulo()
      ::oArticulo:New( 200, 201, 202 )
      ::oArticulo:Resource( oDlg )
      ::oArticulo:setView( ::nView )

   REDEFINE COMBOBOX ::cTargetDocument ;
      ITEMS       hgetkeys( ::aDocuments );
      ID          160 ;
      OF          oDlg

   ::oSerie       := GetSerie():New( 170 )
      ::oSerie:Resource( oDlg )      

   ::oFecha       := GetFecha():New( 180 )
      ::oFecha:Resource( oDlg )

   ::oEmpresa     := GetEmpresa():New( 190, 191, 192 )
      ::oEmpresa:Resource( oDlg )
      ::oEmpresa:setView( ::nView )
      ::oEmpresa:Current()

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD DialogSelectionDocument( oDlg )

   REDEFINE GET   ::oSearch ;
      VAR         ::cSearch ;
      ID          100 ;
      PICTURE     "@!" ;
      BITMAP      "Find" ;
      OF          oDlg

   ::oSearch:bChange                := {|| ::changeSearch() }
   ::oSearch:bValid                 := {|| ::oSearch:varPut( space( 100 ) ), .t. }

   REDEFINE COMBOBOX ::oSortDocument ;
      VAR         ::cSortDocument ;
      ITEMS       ::aSortDocument ;
      ID          110 ;
      ON CHANGE   ( ::changeSortDocument() );
      OF          oDlg

   ::oSortDocument:bChange          := {|| ::changeSortDocument() }

   // browse de documentos-----------------------------------------------------

   ::oBrwDocuments                  := IXBrowse():New( ::oFld:aDialogs[2] )

   ::oBrwDocuments:lAutoSort        := .f.
   ::oBrwDocuments:bClrSel          := {|| { CLR_BLACK, Rgb( 229, 229, 229 ) } }
   ::oBrwDocuments:bClrSelFocus     := {|| { CLR_BLACK, Rgb( 167, 205, 240 ) } }

   ::oBrwDocuments:nMarqueeStyle    := 5
   ::oBrwDocuments:cName            := "Browse.Conversion documentos"

   ::setBrowseHeaderDocument()

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "N�mero"
      :Cargo                        := "getNumeroDocumento"
      :bEditValue                   := {|| ::getHeaderDocument():getNumeroDocumento() }
      :nWidth                       := 80
      :bLClickHeader                := {| nMRow, nMCol, nFlags, oColumn | ::clickOnDocumentHeader( oColumn ) }   
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "Fecha"
      :Cargo                        := "getDate"
      :bEditValue                   := {|| ::getHeaderDocument():getDate() }
      :nWidth                       := 80
      :bLClickHeader                := {| nMRow, nMCol, nFlags, oColumn | ::clickOnDocumentHeader( oColumn ) }
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "Cliente"
      :Cargo                        := "getClient"
      :bEditValue                   := {|| ::getHeaderDocument():getClient() }
      :nWidth                       := 80
      :bLClickHeader                := {| nMRow, nMCol, nFlags, oColumn | ::clickOnDocumentHeader( oColumn ) }
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "Nombre cliente"
      :Cargo                        := "getClientName"
      :bEditValue                   := {|| ::getHeaderDocument():getClientName() }
      :nWidth                       := 200
      :bLClickHeader                := {| nMRow, nMCol, nFlags, oColumn | ::clickOnDocumentHeader( oColumn ) }
   end with

  
/*

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "N�mero"
      :bEditValue                   := {|| ::getHeaderTextId() }
      :nWidth                       := 80
      :cSortOrder                   := "Id"
      :bLClickHeader                := {| nMRow, nMCol, nFlags, oColumn | ::clickOnDocumentHeader( oColumn ) }
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "Fecha"
      :bEditValue                   := {|| ::getDate() }
      :nWidth                       := 80
      :cSortOrder                   := "Fecha"
      :bLClickHeader                := {| nMRow, nMCol, nFlags, oColumn | ::clickOnDocumentHeader( oColumn ) }
      :nDataStrAlign                := 3
      :nHeadStrAlign                := 3
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "Nombre"
      :bEditValue                   := {|| ::getName() }
      :nWidth                       := 400
      :cSortOrder                   := "NombreEntidad"
      :bLClickHeader                := {| nMRow, nMCol, nFlags, oColumn | ::clickOnDocumentHeader( oColumn ) }
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "Base"
      :bEditValue                   := {|| ::getTotalNeto() }
      :cEditPicture                 := ::cPictureRound
      :nWidth                       := 80
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := cImp()
      :bEditValue                   := {|| ::getTotalImpuesto() }
      :cEditPicture                 := ::cPictureRound
      :nWidth                       := 80
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
   end with

   with object ( ::oBrwDocuments:AddCol() )
      :cHeader                      := "Total"
      :bEditValue                   := {|| ::getTotalDocumento() }
      :cEditPicture                 := ::cPictureRound
      :nWidth                       := 80
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
   end with
*/

   ::oBrwDocuments:CreateFromResource( 120 )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD DialogSelectionLines( oDlg )

   local oColumnNumeroDocumento

   REDEFINE GET   ::oSearchLines ;
      VAR         ::cSearchLines ;
      ID          200 ;
      PICTURE     "@!" ;
      BITMAP      "Find" ;
      OF          oDlg

   ::oSearchLines:bChange           := {|| ::changeSearchLines() }
   ::oSearchLines:bValid            := {|| ::oSearchLines:varPut( space( 100 ) ), .t. }

   REDEFINE COMBOBOX ::oSortLines ;
      VAR         ::cSortLines ;
      ITEMS       ::aSortLines ;
      ID          210 ;
      OF          oDlg

   ::oSortLines:bChange             := {|| ::changeSortLines() }

   REDEFINE BUTTON ;
      ID       500 ;
      OF       oDlg ;
      ACTION   ( ::selectLine() )

   REDEFINE BUTTON ;
      ID       510 ;
      OF       oDlg ;
      ACTION   ( ::unselectLine() )

   REDEFINE BUTTON ;
      ID       520 ;
      OF       oDlg ;
      ACTION   ( ::selectAllLine() )

   REDEFINE BUTTON ;
      ID       530 ;
      OF       oDlg ;
      ACTION   ( ::unselectAllLine() )

   REDEFINE BUTTON ;
      ID       540 ;
      OF       oDlg ;
      ACTION   ( ::propertiesLine() )

   // browse de lineas-----------------------------------------------------

   ::oBrwLines                      := IXBrowse():New( oDlg )

   ::oBrwLines:lAutoSort            := .f.
   ::oBrwLines:bClrSel              := {|| { CLR_BLACK, Rgb( 229, 229, 229 ) } }
   ::oBrwLines:bClrSelFocus         := {|| { CLR_BLACK, Rgb( 167, 205, 240 ) } }

   ::oBrwLines:nMarqueeStyle        := 6
   ::oBrwLines:cName                := "Browse.Conversion documentos lineas"

   ::setBrowseLinesDocument()

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Seleccionando"
      :bEditValue                   := {|| ::getLineDocument():isSelectLine() }
      :nWidth                       := 20
      :SetCheck( { "Sel16", "Nil16" } )
   end with

   with object ( oColumnNumeroDocumento := ::oBrwLines:AddCol() )
      :cHeader                      := "N�mero"
      :Cargo                        := "getNumeroDocumento"
      :bEditValue                   := {|| ::getLineDocument():getNumeroDocumento() }
      :nWidth                       := 80
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }   
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with
  
   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "C�digo"
      :Cargo                        := "getCode"
      :bEditValue                   := {|| ::getLineDocument():getCode() }
      :nWidth                       := 80
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Descripci�n"
      :Cargo                        := "getDescription"
      :bEditValue                   := {|| ::getLineDocument():getDescription() }
      :nWidth                       := 340
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Prop. 1"
      :Cargo                        := "getCodeFirstProperty"
      :bEditValue                   := {|| ::getLineDocument():getCodeFirstProperty() }
      :nWidth                       := 60
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Prop. 2"
      :Cargo                        := "getCodeSecondProperty"
      :bEditValue                   := {|| ::getLineDocument():getCodeSecondProperty() }
      :nWidth                       := 60
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Valor propiedad 1"
      :Cargo                        := "getValueFirstProperty"
      :bEditValue                   := {|| ::getLineDocument():getValueFirstProperty() }
      :nWidth                       := 60
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Valor propiedad 2"
      :Cargo                        := "getValueSecondProperty"
      :bEditValue                   := {|| ::getLineDocument():getValueSecondProperty() }
      :nWidth                       := 60
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Nombre propiedad 1"
      :Cargo                        := "getNameFirstProperty"
      :bEditValue                   := {|| ::getLineDocument():getNameFirstProperty() }
      :nWidth                       := 60
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Nombre propiedad 2"
      :Cargo                        := "getNameSecondProperty"
      :bEditValue                   := {|| ::getLineDocument():getNameSecondProperty() }
      :nWidth                       := 60
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Lote"
      :Cargo                        := "getLote"
      :bEditValue                   := {|| ::getLineDocument():getLote() }
      :nWidth                       := 80
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := cNombreCajas()
      :Cargo                        := "getBoxes"
      :bEditValue                   := {|| ::getLineDocument():getBoxes() }
      :cEditPicture                 := masUnd()
      :nWidth                       := 50
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := cNombreUnidades()
      :Cargo                        := "getUnits"
      :bEditValue                   := {|| ::getLineDocument():getUnits() }
      :cEditPicture                 := masUnd()
      :nWidth                       := 60
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :nEditType                    := 1
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }      
      :bOnPostEdit                  := {|oColumn, uValue, nKey| ::changeUnits( oColumn, uValue, nKey ) }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Total " + cNombreUnidades()
      :Cargo                        := "getTotalUnits"
      :bEditValue                   := {|| ::getLineDocument():getTotalUnits() }
      :cEditPicture                 := masUnd()
      :nWidth                       := 60
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :lHide                        := .f.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "UM. Unidad de medici�n"
      :Cargo                        := "getMeasurementUnit"
      :bEditValue                   := {|| ::getLineDocument():getMeasurementUnit() }
      :nWidth                       := 25
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Almacen"
      :Cargo                        := "getStore"
      :bEditValue                   := {|| ::getLineDocument():getStore() }
      :nWidth                       := 60
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Importe"
      :Cargo                        := "getNetPrice"
      :bEditValue                   := {|| Transform( ::getLineDocument():getNetPrice(), ::cPictureRound ) }
      :cEditPicture                 := ::cPictureRound
      :nWidth                       := 90
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "% Dto."
      :Cargo                        := "getPercentageDiscount"
      :bEditValue                   := {|| ::getLineDocument():getPercentageDiscount() }
      :cEditPicture                 := "@E 999.99"
      :nWidth                       := 50
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "% Dto. promoci�n"
      :Cargo                        := "getPercentagePromotion"
      :bEditValue                   := {|| ::getLineDocument():getPercentagePromotion() }
      :cEditPicture                 := "@E 999.99"
      :nWidth                       := 50
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :lHide                        := .t.
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "% " + cImp()
      :Cargo                        := "getPercentageTax"
      :bEditValue                   := {|| ::getLineDocument():getPercentageTax() }
      :cEditPicture                 := "@E 999.99"
      :nWidth                       := 50
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   with object ( ::oBrwLines:AddCol() )
      :cHeader                      := "Total"
      :Cargo                        := "getBruto"
      :bEditValue                   := {|| Transform( ::getLineDocument():getBruto(), ::cPictureRound ) } 
      :cEditPicture                 := ::cPictureRound
      :nWidth                       := 80
      :nDataStrAlign                := 1
      :nHeadStrAlign                := 1
      :bLClickHeader                := {|nMRow, nMCol, nFlags, oColumn| ::clikcOnLineHeader( oColumn ) }         
      :bLDClickData                 := {|| ::toogleSelectLine() }
   end with

   ::oBrwLines:CreateFromResource( 100 )

   // las columnas del browse son los ordenes----------------------------------

   aeval( ::oBrwLines:aCols, {|oColumn| aadd( ::aSortLines, oColumn:cHeader ) } )

   // orden por defecto-------------------------------------------------------

   ::clikcOnLineHeader( oColumnNumeroDocumento )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD changeUnits( oColumn, uValue, nKey )

   if isNum( nKey ) .and. ( nKey == VK_ESCAPE )
      Return ( Self )
   end if 

   if !isNil( uValue )
      ::getLineDocument():setUnits( uValue  )
   end if  

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD propertiesLine()

   local idProduct               := ::getLineDocument():getCode()
   local oDialogBrowseProperties

   ::aPropertiesTable            := D():getArticuloTablaPropiedades( idProduct, ::getView() )
   if empty( ::aPropertiesTable )
      msgStop( "Este art�culo no tiene propiedades." )
      Return ( Self )
   end if

   ::injectValuesBrowseProperties( idProduct )

   oDialogBrowseProperties       := DialogBrowseProperties():new( Self )
   if oDialogBrowseProperties:Dialog()

      ::saveValuesBrowseProperties()
   
      ::oBrwLines:Refresh()
   
   end if 

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD DialogSummary( oDlg )

   REDEFINE SAY ; 
      VAR         ::getDocument() ;
      ID          100 ;
      OF          oDlg

   REDEFINE SAY ; 
      VAR         "::getHeaderTextId()" ;
      ID          110 ;
      OF          oDlg

   REDEFINE COMBOBOX ::cTargetEmpresa ;
      ITEMS       ::aTargetEmpresa ;
      ID          130 ;
      OF          oDlg

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD startDialog()

   ::oBrwDocuments:Load()

   ::oBrwLines:Load()

   ::setDocumentPedidosProveedores()
   
RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD isValidDialogRequisite()

   if !::isValidTargetDocument()
      RETURN ( .f. )
   end if 

   if !::oSerie:Valid()
      RETURN ( .f. )
   end if 

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD isValidTargetDocument()
   
   if empty(::cTargetDocument)
      msgStop( "El documento destino no es valido.")
      RETURN ( .f. )
   end if 

   if ( ::cTargetDocument == ::cDocument )
      msgStop( "El documento origen y destino son del mismo tipo.")
      RETURN ( .f. )
   end if 

   if empty( ::getActionTargetDocument() )
      msgStop( "El documento destino seleccionado no es valido." )
      RETURN ( .f. )
   end if   

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD BotonSiguiente()

   do case
      case ::oFld:nOption == 1

         if ::isValidDialogRequisite() .and. ::showDocuments()
            ::oFld:goNext()
         end if

      case ::oFld:nOption == 2
         if ::showDocumentsLines()
            ::oFld:goNext()
         end if

      case ::oFld:nOption == 3
         ::oFld:goNext()

   end case

Return ( Self )

//---------------------------------------------------------------------------//

Method BotonAnterior()

   ::oFld:goPrev()

Return ( Self )

//---------------------------------------------------------------------------//

METHOD showDocuments()

   local bAction  
   local lAction  := .f.

   if empty( ::cDocument )
      Return ( .f. )
   end if 

   bAction        := ::getActionDocument()

   if isBlock( bAction )

      lAction     := eval( bAction )

      ::setOrderInColumn()   

      ::loadHeaderDocument()

      ::setBrowseHeaderDocument() 

   else 

      ::opcionInvalida()

   end if 

Return ( lAction )

//---------------------------------------------------------------------------//

METHOD showDocumentsLines()

   local id       := ::getHeaderId()

   if empty( id )
      Return ( .f. )
   end if 

   if ::loadLinesDocument( id )
      ::setBrowseLinesDocument()
   end if 

   ::selectAllLine()

Return ( .t. )

//---------------------------------------------------------------------------//

METHOD setDocumentType( cTableHeadName, cTableLineName )

   ::setHeaderTable( cTableHeadName )

   ::setLineTable( cTableLineName )

Return ( .t. )

//---------------------------------------------------------------------------//

METHOD clickOnDocumentHeader( oColumn, setSort )

   DEFAULT setSort    := .t.

   aeval( ::oBrwDocuments:aCols, {|o| if( o:cHeader == oColumn:cHeader, o:cOrder := "A", o:cOrder := "" ) } )

   ::oDocumentHeaders:sortingPleaseWait( oColumn:Cargo )
   
   ::oBrwDocuments:Refresh()

   if setSort
      ::oSortDocument:set( oColumn:cHeader )
   end if 

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD changeSortDocument()

   local nScan
   local cSort    := ::oSortDocument:varGet()

   nScan          := ascan( ::oBrwDocuments:aCols, {| oColumn | oColumn:cHeader == cSort } )
   if nScan != 0
      ::clickOnDocumentHeader( ::oBrwDocuments:aCols[ nScan ] )
   end if 

Return ( .t. )

//---------------------------------------------------------------------------//

METHOD setOrderInColumn( oColumn )

   if empty(::oBrwDocuments)
      Return ( Self )
   end if 

   aeval( ::oBrwDocuments:aCols, {|o| o:cOrder := '' } )

   if empty( oColumn )
      ::oBrwDocuments:aCols[ 1 ]:cOrder := 'A'
   else
      oColumn:cOrder := 'A' 
   end if 

Return ( Self )

//---------------------------------------------------------------------------//

METHOD selectLine()
   
   local position 

   for each position in ::oBrwLines:aSelected
      ::getLineDocument( position ):selectLine()
   next

   ::oBrwLines:Refresh()

Return ( Self )

//---------------------------------------------------------------------------//

METHOD unSelectLine()
   
   local position 

   for each position in ::oBrwLines:aSelected
      ::getLineDocument( position ):unSelectLine()
   next

   ::oBrwLines:Refresh()

Return ( Self )

//---------------------------------------------------------------------------//

METHOD toogleSelectLine()
   
   local position 

   for each position in ::oBrwLines:aSelected
      ::getLineDocument( position ):toogleSelectLine()
   next

   ::oBrwLines:Refresh()

Return ( Self )

//---------------------------------------------------------------------------//

METHOD loadHeaderDocument() 

   local aStatus
   local hDictionary    
   local lLoadHeaders     
   local oDocumentHeader

   lLoadHeaders            := .f.

   ::oDocumentHeaders:reset()

   aStatus                 := aGetStatus( ::getHeaderAlias(), .t. )

   ( ::getHeaderAlias() )->( dbGoTop() )  

   while !( ::getHeaderAlias() )->( eof() ) 

      if ::isValidHeaderDocument()

         hDictionary       := D():getHashFromAlias( ::getHeaderAlias(), ::getHeaderDictionary() )

         oDocumentHeader   := DocumentHeader():newFromDictionary( self, hDictionary )

         ::oDocumentHeaders:addLines( oDocumentHeader )

         lLoadHeaders      := .t.

      end if 

      ( ::getHeaderAlias() )->( dbSkip() ) 
   
   end while

   setStatus( ::getHeaderAlias(), aStatus ) 

RETURN ( lLoadHeaders ) 

//---------------------------------------------------------------------------//

METHOD setBrowseHeaderDocument()

   ::oBrwDocuments:setArray( ::oDocumentHeaders:getLines(), .t., , .f. )
   
   ::oBrwDocuments:bSeek := {|c| ::seekHeader( c ) }

RETURN ( .t. ) 

//---------------------------------------------------------------------------//

METHOD seekHeader( cSeek )

   local nRow
   local uVal
   local nColumnToSearch

   nColumnToSearch         := ascan( ::oBrwDocuments:aCols, { |o| !Empty( o:cOrder ) } )

   if nColumnToSearch == 0
      Return .f.
   end if 

   nRow                    := ::oBrwDocuments:nArrayAt

   for ::oBrwDocuments:nArrayAt := 1 to ::oBrwDocuments:nLen

      uVal                 := eval( ::oBrwDocuments:aCols[ nColumnToSearch ]:bEditValue )

      if hb_WildMatch( '*' + cSeek, uVal )
         ::oBrwDocuments:SelectCurrent()
         Return .t.
      endif
     
   next 

   ::oBrwDocuments:nArrayAt    := nRow

Return .t.

//---------------------------------------------------------------------------//

METHOD isValidHeaderDocument()

   if empty( ::oProveedor )
      Return .t.
   end if 

   if empty( ::oPeriodo )
      Return .t.
   end if 

Return ( ( empty( ::oProveedor:value() ) .or. ::oProveedor:value() == ::getEntityId() ) .and. ::oPeriodo:inRange( ::getHeaderDate() ) )

//---------------------------------------------------------------------------//
//
// Convierte las lineas del albaran en objetos
//

METHOD loadLinesDocument( id ) 

   local aStatus
   local lLoadLines     
   local hDictionary    
   local oDocumentLine

   lLoadLines           := .f.

   ::oDocumentLines:reset()

   aStatus              := aGetStatus( ::getLineAlias(), .t. )

   if ( ::getLineAlias() )->( dbSeek( id ) )  

      while ( id == ::aliasDocumentLine():getDocumentId() ) .and. !( ::getLineAlias() )->( eof() ) 

         hDictionary    := D():getHashFromAlias( ::getLineAlias(), ::getLineDictionary() )

         oDocumentLine  := DocumentLine():newFromDictionary( self, hDictionary )

         ::oDocumentLines:addLines( oDocumentLine )

         ( ::getLineAlias() )->( dbSkip() ) 
      
      end while

      lLoadLines     := .t.

   end if 
   
   setStatus( ::getLineAlias(), aStatus ) 

RETURN ( lLoadLines ) 

//---------------------------------------------------------------------------//

METHOD setBrowseLinesDocument()

   ::oBrwLines:setArray( ::oDocumentLines:getLines(), .t., , .f. )
   
   ::oBrwLines:bSeek := {|c| ::seekLine( c ) }

RETURN ( .t. ) 

//---------------------------------------------------------------------------//

METHOD clikcOnLineHeader( oColumn, setSortLines )

   DEFAULT setSortLines    := .t.

   aeval( ::oBrwLines:aCols, {|o| if( o:cHeader == oColumn:cHeader, o:cOrder := "A", o:cOrder := "" ) } )

   ::oDocumentLines:sortingPleaseWait( oColumn:Cargo )
   
   ::oBrwLines:Refresh()

   if setSortLines
      ::oSortLines:set( oColumn:cHeader )
   end if 

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD seekLine( cSeek )

   local nRow
   local uVal
   local nColumnToSearch

   nColumnToSearch         := ascan( ::oBrwLines:aCols, { |o| !Empty( o:cOrder ) } )

   if nColumnToSearch == 0
      Return .f.
   end if 

   nRow                    := ::oBrwLines:nArrayAt

   for ::oBrwLines:nArrayAt := 1 to ::oBrwLines:nLen

      uVal                 := eval( ::oBrwLines:aCols[ nColumnToSearch ]:bEditValue )

      if hb_WildMatch( '*' + cSeek, uVal )
         ::oBrwLines:SelectCurrent()
         Return .t.
      endif
     
   next 

   ::oBrwLines:nArrayAt    := nRow

Return .t.

//---------------------------------------------------------------------------//

METHOD changeSortLines()

   local nScan

   nScan          := ascan( ::oBrwLines:aCols, {| oColumn | oColumn:cHeader == ::cSortLines } )

   if nScan != 0
      ::clikcOnLineHeader( ::oBrwLines:aCols[ nScan ], .f. )
   end if 

Return ( .t. )

//---------------------------------------------------------------------------//

METHOD injectValuesBrowseProperties( idProduct )

   local oLine
   local aLines   := ::getLinesDocument()

   for each oLine in aLines
      if idProduct == oLine:getProductId()
         D():setArticuloTablaPropiedades( oLine:getProductId(), oLine:getCodeFirstProperty(), oLine:getCodeSecondProperty(), oLine:getValueFirstProperty(), oLine:getValueSecondProperty(), oLine:getTotalUnits(), ::aPropertiesTable )
      end if 
   next

Return ( .t. )

//---------------------------------------------------------------------------//

METHOD saveValuesBrowseProperties( idProduct )

   local oLineSave
   local aLinesSaved

   for each aLinesSaved in ::aPropertiesTable
      for each oLineSave in aLinesSaved
         ::setValuesBrowseProperties( oLineSave )
      next 
   next

Return ( .t. )

//---------------------------------------------------------------------------//

METHOD setValuesBrowseProperties( oLineSave )

   local oLineDocument
   local aLinesDocument    := ::getLinesDocument()

   for each oLineDocument in aLinesDocument

      if rtrim( oLineSave:cCodigo )            == rtrim( oLineDocument:getProductId() )            .and. ;
         rtrim( oLineSave:cCodigoPropiedad1 )  == rtrim( oLineDocument:getCodeFirstProperty() )    .and. ;
         rtrim( oLineSave:cCodigoPropiedad2 )  == rtrim( oLineDocument:getCodeSecondProperty() )   .and. ;
         rtrim( oLineSave:cValorPropiedad1 )   == rtrim( oLineDocument:getValueFirstProperty() )   .and. ;
         rtrim( oLineSave:cValorPropiedad2 )   == rtrim( oLineDocument:getValueSecondProperty() )

         oLineDocument:setUnidades( oLineSave:Value )
         
         oLineDocument:selectLine() 

      end if 

   next

Return ( .t. )

//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//---------------------------------------------------------------------------//
//--------------------------------------------------------------------------- //

