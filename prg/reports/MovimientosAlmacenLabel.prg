#include "FiveWin.Ch"
#include "Factu.ch" 
#include "Hdo.ch"
#include "HdoCommon.ch"
#include "FastRepH.ch"

//---------------------------------------------------------------------------//

CLASS MovimientosAlmacenLabelReport FROM SQLBaseReport

   DATA oMovimientosAlmacenRowSet

   DATA oLineasMovimientosAlmacenRowSet

   DATA nLabelsToPrint

   DATA nLabelsPrinted

   DATA nRowsToSkip

   METHOD New( oController )

   METHOD setRowSet( oRowSet )         INLINE ( ::oLineasMovimientosAlmacenRowSet := oRowSet )

   METHOD buildData() 

   METHOD freeData()

   METHOD Synchronize() 

   METHOD skipper()

   METHOD goTop()

   METHOD fieldGet( cField )

   METHOD calculateRowsToSkip()

   METHOD resetLabelsToPrint()      INLINE ( ::nLabelsPrinted := 1,;
                                             ::nLabelsToPrint := ::oLineasMovimientosAlmacenRowSet:fieldGet( 'total_unidades' ) )

END CLASS

//---------------------------------------------------------------------------//

METHOD New( oController )

   ::Super:New( oController )

   ::oEvents:set( "loadedFromString", {|| ::calculateRowsToSkip() } )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD buildData() 

   ::oFastReport:ClearDataSets()

   ::oFastReport:setUserDataSet( "Lineas de movimientos de almac�n",;
                                 MovimientosAlmacenLineasRepository():getSerializedColumnsSentenceToLabels(),;
                                 {|| ::gotop() },;
                                 {|| ::skipper() },;
                                 {|| ::oLineasMovimientosAlmacenRowSet:skip(-1) },;
                                 {|| ::oLineasMovimientosAlmacenRowSet:eof() },;
                                 {|cField| ::fieldGet( cField ) } )

RETURN NIL

//---------------------------------------------------------------------------//

METHOD Synchronize() 

RETURN NIL

//---------------------------------------------------------------------------//

METHOD skipper()

   if ::nRowsToSkip > 0
      
      ::nRowsToSkip--

      RETURN ( 0 )

   end if 

   ::nLabelsPrinted++

   if ::nLabelsPrinted > ::nLabelsToPrint  

      ::oLineasMovimientosAlmacenRowSet:skip( 1 )   

      ::resetLabelsToPrint()

      ::Synchronize()

   end if 

RETURN ( 0 )

//---------------------------------------------------------------------------//

METHOD gotop()

   ::resetLabelsToPrint()

   ::Synchronize()

RETURN ( ::oLineasMovimientosAlmacenRowSet:gotop() )

//---------------------------------------------------------------------------//

METHOD fieldGet( cField )

   if ::nRowsToSkip > 0
      RETURN ( "" )
   end if 

RETURN ( ::oLineasMovimientosAlmacenRowSet:fieldGet( cField ) )

//---------------------------------------------------------------------------//

METHOD freeData() 

   msgalert( "freeData")

RETURN NIL

//---------------------------------------------------------------------------//

METHOD calculateRowsToSkip()

   local nHeight        := ::oFastReport:GetProperty( "MasterData", "Height" )
   local nColumns       := ::oFastReport:GetProperty( "MainPage", "Columns" )
   local nPaperHeight   := ::oFastReport:GetProperty( "MainPage", "PaperHeight" ) * fr01cm

   ::nRowsToSkip        := 0

   if !empty( nPaperHeight ) .and. !empty( nHeight ) .and. !empty( nColumns )

      ::nRowsToSkip     := ( ::oController:getColumnaInicio() - 1 ) * int( nPaperHeight / nHeight )
      ::nRowsToSkip     += ( ::oController:getFilaInicio() - 1 )

   end if 

RETURN NIL

//---------------------------------------------------------------------------//
