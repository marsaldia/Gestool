#include "FiveWin.Ch"
#include "Factu.ch" 
#include "Xbrowse.ch"

CLASS OrderCustomerViewEdit FROM ViewEdit 
  
   METHOD New()

   METHOD insertControls()

   METHOD onClickRotor()         INLINE ( ::oSender:onClickRotor() )

   METHOD columnsBrowseLineas()

   METHOD getDocumentLine()      INLINE ( ::oSender:oDocumentLines:aLines[ ::oBrowse:nArrayAt ] )

END CLASS

//---------------------------------------------------------------------------//

METHOD New( oSender ) CLASS OrderCustomerViewEdit

   ::oSender   := oSender

Return ( self )

//---------------------------------------------------------------------------//

METHOD insertControls() CLASS OrderCustomerViewEdit

   ::defineSerie()

   ::defineRuta()

   ::defineCliente()

   ::defineDireccion()

   ::defineBrowseLineas()

   ::columnsBrowseLineas()

Return ( self )

//---------------------------------------------------------------------------//

METHOD columnsBrowseLineas() CLASS OrderCustomerViewEdit

   with object ( ::oBrowse:AddCol() )
      :cHeader                := "C�d"
      :bEditValue             := {|| ::getDocumentLine():getArticulo() }
      :nWidth                 := 80
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := "Descripci�n"
      :bEditValue             := {|| ::getDocumentLine():getDescripcionArticulo() }
      :bFooter                := {|| "Total..." }
      :nWidth                 := 310
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := cNombreCajas()
      :bEditValue             := {|| ::getDocumentLine():getCajas() }
      :cEditPicture           := MasUnd()
      :nWidth                 := 75
      :nDataStrAlign          := 1
      :nHeadStrAlign          := 1
      :lHide                  := .t.
      :nFooterType            := AGGR_SUM
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := cNombreUnidades()
      :bEditValue             := {|| ::getDocumentLine():getUnidades() }
      :cEditPicture           := MasUnd()
      :nWidth                 := 130
      :nDataStrAlign          := 1
      :nHeadStrAlign          := 1
      :lHide                  := .t.
      :nFooterType            := AGGR_SUM
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := "Und"
      :bEditValue             := {|| ::getDocumentLine():totalUnidades() }
      :cEditPicture           := MasUnd()
      :nWidth                 := 90
      :nDataStrAlign          := 1
      :nHeadStrAlign          := 1
      :nFooterType            := AGGR_SUM
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := "Precio"
      :bEditValue             := {|| ::getDocumentLine():getPrecioVenta() }
      :cEditPicture           := cPouDiv()
      :nWidth                 := 90
      :nDataStrAlign          := 1
      :nHeadStrAlign          := 1
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := "% Dto."
      :bEditValue             := {|| ::getDocumentLine():getDescuento() }
      :cEditPicture           := "@E 999.99"
      :nWidth                 := 105
      :nDataStrAlign          := 1
      :nHeadStrAlign          := 1
      :lHide                  := .t.
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := "% " + cImp()
      :bEditValue             := {|| ::getDocumentLine():getPorcentajeImpuesto() }
      :cEditPicture           := "@E 999.99"
      :nWidth                 := 95
      :nDataStrAlign          := 1
      :nHeadStrAlign          := 1
      :lHide                  := .t.
   end with

   with object ( ::oBrowse:AddCol() )
      :cHeader                := "Total"
      :bEditValue             := {|| ::getDocumentLine():Total() }
      :cEditPicture           := cPouDiv()
      :nWidth                 := 94
      :nDataStrAlign          := 1
      :nHeadStrAlign          := 1
      :nFooterType            := AGGR_SUM
   end with

Return ( self )

//---------------------------------------------------------------------------//
