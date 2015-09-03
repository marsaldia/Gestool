#include "FiveWin.Ch"
#include "Factu.ch" 

CLASS Payment FROM Editable

   DATA oGridPayment

   METHOD New()

   METHOD Init( oSender )

   METHOD OpenFiles()
   METHOD CloseFiles()                 INLINE ( D():DeleteView( ::nView ) )

   METHOD setEnviroment()              INLINE ( ::setDataTable( "FPago" ) ) 

   METHOD runGridPayment()

ENDCLASS

//---------------------------------------------------------------------------//

METHOD New() CLASS Payment

   if ::OpenFiles()
      ::setEnviroment()
   end if   

Return ( self )

//---------------------------------------------------------------------------//

METHOD Init( oSender ) CLASS Payment

   ::nView                               := oSender:nView

   ::oGridPayment                        := PaymentViewSearchNavigator():New( self )
   ::oGridPayment:setSelectorMode()
   ::oGridPayment:setTextoTipoDocumento( "Seleccione Forma de pago" )
   ::oGridPayment:setDblClickBrowseGeneral( {|| ::oGridPayment:endView() } )

   ::setEnviroment()

Return ( self )

//---------------------------------------------------------------------------//

METHOD OpenFiles() CLASS Payment

   local oError
   local oBlock
   local lOpenFiles     := .t.

   oBlock               := ErrorBlock( {| oError | ApoloBreak( oError ) } )
   BEGIN SEQUENCE

      ::nView           := D():CreateView()

      D():FormasPago( ::nView )

   RECOVER USING oError

      lOpenFiles        := .f.

      ApoloMsgStop( "Imposible abrir todas las bases de datos" + CRLF + ErrorMessage( oError ) )

   END SEQUENCE

   ErrorBlock( oBlock )

   if !lOpenFiles
      ::CloseFiles( "" )
   end if

Return ( lOpenFiles )

//---------------------------------------------------------------------------//

METHOD runGridPayment() CLASS Payment

   local result   := ""

   if !Empty( ::oGridPayment )

      ::oGridPayment:showView()

      if ::oGridPayment:isEndOk()
         result   := ( D():FormasPago( ::nView ) )->cCodPago
      end if

   end if

Return ( result )

//---------------------------------------------------------------------------//