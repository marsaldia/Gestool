#include "FiveWin.Ch" 
#include "Struct.ch"
#include "Factu.ch" 
#include "Ini.ch"
#include "MesDbf.ch" 

#define __tipoProducto__      1
#define __tipoCategoria__     2     

//---------------------------------------------------------------------------//

CLASS TComercioStock FROM TComercioConector

   DATA  TComercio

   DATA  oWaitMeter

   DATA  hProductsToUpdate                   INIT {=>}
   DATA  aStockProductData                   INIT {}

   METHOD resetProductsToUpdateStocks()      INLINE ( ::hProductsToUpdate := {=>} )
   METHOD getProductsToUpadateStocks()       INLINE ( ::hProductsToUpdate )

   // External methods---------------------------------------------------------

   METHOD resetStockProductData()            INLINE ( ::aStockProductData := {} )

   METHOD appendProductsToUpadateStocks()

   METHOD updateWebProductStocks() 

   // Internal methods---------------------------------------------------------

   METHOD updateProductStocks( cWebName, aProductsWeb )
   METHOD buildInformationStockProductArray( aProducts )
   METHOD buildAddInformacionStockProductPrestashop( hProduct ) 
      METHOD proccessStockPrestashop() 
         METHOD setStockPrestashop( hStockProductData )

   METHOD idProductAttribute( idProductPrestashop, cCodWebValPr1, cCodWebValPr2 )

END CLASS

//---------------------------------------------------------------------------//

METHOD appendProductsToUpadateStocks( idProduct, idFirstProperty, valueFirstProperty, idSecondProperty, valueSecondProperty, nView ) 

   local nScan
   local cWebShop
   local hProduct

   if !( D():gotoArticulos( idProduct, nView ) )
      Return ( .f. )
   end if 

   if !( D():Articulos( nView ) )->lPubInt
      Return ( .f. )
   end if 

   cWebShop          := alltrim( ( D():Articulos( nView ) )->cWebShop )

   hProduct          := {  "id"                    => idProduct,;
                           "idFirstProperty"       => idFirstProperty,;
                           "valueFirstProperty"    => valueFirstProperty,;
                           "idSecondProperty"      => idSecondProperty,;
                           "valueSecondProperty"   => valueSecondProperty }

   nScan             := hscan( ::hProductsToUpdate, {|k,v| k == cWebShop } )
   if nScan == 0
      hset( ::hProductsToUpdate, cWebShop, { hProduct } )
   else 
      if ascan( ::hProductsToUpdate[ cWebShop ], {|h| hget( h, "id" ) == idProduct .and. hget( h, "idFirstProperty" ) == idFirstProperty .and. hget( h, "valueFirstProperty" ) == valueFirstProperty .and. hget( h, "idSecondProperty" ) == idSecondProperty .and. hget( h, "valueSecondProperty" ) == valueSecondProperty } )  == 0
         aadd( ::hProductsToUpdate[ cWebShop ], hProduct )
      end if 
   end if 
   
Return ( ::hProductsToUpdate )   

//---------------------------------------------------------------------------//

METHOD updateWebProductStocks() 

   if !( ::TComercioConfig():isRealTimeConexion() )
      Return .f.
   end if 

   if empty(::hProductsToUpdate)
      Return .f.
   end if

   if ::filesOpen() 

      ::oWaitMeter         := TWaitMeter():New( "Actualizando stocks", "Espere por favor..." ):Run()

      heval( ::hProductsToUpdate, {|cWebName, aProductsWeb| ::updateProductStocks( cWebName, aProductsWeb ) } )

      ::oWaitMeter:End()

      ::filesClose()

   end if 

Return ( .t. )   

//---------------------------------------------------------------------------//

METHOD updateProductStocks( cWebName, aProductsWeb )

   ::TComercioConfig():setCurrentWebName( cWebName )

   ::buildInformationStockProductArray( aProductsWeb )

   if ::prestaShopConnect()
      
      ::proccessStockPrestashop()
      
      ::prestaShopDisConnect()  

   end if 

Return ( Self )   

//---------------------------------------------------------------------------//

METHOD buildInformationStockProductArray( aProducts )

   local hProduct

   ::meterProcesoSetTotal( len( aProducts ) )

   ::resetStockProductData()

   for each hProduct in aProducts
      ::buildAddInformacionStockProductPrestashop( hProduct )
   next

Return .t.

//---------------------------------------------------------------------------//

METHOD buildAddInformacionStockProductPrestashop( hProduct ) 

   local sStock
   local nTotalStock          := 0
   local nUnidadesStock       := 0
   local aStockArticulo
   local idProduct            := hget( hProduct, "id" )
   local idFirstProperty      := hget( hProduct, "idFirstProperty" )
   local valueFirstProperty   := hget( hProduct, "valueFirstProperty" )
   local idSecondProperty     := hget( hProduct, "idSecondProperty" )
   local valueSecondProperty  := hget( hProduct, "valueSecondProperty" )

   ::writeText( "Recopilando información del artículo " + alltrim( idProduct ) )

   // Recopilamos la información del Stock-------------------------------------

   aStockArticulo             := ::oStock():aStockArticulo( idProduct, ::TComercioConfig():getStore() )

   // Recorremos el array con los stocks---------------------------------------

   for each sStock in aStockArticulo

      if sStock:cCodigo             == idProduct            .and.;
         sStock:cCodigoPropiedad1   == idFirstProperty      .and.;
         sStock:cValorPropiedad1    == valueFirstProperty   .and.;
         sStock:cCodigoPropiedad2   == idSecondProperty     .and.;
         sStock:cValorPropiedad2    == valueSecondProperty

         nUnidadesStock       := sStock:nUnidades

      end if  

      nTotalStock             += sStock:nUnidades 

   next

   aAdd( ::aStockProductData, {  "idProduct"             => idProduct ,;
                                 "idFirstProperty"       => idFirstProperty ,;
                                 "idSecondProperty"      => idSecondProperty ,;
                                 "valueFirstProperty"    => valueFirstProperty ,;
                                 "valueSecondProperty"   => valueSecondProperty ,;
                                 "unitStock"             => nUnidadesStock } )

   aAdd( ::aStockProductData, {  "idProduct"             => idProduct ,;
                                 "idFirstProperty"       => space( 20 ) ,;
                                 "idSecondProperty"      => space( 20 ) ,;
                                 "valueFirstProperty"    => space( 20 ) ,;
                                 "valueSecondProperty"   => space( 20 ) ,;
                                 "unitStock"             => nTotalStock } )

Return .t.

//---------------------------------------------------------------------------//

METHOD proccessStockPrestashop() 

   local hStockProductData

   ::meterProcesoSetTotal( len( ::aStockProductData ) )

   for each hStockProductData in ::aStockProductData
      ::setStockPrestashop( hStockProductData )
   next

Return .t.

//---------------------------------------------------------------------------//

METHOD setStockPrestashop( hStockProductData )

   local cText
   local cCommand
   local unitStock               
   local idProductPrestashop     
   local attributeFirstProperty  
   local attributeSecondProperty 
   local idProductAttribute      := 0

   idProductPrestashop           := ::TPrestashopId():getValueProduct( hget( hStockProductData, "idProduct" ), ::getCurrentWebName() )
   attributeFirstProperty        := ::TPrestashopId():getValueAttribute( hget( hStockProductData, "idFirstProperty" ) + hget( hStockProductData, "valueFirstProperty" ),     ::getCurrentWebName() )
   attributeSecondProperty       := ::TPrestashopId():getValueAttribute( hget( hStockProductData, "idSecondProperty" ) + hget( hStockProductData, "valueSecondProperty" ),   ::getCurrentWebName() ) 
   unitStock                     := hget( hStockProductData, "unitStock" )

   if ( attributeFirstProperty != 0 ) .and. ( attributeSecondProperty != 0 )
      idProductAttribute         := ::idProductAttribute( idProductPrestashop, attributeFirstProperty, attributeSecondProperty ) 
   end if 

   cCommand                      := "DELETE FROM " + ::cPrefixTable( "stock_available" ) + " "                          + ;
                                       "WHERE id_product = " + alltrim( str( idProductPrestashop ) ) + " "              + ;
                                       "AND id_product_attribute = " + alltrim( str( idProductAttribute ) )

   TMSCommand():New( ::oConexionMySQLDatabase() ):ExecDirect( cCommand )

   if ( unitStock != 0 )

      cCommand                   := "INSERT INTO " + ::cPrefixTable( "stock_available" ) + " ( "                        + ;
                                       "id_product, "                                                                   + ;
                                       "id_product_attribute, "                                                         + ;
                                       "id_shop, "                                                                      + ;
                                       "id_shop_group, "                                                                + ;
                                       "quantity, "                                                                     + ;
                                       "depends_on_stock, "                                                             + ;
                                       "out_of_stock ) "                                                                + ;
                                    "VALUES ( "                                                                         + ;
                                       "'" + alltrim( str( idProductPrestashop ) ) + "', "                              + ;
                                       "'" + alltrim( str( idProductAttribute ) ) + "', "                               + ;   
                                       "'1', "                                                                          + ;
                                       "'0', "                                                                          + ;
                                       "'" + alltrim( str( unitStock ) ) + "', "                                        + ;
                                       "'0', "                                                                          + ;
                                       "'2' )"

      TMSCommand():New( ::oConexionMySQLDatabase() ):ExecDirect( cCommand )

   end if

   cText       := "Actualizando stock con propiedades : " + alltrim( str( attributeFirstProperty ) ) + " , " + alltrim( str( attributeSecondProperty ) ) + ", "
   cText       += "cantidad : " + alltrim( str( unitStock ) )

   ::writeText( cText )

Return .t.   

//---------------------------------------------------------------------------//

METHOD idProductAttribute( idProductPrestashop, cCodWebValPr1, cCodWebValPr2 )

   local oQuery
   local oQuery2
   local lPrp1                := .f.
   local lPrp2                := .f.
   local cCommand             := ""
   local idProductAttribute   := 0

   do case
      case !empty( cCodWebValPr1 ) .and. empty( cCodWebValPr2 )

         cCommand             := "SELECT * FROM " + ::cPrefixTable( "product_attribute" ) + " WHERE id_product = " + alltrim( str( idProductPrestashop ) )

         oQuery               := TMSQuery():New( ::oConexionMySQLDatabase(), cCommand )

         if oQuery:Open() .and. oQuery:recCount() > 0

            oQuery:GoTop()
            while !oQuery:Eof()

               cCommand       := "SELECT * FROM " + ::cPrefixTable( "product_attribute_combination" ) + " WHERE id_product_attribute = " + alltrim( str( oQuery:FieldGet( 1 ) ) )

               oQuery2        := TMSQuery():New( ::oConexionMySQLDatabase(), cCommand )

                  if oQuery2:Open() .and. oQuery2:recCount() == 1 .and. oQuery2:FieldGet( 1 ) == cCodWebValPr1
                     idProductAttribute     := oQuery:FieldGet( 1 )
                  end if   

               oQuery:Skip()

            end while

         end if

      case !empty( cCodWebValPr1 ) .and. !empty( cCodWebValPr2 )

         cCommand                := "SELECT * FROM " + ::cPrefixTable( "product_attribute" ) + " WHERE id_product = " + alltrim( str( idProductPrestashop ) )

         oQuery                  := TMSQuery():New( ::oConexionMySQLDatabase(), cCommand )

         if oQuery:Open() // .and. oQuery:recCount() > 0

            oQuery:GoTop()
            while !oQuery:Eof()

               cCommand          := "SELECT * FROM " + ::cPrefixTable( "product_attribute_combination" ) + " WHERE id_product_attribute=" + alltrim( str( oQuery:FieldGet( 1 ) ) )

               oQuery2           := TMSQuery():New( ::oConexionMySQLDatabase(), cCommand )

                  if oQuery2:Open() .and. oQuery2:recCount() == 2

                     oQuery2:GoTop()
                     while !oQuery2:Eof()

                        if !lPrp1
                           lPrp1 := ( oQuery2:FieldGet( 1 ) == cCodWebValPr1 )
                        end if

                        oQuery2:Skip()

                     end while

                     oQuery2:GoTop()
                     while !oQuery2:Eof()

                        if !lPrp2
                           lPrp2 := ( oQuery2:FieldGet( 1 ) == cCodWebValPr2 )
                        end if

                        oQuery2:Skip()

                     end while

                     if lPrp1 .and. lPrp2
                        idProductAttribute     := oQuery:FieldGet( 1 )
                     end if

                  end if

               oQuery:Skip()

               lPrp1          := .f.
               lPrp2          := .f.

            end while

         end if

   end case

Return idProductAttribute

//---------------------------------------------------------------------------//
