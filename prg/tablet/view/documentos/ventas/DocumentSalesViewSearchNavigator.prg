#include "FiveWin.Ch"
#include "Factu.ch" 

CLASS DocumentSalesViewSearchNavigator FROM ViewSearchNavigator


   METHOD getDataTable()               INLINE ( ::oSender:getDataTable() )

   METHOD getView()                    INLINE ( ::oSender:nView )

   METHOD setTextoTipoDocumento( cName )      INLINE ( ::cTextoTipoDocumento := cName ) 

   METHOD setItemsBusqueda( aItems )   INLINE ( ::aItemsBusqueda := { "N�mero", "Fecha", "C�digo", "Nombre" } )   

   METHOD setColumns()

   METHOD getField( cField )           INLINE ( D():getFieldDictionary( cField, ::getDataTable(), ::getView() ) )

END CLASS

//---------------------------------------------------------------------------//

METHOD setColumns() CLASS DocumentSalesViewSearchNavigator

   ::setBrowseConfigurationName( ::cTextoTipoDocumento )

   with object ( ::addColumn() )
      :cHeader           := "Id"
      :bEditValue        := {|| ::getField( "Serie" ) + "/" + alltrim( str( ::getField( "Numero" ) ) ) + CRLF +;
                                 dtoc( ::getField( "Fecha" ) ) }
      :nWidth            := 160
   end with

   with object ( ::addColumn() )
      :cHeader           := "Cliente"
      :bEditValue        := {|| AllTrim( ::getField( "Cliente" ) ) + CRLF + AllTrim( ::getField( "NombreCliente" ) ) }
      :nWidth            := 310
   end with

   with object ( ::addColumn() )
      :cHeader           := "Base"
      :bEditValue        := {|| ::getField( "TotalNeto" ) }
      :cEditPicture      := cPorDiv()
      :nWidth            := 100
      :nDataStrAlign     := 1
      :nHeadStrAlign     := 1
      :lHide             := .t.
   end with

   with object ( ::addColumn() )
      :cHeader           := cImp()
      :bEditValue        := {|| ::getField( "TotalImpuesto" ) }
      :cEditPicture      := cPorDiv()
      :nWidth            := 100
      :nDataStrAlign     := 1
      :nHeadStrAlign     := 1
      :lHide             := .t.
   end with

   with object ( ::addColumn() )
      :cHeader           := "R.E."
      :bEditValue        := {|| ::getField( "TotalRecargo" ) }
      :cEditPicture      := cPorDiv()
      :nWidth            := 100
      :nDataStrAlign     := 1
      :nHeadStrAlign     := 1
      :lHide             := .t.
   end with

   with object ( ::addColumn() )
      :cHeader           := "Total"
      :bEditValue        := {|| ::getField( "TotalDocumento" ) }
      :cEditPicture      := cPorDiv()
      :nWidth            := 160
      :nDataStrAlign     := 1
      :nHeadStrAlign     := 1
   end with

Return ( self )

//---------------------------------------------------------------------------//