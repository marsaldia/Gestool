#include "fivewin.ch"
#include "factu.ch" 
#include "hdo.ch"

//---------------------------------------------------------------------------//

CLASS SQLFiltrosModel FROM SQLBaseModel

   DATA cTableToFilter

   METHOD setTableToFilter( cTableToFilter )          INLINE ( ::cTableToFilter := cTableToFilter )
   METHOD getTableToFilter()                          INLINE ( ::cTableToFilter )

   DATA cTableName                                    INIT "filtros"

   METHOD getColumns()

   METHOD getFilters( cTabla )

   METHOD getFilterField( cField, cNombre, cTabla )   

   METHOD getFilterSentence( cNombre, cTabla )        INLINE ( ::getFilterField( 'filtro', cNombre, cTabla ) )

   METHOD getId( cNombre, cTabla )                    INLINE ( ::getFilterField( 'id', cNombre, cTabla ) )

END CLASS

//---------------------------------------------------------------------------//

METHOD getColumns()

   hset( ::hColumns, "id",       {  "create"    => "INTEGER PRIMARY KEY AUTO_INCREMENT" } )

   hset( ::hColumns, "tabla",    {  "create"    => "CHAR( 50 ) NOT NULL"                  ,;
                                    "default"   => {|| if( empty( ::cTableToFilter ), space( 50 ), ::cTableToFilter ) } } ) 

   hset( ::hColumns, "nombre",   {  "create"    => "CHAR( 50 ) NOT NULL"                  ,;
                                    "default"   => {|| space( 50 ) } }                    ) 

   hset( ::hColumns, "filtro",   {  "create"    => "TEXT"                                 ,;
                                    "default"   => {|| space( 250 ) } }                   )                     

RETURN ( ::hColumns )

//---------------------------------------------------------------------------//

METHOD getFilters( cTabla )

   local aFilters    := {}
   local cSentence   

   DEFAULT cTabla    := ::getTableToFilter()

   if empty( cTabla )
      RETURN ( aFilters )   
   end if 

   cSentence         := "SELECT nombre FROM " + ::getTableName() + " WHERE tabla = " + quoted( cTabla ) 

   aFilters          := ::getDatabase():selectFetchArrayOneColumn( cSentence )

RETURN ( aFilters )   

//---------------------------------------------------------------------------//

METHOD getFilterField( cField, cNombre, cTabla )

   local aFields     := {}
   local cSentence   

   DEFAULT cTabla    := ::getTableToFilter()

   if empty( cTabla )
      RETURN ( aFields )   
   end if 

   cSentence         := "SELECT " + cField + " FROM " + ::getTableName()   + space( 1 ) + ;
                           "WHERE tabla = " + quoted( cTabla )             + space( 1 ) + ;
                              "AND nombre = " + quoted( cNombre )          + space( 1 ) + ;
                           "LIMIT 1"

   aFields           := ::getDatabase():selectFetchArrayOneColumn( cSentence )

RETURN ( atail( aFields ) )

//---------------------------------------------------------------------------//


