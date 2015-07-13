#include "FiveWin.Ch"
#include "Factu.ch" 
 
CLASS DocumentLine 

   DATA hDictionary
   DATA hDictionaryMaster

   METHOD new( hDictionary )

   METHOD totalUnidades()
   METHOD Total()
   METHOD Impuesto()  
   METHOD Importe()

   METHOD getSerie()                                           INLINE ( hGet( ::hDictionary, "Serie" ) )
   METHOD getNumero()                                          INLINE ( hGet( ::hDictionary, "Numero" ) )
   METHOD getSufijo()                                          INLINE ( hGet( ::hDictionary, "Sufijo" ) )
   METHOD getNumeroLinea()                                     INLINE ( hGet( ::hDictionary, "NumeroLinea" ) )
   METHOD getArticulo()                                        INLINE ( hGet( ::hDictionary, "Articulo" ) )
   METHOD getDescripcionArticulo()                             INLINE ( hGet( ::hDictionary, "DescripcionArticulo" ) )
   METHOD getPorcentajeImpuesto()                              INLINE ( hGet( ::hDictionary, "PorcentajeImpuesto" ) )

   METHOD getTipoIva()                                         INLINE ( hGet( ::hDictionary, "TipoIva" ) )
   METHOD getDescuentoLineal()                                 INLINE ( hGet( ::hDictionary, "DescuentoLineal" ) )
   METHOD getPrecioVenta()                                     INLINE ( Round( hGet( ::hDictionary, "PrecioVenta" ), nDouDiv() ) )
   METHOD getPortes()                                          INLINE ( hGet( ::hDictionary, "Portes" ) )
   METHOD getCajas()                                           INLINE ( hGet( ::hDictionary, "Cajas" ) )
   METHOD getUnidades()                                        INLINE ( hGet( ::hDictionary, "Unidades" ) )
   METHOD getDescuento()                                       INLINE ( hGet( ::hDictionary, "Descuento" ) )
   METHOD getRecargoEquivalencia()                             INLINE ( hGet( ::hDictionary, "RecargoEquivalencia" ) )
   METHOD getDivisa()                                          INLINE ( hGet( ::hDictionaryMaster, "Divisa" ) ) 


   METHOD getDescuentoPorcentual()                             INLINE ( hGet( ::hDictionary, "DescuentoPorcentual" ) )
   METHOD getDescuentoPromocion()                              INLINE ( hGet( ::hDictionary, "DescuentoPorcentual" ) )

   METHOD isLineaImpuestoIncluido()                            INLINE ( hGet( ::hDictionary, "LineaImpuestoIncluido" ) )
   METHOD isVolumenImpuestosEspeciales()                       INLINE ( hGet( ::hDictionary, "VolumenImpuestosEspeciales" ) )
   METHOD isPuntoVerde()                                       INLINE ( hGet( ::hDictionaryMaster, "OperarPuntoVerde" ) )

   METHOD getImporteImpuestoEspecial()                         INLINE ( hGet( ::hDictionary, "ImporteImpuestoEspecial" ) )
   METHOD getVolumen()                                         INLINE ( hGet( ::hDictionary, "Volumen" ) )
   METHOD getPuntoVerde()                                      INLINE ( hGet( ::hDictionary, "PuntoVerde" ) )

END CLASS

//---------------------------------------------------------------------------//

METHOD new( hDictionary, oSender ) CLASS DocumentLine

   ::hDictionary        := hDictionary
   ::hDictionaryMaster  := oSender:hDictionaryMaster

Return ( Self )

//---------------------------------------------------------------------------//

METHOD totalUnidades() CLASS DocumentLine

   local totalUnidades  := 0

   totalUnidades        := notCaja( ::getCajas() )
   totalUnidades        *= ::getUnidades()
   totalUnidades        *= notCero( hGet( ::hDictionary, "UnidadesKit" ) )
   totalUnidades        *= notCero( hGet( ::hDictionary, "Medicion1" ) )
   totalUnidades        *= notCero( hGet( ::hDictionary, "Medicion2" ) )
   totalUnidades        *= notCero( hGet( ::hDictionary, "Medicion3" ) )

Return ( totalUnidades )

//---------------------------------------------------------------------------//

METHOD Total()   CLASS DocumentLine

   local Total          := ::Importe() * ::totalUnidades()

   Total                += ::Impuesto()

   if ::isPuntoVerde()    
      Total             += ::getPuntoVerde() * ::totalUnidades()
   end if 

   if ::getPortes()  != 0
      Total             += ::getPortes() * ::totalUnidades
   endif


Return ( Total )

//---------------------------------------------------------------------------//

METHOD Importe() CLASS DocumentLine

   local totalImporte   := ::getPrecioVenta()
   totalImporte         -= ::getDescuentoLineal()

   if ::getDescuentoPorcentual() != 0
      totalImporte      -= totalImporte * ::getDescuentoPorcentual() / 100
   end if 

   if ::getDescuentoPromocion() != 0
      totalImporte      -= totalImporte * ::getDescuentoPromocion() / 100
   end if 

Return ( totalImporte )

//---------------------------------------------------------------------------//

//---------------------------------------------------------------------------//

METHOD Impuesto() CLASS DocumentLine
   
   Local Impuesto := 1

   if !( ::isLineaImpuestoIncluido() )

      if ::isVolumenImpuestosEspeciales()
         Return ( NotCero( ::getImporteImpuestoEspecial ) * NotCero( ::getVolumen ) )
      else
         Return ( NotCero( ::getImporteImpuestoEspecial ) )
      endif

   endif

Return( Impuesto )

//---------------------------------------------------------------------------//

//---------------------------------------------------------------------------//

