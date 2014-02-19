#include "FiveWin.Ch"
#include "Factu.ch" 
#include "Ini.ch"

//---------------------------------------------------------------------------//

CLASS PrintSeries

   DATA bInit 
   DATA bWhile                         INIT {|| .t. }
   DATA bFor                           INIT {|| .t. }
   DATA bAction   
   DATA bSkip                          INIT {|| .t. }
   DATA bExit 

   DATA aComponents                    INIT {}

   DATA nView

   DATA oDlg

   DATA oSerieInicio       
   DATA oSerieFin           

   DATA oDocumentoInicio
   DATA oDocumentoFin   

   DATA oSufijoInicio                  
   DATA oSufijoFin                     

   DATA oClienteInicio
   DATA oClienteFin
   
   DATA oGrupoClienteInicio
   DATA oGrupoClienteFin

   DATA oFechaInicio
   DATA oFechaFin

   DATA oImpresora

   DATA oCopias

   DATA oFormatoDocumento

   METHOD New( nView )

   METHOD AddComponent( oComponent )   INLINE ( aAdd( ::aComponents, oComponent ) )

   METHOD Resource()
      METHOD StartResource()

   METHOD StartPrint()

   METHOD Serie( cSerie )              INLINE ( ::oSerieInicio:cText( cSerie ), ::oSerieFin:cText( cSerie ) )
   METHOD Documento( cDocumento )      INLINE ( ::oDocumentoInicio:cText( cDocumento ), ::oDocumentoFin:cText( cDocumento ) )
   METHOD Sufijo( cSufijo )            INLINE ( ::oSufijoInicio:cText( cSufijo ), ::oSufijoFin:cText( cSufijo ) )
   METHOD FormatoDocumento( cFormato ) INLINE ( ::oFormatoDocumento:cText( cFormato ) )

   METHOD DocumentoInicio()            INLINE ( ::oSerieInicio:Value() + str( ::oDocumentoInicio:Value(), 9 ) + ::oSufijoInicio:Value() )
   METHOD DocumentoFin()               INLINE ( ::oSerieFin:Value() + str( ::oDocumentoFin:Value(), 9 ) + ::oSufijoFin:Value() )

END CLASS

//---------------------------------------------------------------------------//

METHOD New( nView ) CLASS PrintSeries

   ::nView                 := nView

   ::oSerieInicio          := GetSerie():New( 100, Self )
   ::oSerieFin             := GetSerie():New( 110, Self )

   ::oDocumentoInicio      := GetNumero():New( 120, Self )
   ::oDocumentoFin         := GetNumero():New( 130, Self )

   ::oSufijoInicio         := GetSufijo():New( 140, Self )
   ::oSufijoFin            := GetSufijo():New( 150, Self )

   ::oFechaInicio          := GetFecha():New( 210, Self )
   ::oFechaInicio:FirstDayYear()

   ::oFechaFin             := GetFecha():New( 220, Self )

   // Clientes-----------------------------------------------------------------

   ::oClienteInicio        := GetCliente():New( 300, 310, Self )
   ::oClienteFin           := GetCliente():New( 320, 330, Self )

   // Grupo de cliente---------------------------------------------------------

   ::oGrupoClienteInicio   := GetGrupoCliente():New( 340, 350, Self )
   ::oGrupoClienteFin      := GetGrupoCliente():New( 360, 370, Self )

   ::oFormatoDocumento     := GetDocumento():New( 90, 91, 92, Self )

   ::oImpresora            := GetPrinter():New( 160, 161, Self )

   ::oCopias               := GetCopias():New( 170, 180, Self )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD Resource() CLASS PrintSeries

   DEFINE DIALOG ::oDlg RESOURCE "ImprimirSeries" TITLE "Imprimir series de documentos"

   aEval( ::aComponents, {| o | o:Resource() } )

   REDEFINE BUTTON ;
      ID          IDOK ;
      OF          ::oDlg ;
      ACTION      ( ::StartPrint() )

   REDEFINE BUTTON ;
      ID          IDCANCEL ;
      OF          ::oDlg ;
      ACTION      ( ::oDlg:end() )

   ::oDlg:AddFastKey( VK_F5, {|| ::StartPrint() } )

   ::oDlg:bStart  := {|| ::StartResource() }

   ACTIVATE DIALOG ::oDlg CENTER

RETURN NIL

//--------------------------------------------------------------------------//

METHOD StartResource() CLASS PrintSeries

   ::oClienteInicio:Valid()   
   ::oClienteFin:Valid()

RETURN NIL

//--------------------------------------------------------------------------//

METHOD StartPrint() CLASS PrintSeries

   local nRecno
   local nOrdAnt

   ::oDlg:disable()

   msgAlert( TDataView():AlbaranesClientesId( ::nView ), "Antes de bInit" ) 

   if !empty( ::bInit )
      eval( ::bInit )
   end if 

   msgAlert( TDataView():AlbaranesClientesId( ::nView ), "Despues de bInit" )

   msgAlert( ::DocumentoFin(), "depues del bInit" )
   msgAlert( TDataView():AlbaranesClientesId( ::nView ) <= ::DocumentoFin(), "ComparacionTDataView()AlbaranesClientesId()" ) 

   msgAlert( eval( ::bWhile ), "eval bWhile" )

   while eval( ::bWhile )

      if eval( ::bFor )

         if !empty( ::bAction )
            eval( ::bAction )
         end if

      end if 

      eval( ::bSkip )
          
   end while 

   if !empty( ::bExit )
      eval( ::bExit )
   end if 


/*
      nRecno      := ( TDataView():Get( "AlbCliT", nView ) )->( recno() )
      nOrdAnt     := ( TDataView():Get( "AlbCliT", nView ) )->( OrdSetFocus( "nNumAlb" ) )

      ( TDataView():Get( "AlbCliT", nView ) )->( dbSeek( cDocIni, .t. ) )

         while ( TDataView():Get( "AlbCliT", nView ) )->cSerAlb + Str( ( TDataView():Get( "AlbCliT", nView ) )->nNumAlb ) + ( TDataView():Get( "AlbCliT", nView ) )->cSufAlb >= cDocIni .AND. ;
               ( TDataView():Get( "AlbCliT", nView ) )->cSerAlb + Str( ( TDataView():Get( "AlbCliT", nView ) )->nNumAlb ) + ( TDataView():Get( "AlbCliT", nView ) )->cSufAlb <= cDocFin .AND. ;
               ( TDataView():Get( "AlbCliT", nView ) )->dFecAlb <= dFecDesde .AND. ;
               ( TDataView():Get( "AlbCliT", nView ) )->dFecAlb >= dFecHasta 

               lChgImpDoc( TDataView():Get( "AlbCliT", nView ) )

            if lCopiasPre
               nNumCop     := if( nCopiasDocumento( ( TDataView():Get( "AlbCliT", nView ) )->cSerAlb, "nAlbCli", TDataView():Get( "NCount", nView ) ) == 0, Max( Retfld( ( TDataView():Get( "AlbCliT", nView ) )->cCodCli, TDataView():Get( "Client", nView ), "CopiasF" ), 1 ), nCopiasDocumento( ( TDataView():Get( "AlbCliT", nView ) )->cSerAlb, "nAlbCli", TDataView():Get( "NCount", nView ) ) )
            end if 

            GenAlbCli( IS_PRINTER, "Imprimiendo documento : " + ( TDataView():Get( "AlbCliT", nView ) )->cSerAlb + Str( (TDataView():Get( "AlbCliT", nView ) )->nNumAlb ) + ( TDataView():Get( "AlbCliT", nView ))->cSufAlb, cFmtDoc, cPrinter, nNumCop )

            ( TDataView():Get( "AlbCliT", nView ) )->( DbSkip( 1 ) )

         end do

      ( TDataView():Get( "AlbCliT", nView ) )->( dbGoTo( nRecNo ) )
      ( TDataView():Get( "AlbCliT", nView ) )->( ordSetFocus( nOrdAnt ) )
*/
   ::oDlg:enable()

RETURN NIL

//--------------------------------------------------------------------------//

CLASS Component

   DATA oContainer

   METHOD New( oContainer )

END CLASS

METHOD New( oContainer )
   
   ::oContainer   := oContainer

   ::oContainer:AddComponent( Self )

Return ( Self )
   
//---------------------------------------------------------------------------//

CLASS ComponentGet FROM Component

   DATA idGet
   DATA idSay

   DATA bValid                   INIT {|| .t. }
   DATA bHelp                    INIT {|| .t. }

   DATA oGetControl
   DATA uGetValue                INIT Space( 12 )
   
   METHOD New( idGet, oContainer )

   METHOD Resource()

   METHOD cText( uGetValue )     INLINE ( if( !empty( ::oGetControl ), ::oGetControl:cText( uGetValue ), ::uGetValue := uGetValue ) )
   METHOD Value()                INLINE ( ::uGetValue )

   METHOD Valid()                INLINE ( if( !empty( ::oGetControl ), ::oGetControl:lValid(), .t. ) )

END CLASS 

METHOD New( idGet, oContainer ) CLASS ComponentGet

   ::idGet  := idGet

   Super:New( oContainer )

RETURN ( Self )

METHOD Resource() CLASS ComponentGet

   REDEFINE GET   ::oGetControl ;
      VAR         ::uGetValue ;
      ID          ::idGet ;
      BITMAP      "LUPA" ;
      OF          ::oContainer:oDlg

   ::oGetControl:bValid    := ::bValid
   ::oGetControl:bHelp     := ::bHelp

Return ( Self )

//--------------------------------------------------------------------------//

CLASS ComponentGetSay FROM ComponentGet

   DATA idSay

   DATA oSayControl        
   DATA cSayValue                INIT ""

   METHOD New( idGet, idSay, oContainer )

   METHOD Resource()

END CLASS 

METHOD New( idGet, idSay, oContainer ) CLASS ComponentGetSay

   ::idSay  := idSay

   Super:New( idGet, oContainer )

RETURN ( Self )

METHOD Resource() CLASS ComponentGetSay

   Super:Resource()

   REDEFINE GET   ::oSayControl ;
      VAR         ::cSayValue ;
      ID          ::idSay ;
      WHEN        ( .f. ) ;
      OF          ::oContainer:oDlg

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetCliente FROM ComponentGetSay

   METHOD New( idGet, idSay, oContainer ) 
   METHOD Top()      INLINE ( ::cText( TDataView():Top( "Client", ::oContainer:nView ) ) )
   METHOD Bottom()   INLINE ( ::cText( TDataView():Bottom( "Client", ::oContainer:nView ) ) )

END CLASS 

METHOD New( idGet, idSay, oContainer ) CLASS GetCliente

   Super:New( idGet, idSay, oContainer )

   ::bValid       := {|| cClient( ::oGetControl, TDataView():Clientes( ::oContainer:nView ), ::oSayControl ) }
   ::bHelp        := {|| BrwClient( ::oGetControl, ::oSayControl ) }

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetGrupoCliente FROM ComponentGetSay

   METHOD New( idGet, idSay, oContainer )

   METHOD Top()      INLINE ( ::cText( TDataView():GetObject( "GruposClientes", ::oContainer:nView ):Top() ) )
   METHOD Bottom()   INLINE ( ::cText( TDataView():GetObject( "GruposClientes", ::oContainer:nView ):Bottom() ) )

END CLASS 

METHOD New( idGet, idSay, oContainer ) CLASS GetGrupoCliente

   Super:New( idGet, idSay, oContainer )

   ::uGetValue    := Space( 4 )

   ::bValid       := {|| TDataView():GruposClientes( ::oContainer:nView ):Existe( ::oGetControl, ::oSayControl, "cNomGrp", .t., .t., "0" ) }
   ::bHelp        := {|| TDataView():GruposClientes( ::oContainer:nView ):Buscar( ::oGetControl ) }

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetDocumento FROM ComponentGetSay

   DATA idBtn
   DATA cTypeDocumento              INIT Space( 2 )

   METHOD New( idGet, idSay, oContainer )

   METHOD Resource()

   METHOD TypeDocumento( cType )    INLINE ( if( !empty( cType ), ::cTypeDocumento := cType, ::cTypeDocumento ) )

END CLASS 

METHOD New( idGet, idSay, idBtn, oContainer ) CLASS GetDocumento

   Super:New( idGet, idSay, oContainer )

   ::idBtn        := idBtn

   ::uGetValue    := Space( 3 )

   ::bValid       := {|| cDocumento( ::oGetControl, ::oSayControl, TDataView():Documentos( ::oContainer:nView ) ) }
   ::bHelp        := {|| brwDocumento( ::oGetControl, ::oSayControl, ::TypeDocumento() ) }

Return ( Self )

METHOD Resource() CLASS GetDocumento

   Super:Resource()

   TBtnBmp():ReDefine( ::idBtn, "Printer_pencil_16",,,,,{|| EdtDocumento( ::uGetValue ) }, ::oContainer:oDlg, .f., , .f.,  )

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetPrinter FROM ComponentGet

   DATA idBtn

   DATA cTypeDocumento              INIT Space( 2 )

   METHOD New( idGet, oContainer )

   METHOD Resource()

   METHOD TypeDocumento( cType )    INLINE ( if( !empty( cType ), ::cTypeDocumento := cType, ::cTypeDocumento ) )

END CLASS 

METHOD New( idGet, idBtn, oContainer ) CLASS GetPrinter

   Super:New( idGet, oContainer )

   ::idBtn        := idBtn

   ::uGetValue    := PrnGetName()

Return ( Self )

METHOD Resource() CLASS GetPrinter

   REDEFINE GET   ::oGetControl ;
      VAR         ::uGetValue ;
      ID          ::idGet ;
      WHEN        ( .f. ) ;
      OF          ::oContainer:oDlg

   TBtnBmp():ReDefine( ::idBtn, "Printer_preferences_16",,,,, {|| PrinterPreferences( ::oGetControl ) }, ::oContainer:oDlg, .f., , .f. )

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetSerie FROM ComponentGet

   METHOD New( idGet, oContainer )

   METHOD Resource()

END CLASS 

METHOD New( idGet, oContainer ) CLASS GetSerie

   Super:New( idGet, oContainer )

   ::uGetValue    := "A"

   ::bValid       := {|| ::uGetValue >= "A" .and. ::uGetValue <= "Z" }

Return ( Self )

METHOD Resource() CLASS GetSerie

   REDEFINE GET   ::oGetControl ;
      VAR         ::uGetValue ;
      ID          ::idGet ;
      PICTURE     "@!" ;
      UPDATE ;
      SPINNER ;
      ON UP       ( UpSerie( ::oGetControl ) );
      ON DOWN     ( DwSerie( ::oGetControl ) );
      VALID       ( ::bValid );
      OF          ::oContainer:oDlg

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetNumero FROM ComponentGet

   METHOD New( idGet, oContainer )

   METHOD Resource()

END CLASS 

METHOD New( idGet, oContainer ) CLASS GetNumero

   Super:New( idGet, oContainer )

   ::uGetValue    := 1
   
   ::bValid       := {|| ::uGetValue >= 1 .and. ::uGetValue <= 999999999 }

Return ( Self )

METHOD Resource() CLASS GetNumero

   REDEFINE GET   ::oGetControl ;
      VAR         ::uGetValue ;
      ID          ::idGet ;
      PICTURE     "999999999" ;
      SPINNER ;
      VALID       ::bValid ;
      OF          ::oContainer:oDlg

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetSufijo FROM ComponentGet

   METHOD New( idGet, oContainer )

   METHOD Resource()

END CLASS 

METHOD New( idGet, oContainer ) CLASS GetSufijo

   Super:New( idGet, oContainer )

   ::uGetValue    := RetSufEmp()

Return ( Self )

METHOD Resource() CLASS GetSufijo

   REDEFINE GET   ::oGetControl ;
      VAR         ::uGetValue ;
      ID          ::idGet ;
      PICTURE     "@!" ;
      OF          ::oContainer:oDlg

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetFecha FROM ComponentGet

   METHOD New( idGet, oContainer )

   METHOD Resource()
   METHOD FirstDayYear()   INLINE ( ::cText( CtoD( "01/01/" + Str( Year( Date() ) ) ) ) )

END CLASS 

METHOD New( idGet, oContainer ) CLASS GetFecha

   Super:New( idGet, oContainer )

   ::uGetValue    := Date()
   
Return ( Self )

METHOD Resource() CLASS GetFecha

   REDEFINE GET   ::oGetControl ;
      VAR         ::uGetValue ;
      ID          ::idGet ;
      SPINNER ;
      OF          ::oContainer:oDlg

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//

CLASS GetCopias FROM ComponentGet

   DATA idCheck 

   DATA lCopiasPredeterminadas   INIT .t.

   METHOD New( idGet, oContainer )

   METHOD Resource()

END CLASS 

METHOD New( idCheck, idGet, oContainer ) CLASS GetCopias

   Super:New( idGet, oContainer )

   ::idCheck      := idCheck

   ::uGetValue    := 1
   
   ::bValid       := {|| ::uGetValue >= 1 .and. ::uGetValue <= 99999 }

Return ( Self )

METHOD Resource() CLASS GetCopias

   REDEFINE CHECKBOX ::lCopiasPredeterminadas ;
      ID          ::idCheck ;
      OF          ::oContainer:oDlg

   REDEFINE GET   ::oGetControl ;
      VAR         ::uGetValue ;
      ID          ::idGet ;
      PICTURE     "99999" ;
      SPINNER ;
      WHEN        !::lCopiasPredeterminadas ;
      VALID       ::bValid ;
      OF          ::oContainer:oDlg

Return ( Self )

//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
