#include "FiveWin.Ch"
#include "Factu.ch" 

CLASS ClienteIncidenciaViewNavigator FROM ViewNavigator

   METHOD setColumns()

   METHOD getWorkArea()    INLINE ( D():ClientesIncidencias( ::getView() ) )

   METHOD getTextoTipoDocumento();
                           INLINE ( "Incidencias : " + alltrim( D():ClientesNombre( ::getView() ) ) )

END CLASS

//---------------------------------------------------------------------------//

METHOD setColumns() CLASS ClienteIncidenciaViewNavigator

   ::setBrowseConfigurationName( "Grid clientes incidencias" )

   with object ( ::addColumn() )
      :cHeader             := "Incidencia"
      :bEditValue          := {|| D():ClientesIncidenciasId( ::getView() ) + CRLF + D():ClientesIncidenciasNombre( ::getView() ) }
      :nWidth              := 600
   end with

Return ( self )

//---------------------------------------------------------------------------//