#include "fivewin.ch"
#include "factu.ch" 
#include "hdo.ch"

//---------------------------------------------------------------------------//

CLASS Seeders

   DATA oMsg

   DATA hConfig
   DATA cStmProvincias
   DATA cStmCodigosPostales

   METHOD New()

   METHOD runSeederDatos()
   METHOD runSeederEmpresa()

   METHOD getFullFileProvincias()            INLINE ( cPatConfig() + "insertprovincias.sql" )
   METHOD getFullFileCodigosPostales()       INLINE ( cPatConfig() + "insertcodigospostales.sql" )

   METHOD getInsertStatement( hCampos, cDataBaseName )

   METHOD SeederUsuarios()
   METHOD getStatementSeederUsuarios()

   METHOD SeederSituaciones()
   METHOD getStatementSituaciones( dbfSitua )

   METHOD SeederTiposImpresoras()
   METHOD getStatementTiposImpresoras( dbfTipImp )

   METHOD SeederTiposVentas()
   METHOD getStatementTiposVentas( dbfTipVentas )

   METHOD SeederMovimientosAlmacen()
   METHOD getStatementSeederMovimientosAlmacen( dbfRemMov )

   METHOD SeederMovimientosAlmacenLineas()
   METHOD getStatementSeederMovimientosAlmacenLineas( dbfHisMov )

   METHOD SeederMovimientosAlmacenSeries()
   METHOD getStatementSeederMovimientosAlmacenLineasNumerosSeries( dbfMovSer )

   METHOD SeederProvincias()
   METHOD SeederCodigosPostales()

   METHOD SeederLenguajes()
   METHOD getStatementLenguajes( dbfLenguajes )

   METHOD SeederTransportistas()
   METHOD getStatementTransportistas( dbfTransportista )
   METHOD getStatementDireccionTransportistas( dbfTransportista )

   METHOD SeederCamposExtra() 
   METHOD getStatementCamposExtra() 

END CLASS

//---------------------------------------------------------------------------//

METHOD New( oMsg ) CLASS Seeders

   ::oMsg            := oMsg

RETURN ( self )

//---------------------------------------------------------------------------//

METHOD runSeederDatos()

   ::oMsg:SetText( "Datos: Ejecutando seeder de usuarios" )
   ::SeederUsuarios()

   ::oMsg:SetText( "Datos: Ejecutando seeder de situaciones" )
   ::SeederSituaciones()

   ::oMsg:SetText( "Datos: Ejecutando seeder de tipos de impresoras" )
   ::SeederTiposImpresoras()

   //::oMsg:SetText( "Datos: Ejecutando provincias" )
   //::SeederProvincias()

   //::oMsg:SetText( "Datos: Ejecutando c�digos postales" )
   //::SeederCodigosPostales()

   //::oMsg:SetText( "Datos: Ejecutando lenguajes" )
   //::SeederLenguajes()

RETURN ( self )

//---------------------------------------------------------------------------//

METHOD runSeederEmpresa()

   SincronizaRemesasMovimientosAlmacen()
/*
   ::oMsg:SetText( "Ejecutando seeder de cabeceras de movimientos de almac�n" )
   ::SeederMovimientosAlmacen()
   
   ::oMsg:SetText( "Ejecutando seeder de l�neas de movimientos de almac�n" )
   ::SeederMovimientosAlmacenLineas()

   ::oMsg:SetText( "Ejecutando seeder de n�meros de serie de lineas de movimientos de almac�n" )
   ::SeederMovimientosAlmacenSeries()

   ::oMsg:SetText( "Ejecutando seeder de transportistas" )
   ::SeederTransportistas()
*/
   ::oMsg:SetText( "Ejecutando seeder de campos extra" )
   ::SeederCamposExtra()

   ::oMsg:SetText( "Seeders finalizados" )

RETURN ( self )

//---------------------------------------------------------------------------//

METHOD getInsertStatement( hCampos, cTableName )

   local cStatement  

   cStatement        := "INSERT IGNORE INTO " + cTableName + " ( "

   hEval( hCampos, {| k, v | cStatement += k + ", " } )

   cStatement        := chgAtEnd( cStatement, " ) VALUES ( ", 2 )

   hEval( hCampos, {| k, v | cStatement += v + ", " } )

   cStatement        := chgAtEnd( cStatement, " )", 2 )

RETURN cStatement

//---------------------------------------------------------------------------//

METHOD SeederSituaciones() CLASS Seeders

   local cPath       := cPatDat( .t. )
   local dbfSitua

   if ( file( cPath + "Situa.old" ) )
      RETURN ( self )
   end if

   if !( file( cPath + "Situa.Dbf" ) )
      msgStop( "El fichero " + cPath + "\Situa.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPath + "SITUA.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "SITUA", @dbfSitua ) )
   ( dbfSitua )->( ordsetfocus(0) )

   ( dbfSitua )->( dbgotop() )

   while !( dbfSitua )->( eof() )

      getSQLDatabase():Exec( ::getStatementSituaciones( dbfSitua ) )

      ( dbfSitua )->( dbSkip() )

   end while

   if dbfSitua != nil
      ( dbfSitua )->( dbCloseArea() )
   end if

   frename( cPath + "Situa.dbf", cPath + "Situa.old" )
   
RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD SeederUsuarios() CLASS Seeders

   local dbf
   local cPath       := cPatDat( .t. )

   if !( file( cPath + "Users.Dbf" ) )
      msgStop( "El fichero " + cPath + "\Users.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPath + "Users.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "Users", @dbf ) )
   ( dbf )->( ordsetfocus( 0 ) )

   ( dbf )->( dbgotop() )
   while !( dbf )->( eof() )

      getSQLDatabase():Exec( ::getStatementSeederUsuarios( dbf ) )

      ( dbf )->( dbSkip() )

   end while

   if !empty( dbf )
      ( dbf )->( dbCloseArea() )
   end if
   
RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementSituaciones( dbfSitua )
   
   local hCampos        := { "nombre" => quoted( ( dbfSitua )->cSitua ) }

RETURN ( ::getInsertStatement( hCampos, "situaciones" ) )

//---------------------------------------------------------------------------//

METHOD SeederTiposImpresoras() CLASS Seeders

   local cPath       := cPatDat( .t. )
   local dbfTipImp

   if ( file( cPath + "TipImp.old" ) )
      RETURN ( self )
   end if

   if !( file( cPath + "TipImp.Dbf" ) )
      msgStop( "El fichero " + cPath + "\TipImp.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPath + "TipImp.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "TipImp", @dbfTipImp ) )
   ( dbfTipImp )->( ordsetfocus(0) )
   
   ( dbfTipImp )->( dbgotop() )
   while !( dbfTipImp )->( eof() )

      getSQLDatabase():Exec( ::getStatementTiposImpresoras( dbfTipImp ) )

      ( dbfTipImp )->( dbSkip() )

   end while

   if dbfTipImp != nil
      ( dbfTipImp )->( dbCloseArea() )
   end if

   frename( cPath + "TipImp.dbf", cPath + "TipImp.old" )
   
RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementTiposImpresoras( dbfTipImp )

   local hCampos        := { "nombre" => quoted( ( dbfTipImp )->cTipImp ) }

RETURN ( ::getInsertStatement( hCampos, "tipos_impresoras" ) )

//---------------------------------------------------------------------------//

METHOD SeederTiposVentas() CLASS Seeders

   local cPath       := cPatDat( .t. )
   local dbfTipVentas

   if ( file( cPath + "TVTA.old" ) )
      RETURN ( self )
   end if

   if !( file( cPath + "TVTA.Dbf" ) )
      msgStop( "El fichero " + cPath + "\TVTA.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPath + "TVTA.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "TVTA", @dbfTipVentas ) )
   ( dbfTipVentas )->( ordsetfocus(0) )
   
   ( dbfTipVentas )->( dbgotop() )
   while !( dbfTipVentas )->( eof() )

      getSQLDatabase():Exec( ::getStatementTiposVentas( dbfTipVentas ) )

      ( dbfTipVentas )->( dbSkip() )

   end while

   if dbfTipVentas != nil
      ( dbfTipVentas )->( dbCloseArea() )
   end if

   frename( cPath + "TVTA.dbf", cPath + "TVTA.old" )
   
RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementTiposVentas( dbfTipVentas )

   local hCampos        := { "codigo" => quoted( ( dbfTipVentas )->cCodMov ),;
                             "nombre"=> quoted( ( dbfTipVentas )->cDesMov ) }

RETURN ( ::getInsertStatement( hCampos, "tipos_ventas" ) )

//---------------------------------------------------------------------------//

METHOD SeederMovimientosAlmacen()

   local dbf
   local cLastRec

   if ( file( cPatEmp( , .t. ) + "RemMovT.old" ) )
      RETURN ( self )
   end if

   if !( file( cPatEmp( , .t. ) + "RemMovT.Dbf" ) )
      msgStop( "El fichero " + cPatEmp( , .t. ) + "\RemMovT.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPatEmp( , .t. ) + "RemMovT.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "RemMovT", @dbf ) )
   
   ( dbf )->( ordsetfocus( 0 ) )

   cLastRec       := alltrim( str( ( dbf )->( lastrec() ) ) )

   ( dbf )->( dbgotop() )

   while !( dbf )->( eof() )

      ::oMsg:SetText( "Seeder de movimientos de almac�n " + alltrim( str( ( dbf )->( recno() ) ) ) + " de " + cLastRec )
      
      getSQLDatabase():Exec( ::getStatementSeederMovimientosAlmacen( dbf ) )

      ( dbf )->( dbSkip() )

      sysrefresh()

   end while

   if dbf != nil
      ( dbf )->( dbCloseArea() )
   end if

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD SeederMovimientosAlmacenLineas()

   local dbf
   local cLastRec

   if ( file( cPatEmp( , .t. ) + "HisMov.old" ) )
      RETURN ( self )
   end if

   if !( file( cPatEmp( , .t. ) + "HisMov.Dbf" ) )
      msgStop( "El fichero " + cPatEmp( , .t. ) + "\HisMov.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPatEmp( , .t. ) + "HisMov.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "HisMov", @dbf ) )
   
   ( dbf )->( ordsetfocus(0) )

   cLastRec       := alltrim( str( ( dbf )->( lastrec() ) ) )

   ( dbf )->( dbgotop() )

   while !( dbf )->( eof() )
      
      ::oMsg:SetText( "Seeder de l�neas de movimientos de almac�n " + alltrim( str( ( dbf )->( recno() ) ) ) + " de " + cLastRec )

      getSQLDatabase():Exec( ::getStatementSeederMovimientosAlmacenLineas( dbf ) )

      ( dbf )->( dbSkip() )

      sysrefresh()

   end while

   if dbf != nil
      ( dbf )->( dbCloseArea() )
   end if

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementSeederUsuarios( dbf )

   local hCampos  := {  "uuid" =>               quoted( ( dbf )->Uuid ),;
                        "nombre" =>             quoted( capitalize( ( dbf )->cNbrUse ) ),;
                        "codigo" =>             quoted( ( dbf )->cCodUse ),;
                        "password" =>           quoted( SQLUsuariosModel():Crypt( ( dbf )->cClvUse ) ) }

RETURN ( ::getInsertStatement( hCampos, "usuarios" ) )

//---------------------------------------------------------------------------//

METHOD getStatementSeederMovimientosAlmacen( dbfRemMov )

   local hCampos  := {  "empresa" =>            quoted( cCodEmp() ),;
                        "delegacion" =>         if( !empty( ( dbfRemMov )->cCodDlg ), quoted( ( dbfRemMov )->cCodDlg ), '00' ),;
                        "usuario" =>            quoted( ( dbfRemMov )->cCodUsr ),;
                        "uuid" =>               quoted( ( dbfRemMov )->cGuid ),;
                        "numero" =>             quoted( rjust( ( dbfRemMov )->nNumRem, "0", 6 ) ),;
                        "tipo_movimiento" =>    quoted( ( dbfRemMov )->nTipMov ),;
                        "fecha_hora" =>         quoted( DateTimeFormatTimestamp( ( dbfRemMov )->dFecRem, ( dbfRemMov )->cTimRem ) ),;
                        "almacen_origen" =>     quoted( ( dbfRemMov )->cAlmOrg ),;
                        "almacen_destino" =>    quoted( ( dbfRemMov )->cAlmDes ),;
                        "grupo_movimiento" =>   quoted( ( dbfRemMov )->cCodMov ),;
                        "agente" =>             quoted( ( dbfRemMov )->cCodAge ),;
                        "divisa" =>             quoted( ( dbfRemMov )->cCodDiv ),;
                        "divisa_cambio" =>      quoted( ( dbfRemMov )->nVdvDiv ),;
                        "comentarios" =>        quoted( ( dbfRemMov )->cComMov ) }

RETURN ( ::getInsertStatement( hCampos, "movimientos_almacen" ) )

//---------------------------------------------------------------------------//

METHOD getStatementSeederMovimientosAlmacenLineas( dbfHisMov )

   local hCampos  

   hCampos        := {  "uuid"                     => quoted( ( dbfHisMov )->cGuid ),;
                        "parent_uuid"              => quoted( ( dbfHisMov )->cGuidPar ),;
                        "codigo_articulo"          => quoted( ( dbfHisMov )->cRefMov ),;
                        "nombre_articulo"          => quoted( ( dbfHisMov )->cNomMov ),;
                        "codigo_primera_propiedad" => quoted( ( dbfHisMov )->cCodPr1 ),;
                        "valor_primera_propiedad"  => quoted( ( dbfHisMov )->cValPr1 ),;
                        "codigo_segunda_propiedad" => quoted( ( dbfHisMov )->cCodPr2 ),;
                        "valor_segunda_propiedad"  => quoted( ( dbfHisMov )->cValPr2 ),;
                        "lote"                     => quoted( ( dbfHisMov )->cLote ),;
                        "bultos_articulo"          => quoted( str( ( dbfHisMov )->nBultos ) ),;
                        "cajas_articulo"           => quoted( str( ( dbfHisMov )->nCajMov ) ),;
                        "unidades_articulo"        => quoted( str( ( dbfHisMov )->nUndMov ) ),;
                        "precio_articulo"          => quoted( str( ( dbfHisMov )->nPreDiv ) ) }

RETURN ( ::getInsertStatement( hCampos, "movimientos_almacen_lineas" ) )

//---------------------------------------------------------------------------//

METHOD SeederMovimientosAlmacenSeries()

   local dbf
   local cLastRec

   if ( file( cPatEmp( , .t. ) + "MovSer.Old" ) )
      RETURN ( self )
   end if

   if !( file( cPatEmp( , .t. ) + "MovSer.Dbf" ) )
      msgStop( "El fichero " + cPatEmp( , .t. ) + "\MovSer.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPatEmp( , .t. ) + "MovSer.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "MovSer", @dbf ) )
   
   ( dbf )->( ordsetfocus(0) )
   
   cLastRec       := alltrim( str( ( dbf )->( lastrec() ) ) )

   ( dbf )->( dbgotop() )

   while !( dbf )->( eof() )
      
      ::oMsg:SetText( "Seeder de l�neas de movimientos de almac�n " + alltrim( str( ( dbf )->( recno() ) ) ) + " de " + cLastRec )

      getSQLDatabase():Exec( ::getStatementSeederMovimientosAlmacenLineasNumerosSeries( dbf ) )

      ( dbf )->( dbSkip() )

      sysrefresh()

   end while

   if dbf != nil
      ( dbf )->( dbCloseArea() )
   end if

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementSeederMovimientosAlmacenLineasNumerosSeries( dbfMovSer )

   local hCampos        

   hCampos        := {  "uuid"            => quoted( ( dbfMovSer )->cGuid ),;
                        "parent_uuid"     => quoted( ( dbfMovSer )->cGuidPar ),;
                        "numero_serie"    => quoted( ( dbfMovSer )->cNumSer ) }

RETURN ( ::getInsertStatement( hCampos, SQLMovimientosAlmacenLineasNumerosSeriesModel():getTableName() ) )

//---------------------------------------------------------------------------//

STATIC FUNCTION SincronizaRemesasMovimientosAlmacen()

   local oBlock
   local oError
   local dbfRemMov
   local dbfHisMov
   local dbfMovSer
   local cPath    := ( fullCurDir() + cPatEmp() + "\" )

   oBlock         := ErrorBlock( {| oError | ApoloBreak( oError ) } )
   BEGIN SEQUENCE

   dbUseArea( .t., cLocalDriver(), ( cPath + "RemMovT.Dbf" ), cCheckArea( "RemMovT", @dbfRemMov ), .f. ) 
   ( dbfRemMov )->( ordListAdd( cPath + "RemMovT.Cdx"  ) )

   dbUseArea( .t., cLocalDriver(), ( cPath + "HisMov.Dbf" ), cCheckArea( "HisMov", @dbfHisMov ), .f. ) 
   ( dbfHisMov )->( ordListAdd( cPath + "HisMov.Cdx"  ) )

   dbUseArea( .t., cLocalDriver(), ( cPath + "MovSer.Dbf" ), cCheckArea( "MovSer", @dbfMovSer ), .f. )  
   ( dbfMovSer )->( ordListAdd( cPath + "MovSer.Cdx"  ) )

   // Cabeceras-------------------------------------------------------------------

   ( dbfRemMov )->( ordSetFocus( 0 ) )

   ( dbfRemMov )->( dbGoTop() )
   while !( dbfRemMov )->( eof() )

      if empty( ( dbfRemMov )->cGuid )
         ( dbfRemMov )->cGuid          := win_uuidcreatestring()
      end if

      ( dbfRemMov )->( dbSkip() )

   end while

   ( dbfRemMov )->( ordSetFocus( 1 ) )

   // Lineas----------------------------------------------------------------------

   ( dbfHisMov )->( ordSetFocus( 0 ) )

   ( dbfHisMov )->( dbGoTop() )
   while !( dbfHisMov )->( eof() )

      if empty( ( dbfHisMov )->cGuid )
         ( dbfHisMov )->cGuid          := win_uuidcreatestring()
      end if

      if empty( ( dbfHisMov )->cGuidPar )
         ( dbfHisMov )->cGuidPar       := retfld( str( ( dbfHisMov )->nNumRem ) + ( dbfHisMov )->cSufRem, dbfRemMov, "cGuid", "cNumRem" )
      end if

      ( dbfHisMov )->( dbSkip() )

   end while

   ( dbfHisMov )->( ordSetFocus( 1 ) )

   // Series----------------------------------------------------------------------
   
   ( dbfMovSer )->( dbGoTop() )

   while !( dbfMovSer )->( eof() )

      if empty( ( dbfMovSer )->cGuid )
         ( dbfMovSer )->cGuid          := win_uuidcreatestring()
      end if

      //Vas por aqui----------------------------------------------------------

      if empty( ( dbfMovSer )->cGuidPar )
         ( dbfMovSer )->cGuidPar       := RetFld( Str( ( dbfMovSer )->nNumRem ) + ( dbfMovSer )->cSufRem + Str( ( dbfMovSer )->nNumLin, 9 ), dbfHisMov, "cGuid", "cNumRem" )
      end if

      ( dbfMovSer )->( dbSkip() )

   end while

   RECOVER USING oError
      msgstop( "Imposible abrir todas las bases de datos de movimientos de almac�n" + CRLF + ErrorMessage( oError ) )
   END SEQUENCE
   ErrorBlock( oBlock )

   CLOSE ( dbfRemMov )
   CLOSE ( dbfHisMov )
   CLOSE ( dbfMovSer )

RETURN NIL

//---------------------------------------------------------------------------//

METHOD SeederLenguajes()

   local cPath       := cPatDat( .t. )
   local dbfLenguajes

   if ( file( cPath + "LENGUAJE.old" ) )
      RETURN ( self )
   end if

   if !( file( cPath + "LENGUAJE.Dbf" ) )
      msgStop( "El fichero " + cPath + "\LENGUAJE.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPath + "LENGUAJE.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "LENGUAJE", @dbfLenguajes ) )
   ( dbfLenguajes )->( ordsetfocus(0) )
   
   ( dbfLenguajes )->( dbgotop() )
   while !( dbfLenguajes )->( eof() )

      getSQLDatabase():Exec( ::getStatementLenguajes( dbfLenguajes ) )

      ( dbfLenguajes )->( dbSkip() )

   end while

   if dbfLenguajes != nil
      ( dbfLenguajes )->( dbCloseArea() )
   end if

   frename( cPath + "LENGUAJE.dbf", cPath + "LENGUAJE.old" )
   
RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementLenguajes( dbfLenguajes )

   local hCampos  := { "uuid"       => quoted( win_uuidcreatestring() ),;
                        "codigo"    => quoted( ( dbfLenguajes )->cCodLen ),;
                        "nombre"    => quoted( ( dbfLenguajes )->cNomLen ) }

RETURN ( ::getInsertStatement( hCampos, "lenguajes" ) )

//---------------------------------------------------------------------------//

METHOD SeederProvincias()

   if !file( ::getFullFileProvincias() )
      ::oMsg:SetText( "Fichero " + ::getFullFileProvincias() + " no encontrado" )
      RETURN ( Self )
   end if 

   ::cStmProvincias                    := memoread( ::getFullFileProvincias() )

   ::oMsg:SetText( "Fichero " + ::getFullFileProvincias() + " cargado correctamente" )

   if Empty( ::cStmProvincias )
      ::oMsg:SetText( "No hay provincias a importar" )
      return ( self )
   end if

   ::oMsg:SetText( "Importando provincias" )

   getSQLDatabase():Exec( ::cStmProvincias )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD SeederCodigosPostales()

   if !file( ::getFullFileCodigosPostales() )
      ::oMsg:SetText( "Fichero " + ::getFullFileCodigosPostales() + " no encontrado" )
      RETURN ( Self )
   end if 

   ::cStmCodigosPostales               := memoread( ::getFullFileCodigosPostales() )

   ::oMsg:SetText( "Fichero " + ::getFullFileCodigosPostales() + " cargado correctamente" )

   if Empty( ::cStmCodigosPostales )
      ::oMsg:SetText( "No hay c�digos postales a importar" )
      return ( self )
   end if

   ::oMsg:SetText( "Importando c�digos postales" )

   getSQLDatabase():Exec( ::cStmCodigosPostales )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD SeederTransportistas()

   local cPath    := ( fullCurDir() + cPatEmp() + "\" )
   local dbfTransportista

   if ( file( cPath + "Transpor.old" ) )
      RETURN ( self )
   end if

   if !( file( cPath + "Transpor.Dbf" ) )
      msgStop( "El fichero " + cPath + "\Transpor.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPath + "Transpor.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "Transpor", @dbfTransportista ) )
   ( dbfTransportista )->( ordsetfocus(0) )
   
   ( dbfTransportista )->( dbgotop() )
   while !( dbfTransportista )->( eof() )

      getSQLDatabase():Exec( ::getStatementTransportistas( dbfTransportista ) )
      getSQLDatabase():Exec( ::getStatementDireccionTransportistas( dbfTransportista ) )

      ( dbfTransportista )->( dbSkip() )

   end while

   if dbfTransportista != nil
      ( dbfTransportista )->( dbCloseArea() )
   end if

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementTransportistas( dbfTransportista )

   local hCampos        := {  "uuid"   => quoted( ( dbfTransportista )->Uuid ),;
                              "nombre" => quoted( ( dbfTransportista )->cNomTrn ),;
                              "dni"    => quoted( ( dbfTransportista )->cDniTrn ) }

RETURN ( ::getInsertStatement( hCampos, "transportistas" ) )

//---------------------------------------------------------------------------//

METHOD getStatementDireccionTransportistas( dbfTransportista )

   local hCampos        := {  "uuid"            => quoted( win_uuidcreatestring() ),;
                              "parent_uuid"     => quoted( ( dbfTransportista )->Uuid ),;
                              "nombre"          => quoted( ( dbfTransportista )->cNomTrn ),;
                              "direccion"       => quoted( ( dbfTransportista )->cDirTrn ),;
                              "poblacion"       => quoted( ( dbfTransportista )->cLocTrn ),;
                              "provincia"       => quoted( ( dbfTransportista )->cPrvTrn ),;
                              "codigo_postal"   => quoted( ( dbfTransportista )->cCdpTrn ),;
                              "telefono"        => quoted( ( dbfTransportista )->cTlfTrn ),;
                              "movil"           => quoted( ( dbfTransportista )->cMovTrn ) }

RETURN ( ::getInsertStatement( hCampos, "direcciones" ) )

//---------------------------------------------------------------------------//

METHOD SeederCamposExtra() CLASS Seeders

   local dbf
   local cPath    := ( fullCurDir() + cPatEmp() + "\" )

   if !( file( cPath + "CampoExtra.Dbf" ) )
      msgStop( "El fichero " + cPath + "\CampoExtra.Dbf no se ha localizado", "Atenci�n" )  
      RETURN ( self )
   end if 

   USE ( cPath + "CampoExtra.Dbf" ) NEW VIA ( 'DBFCDX' ) SHARED ALIAS ( cCheckArea( "CampoExtra", @dbf ) )
   ( dbf )->( ordsetfocus( 0 ) )

   ( dbf )->( dbeval( {|| getSQLDatabase():Exec( ::getStatementCamposExtra() ) } ) )

   ( dbf )->( dbCloseArea() )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD getStatementCamposExtra() CLASS Seeders

   local aTipo    := {  "Texto", "N�mero", "Fecha", "L�gico", "Lista" } 
   local hCampos  := {  "uuid"      => quoted( field->Uuid ),;
                        "nombre"    => quoted( field->cNombre ),;
                        "requerido" => if( field->lRequerido, '1', '0' ),;
                        "tipo"      => quoted( aTipo[ minmax( field->nTipo, 1, 5 ) ] ),;
                        "longitud"  => quoted( field->nLongitud ),;
                        "decimales" => quoted( field->nDecimales ),;
                        "lista"     => quoted( field->mDefecto ) }

RETURN ( ::getInsertStatement( hCampos, "campos_extra" ) )

//---------------------------------------------------------------------------//
