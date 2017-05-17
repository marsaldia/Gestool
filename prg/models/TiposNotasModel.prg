#include "fivewin.ch"
#include "factu.ch" 
#include "hdo.ch"

//---------------------------------------------------------------------------//

CLASS TiposNotasModel FROM SQLBaseModel

	DATA cTableName              INIT "tipos_notas"

   DATA cDbfTableName

   DATA hColumns

   METHOD   New()

   METHOD   arrayTiposNotas()

END CLASS

//---------------------------------------------------------------------------//

METHOD New()

   ::cDbfTableName            	:= "TipoNotas"

   ::hColumns                 	:= { 	"id"     => {  "create"    => "INTEGER PRIMARY KEY AUTOINCREMENT",;
                                                      "text"      => "Identificador" ,;
                                                      "dbfField"  => "" },;
                                       "tipo"   => {  "create"    => "VARCHAR( 30 ) NOT NULL",;
                                                      "text"      => "Tipo de la nota",;
                                                      "dbfField"  => "cTipo" } }

::Super:New()

Return ( Self )

//---------------------------------------------------------------------------//

METHOD arrayTiposNotas()

   local cSentence         := "SELECT tipo FROM " + ::cTableName
   local aSelect           := ::selectFetchArray( cSentence )

Return ( aSelect )

//---------------------------------------------------------------------------//