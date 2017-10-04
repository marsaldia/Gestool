#include "FiveWin.Ch"
#include "Factu.ch" 

//---------------------------------------------------------------------------//

CLASS MovimientosAlmacenLineasController FROM SQLBaseController

   METHOD New()

   METHOD initAppendMode()

END CLASS

//---------------------------------------------------------------------------//

METHOD New( oController )

   ::cTitle                := "Movimientos de almacen lineas"

   ::cImage                := "gc_document_attachment_16"

   ::nLevel                := nLevelUsr( "01050" )

   ::oModel                := SQLMovimientosAlmacenLineasModel():New( self )

   ::oDialogView           := MovimientosAlmacenLineasView():New( self )

   // ::oValidator            := MovimientosAlmacenLineasValidator():New( self )

   ::Super:New( oController )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD initAppendMode()

   local uuid              := hget( ::getSenderController():oModel:hBuffer, "uuid" )

   msgalert( uuid, "uuid" )

   msgalert( hb_valtoexp( ::oModel:hBuffer ), "oModel:hBuffer" )

   hset( ::oModel:hBuffer, "parent_uuid", uuid )

   msgalert( hget( ::oModel:hBuffer, "parent_uuid" ) )

RETURN ( Self )

//---------------------------------------------------------------------------//



