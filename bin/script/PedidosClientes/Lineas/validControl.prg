#include "factu.ch"

//---------------------------------------------------------------------------//

Function validControl( oSender, aGet, nView, nMode, aTmpPed )

   local nBultos
   local nCajasArticulos

   /*if ( nMode != APPD_MODE .and. nMode != DUPL_MODE )
      return .t.
   end if */

   if aTmpPed[ ( D():PedidosClientes( nView ) )->( fieldpos( "cSerPed" ) ) ] != "A"
      return .t.
   end if 
	
   if ( oSender:cargo == "nBultos" )

      nBultos            := aGet[ ( D():PedidosClientesLineas( nView ) )->( fieldpos( "nBultos" ) ) ]:varget()

      nCajasArticulos   := ( D():Articulos( nView ) )->nCajEnt

      if nCajasArticulos != 0
         aGet[ ( D():PedidosClientesLineas( nView ) )->( fieldpos( "nCanPed" ) ) ]:varPut( nBultos * nCajasArticulos )
         aGet[ ( D():PedidosClientesLineas( nView ) )->( fieldpos( "nCanPed" ) ) ]:refresh()
      end if 

   end if 

Return ( .t. )

//---------------------------------------------------------------------------//

