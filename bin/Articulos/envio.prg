#include "hbclass.ch"

#define CRLF                        chr( 13 ) + chr( 10 )

#define __path__                    "C:\Users\calero\Dropbox\Buzon"

static nView
static aBuzones

//---------------------------------------------------------------------------//

Function StartEnvio()

   nView             := D():CreateView()

   D():Clientes( nView )

   D():Articulos( nView )
   ( D():Articulos( nView ) )->( ordSetFocus( "SndCod" ) )

   D():ArticulosCodigosBarras( nView )

   D():FacturasClientes( nView )
   ( D():FacturasClientes( nView ) )->( ordSetFocus( "SndDoc" ) )

   D():FacturasClientesLineas( nView )

   D():Clientes( nView )
   ( D():Clientes( nView ) )->( ordSetFocus( "lSndEnviar" ) )
   
   D():ClientesDirecciones( nView )

   Buzones()

   EnvioArticulos()

   EnvioClientes()

   // EnvioFacturas()

   D():DeleteView( nView )

   msgStop( "Proceso finalizado." )

Return nil

//---------------------------------------------------------------------------//

Function Buzones()

   aBuzones             := {}    

   ( D():Clientes( nView ) )->( ordsetfocus(0) )

   ( D():Clientes( nView ) )->( dbGoTop() )
   while ( !( D():Clientes( nView ) )->( eof() ) )

      if rtrim( ( D():Clientes( nView ) )->cCodGrp ) == "GENS"
         aAdd( aBuzones, ( rtrim( D():ClientesId( nView ) ) ) )
      end if 

      ( D():Clientes( nView ) )->( dbSkip() )

   end while

   ( D():Clientes( nView ) )->( ordsetfocus(1) )

//   msgInfo( hb_valToExp( aBuzones ), "buzones" )

   aEval( aBuzones, {|cBuzon| makedir( __path__ + cBuzon ) } )

Return nil

//---------------------------------------------------------------------------//

Function EnvioArticulos()

   local cFile

   local hArticulo
   local aCodebar       := {}
   local sArticulos
   local aArticulos     := {}

   ( D():Articulos( nView ) )->( dbGoTop() )
   while !( D():Articulos( nView ) )->( eof() )

      if ( D():Articulos( nView ) )->lSndDoc

         hArticulo         := hashRecord( D():Articulos( nView ) )

         // Si tiene tarifa 4 se conviernte en la tarfa principal del vendedor

         if !empty( hArticulo["PVENTA4"] )
         	hArticulo["PVENTA1"] 	:= hArticulo["PVENTA4"]
         end if

         if !empty( hArticulo["PVTAIVA4"] )
         	hArticulo["PVTAIVA1"] 	:= hArticulo["PVTAIVA4"]
         end if

         if ( D():ArticulosCodigosBarras( nView ) )->( dbSeek( ( D():Articulos( nView ) )->Codigo ) )

            aCodebar       := {}

            while ( D():ArticulosCodigosBarras( nView ) )->cCodArt == ( D():Articulos( nView ) )->Codigo .and. !( D():ArticulosCodigosBarras( nView ) )->( eof() )

               aAdd( aCodebar, hashRecord( D():ArticulosCodigosBarras( nView ) ) )

               ( D():ArticulosCodigosBarras( nView ) )->( dbSkip( 1 ) ) 

            end while

            hSet( hArticulo, "Codebar", aCodebar )

         end if

         aAdd( aArticulos, hArticulo )

         //msgWait( "Art�culo " + ( D():Articulos( nView ) )->Codigo, "Procesando", 0.1 )

         if ( D():Articulos( nView ) )->( dbRLock() )
            ( D():Articulos( nView ) )->lSndDoc   := .f.
            ( D():Articulos( nView ) )->( dbUnLock() )
         end if 

      end if

      ( D():Articulos( nView ) )->( dbSkip() )

   end while

   sArticulos           := hb_serialize( aArticulos )
   cFile                := "Articulos" + dtos( date() ) + strtran( time(), ":", "" ) + ".txt"

   aeval( aBuzones, {|cBuzon| hb_memowrit( __path__ + cBuzon + "\" + cFile, sArticulos )} )

Return ( nil )

//---------------------------------------------------------------------------//

Function EnvioClientes()

   local cFile
   local hCliente
   local aDirecciones   := {}
   local sClientes
   local aClientes      := {}

   ( D():Clientes( nView ) )->( dbGoTop() )
   while !( D():Clientes( nView ) )->( eof() )

      if (  rtrim( ( D():Clientes( nView ) )->cCodRut ) == "0001" .or. ;
            rtrim( ( D():Clientes( nView ) )->cCodRut ) == "0002" .or. ;
            rtrim( ( D():Clientes( nView ) )->cCodRut ) == "003" ) .and. ;
            ( D():Clientes( nView ) )->lSndInt 

	      hCliente          := hashRecord( D():Clientes( nView ) )

	      if ( D():ClientesDirecciones( nView ) )->( dbSeek( ( D():ClientesId( nView ) ) ) )

	         aDirecciones   := {}

	         while ( D():ClientesDireccionesId( nView ) == D():ClientesId( nView ) ) .and. !( D():ClientesDirecciones( nView ) )->( eof() )

	            aAdd( aDirecciones, hashRecord( D():ClientesDirecciones( nView ) ) )

	            ( D():ClientesDirecciones( nView ) )->( dbSkip( 1 ) ) 

	         end while

	         hSet( hCliente, "Direcciones", aDirecciones )

	      end if

	      aAdd( aClientes, hCliente )

	      msgWait( "Clientes " + ( D():ClientesId( nView ) ), "Procesando", 0.01 )

         if ( D():Clientes( nView ) )->( dbRLock() )
            ( D():Clientes( nView ) )->lSndInt   := .f.
            ( D():Clientes( nView ) )->( dbUnLock() )
         end if 

      end if

      ( D():Clientes( nView ) )->( dbSkip() )

   end while

   sClientes            := hb_serialize( aClientes )
   cFile                := "Clientes" + dtos( date() ) + strtran( time(), ":", "" ) + ".txt"

   aeval( aBuzones, {|cBuzon| hb_memowrit( __path__ + cBuzon + "\" + cFile, sClientes ) } )

Return ( nil )

//---------------------------------------------------------------------------//

Function EnvioFacturas()

   local cFile
   local aLineas        := {}
   local cCliente
   local hFactura
   local sFacturas
   local aFacturas      := {}

   ( D():FacturasClientes( nView ) )->( dbGoTop() )
   while !( D():FacturasClientes( nView ) )->( eof() )

      cCliente          := alltrim( ( D():FacturasClientes( nView ) )->cCodCli )
      hFactura          := hashRecord( D():FacturasClientes( nView ) )

      if ( D():FacturasClientesLineas( nView ) )->( dbSeek( D():FacturasClientesId( nView ) ) )

         aLineas        := {}

         while ( D():FacturasClientesLineasId( nView ) == D():FacturasClientesId( nView ) ) .and. !( D():FacturasClientesLineasId( nView ) )->( eof() )

            aAdd( aLineas, hashRecord( D():FacturasClientesLineas( nView ) ) )

            ( D():FacturasClientesLineas( nView ) )->( dbSkip( 1 ) ) 

         end while

         hSet( hFactura, "Lineas", aLineas )

      end if

      aAdd( aFacturas, hFactura )

      ( D():FacturasClientes( nView ) )->( dbSkip() )

   end while

   sFacturas            := hb_serialize( aFacturas )
   cFile                := "FacturasClientes" + dtos( date() ) + strtran( time(), ":", "" ) + ".txt"

   makedir( __path__ + cCliente )
   hb_memowrit( __path__ + cCliente + "\" + cFile, sFacturas )

Return ( nil )
   
//---------------------------------------------------------------------------//
