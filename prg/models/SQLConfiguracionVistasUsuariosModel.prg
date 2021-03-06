#include "fivewin.ch"
#include "factu.ch" 
#include "hdo.ch"

//---------------------------------------------------------------------------//

CLASS SQLConfiguracionVistasModel FROM SQLBaseModel

   DATA cTableName                           INIT "configuracion_vistas"

   DATA cConstraints                         INIT  "PRIMARY KEY ( id ), "                       + ; 
                                                      "UNIQUE KEY ( empresa, usuario, view_type, view_name )"

   METHOD getColumns()

   METHOD delete( cViewName )

   METHOD get( cViewType, cViewName )
   METHOD set( cViewType, cViewName, cBrowseState, cColumnOrder, cOrientation, idToFind )

   METHOD getFieldName( cViewName )
   METHOD getState( cViewName )

   METHOD getColumnOrder( cViewName )        INLINE ( ::getFieldName( cViewName, "column_order" ) )
   METHOD setColumnOrder( cViewName, cColumnOrder ) ;
                                             INLINE ( ::set( cViewName, nil, cColumnOrder ) ) 

   METHOD getColumnOrientation( cViewName )  INLINE ( ::getFieldName( cViewName, "column_orientation" ) )
   METHOD setColumnOrientation( cViewName, cColumnOrientation ) ;
                                             INLINE ( ::set( cViewName, nil, nil, cColumnOrientation ) ) 

   METHOD getId( cViewName )                 INLINE ( ::getFieldName( cViewName, "id_to_find" ) )
   METHOD setId( cViewName, nId )            INLINE ( ::set( cViewName, nil, nil, nil, nId ) ) 

END CLASS

//---------------------------------------------------------------------------//

METHOD getColumns()

   ::hColumns        := {  "id"                 =>  { "create" => "INTEGER AUTO_INCREMENT"      },;
                           "empresa"            =>  { "create" => "CHAR ( 4 ) NOT NULL"         },;
                           "usuario"            =>  { "create" => "CHARACTER ( 3 ) NOT NULL"    },;
                           "view_type"          =>  { "create" => "VARCHAR( 40 ) NOT NULL"      },;
                           "view_name"          =>  { "create" => "VARCHAR( 60 ) NOT NULL"      },;
                           "browse_state"       =>  { "create" => "TEXT"                        },;
                           "column_order"       =>  { "create" => "VARCHAR( 60 )"               },;
                           "column_orientation" =>  { "create" => "CHARACTER ( 1 )"	            },;
                           "id_to_find"         =>  { "create" => "INT"                         } }

RETURN ( ::hColumns )

//---------------------------------------------------------------------------//

METHOD get( cViewType, cViewName )

   local aFetch
   local cSentence   := "SELECT browse_state, column_order, column_orientation, id_to_find "       + ;
                           "FROM " + ::cTableName + " "                                            + ;
                           "WHERE "                                                                + ;
                              "empresa = " + quoted( cCodEmp() ) + " AND "                         + ; 
                              "usuario = " + quoted( Auth():Codigo() ) + " AND "                         + ;
                              "view_type = " + quoted( cViewType ) + " AND "                       + ;
                              "view_name = " + quoted( cViewName ) + " "                           + ;
                           "LIMIT 1"

   aFetch            := getSQLDatabase():selectFetchHash( cSentence, .f. )

   if hb_isarray( aFetch ) .and. !empty( aFetch )
    	RETURN ( atail( aFetch ) )
   end if 

RETURN ( nil )
       
//---------------------------------------------------------------------------//

METHOD getFieldName( cViewType, cViewName, cFieldName )

   local aFetch      := ::get( cViewType, cViewName )

   if empty( aFetch )
      RETURN ( nil )
   end if 

RETURN ( hget( aFetch, cFieldName ) )
       
//---------------------------------------------------------------------------//

METHOD getState( cViewType, cViewName )

   local cState
   local hFetch   := ::get( cViewType, cViewName )

   if empty( hFetch )
      RETURN ( nil )
   end if 
   
   cState      := hget( hFetch, "browse_state" )
   if empty( cState )
      RETURN ( nil )
   end if 

   cState      := strtran( cState, '\"', '"' )

RETURN ( cState )
       
//---------------------------------------------------------------------------//

METHOD set( cViewType, cViewName, cBrowseState, cColumnOrder, cOrientation, idToFind )

   local cSentence      

   if empty( cCodEmp() )
      RETURN ( Self )
   end if 

   if empty( Auth():Codigo() )
      RETURN ( Self )
   end if 

   if empty( cViewType )
      RETURN ( Self )
   end if 

   if empty( cViewName )
      RETURN ( Self )
   end if 
   
   if empty( cBrowseState )
      RETURN ( Self )
   end if 

   cSentence            := "INSERT INTO " + ::cTableName + " ( "                               
   cSentence            +=       "empresa, "                                               
   cSentence            +=       "usuario, "                                               
   cSentence            +=       "view_type, "                                               
   cSentence            +=       "view_name, "     

   if !empty( cBrowseState )                                          
      cBrowseState      := getSQLDatabase():escapeStr( cBrowseState ) 
      cSentence         +=       "browse_state, "                                            
   end if 

   if !empty( cColumnOrder )
      cSentence         +=       "column_order, "                                          
   end if 
   
   if !empty( cOrientation )
      cSentence         +=       "column_orientation, "                                           
   end if 
   
   if !empty( idToFind )
      cSentence         +=       "id_to_find, "                                               
   end if 

   cSentence            := chgAtEnd( cSentence, ' ) ', 2 )

   cSentence            += "VALUES ( "                                                    
   cSentence            +=       quoted( cCodEmp() ) + ", "                          
   cSentence            +=       quoted( Auth():Codigo() ) + ", "                          
   cSentence            +=       quoted( cViewType ) + ", "                          
   cSentence            +=       quoted( cViewName ) + ", "                                  

   if !empty( cBrowseState )                                          
      cSentence         +=       quoted( cBrowseState ) + ", "                               
   end if 

   if !empty( cColumnOrder )
      cSentence         +=       quoted( cColumnOrder ) + ", "                           
   end if 

   if !empty( cOrientation )
      cSentence         +=       quoted( cOrientation ) + ", "                           
   end if 

   if !empty( idToFind )
      cSentence         +=       alltrim( cvaltostr( idToFind ) ) + ", "
   end if

   cSentence            := chgAtEnd( cSentence, ' ) ', 2 )

   cSentence            += "ON DUPLICATE KEY "

   cSentence            += "UPDATE "                                                      
   
   if !empty( cBrowseState )                                          
      cSentence         +=    "browse_state = " + quoted( cBrowseState ) + ", "           
   end if

   if !empty( cColumnOrder )
      cSentence         +=    "column_order = " + quoted( cColumnOrder ) + ", "           
   end if

   if !empty( cOrientation )
      cSentence         +=    "column_orientation = " + quoted( cOrientation ) + ", "            
   end if

   if !empty( idToFind )
      cSentence         +=    "id_to_find = " + alltrim( cvaltostr( idToFind ) ) + ", "
   end if

   cSentence            := chgAtEnd( cSentence, '', 2 )

   getSQLDatabase():Exec( cSentence  )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD delete( cViewType, cViewName )

   local cSentence   := "DELETE FROM " + ::cTableName + " "                                  + ;
                           "WHERE "                                                          + ;
                              "empresa = " + quoted( cCodEmp() ) + " AND "                   + ; 
                              "usuario = " + quoted( Auth():Codigo() ) + " AND "                   + ;
                              "view_type = " + quoted( cViewType ) + " AND "                 + ;
                              "view_name = " + quoted( cViewName ) + " "         

   getSQLDatabase():Exec( cSentence  )

RETURN ( nil )
       
//---------------------------------------------------------------------------//
