#include "fiveWin.ch"
#include "hdo.ch"
#include "hdomysql.ch"

//----------------------------------------------------------------------------//

static oSqlDatabase

//----------------------------------------------------------------------------//

CLASS SQLDatabase

   DATA oConexion

   DATA cPathDatabaseMySQL    
   
   DATA cDatabaseMySQL    

   DATA cIpMySQL
   DATA cUserMySQL
   DATA cPasswordMySQL
   DATA nPortMySQL

   DATA aModels                           INIT {}

   METHOD New()                           CONSTRUCTOR
   
   METHOD Conexion()                      INLINE ( ::oConexion )
   METHOD Connect() 
   METHOD ConnectWithoutDataBase()
   METHOD Disconnect()                    INLINE ( if( !empty( ::oConexion ), ::oConexion:disconnect(), ) )

   METHOD Ping()                          INLINE ( if( !empty( ::oConexion ), ::oConexion:Ping(), ) )

   METHOD isParseError()

   METHOD Exec( cSql )             
   METHOD Execs( aSql ) 
   METHOD TransactionalExec( cSql )       INLINE ( ::BeginTransaction(), ::Exec( cSql ), ::Commit() )            
   METHOD Query( cSql )                   INLINE ( if( !empty( ::oConexion ), ::oConexion:Query( cSql ),  msgstop( "No ha conexiones disponibles" ) ) )
   METHOD Prepare( cSql )                 INLINE ( if( !empty( ::oConexion ), ::oConexion:Prepare( cSql ),  msgstop( "No ha conexiones disponibles" ) ) )
   METHOD Parse( cSql )                   INLINE ( if( !empty( ::oConexion ), ::oConexion:Parse( cSql ),  msgstop( "No ha conexiones disponibles" ) ) )

   METHOD escapeStr( cEscape )            INLINE ( if( !empty( ::oConexion ), ::oConexion:escapeStr( cEscape ), cEscape ) )

   METHOD selectFetch( cSql )
   METHOD selectFetchHash( cSentence, attributePad )     INLINE ::selectFetch( cSentence, FETCH_HASH, attributePad )
   METHOD selectFetchArray( cSentence, attributePad )    INLINE ::selectFetch( cSentence, FETCH_ARRAY, attributePad )

   METHOD selectFetchToJson( cSentence )
   
   METHOD selectFetchArrayOneColumn( cSentence )

   METHOD selectHashList( cSentence )

   METHOD selectValue( cSql )

   METHOD fetchRowSet( cSentence )

   METHOD lastInsertId()                  INLINE ( if( !empty( ::oConexion ), ::oConexion:lastInsertId(), msgstop( "No ha conexiones disponibles" ) ) )

   METHOD beginTransaction()              INLINE ( if( !empty( ::oConexion ), ::oConexion:beginTransaction(),  msgstop( "No ha conexiones disponibles" ) ) )
   METHOD Commit()                        INLINE ( if( !empty( ::oConexion ), ::oConexion:commit(), msgstop( "No ha conexiones disponibles" ) ) )
   METHOD rollBack()                      INLINE ( if( !empty( ::oConexion ), ::oConexion:rollback(),  msgstop( "No ha conexiones disponibles" ) ) )

   METHOD startForeignKey()               VIRTUAL // INLINE ( ::Query( "pragma foreign_keys = ON" ) )
   METHOD endForeignKey()                 VIRTUAL // INLINE ( ::Query( "pragma foreign_keys = OFF" ) )

   METHOD errorInfo()                     INLINE ( if( !empty( ::oConexion ), ::oConexion:errorInfo(), ) )

   METHOD checkModels()   
   METHOD checkModel( oModel )   
   METHOD getSchemaColumns()

   METHOD sayConexionInfo()               INLINE ( "Database : " + ::cDatabaseMySQL + CRLF + ;
                                                   "IP : " + ::cIpMySQL             + CRLF + ;
                                                   "User : " + ::cUserMySQL         + CRLF + ;
                                                   "Password : " + ::cPasswordMySQL + CRLF + ;
                                                   "Port : " + alltrim( str( ::nPortMySQL ) ) )

ENDCLASS

//----------------------------------------------------------------------------//

METHOD New() 

   local aOptions             := { "GESTOOL", "--defaults-file=./my.cnf" }             
   local aGroup               := { "server", "client" }                                 

   ::cPathDatabaseMySQL       := fullCurDir() + "Database\" 

   if !lIsDir( ::cPathDatabaseMySQL )
      makedir( ::cPathDatabaseMySQL )
   end if 

   ::cDatabaseMySQL           := GetPvProfString(  "MySQL",    "Database", "gestool",     cIniAplication() )
   ::cIpMySQL                 := GetPvProfString(  "MySQL",    "Ip",       "127.0.0.1",   cIniAplication() )
   ::cUserMySQL               := GetPvProfString(  "MySQL",    "User",     "root",        cIniAplication() )
   ::cPasswordMySQL           := GetPvProfString(  "MySQL",    "Password", "",            cIniAplication() )
   ::nPortMySQL               := GetPvProfInt(     "MySQL",    "Port",     3306,          cIniAplication() )

   ::oConexion                := THDO():new( "mysql" )

   ::oConexion:setAttribute( ATTR_ERRMODE, .t. )

RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD Connect()

   local lConnect    := .t.

   try
   
      if !empty( ::oConexion )
         
         ::oConexion:setAttribute( MYSQL_OPT_RECONNECT, .t. )

         lConnect    := ::oConexion:Connect( ::cDatabaseMySQL, ::cIpMySQL, ::cUserMySQL, ::cPasswordMySQL, ::nPortMySQL )

      end if 
       
   catch 

      lConnect       := .f.
   
   end

RETURN ( lConnect )    

//----------------------------------------------------------------------------//

METHOD ConnectWithoutDataBase()

   local lConnect    := .t.

   try
   
      if !empty( ::oConexion )
         
         lConnect    := ::oConexion:Connect( nil, ::cIpMySQL, ::cUserMySQL, ::cPasswordMySQL, ::nPortMySQL )

      end if 
       
   catch 

      lConnect       := .f.
   
   end

RETURN ( lConnect )    

//----------------------------------------------------------------------------//

METHOD isParseError( cSentence )

   if empty( cSentence )
      msgstop( "La sentencia esta vacia" )
      RETURN ( .t. )  
   end if  

   if empty( ::oConexion )
      msgstop( "No hay conexiones disponibles" )
      RETURN ( .t. )  
   end if  

   ::oConexion:Ping()

   if !::oConexion:Parse( cSentence )
      msgstop( cSentence, "Error en el comando SQL" )
      RETURN ( .t. )  
   end if 

RETURN ( .f. )

//----------------------------------------------------------------------------//

METHOD Exec( cSql )

   local lExec    := .t.
   local oError

   if ::isParseError( cSql )
      RETURN ( .f. )  
   end if 

   try
   
      ::oConexion:Exec( cSql )
       
   catch oError

      eval( errorBlock(), oError )

      lExec       := .f.
   
   end

RETURN ( lExec )  

//----------------------------------------------------------------------------//

METHOD Execs( sqlSentence )

   if hb_isarray( sqlSentence )
      RETURN ( aeval( sqlSentence, {|cSql| ::Exec( cSql ) } ) ) 
   end if 

RETURN ( ::Exec( sqlSentence ) ) 

//----------------------------------------------------------------------------//

METHOD selectFetch( cSentence, fetchType, attributePad )

   local oError
   local aFetch
   local oStatement

   DEFAULT fetchType    := FETCH_ARRAY
   DEFAULT attributePad := .t.

   if ::isParseError( cSentence )
      RETURN ( nil )  
   end if 

   try 

      oStatement        := ::oConexion:Query( cSentence )

      oStatement:setAttribute( ATTR_STR_PAD, attributePad )
   
      aFetch            := oStatement:fetchAll( fetchType )

   catch oError

      eval( errorBlock(), oError )

   finally

      if !empty( oStatement )
         oStatement:Free()
      end if

   end

   if !empty( aFetch ) .and. hb_isarray( aFetch )
      RETURN ( aFetch )
   end if

RETURN ( nil )

//---------------------------------------------------------------------------//

METHOD selectFetchToJson( cSentence, attributePad )

   local aFetch

   DEFAULT attributePad := .f.

   aFetch               := ::selectFetchHash( cSentence, attributePad )

   if hb_isarray( aFetch )
      RETURN ( hb_jsonencode( aFetch, .t. ) )
   end if 

RETURN ( nil )

//---------------------------------------------------------------------------//

METHOD selectHashList( cSentence )

   local oError
   local oHashList
   local oStatement

   if ::isParseError( cSentence )
      RETURN ( nil )  
   end if  

   try 

      oStatement     := ::oConexion:Query( cSentence )

      oHashList      := TMemList():new( oStatement:fetchAllArray(), oStatement:listColNames( AS_ARRAY_TYPE ) )
   
   catch oError

      eval( errorBlock(), oError )

   finally

      if !empty( oStatement )
         oStatement:Free()
      end if

   end

   if !empty( oHashList )
      RETURN ( oHashList )
   end if

RETURN ( nil )

//---------------------------------------------------------------------------//

METHOD selectValue( cSentence )

   local oError
   local nValue
   local oStatement

   if ::isParseError( cSentence )
      RETURN ( nil )  
   end if  

   try 

      oStatement     := ::oConexion:Query( cSentence )

      oStatement:fetchDirect()
   
      nValue         := oStatement:getValue( 1 )

   catch oError

      eval( errorBlock(), oError )

   finally

      if !empty( oStatement )
         oStatement:Free()
      end if 

   end

RETURN ( nValue )

//---------------------------------------------------------------------------//

METHOD fetchRowSet( cSentence )

   local oError
   local oRowSet
   local oStatement

   if ::isParseError( cSentence )
      RETURN ( nil )  
   end if  

   try 

      oStatement     := ::oConexion:Query( cSentence )

      oRowSet        := oStatement:fetchRowSet()

   catch oError

      eval( errorBlock(), oError )

   end

RETURN ( oRowSet )

//---------------------------------------------------------------------------//

METHOD selectFetchArrayOneColumn( cSentence )

   local uFetch
   local aFetch   
   local aResult  

   aFetch         := ::selectFetchArray( cSentence )

   if !hb_isarray( aFetch )
      RETURN ( nil )
   end if 

   aResult        := array( len( aFetch ) )

   for each uFetch in aFetch 
      aResult[ hb_enumindex() ]  := uFetch[ 1 ] 
   next

RETURN ( aResult )

//---------------------------------------------------------------------------//

METHOD checkModels()

RETURN ( aeval( ::aModels, {|oModel| ::checkModel( oModel ) } ) )

//----------------------------------------------------------------------------//

METHOD checkModel( oModel )

   local aSchemaColumns    := ::getSchemaColumns( oModel )

   if empty( aSchemaColumns )
      ::Exec( oModel:getCreateTableSentence() )
   else
      ::Execs( oModel:getAlterTableSentences( aSchemaColumns ) )
   end if 
  
RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD getSchemaColumns( oModel )

   local oError
   local cSentence
   local oStatement
   local aSchemaColumns

   cSentence               := "SELECT COLUMN_NAME "                              +;
                                 "FROM INFORMATION_SCHEMA.COLUMNS "              +;
                                 "WHERE table_name = " + quoted( oModel:cTableName )

   if ::isParseError( cSentence )
      RETURN ( nil )  
   end if  

   try

      oStatement           := ::oConexion:Query( cSentence )
   
      aSchemaColumns       := oStatement:fetchAll( FETCH_HASH )

   catch oError

      eval( errorBlock(), oError )

   finally

      if !empty( oStatement )
        oStatement:free()
      end if    
   
   end

   if empty( aSchemaColumns ) .or. !hb_isarray( aSchemaColumns )
      RETURN ( nil )
   end if

RETURN ( aSchemaColumns )

//---------------------------------------------------------------------------//

Function getSQLDatabase()

   if empty( oSqlDatabase )
      oSqlDatabase            := SQLDatabase():New()
   end if

RETURN ( oSqlDatabase )

//----------------------------------------------------------------------------//


