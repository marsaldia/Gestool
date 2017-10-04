#include "fivewin.ch"
#include "factu.ch" 
#include "hdo.ch"

//---------------------------------------------------------------------------//

CLASS TiposNotasModel FROM SQLBaseModel

   DATA cColumnCode             INIT "nombre"

	DATA cTableName              INIT "tipos_notas"

   METHOD New()

END CLASS

//---------------------------------------------------------------------------//

METHOD New()

   ::hColumns              := {  "id"        => {  "create"    => "INTEGER PRIMARY KEY AUTO_INCREMENT"   ,;
                                                   "text"      => "Identificador"                        ,;
                                                   "header"    => "Id"                                   ,;
                                                   "visible"   => .t.                                    ,;
                                                   "width"     => 40}                                    ,;
                                 "nombre"    => {  "create"    => "VARCHAR( 30 ) NOT NULL"               ,;
                                                   "text"      => "Tipo de la nota"                      ,;
                                                   "header"    => "Tipo"                                 ,;
                                                   "visible"   => .t.                                    ,;
                                                   "width"     => 400                                    ,;
                                                   "field"     => "cTipo"                                ,;
                                                   "type"      => "C"                                    ,;
                                                   "len"       => 30}                                    }

   ::Super:New()

Return ( Self )

//---------------------------------------------------------------------------//
