#include "FiveWin.Ch"
#include "Factu.ch" 

//---------------------------------------------------------------------------//

CLASS TGenMailing 

   DATA oDlg
   DATA oFld
   DATA oMenu

   DATA nView 

   DATA oSendMail

   DATA nView

   DATA oTree
   DATA oMtr
   DATA nMtr
   DATA oFlt

   DATA oBtnSiguiente
   DATA oBtnAnterior
   DATA oBtnCancel
   DATA oBtnFilter
   DATA oBtnCargarHTML
   DATA oBtnSalvarHTML
   DATA oBtnSalvarAsHTML
   DATA oBtnDefectoHTML

   DATA oGetAsunto
   DATA oGetAdjunto
   DATA cGetAdjunto

   DATA cMensaje                       INIT ""
   METHOD setMensaje( cMensaje )       INLINE ( ::cMensaje := cMensaje, if( !empty( ::oActiveX ), ::oActiveX:oRTF:SetText( cMensaje ), ) )

   DATA oGetDe                         
   DATA oGetCopia                      

   DATA oGetPara
   DATA cSubject
   DATA cGetDe                         INIT Padr( uFieldEmpresa( "cNombre" ), 250 )
   DATA cGetPara                       INIT Space( 250 )
   DATA cGetCopia                      INIT Padr( uFieldEmpresa( "cCcpMai" ), 250 )

   DATA cWorkArea                      INIT ""
   DATA hWorkAreaStatus

   DATA lHidePara                      INIT .f.
   DATA lHideCopia                     INIT .f.

   DATA aAdjuntos                      INIT {}

   DATA oActiveX
   DATA cActiveX

   DATA aItems

   DATA aFields
   DATA oField
   DATA aField
   DATA cField

   DATA oTemplateHtml

   DATA cNombre
   DATA cDireccion

   DATA MailServer
   DATA MailServerPort
   DATA MailServerUserName
   DATA MailServerPassword
   DATA MailServerConCopia

   DATA dbfAlias

   DATA cHtml
   DATA lHtml                          INIT .t.

   DATA oMail

   DATA lCancel

   DATA oPaquetesTotales
   DATA nPaquetesTotales               INIT 1
   DATA nPaqueteActual                 INIT 1

   DATA nTime

   DATA cTiempo                        INIT "0 seg."
   DATA aTiempo                        INIT { "0 seg.", "5 seg.", "10 seg.", "15 seg.", "20 seg.", "25 seg.", "30 seg.", "35 seg.", "40 seg.", "45 seg.", "50 seg.", "55 seg.", "60 seg." }

   DATA oBmpRedactar
   DATA oBmpProceso
   DATA oBmpDatabase

   DATA aMailingList                   INIT {}

   METHOD New()
   METHOD Create()

   METHOD setWorkArea( cWorkArea )     INLINE ( ::cWorkArea := cWorkArea )
   METHOD getWorkArea()                INLINE ( ::cWorkArea )
   METHOD quitWorkArea()               VIRTUAL

   METHOD setAsunto( cText )           INLINE ( ::cSubject := padr( cText, 250 ) )
   METHOD getAsunto()                  INLINE ( alltrim( ::cSubject ) )

   METHOD setDe( cText )               INLINE ( ::cGetDe := padr( cText, 250 ) )
   
   METHOD setPara( cText )             INLINE ( ::cGetPara := padr( cText, 250 ) )
   METHOD getPara()                    INLINE ( alltrim( ::cGetPara ) )
      METHOD HidePara()                INLINE ( ::lHidePara := .t., if ( !empty( ::oGetPara ), ::oGetPara:Hide(), ) )
      METHOD ShowPara()                INLINE ( ::lHidePara := .f., if ( !empty( ::oGetPara ), ::oGetPara:Show(), ) )

   METHOD setCopia( cText )            INLINE ( ::cGetCopia := padr( cText, 250 ) )
   METHOD getCopia()                   INLINE ( alltrim( ::cGetCopia ) )
      METHOD HideCopia()               INLINE ( ::lHideCopia := .t., if ( !empty( ::oGetCopia ), ::oGetCopia:Hide(), ) )
      METHOD ShowCopia()               INLINE ( ::lHideCopia := .f., if ( !empty( ::oGetCopia ), ::oGetCopia:Show(), ) )

   METHOD setAlias( cAlias )           INLINE ( nil )

   METHOD setAdjunto( cText )          INLINE ( ::cGetAdjunto := padr( cText, 250 ) )
   METHOD getAdjunto()                 INLINE ( alltrim( ::cGetAdjunto ) )
   METHOD addAdjunto( cText )          INLINE ( aAdd( ::aAdjuntos, cText ) )
   METHOD addFileAdjunto()

   METHOD setItems( aItems )           INLINE ( iif(  !empty( aItems ),;
                                                   (  ::aItems    := aItems,;
                                                      ::aFields   := getSubArray( aItems, 5 ) ), ) )
                                                      
   METHOD getItems()                   INLINE ( ::aItems )

   METHOD setTypeDocument( cTypeDocument ) ;
                                       INLINE ( ::oTemplateHtml:setTypeDocument( cTypeDocument ) )

   // Recursos-----------------------------------------------------------------

   METHOD Resource()

      METHOD botonAnterior()
      METHOD botonSiguiente()

      METHOD buildPageRedactar( oDlg )
      METHOD buildPageDatabase( oDlg ) VIRTUAL
      METHOD buildPageProceso( oDlg )
      METHOD buildButtonsGeneral()

   METHOD startResource()
   METHOD freeResources()

   METHOD setMeterTotal( nTotal )      INLINE ( ::oMtr:nTotal := nTotal )
   METHOD setMeter( nSet )             INLINE ( ::oMtr:Set( nSet ) )

   METHOD IniciarProceso()

   METHOD isMailServer()               INLINE ( !empty( ::MailServer ) .and. !empty( ::MailServerUserName ) .and. !empty( ::MailServerPassword ) )

   METHOD InsertField()                INLINE ( ::oActiveX:oClp:SetText( "{" + ( alltrim( ::cField ) ) + "}" ), ::oActiveX:oRTF:Paste() )

   METHOD waitMail()
   METHOD waitSeconds( nTime )

   METHOD replaceExpresion( cDocumentHTML, cExpresion )
   METHOD getMessage()
   METHOD getMessageHTML()             INLINE ( "<HTML>" + strtran( alltrim( ::getMessage() ), CRLF, "<p>" ) + "</HTML>" )   
   METHOD getExpression()

   METHOD addDatabaseList()
      METHOD hashDatabaseList()

END CLASS

//---------------------------------------------------------------------------//

METHOD New( nView ) CLASS TGenMailing

   ::Create()

   ::nView           := nView

   ::oSendMail       := TSendMail():New( Self )

   ::oTemplateHtml   := TTemplatesHtml():New( Self )

Return ( Self )

//---------------------------------------------------------------------------//

METHOD Create() CLASS TGenMailing

   ::cSubject        := Space( 254 )
   ::cGetAdjunto     := Space( 254 )

   ::SetDe( uFieldEmpresa( "cNombre" ) )

Return ( Self )

//---------------------------------------------------------------------------//

METHOD Resource() CLASS TGenMailing

   ::lCancel         := .f.

   ::HidePara()

   DEFINE DIALOG     ::oDlg ;
      RESOURCE       "Select_Mail_Container";
       OF            oWnd()

      REDEFINE PAGES ::oFld ;
         ID          10;
         OF          ::oDlg ;
         DIALOGS     "Select_Mail_Redactar",;
                     "Select_Mail_Registros",;
                     "Select_Mail_Proceso"

         ::buildPageRedactar( ::oFld:aDialogs[ 1 ] )

         ::buildPageDatabase( ::oFld:aDialogs[ 2 ] )

         ::buildPageProceso( ::oFld:aDialogs[ 3 ] )

         ::buildButtonsGeneral()

      ::oDlg:bStart  := {|| ::startResource() }

   ACTIVATE DIALOG ::oDlg CENTER 

   ::freeResources()

Return ( Self )

//--------------------------------------------------------------------------//

METHOD startResource() CLASS TGenMailing

   if ::lHidePara
      ::oGetPara:Hide()
   end if 

   if ::lHideCopia
      ::oGetCopia:Hide()
   end if 

   if Empty( ::oActiveX )
      MsgStop( "No se ha podido instanciar el control." )
      Return ( Self )
   else 
      ::oActiveX:SetHTML()
   end if

   if !empty(::oBtnAnterior)
      ::oBtnAnterior:Hide()
   end if 

   // ::buildMenuDialog()

Return ( Self )

//--------------------------------------------------------------------------//

METHOD buildPageRedactar( oDlg )

   REDEFINE BITMAP ::oBmpRedactar ;
      ID       500 ;
      RESOURCE "Businessman2_Alpha_48" ;
      TRANSPARENT ;
      OF       oDlg

   REDEFINE GET ::oGetDe VAR ::cGetDe ;
      ID       90 ;
      OF       oDlg

   REDEFINE GET ::oGetPara VAR ::cGetPara ;
      IDSAY    121 ;
      ID       120 ;
      OF       oDlg

   REDEFINE GET ::oGetAsunto VAR ::cSubject ;
      ID       100 ;
      OF       oDlg

   REDEFINE GET ::oGetAdjunto VAR ::cGetAdjunto ;
      ID       110 ;
      OF       oDlg

   REDEFINE GET ::oGetCopia VAR ::cGetCopia ;
      IDSAY    151 ;
      ID       150 ;
      OF       oDlg

   ::oGetAdjunto:cBmp   := "Folder"
   ::oGetAdjunto:bHelp  := {|| ::oGetAdjunto:cText( cGetFile( 'Fichero ( *.* ) | *.*', 'Seleccione el fichero a adjuntar' ) ) }

   TBtnBmp():ReDefine( 140, "Document_16",,,,,{|| ShellExecute( oDlg:hWnd, "open", Rtrim( ::cGetAdjunto ) ) }, oDlg, .f., , .f.,  )

   REDEFINE COMBOBOX ::oField ;
      VAR      ::cField ;
      ITEMS    ::aFields ;
      ID       160 ;
      OF       oDlg

   TBtnBmp():ReDefine( 170, "Down16", , , , , {|| ::InsertField() }, oDlg, .f., , .f., "Insertar campo" )

   // Componentes-----------------------------------------------------------

   ::oActiveX  := GetRichEdit():ReDefine( 600, oDlg )

   ::oActiveX:oRTF:SetText( ::cMensaje )

Return ( Self )   

//---------------------------------------------------------------------------//

METHOD buildPageProceso( oDlg )

   REDEFINE BITMAP ::oBmpProceso ;
      ID       500 ;
      RESOURCE "Gears_48_alpha" ;
      TRANSPARENT ;
      OF       oDlg

   REDEFINE GET ::oPaquetesTotales ;
      VAR      ::nPaquetesTotales ;
      IDSAY    181 ;
      ID       180 ;
      SPINNER ;
      PICTURE  "@E 999" ;
      OF       oDlg

   REDEFINE COMBOBOX ::cTiempo ;
      ITEMS    ::aTiempo ;
      ID       170 ;
      OF       oDlg

   ::oTree     := TTreeView():Redefine( 100, oDlg )

   REDEFINE APOLOMETER ::oMtr ;
      VAR      ::nMtr ;
      ID       120 ;
      OF       oDlg

Return ( Self )   

//---------------------------------------------------------------------------//

METHOD buildButtonsGeneral()

   REDEFINE BUTTON ::oBtnCargarHTML ;          // Boton anterior
      ID       40 ;
      OF       ::oDlg ;
      ACTION   ( ::oTemplateHtml:selectHtmlFile() )

   REDEFINE BUTTON ::oBtnSalvarHTML ;          // Boton anterior
      ID       50 ;
      OF       ::oDlg ;
      ACTION   ( ::oTemplateHtml:saveHtml() )

   REDEFINE BUTTON ::oBtnSalvarAsHTML ;          // Boton anterior
      ID       60 ;
      OF       ::oDlg ;
      ACTION   ( ::oTemplateHtml:saveAsHtml() )

   REDEFINE BUTTON ::oBtnAnterior ;          // Boton anterior
      ID       20 ;
      OF       ::oDlg ;
      ACTION   ( ::BotonAnterior() )

   REDEFINE BUTTON ::oBtnSiguiente ;         // Boton de Siguiente
      ID       30 ;
      OF       ::oDlg ;
      ACTION   ( ::BotonSiguiente() )

   REDEFINE BUTTON ::oBtnCancel ;            // Boton de Siguiente
      ID       IDCANCEL ;
      OF       ::oDlg ;
      ACTION   ( ::oDlg:end() )

Return ( Self )   

//---------------------------------------------------------------------------//

METHOD freeResources() CLASS TGenMailing

   ::quitWorkArea()

   if !Empty( ::oBmpRedactar )
      ::oBmpRedactar:end()
   end if

   if !Empty( ::oBmpProceso )
      ::oBmpProceso:end()
   end if

   if !empty( ::oMenu )
      ::oMenu:end()
   end if

   if !empty( ::oActiveX )
      ::oActiveX:end()
   end if 

Return ( Self )   

//---------------------------------------------------------------------------//

METHOD addFileAdjunto() CLASS TGenMailing

   local cFile       := cGetFile( 'Fichero ( *.* ) | *.*', 'Seleccione el fichero a adjuntar' )

   if !Empty( cFile )

      if !Empty( ::cGetAdjunto )
         cFile       := alltrim( ::cGetAdjunto ) + "; " + cFile
      end if

      ::oGetAdjunto:cText( cFile )

   end if

Return ( Self )

//--------------------------------------------------------------------------//

METHOD BotonAnterior() CLASS TGenMailing

   if ::oFld:nOption == 2
      ::oBtnAnterior:Hide()
      ::oBtnSiguiente:Show() 
      ::oBtnCargarHTML:Show()
      ::oBtnSalvarHTML:Show()
      ::oBtnSalvarAsHTML:Show()
   end if

   if ::oFld:nOption <= len( ::oFld:aDialogs ) 
      ::oBtnSiguiente:Show() 
      SetWindowText( ::oBtnSiguiente:hWnd, "Siguien&te >" )
   end if 

   ::oFld:GoPrev()

Return ( Self )

//--------------------------------------------------------------------------//

METHOD BotonSiguiente() CLASS TGenMailing

   ::oFld:GoNext()

   if ::oFld:nOption == 2
      ::oBtnCargarHTML:Hide()
      ::oBtnSalvarHTML:Hide()
      ::oBtnSalvarAsHTML:Hide()
      ::oBtnAnterior:Show()
   end if 

   if ::oFld:nOption == len( ::oFld:aDialogs ) - 1
      ::oBtnAnterior:Show()
      SetWindowText( ::oBtnSiguiente:hWnd, "&Terminar" )
      ::oBtnSiguiente:Show() 
   end if 

   if ::oFld:nOption == len( ::oFld:aDialogs ) 
      ::oBtnAnterior:Hide()
      ::oBtnSiguiente:Hide() 
      ::IniciarProceso()
      ::oBtnAnterior:Show()
   end if 

Return ( Self )

//--------------------------------------------------------------------------//

METHOD IniciarProceso() CLASS TGenMailing

   local aDatabaseList    

   aDatabaseList          := ::getDatabaseList()
   if !empty( aDatabaseList )
      ::oSendMail:sendList( aDatabaseList )
   else
      msgStop( "No hay direcciones de correos para mandar.")
   end if 

Return ( self )

//--------------------------------------------------------------------------//

METHOD WaitSeconds( nTime ) CLASS TGenMailing

	local n

	for n := 1 to nTime

		if ::lCancel
			exit
		end if

	 	waitSeconds( 1 )

	 	SysRefresh()

	next

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD waitMail() CLASS TGenMailing

   ::oTree:Select( ::oTree:Add( "Envio " + Alltrim( Str( ( ::getWorkArea() )->( OrdKeyNo() ) ) ) + " de " + Alltrim( Str( ::oMtr:nTotal ) ) ) )

   if ::nPaqueteActual >= ::nPaquetesTotales

      ::oTree:Select( ::oTree:Add( "Esperando " + ::cTiempo + "para proximo envio" ) )

      ::WaitSeconds( ::nTime )

      ::nPaqueteActual := 1

   else

      ::nPaqueteActual++

   end if

Return ( Self )   

//---------------------------------------------------------------------------//

METHOD getMessage() CLASS TGenMailing

   local cExpresion
   local cDocument     := ::oActiveX:getText()

   while .t. 

      cExpresion       := ::getExpression( cDocument ) 
      if empty(cExpresion)
         exit
      end if

      ::replaceExpresion( @cDocument, cExpresion )

   end while

Return ( cDocument )

//--------------------------------------------------------------------------//

METHOD getExpression( cDocument ) CLASS TGenMailing

   local nAtEnd         := At( "}", cDocument )
   local nAtInit        := At( "{", cDocument )
   local cExpresion     := ""

   if ( nAtInit != 0 .and. nAtEnd != 0 )
      cExpresion     := SubStr( cDocument, nAtInit, ( nAtEnd - nAtInit ) + 1 )
   end if 

Return ( cExpresion )

//--------------------------------------------------------------------------//

METHOD replaceExpresion( cDocument, cExpresion ) CLASS TGenMailing

   local nScan
   local cExpresionToSearch

   cExpresionToSearch      := Alltrim( SubStr( cExpresion, 2, len( cExpresion ) - 2 ) )

   if ( "()" $ cExpresionToSearch )

      cDocument            := StrTran( cDocument, cExpresion, cValToText( Eval( bChar2Block( cExpresionToSearch ) ) ) )

   else

      nScan                := aScan( ::aItems, {|a| alltrim( a[ 5 ] ) == cExpresionToSearch .or. alltrim( a[ 5 ] ) == HtmlEntities( cExpresionToSearch ) } )
      if nScan != 0
         cDocument         := StrTran( cDocument, cExpresion, alltrim( cValToChar( ( ::getWorkArea() )->( eval( Compile( ::aItems[ nScan, 1 ] ) ) ) ) ) )
      else
         cDocument         := StrTran( cDocument, cExpresion, "" )
      end if

   end if

Return ( Self )

//--------------------------------------------------------------------------//

METHOD addDatabaseList() CLASS TGenMailing

   if ( ::getWorkArea() )->lMail 
      aAdd( ::aMailingList, ::hashDatabaseList() )
   end if 

Return ( Self )   

//---------------------------------------------------------------------------//

METHOD hashDatabaseList() CLASS TGenMailing

   local hashDatabaseList := {=>}

   hSet( hashDatabaseList, "mail", ::getPara() )
   hSet( hashDatabaseList, "mailcc", ::getCopia() )
   hSet( hashDatabaseList, "subject", ::getAsunto() )
   hSet( hashDatabaseList, "attachments", ::getAdjunto() )
   hSet( hashDatabaseList, "message", ::getMessageHTML() )

Return ( hashDatabaseList )

//---------------------------------------------------------------------------//
