#include "FiveWin.Ch"
#include "Factu.ch" 

//---------------------------------------------------------------------------//

CLASS MovimientosAlmacenLineasController FROM SQLBrowseController

   DATA hArticulo

   DATA oSeriesControler

   DATA oRelacionesEntidades

   DATA oSearchView

   DATA aProperties                    INIT {}

   DATA aSelectDelete                  INIT {}

   METHOD New()

   METHOD loadedBlankBuffer()

   METHOD gettingSelectSentence()

   // Validaciones ------------------------------------------------------------

   METHOD validateCodigoArticulo()     

   METHOD validateLote()               

   METHOD validatePrimeraPropiedad()   INLINE ( iif(  ::validate( "valor_primera_propiedad" ),;
                                                      ::stampPropertyName( "codigo_primera_propiedad" , "valor_primera_propiedad", ::oDialogView:oGetValorPrimeraPropiedad ),;
                                                      .f. ) )

   METHOD validateSegundaPropiedad()   INLINE ( iif(  ::validate( "valor_segunda_propiedad" ),;
                                                      ::stampPropertyName( "codigo_segunda_propiedad" , "valor_segunda_propiedad", ::oDialogView:oGetValorSegundaPropiedad ),;
                                                      .f. ) )
   
   // Propiedades--------------------------------------------------------------

   METHOD stampArticulo()              INLINE ( ::oDialogView:oGetNombreArticulo:cText( hget( ::hArticulo, "nombre" ) ) )

   METHOD stampCajas()                 INLINE ( ::oDialogView:oGetCajasArticulo:cText( hget( ::hArticulo, "ncajent" ) ) )

   METHOD stampUnidades()              INLINE ( ::oDialogView:oGetUnidadesArticulo:cText( max( hget( ::hArticulo, "nunicaja" ), 1 ) ) )

   METHOD stampPrecio()                INLINE ( ::oDialogView:oGetPrecioArticulo:cText( hget( ::hArticulo, "pcosto" ) ) )

   METHOD stampLoteCaducidad()

   METHOD stampProperties()   
   METHOD stampPropertyName( cFieldCodigo, cFieldValor, oControl )

   // Show/Hide----------------------------------------------------------------

   METHOD showLoteCaducidad()
   METHOD showProperties()
   METHOD hideProperty()               INLINE ( ::oDialogView:hidePropertyControls() )     

   // Otros--------------------------------------------------------------------

   METHOD getFirstProperty( cCodigoArticulo, cCodigoPropiedad )
   METHOD getSecondProperty( cCodigoArticulo, cCodigoPropiedad )

   METHOD lBrowseProperty()            INLINE ( uFieldEmpresa( "lUseTbl" ) )

   METHOD buildPropertyBrowse()        INLINE ( iif(  uFieldEmpresa( "lUseTbl" ),;
                                                      ::oDialogView:oBrowsePropertyView:build(), ) )

   METHOD loadValuesBrowseProperty()

   METHOD isProductProperty()          INLINE ( !empty( hget( ::oModel:hBuffer, "codigo_primera_propiedad" ) ) .or.;
                                                !empty( hget( ::oModel:hBuffer, "codigo_segunda_propiedad" ) ) )

   METHOD isChangeArticulo()

   METHOD getHashArticulo()

   METHOD runDialogSeries()

   METHOD onActivateDialog()

   METHOD closedDialog() 

   METHOD Search()

   METHOD deleteLines( cId )

   METHOD getUuid()                    INLINE ( iif(  !empty( ::oModel ) .and. !empty( ::oModel:hBuffer ),;
                                                      hget( ::oModel:hBuffer, "uuid" ),;
                                                      nil ) )

   METHOD refreshBrowse()              INLINE ( iif(  !empty( ::oBrowseView ), ::oBrowseView:Refresh(), ) )

   METHOD insertingBuffer()
   
   METHOD updatingBuffer()

END CLASS

//---------------------------------------------------------------------------//

METHOD New( oController )

   ::Super:New( oController )

   ::lTransactional                    := .t.

   ::cTitle                            := "Movimientos de almac�n l�neas"

   ::setName( "lineas_movimientos_almacen" )

   ::oModel                            := SQLMovimientosAlmacenLineasModel():New( self )

   ::oModel:setEvent( 'loadedBlankBuffer',      {|| ::loadedBlankBuffer() } ) 
   ::oModel:setEvent( 'gettingSelectSentence',  {|| ::gettingSelectSentence() } ) 
   ::oModel:setEvent( 'insertingBuffer',        {|| ::insertingBuffer() } ) 
   ::oModel:setEvent( 'updatingBuffer',         {|| ::updatingBuffer() } ) 

   ::oBrowseView                       := MovimientosAlmacenLineasBrowseView():New( self )
   ::oBrowseView:lFooter               := .t.

   ::oDialogView                       := MovimientosAlmacenLineasView():New( self )

   ::oValidator                        := MovimientosAlmacenLineasValidator():New( self )

   ::oSearchView                       := SQLSearchView():New( self )

   ::oSeriesControler                  := NumerosSeriesController():New( self )

   ::oRelacionesEntidades              := RelacionesEntidadesController():New( self )

   ::setEvent( 'activating',           {|| ::oModel:setColumnOrder( "id" ), ::oModel:setColumnOrientation( "D" ) } )

   ::setEvent( 'closedDialog',         {|| ::closedDialog() } )

   ::setEvent( 'appended',             {|| ::oBrowseView:Refresh() } )
   ::setEvent( 'edited',               {|| ::oBrowseView:Refresh() } )
   ::setEvent( 'deletedSelection',     {|| ::oBrowseView:Refresh() } )

   ::setEvent( 'deletingLines',        {|| ::oSeriesControler:deletedSelected( ::aSelectDelete ) } )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD loadedBlankBuffer()

   local uuid        := ::getSenderController():getUuid() 

   if !empty( uuid )
      hset( ::oModel:hBuffer, "parent_uuid", uuid )
   end if 

   hset( ::oModel:hBuffer, "codigo_articulo", space( 200 ) )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD gettingSelectSentence()

   local uuid        := ::getSenderController():getUuid() 

   if !empty( uuid )
      ::oModel:setGeneralWhere( "parent_uuid = " + quoted( uuid ) )
   end if 

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD validateCodigoArticulo()  

   if !( ::validate( "codigo_articulo" ) )
      RETURN .f.
   end if 

   if !( ::isChangeArticulo() )
      RETURN .t.
   end if

   if !( ::getHashArticulo() ) 
      RETURN .f.
   end if 

   ::stampArticulo()

   ::stampCajas()

   ::stampUnidades()

   ::stampPrecio()

   ::stampLoteCaducidad()

   ::stampProperties()

   ::showLoteCaducidad()

   ::showProperties()

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD isChangeArticulo()

   local cCodigoArticulo

   cCodigoArticulo   := ::getModelBuffer( "codigo_articulo" )
   if empty( cCodigoArticulo )
      RETURN ( .f. )
   end if  

   if !( ::oDialogView:oGetCodigoArticulo:isOriginalChanged( cCodigoArticulo ) )
      RETURN ( .f. )
   end if

   ::oDialogView:oGetCodigoArticulo:setOriginal( cCodigoArticulo )

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD getHashArticulo()

   ::hArticulo       := ArticulosModel():getHash( ::getModelBuffer( "codigo_articulo" ) )

   if empty( ::hArticulo )
      RETURN ( .f. )
   end if 

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD showLoteCaducidad()

   if empty( ::hArticulo )
      RETURN ( .t. )
   end if 

   if hget( ::hArticulo, "llote" )
      ::oDialogView:showLoteCaducidadControls()
      RETURN ( .t. )
   end if 

   ::oDialogView:hideLoteCaducidadControls()

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD showProperties()

   if empty( hget( ::hArticulo, "ccodprp1" ) ) 

      ::oDialogView:hidePrimeraPropiedad()

      ::oDialogView:hideSegundaPropiedad()

      ::oDialogView:hidePropertyBrowseView()

      ::oDialogView:showUnitsControls()

      RETURN ( .t. )

   end if 

   if ::lBrowseProperty()

      ::oDialogView:hidePrimeraPropiedad()

      ::oDialogView:hideSegundaPropiedad()

      ::oDialogView:setPropertyOneBrowseView( ::getFirstProperty( hget( ::hArticulo, "codigo" ), hget( ::hArticulo, "ccodprp1" ) ) )

      ::oDialogView:setPropertyTwoBrowseView( ::getSecondProperty( hget( ::hArticulo, "codigo" ), hget( ::hArticulo, "ccodprp2" ) ) )

      ::oDialogView:buildPropertyBrowseView()

      ::oDialogView:showPropertyBrowseView()

      ::oDialogView:hideUnitsControls()

   else

      ::oDialogView:hidePropertyBrowseView()
      
      ::oDialogView:showPrimeraPropiedad()

      if !empty( hget( ::hArticulo, "ccodprp2" ) ) 
         ::oDialogView:showSegundaPropiedad()
      end if 

   end if 

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD stampProperties()

   hset( ::oModel:hBuffer, "codigo_primera_propiedad", hget( ::hArticulo, "ccodprp1" ) )

   hset( ::oModel:hBuffer, "codigo_segunda_propiedad", hget( ::hArticulo, "ccodprp2" ) )

   if ::lBrowseProperty()

      ::loadValuesBrowseProperty( hget( ::hArticulo, "codigo" ) )

   else 

      if !empty( hget( ::hArticulo, "ccodprp1" ) )

         ::oDialogView:oGetValorPrimeraPropiedad:setText( PropiedadesModel():getNombre( hget( ::hArticulo, "ccodprp1" ) ) )

      end if 

      if !empty( hget( ::hArticulo, "ccodprp2" ) )

         ::oDialogView:oGetValorSegundaPropiedad:setText( PropiedadesModel():getNombre( hget( ::hArticulo, "ccodprp2" ) ) )

      end if 

   end if 

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD stampPropertyName( cFieldCodigo, cFieldValor, oControl )

   local cNombrePropiedad

   if empty( hget( ::oModel:hBuffer, cFieldCodigo ) )
      RETURN ( .t. )
   end if 

   if empty( hget( ::oModel:hBuffer, cFieldValor ) )
      RETURN ( .t. )
   end if 

   if empty( oControl )
      RETURN ( .t. )
   end if 

   cNombrePropiedad  := PropiedadesLineasModel():getNombre( hget( ::oModel:hBuffer, cFieldCodigo ), hget( ::oModel:hBuffer, cFieldValor ) )

   oControl:oHelpText:cText( cNombrePropiedad )

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD stampLoteCaducidad()

   local cLote
   local dCaducidad

   if !( hget( ::hArticulo, "llote" ) )
      RETURN ( .t. )
   end if 

   if !empty( ::oDialogView:oGetLote ) .and. empty( ::oDialogView:oGetLote:varGet() )

      cLote       := hget( ::hArticulo, "clote" )

      if !empty( cLote )
         ::oDialogView:oGetLote:cText( cLote )
      end if 

   end if 

   if !empty( ::oDialogView:oGetCaducidad ) .and. empty( ::oDialogView:oGetCaducidad:varGet() )

      dCaducidad  := StocksModel():getFechaCaducidad( hget( ::hArticulo, "codigo" ), hget( ::oModel:hBuffer, "valor_primera_propiedad" ), hget( ::oModel:hBuffer, "valor_segunda_propiedad" ), , hget( ::oModel:hBuffer, "lote" ) )

      if !empty( dCaducidad )
         ::oDialogView:oGetCaducidad:cText( dCaducidad )
      end if 
   
   end if 

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD getFirstProperty( cCodigoArticulo, cCodigoPropiedad )

   local aProperty   := ArticulosPrecios():getFirstProperty( cCodigoArticulo, cCodigoPropiedad )

   if empty( aProperty )
      aProperty      := PropiedadesLineasModel():getPropiedadesGeneral( cCodigoArticulo, cCodigoPropiedad )
   end if 

RETURN ( aProperty )

//---------------------------------------------------------------------------//

METHOD getSecondProperty( cCodigoArticulo, cCodigoPropiedad )

   local aProperty   := ArticulosPrecios():getSecondProperty( cCodigoArticulo, cCodigoPropiedad )

   if empty( aProperty )
      aProperty      := PropiedadesLineasModel():getPropiedadesGeneral( cCodigoArticulo, cCodigoPropiedad )
   end if 

RETURN ( aProperty )

//---------------------------------------------------------------------------//

METHOD validateLote()

   local cLote

   cLote       := ::getModelBuffer( "lote" )
   if empty( cLote )
      RETURN ( .t. )
   end if  

   if !( ::oDialogView:oGetLote:isOriginalChanged( cLote ) )
      RETURN ( .t. )
   end if 

   ::oDialogView:oGetLote:setOriginal( cLote )

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD onActivateDialog()

   if ::isAppendMode()
      
      ::setModelBuffer( "codigo_articulo", space( 200 ) )
      
      ::oDialogView:oGetCodigoArticulo:Refresh()
      
      ::oDialogView:hideLoteCaducidadControls()

      ::oDialogView:hidePrimeraPropiedad()

      ::oDialogView:hideSegundaPropiedad()

      ::oDialogView:hidePropertyBrowseView()

   end if 

   if ::isNotAppendMode()

      if !( ::getHashArticulo() ) 
         RETURN .f.
      end if 

      ::showLoteCaducidad()

      ::showProperties()

      ::stampProperties()
   
   end if 

   ::oDialogView:hideBultos()

   ::oDialogView:hideCajas()

   ::oDialogView:hidePrecios()

   ::oDialogView:oSayTotalUnidades:Refresh()

   ::oDialogView:oSayTotalImporte:Refresh()

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD closedDialog()

   ::aProperties     := {}

   if !( ::oDialogView:oBrowsePropertyView:lVisible() )
      RETURN ( .t. )
   end if 

   ::aProperties     := ::oDialogView:oBrowsePropertyView:getProperties()

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD runDialogSeries()

   if Empty( ::oDialogView:nTotalUnidadesArticulo() )
      msgStop( "El n�mero de unidades no puede ser 0 para editar n�meros de serie" )
      RETURN ( .f. )
   end if

   ::oSeriesControler:SetTotalUnidades( ::oDialogView:nTotalUnidadesArticulo() )

   ::oSeriesControler:Edit( hget( ::oModel:hBuffer, "id" ) )

RETURN ( .t. )

//---------------------------------------------------------------------------//

METHOD loadValuesBrowseProperty( cCodigoArticulo )

   local uuid
   local aArticulos

   if !( uFieldEmpresa( 'lUseTbl' ) )
      RETURN ( Self )
   end if 

   if ::isNotEditMode()
      RETURN ( Self )
   end if 

   uuid           := ::getSenderController():getUuid() 
   if empty( uuid )
      RETURN ( Self )
   end if 

   aArticulos     := MovimientosAlmacenLineasRepository():getHashArticuloUuid( cCodigoArticulo, uuid ) 
   if empty( aArticulos )
      RETURN ( Self )
   end if 

   aeval( aArticulos, {|elem| ::oDialogView:oBrowsePropertyView:setValueAndUuidToPropertiesTable( elem ) } )

   ::oDialogView:oBrowsePropertyView:Refresh()

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD Search()

   ::oSearchView:Activate()

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD deleteLines( uuid )

   ::aSelectDelete  := ::oModel:aRowsDeleted( uuid )

   ::fireEvent( 'deletingLines' )

   ::oModel:deleteWhereUuid( uuid )

   ::fireEvent( 'deletedLines' )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD insertingBuffer()

   local aSQLInsert    := {}

   if !empty( ::aProperties )
      RETURN ( self )
   end if 

   aeval( ::aProperties, {|oProperty| ::oModel:addInsertSentence( aSQLInsert, oProperty ) } )

   if !empty( aSQLInsert )
      ::oModel:setSQLInsert( aSQLInsert )
      RETURN ( self )
   end if 

RETURN ( self )

//---------------------------------------------------------------------------//

METHOD updatingBuffer()

   local oProperty
   local aSQLUpdate     := {}

   if empty( ::aProperties )
      RETURN ( nil )
   end if 

   for each oProperty in ::aProperties

      do case
         case !empty( oProperty:Uuid ) .and. empty( oProperty:Value )

            ::oModel:addDeleteSentence( aSQLUpdate, oProperty )

         case !empty( oProperty:Uuid ) .and. !empty( oProperty:Value )

            ::oModel:addUpdateSentence( aSQLUpdate, oProperty )
       
         case empty( oProperty:Uuid ) 

            ::oModel:addInsertSentence( aSQLUpdate, oProperty )

      end case

   next 

   ::oModel:cSQLUpdate  := aSQLUpdate

RETURN ( self )

//---------------------------------------------------------------------------//
