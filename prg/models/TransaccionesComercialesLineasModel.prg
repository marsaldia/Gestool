#include "FiveWin.Ch"
#include "Factu.ch" 

//---------------------------------------------------------------------------//

CLASS TransaccionesComercialesLineasModel FROM BaseModel

   METHOD getTableName()                           VIRTUAL

   METHOD getExtraWhere()                          INLINE ( "AND nCtlStk < 2" )

   METHOD getFechaFieldName()                      INLINE ( "dFecAlb" )
   METHOD getHoraFieldName()                       INLINE ( "tFecAlb" )

   METHOD getLineasAgrupadas()
   
   METHOD getSQLSentenceLineasAgrupadas()

   METHOD getLineasAgrupadasUltimaConsolidacion()

   METHOD getSQLSentenceTotalUnidadesStock()
   
   METHOD totalUnidadesStock()

END CLASS

//---------------------------------------------------------------------------//

METHOD getSQLSentenceLineasAgrupadas( cCodigoArticulo, cCodigoAlmacen, cValorPropiedad1, cValorPropiedad2, cLote )

   local cSql  := "SELECT "                                                + ;
                     "cRef as cCodigoArticulo, "                           + ;
                     "cAlmLin as cCodigoAlmacen, "                         + ;
                     "cValPr1 as cValorPropiedad1, "                       + ;
                     "cValPr2 as cValorPropiedad2, "                       + ;
                     "cLote as cLote "                                     + ;
                  "FROM " + ::getTableName() + " "                         + ;
                  "WHERE cRef = " + quoted( cCodigoArticulo ) + " "        + ;
                     "AND cAlmLin = " + quoted( cCodigoAlmacen ) + " "     

   cSql        +=    ::getExtraWhere() + " "

   cSql        +=    "GROUP BY cRef, cAlmLin, cValPr1, cValPr2, cLote "

Return ( cSql )

//---------------------------------------------------------------------------//

METHOD getLineasAgrupadas( cCodigoArticulo, cCodigoAlmacen, cValorPropiedad1, cValorPropiedad2, cLote )

   local cStm  := "ADSLineasAgrupadas"
   local cSql  := ::getSQLSentenceLineasAgrupadas( cCodigoArticulo, cCodigoAlmacen, cValorPropiedad1, cValorPropiedad2, cLote )

   if ::ExecuteSqlStatement( cSql, @cStm )
      RETURN ( cStm )
   end if 

Return ( nil )

//---------------------------------------------------------------------------//

METHOD getLineasAgrupadasUltimaConsolidacion( cCodigoArticulo, cCodigoAlmacen, cValorPropiedad1, cValorPropiedad2, cLote, hConsolidacion )

   local cStm  
   local cSql  := "SELECT nCanEnt "                                           + ;
                     "FROM " + ::getTableName() + " "                         + ;
                     "WHERE cRef = " + quoted( cCodigoArticulo ) + " "        + ;
                        "AND cAlmLin = " + quoted( cCodigoAlmacen ) + " "     + ;
                        "AND cValPr1 = " + quoted( cValorPropiedad1 ) + " "   + ;
                        "AND cValPr2 = " + quoted( cValorPropiedad2 ) + " "   + ;
                        "AND cLote = " + quoted( cLote )                               

   cSql        +=       ::getExtraWhere() + " "

   if !empty(hConsolidacion)
      cSql     +=       "AND " + ::getFechaFieldName() + " >= " + quoted( hget( hConsolidacion, "fecha" ) ) + " "
      cSql     +=       "AND " + ::getHoraFieldName() + " >= " + quoted( hget( hConsolidacion, "hora" ) ) + " " 
   end if 

   if ::ExecuteSqlStatement( cSql, @cStm )
      RETURN ( cStm )
   end if 

Return ( nil )

//---------------------------------------------------------------------------//

METHOD getSQLSentenceTotalUnidadesStock( cCodigoArticulo, dConsolidacion, tConsolidacion, cCodigoAlmacen, cValorPropiedad1, cValorPropiedad2, cLote )

   local cSql  := "SELECT SUM( IIF( nCanEnt = 0, 1, nCanEnt ) * nUniCaja ) as [totalUnidadesStock] " + ;
                     "FROM " + ::getTableName() + " " + ;
                     "WHERE cRef = " + quoted( cCodigoArticulo ) + " "
   
   if !empty( dConsolidacion )                     
         cSql  +=    "AND CAST( " + ::getFechaFieldName() + " AS SQL_CHAR ) >= " + quoted( dateToSQLString( dConsolidacion ) ) + " "
   end if 

   if !empty( tConsolidacion )                     
         cSql  +=    "AND " + ::getHoraFieldName() + " >= " + quoted( tConsolidacion ) + " "
   end if 

   if !empty( cCodigoAlmacen )                     
         cSql  +=    "AND cAlmLin = " + quoted( cCodigoAlmacen ) + " "
   end if 

   if !empty( cValorPropiedad1 )                     
         cSql  +=    "AND cValPr1 = " + quoted( cValorPropiedad1 ) + " "
   end if 

   if !empty( cValorPropiedad2 )                     
         cSql  +=    "AND cValPr2 = " + quoted( cValorPropiedad2 ) + " "
   end if 

   if !empty( cLote )                     
         cSql  +=    "AND cLote = " + quoted( cLote ) + " "
   end if 

   cSql        +=    ::getExtraWhere() + " "

RETURN ( cSql )

//---------------------------------------------------------------------------//

METHOD totalUnidadesStock( cCodigoArticulo, dConsolidacion, tConsolidacion, cCodigoAlmacen, cValorPropiedad1, cValorPropiedad2, cLote )

   local cStm
   local cSql  := ::getSQLSentenceTotalUnidadesStock( cCodigoArticulo, dConsolidacion, tConsolidacion, cCodigoAlmacen, cValorPropiedad1, cValorPropiedad2, cLote )

   if ::ExecuteSqlStatement( cSql, @cStm )
      RETURN ( ( cStm )->totalUnidadesStock )
   end if 

RETURN ( 0 )

//---------------------------------------------------------------------------//
