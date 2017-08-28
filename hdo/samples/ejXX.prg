/*
 * Proyecto: HDO_GENERAL
 * Fichero: ejXX.prg
 * Autor: Manu Exposito
 * Fecha: 15/01/2017
 * Descripcion: Traspasa test.dbf de los ejemplos de Harbour a SQL.
 *              Si no existe la bases de datos hdodemo la crea.
 *              Si no existe la tabla test la crea.
 */

//------------------------------------------------------------------------------

#include "hdo.ch"

//------------------------------------------------------------------------------

//#define SQLITE
#define MYSQL

#ifdef SQLITE
	REQUEST RDLSQLITE
	#define _DBMS	"sqlite"
	#define _DB 	"hdodemo.db"
	#define _CONN
#else
	#ifdef MYSQL
		REQUEST RDLMYSQL
		#define _DBMS	"mysql"
		#define _DB		"hdodemo"
		#define _CONN 	"127.0.0.1", "root", "root"
	#endif
#endif

//------------------------------------------------------------------------------

#define ID_CARGA	500

//------------------------------------------------------------------------------
// Programa principal

procedure mainxx()

    local oDb, e
#ifdef SQLITE
	#define AUTO_INCREMENT ""
#else
    #define AUTO_INCREMENT "AUTO_INCREMENT"
#endif

	local cCreaTabla := "CREATE TABLE IF NOT EXISTS test ( "			+ ;
									"idreg INTEGER PRIMARY KEY " 		+ ;
											  AUTO_INCREMENT + ","		+ ;
									"first    VARCHAR( 20 ),"     		+ ;
									"last     VARCHAR( 20 ),"     		+ ;
									"street   VARCHAR( 30 ),"     		+ ;
									"city     VARCHAR( 30 ),"     		+ ;
									"state    VARCHAR( 2 ),"      		+ ;
									"zip      VARCHAR( 20 ),"     		+ ;
									"hiredate DATE,"          	 	 	+ ;
									"married  BIT,"       	  		    + ;
									"age      INTEGER,"       	  		+ ;
									"salary   DECIMAL( 9, 2 ),"   		+ ;
									"notes    VARCHAR( 70 ) );"
	
	oDb := THDO():new( _DBMS )

    if oDb:connect( _DB, _CONN )
		
        msg( "demo.db abierta" )

        try
            oDb:exec( cCreaTabla )
            msg( "Traspaso de datos..." )
            traspasa( oDb )
        catch  e
            eval( errorblock(), e )
        end

    endif

    oDb:disconnect()
	msg( "demo.db cerrada" )

return

//------------------------------------------------------------------------------
// Usa sentencias preparadas en el lado del servidor y transacciones.

static procedure traspasa( oDb )

    local n := 0
    local oInsert
    local first, last, street, city, state, zip, hiredate, married, age, salary, notes

    local cSentencia := "INSERT INTO test ( first, last, street, city, state, zip, "  + ;
									   "hiredate, married, age, salary, notes ) " + ;
					    "VALUES ( ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ? );"
	
    if file( "test.dbf" )
		
        use test new
		
        oInsert := oDb:prepare( cSentencia ) // Crea el objeto y prepara la sentencia

        // Vincula las variables harbour con cada una de las "?" por su posicion
        oInsert:bindParam(  1, @first  )
        oInsert:bindParam(  2, @last  )
        oInsert:bindParam(  3, @street )
        oInsert:bindParam(  4, @city )
        oInsert:bindParam(  5, @state )
        oInsert:bindParam(  6, @zip )
        oInsert:bindParam(  7, @hiredate )
        oInsert:bindParam(  8, @married )
        oInsert:bindParam(  9, @age )
        oInsert:bindParam( 10, @salary )
        oInsert:bindParam( 11, @notes )
		
       oDb:beginTransaction()
	
		while n < ID_CARGA	
	
			while test->( !eof() )
				first    := test->first
				last     := test->last
				street   := test->street
				city     := test->city
				state    := test->state
				zip      := test->zip
#ifdef SQLITE
				hiredate := hb_dtoc( test->hiredate, "yyyy-mm-dd" )
				married  := if( test->married, 1, 0 )
#else
				hiredate := test->hiredate
				married  := test->married
#endif
				age      := test->age
				salary   := test->salary
				notes    := test->notes
		
				oInsert:execute()
		
				@ 10, 10 say str( ++n )
		
				test->( dbskip( 1 ) )
			end
	
			test->( dBgoTop() )
		end
        oDb:commit()
		
        oInsert:free()
    else
        msg( "Fichero test.dbf no existe" )
    endif

return

//------------------------------------------------------------------------------
