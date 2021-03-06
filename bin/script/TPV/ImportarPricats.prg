#include "HbXml.ch"
#include "TDbfDbf.ch"
#include "FiveWin.Ch"
#include "Struct.ch"
#include "Factu.ch" 
#include "Ini.ch"
#include "MesDbf.ch"
#include "Report.ch"
#include "Print.ch"

#define __localDirectory            "c:\Bestseller\"
#define __localDirectoryPorcessed   "c:\Bestseller\Processed\" 

//----------------------------------------------------------------------------//

static aXmlDocuments
static oXmlDocument

static aCodigoBarras

static hArticulo
static hCodigoBarras

static dbfArticulo
static dbfCodebar
static dbfFamilia
static dbfCategorias
static dbfTipoArticulo
static dbfTemporadaArticulo
static dbfPropiedades
static dbfTblPropiedades

//---------------------------------------------------------------------------//

Function ImportaXmlBestseller()

   local cDocumentXml

   if msgYesNo( "�Desea descargar los ficheros del ftp?" )
      BestsellerFtp():New()
   end if 

   dbUseArea( .t., ( cDriver() ), ( cPatArt() + "Articulo.Dbf" ), ( cCheckArea( "Articulo", @dbfArticulo ) ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "Articulo.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end

   dbUseArea( .t., ( cDriver() ), ( cPatArt() + "ArtCodebar.Dbf" ), ( cCheckArea( "ArtCodebar", @dbfCodebar ) ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "ArtCodebar.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end
   ( dbfCodebar )->( ordSetFocus( "cArtBar" ) )

   dbUseArea( .t., ( cDriver() ), ( cPatArt() + "ArtDiv.Dbf" ), ( cCheckArea( "ArtDiv", @dbfPropiedades ) ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "ArtDiv.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end

   dbUseArea( .t., ( cDriver() ), ( cPatArt() + "Familias.Dbf" ), ( cCheckArea( "Familias", @dbfFamilia ) ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "Familias.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end

   dbUseArea( .t., ( cDriver() ), cPatArt() + "Categorias.Dbf", cCheckArea( "Categorias", @dbfCategorias ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "Categorias.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end

   dbUseArea( .t., ( cDriver() ), cPatArt() + "Tipart.Dbf", cCheckArea( "Tipart", @dbfTipoArticulo ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "Tipart.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end

   dbUseArea( .t., ( cDriver() ), cPatArt() + "Temporadas.Dbf", cCheckArea( "Temporadas", @dbfTemporadaArticulo ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "Temporadas.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end

   dbUseArea( .t., ( cDriver() ), cPatArt() + "TblPro.Dbf", cCheckArea( "TblPro", @dbfTblPropiedades ), .t., .f. )
   if !lAIS() ; ordListAdd( ( cPatArt() + "TblPro.Cdx" ) ) ; else ; ordSetFocus( 1 ) ; end

   aXmlDocuments        := directory( __localDirectory + "PRICAT_*.*" )

   if !Empty( aXmlDocuments )
      for each cDocumentXml in aXmlDocuments
         if msgyesno( "procesando fichero " + alltrim( str( hb_enumindex())) + " de " + alltrim( str( len( aXmlDocuments))), "�Desea continuar?" )
           proccessXml( cDocumentXml[ 1 ] ) 
           moveXml( cDocumentXml[ 1 ] )
         else
            exit
         end if 
      next
   else
      msgStop( "No hay ficheros en el directorio")
   end if 

   ( dbfArticulo           )->( dbCloseArea() )
   ( dbfCodebar            )->( dbCloseArea() )
   ( dbfFamilia            )->( dbCloseArea() )
   ( dbfCategorias         )->( dbCloseArea() )
   ( dbfTipoArticulo       )->( dbCloseArea() )
   ( dbfTemporadaArticulo  )->( dbCloseArea() ) 
   ( dbfPropiedades        )->( dbCloseArea() )
   ( dbfTblPropiedades     )->( dbCloseArea() )

   msgStop( "Proceso finalizado :)")

Return ( nil )

//---------------------------------------------------------------------------//

Static Function ProccessXml( cDocumentXml )

   local cXml
   local oXmlNode

   aCodigoBarras        := {}
   hArticulo            := {=>}
   cDocumentXml         := __localDirectory + cDocumentXml

   oXmlDocument         := TXmlDocument():New( cDocumentXml )

   if oXmlDocument:nStatus != HBXML_STATUS_OK

      switch oXmlDocument:nStatus
         case HBXML_STATUS_ERROR
            msgStop( "Ay! pillin, nos jorobo alguna cosa....!!" )
         case HBXML_STATUS_MALFORMED
            msgStop( "No es un documento xml" )
      end

   else

      oXmlNode                := oXmlDocument:FindFirst()
      while !Empty( oXmlNode )
         proccessNode( oXmlNode ) 
         oXmlNode             := oXmlDocument:FindNext()
      end while

   end if

   ProccessArticulo()

Return ( nil )

//---------------------------------------------------------------------------//

Static Function moveXml( cDocumentXml )

   __copyFile( __localDirectory + cDocumentXml, __localDirectoryPorcessed + cDocumentXml )
   ferase( __localDirectory + cDocumentXml )

Return ( nil )

//---------------------------------------------------------------------------//

Static Function ProccessNode( oXmlNode ) 

   local cNodeName   := cValtoChar( oXmlNode:cName )

   do case
      case cNodeName == "ns0:Variants"
         IteratorCodebarArticulo( oXmlNode )

      case cNodeName == "ns0:Variant" 
         IteratorCodigoArticulo( oXmlNode )       

      case cNodeName == "ns0:ItemCatagorization"
         IteratorTipoArticulo( oXmlNode )       

      case cNodeName == "ns0:LocalPrice"
         IteratorPrieceArticulo( oXmlNode )   

      case cNodeName == "ns0:DeliveryPeriod"
         IteratorTemporadaArticulo( oXmlNode )


   end case
 
Return ( nil )

//---------------------------------------------------------------------------//

Static Function IteratorCodigoArticulo( oXmlNode )

   local oIter
   local oNode

   oIter                := TXMLIteratorScan():New( oXmlNode )
   oNode                := oIter:Find( "ns0:ItemNumberMaster" ) 

   if !Empty( oNode )
      hSet( hArticulo, "Codigo", oNode:cData )
   end if 

   oNode                := oIter:Find( "ns0:ItemName" ) 

   if !Empty( oNode )
      hSet( hArticulo, "Nombre", Upper( oNode:cData ) )
   end if 

   oNode                := oIter:Find( "ns0:SubBrandName" ) 

   if !Empty( oNode )
      hSet( hArticulo, "Familia", Upper( oNode:cData ) )
   end if 

Return ( nil )

//---------------------------------------------------------------------------//

Static Function IteratorTipoArticulo( oXmlNode )

   local oIter
   local oNode

   oIter                := TXMLIteratorScan():New( oXmlNode ) 

   oNode                := oIter:Find( "ns0:ProductGroupName" ) 

   if !Empty( oNode )
      hSet( hArticulo, "Tipo", Upper( oNode:cData ) )
   end if 

Return ( nil )

//---------------------------------------------------------------------------//

Static Function IteratorPrieceArticulo( oXmlNode )       

   local oIter
   local oNode
   local nPrice

   oIter                := TXMLIteratorScan():New( oXmlNode )  
   oNode                := oIter:Find( "ns0:GrossPriceAmount" ) 

   if !Empty( oNode ) 
      hSet( hArticulo, "Costo", val( oNode:cData ) )
   end if

   oNode                := oIter:Find( "ns0:RetailPriceAmount" ) 

   if !Empty( oNode ) 
      hSet( hArticulo, "Venta", val( oNode:cData ) )
   end if
   
Return ( nil )

//---------------------------------------------------------------------------//

Static Function IteratorTemporadaArticulo( oXmlNode )

   local oIter
   local oNode

   oIter                := TXMLIteratorScan():New( oXmlNode )
   oNode                := oIter:Find( "ns0:PeriodName" ) 

   if !Empty( oNode )
      hSet( hArticulo, "Temporada", Upper( oNode:cData ) )
   end if 

Return ( nil )

//---------------------------------------------------------------------------//

Static Function IteratorCodebarArticulo( oXmlNode )

   local oId
   local oNode
   local oIter
   local oNumero
   local oVariants
   local oVariant
   local oSellersItemIdentification
   local oPhysicalAttribute

   hCodigoBarras                 := {=>}

   while !empty( oXmlNode )

      oVariant                   := TXMLIteratorScan():New( oXmlNode ):Find( "ns0:Variant" )

      if !empty( oVariant ) 

         oNode                   := TXMLIteratorScan():New( oVariant ):Find( "ns0:ItemNumber" ) 
         if !empty( oNode )
             hSet( hCodigoBarras, "Codigo", oNode:cData )
         end if

         // PProhysicalAttributeiedades del item--------------------------------------------------
               
         oPhysicalAttribute      := TXMLIteratorScan():New( oVariant ):Find( "ns0:PhysicalAttribute" )

         if !empty(oPhysicalAttribute)

            oNode                := TXMLIteratorScan():New( oPhysicalAttribute ):Find( "ns0:Size" )
            if !Empty( oNode )
               if !hHasKey( hCodigoBarras, "Talla")
                  hSet( hCodigoBarras, "Talla", oNode:cData )
               end if 
            end if 

            oNode                := TXMLIteratorScan():New( oPhysicalAttribute ):Find( "ns0:Length" )
            if !Empty( oNode )
               if !hHasKey( hCodigoBarras, "Length")
                  hSet( hCodigoBarras, "Length", oNode:cData )
               end if 
            end if 

            oNode                 := TXMLIteratorScan():New( oPhysicalAttribute ):Find( "ns0:ColourName" )
            if !Empty( oNode )
               if !hHasKey( hCodigoBarras, "Color")
                  hSet( hCodigoBarras, "Color", upper( oNode:cData ) )
               end if 
            end if 

            oNode                 := TXMLIteratorScan():New( oPhysicalAttribute ):Find( "ns0:HexCode" )
            if !Empty( oNode )
               if !hHasKey( hCodigoBarras, "HexCode")
                  hSet( hCodigoBarras, "HexCode", oNode:cData )
               end if 
            end if 

         end if 

         if !empty( hCodigoBarras )
            if ascan( aCodigoBarras, {| h | existCodigoBarras( h, hCodigoBarras ) } ) == 0
               aadd( aCodigoBarras, hCodigoBarras )   
            end if 
         end if 

         hCodigoBarras                 := {=>}

      end if 

      oXmlNode                         := oXmlNode:nextInTree()

   end while

Return ( nil )

//---------------------------------------------------------------------------//

Static Function ProccessArticulo()

   local cCodigo

   if empty( hArticulo )
      Return ( nil )
   end if

   cCodigo                       := Padr( hGet( hArticulo, "Codigo"), 18 )

   processMain( cCodigo )

   processCodigoBarras( cCodigo)
   
   createColorIfNotExist()

   processProperties( cCodigo )

   edtArticulo( cCodigo )

Return ( nil )   

//---------------------------------------------------------------------------//

Static Function processMain( cCodigo )

   local lAppend

   lAppend                       := !( dbfArticulo )->( dbSeek( cCodigo ) )

   if dbDialogLock( dbfArticulo, lAppend )

      ( dbfArticulo )->Codigo    := cCodigo
      ( dbfArticulo )->Nombre    := hGet( hArticulo, "Nombre" )

      ( dbfArticulo )->pCosto    := hGet( hArticulo, "Costo" )
      ( dbfArticulo )->pVtaIva1  := hGet( hArticulo, "Venta" )

      ( dbfArticulo )->lIvaInc   := .t.
      ( dbfArticulo )->TipoIva   := cDefIva()

      ( dbfArticulo )->Familia   := cCodigoFamiliaBestseller( hGet( hArticulo, "Familia") )

      ( dbfArticulo )->cCodPrp1  := "001" // Tallas 
      ( dbfArticulo )->cCodPrp2  := "003" // Colores bestseller

      ( dbfArticulo )->cCodCate  := cCodigoCategoriaBestseller() 

      ( dbfArticulo )->cCodTip   := cCodigoTipoBestseller( hGet( hArticulo, "Tipo" ) )

      ( dbfArticulo )->cCodTemp  := cCodigoTemporadaBestseller( hGet( hArticulo, "Temporada" ) )

      ( dbfArticulo )->( dbUnlock() )
   
   end if

Return ( nil )

//---------------------------------------------------------------------------//

Function processCodigoBarras( cCodigo)

   local lAppend
   local hCodigoBarras

   while ( dbfCodebar )->( dbSeek( cCodigo ) ) .and. !( dbfCodebar )->( eof() )
      dbLockDelete( dbfCodebar )
   end while

   for each hCodigoBarras in aCodigoBarras

      lAppend                    := !( dbfCodebar )->( dbSeek( cCodigo + hGet( hCodigoBarras, "Codigo" ) ) )

      if dbDialogLock( dbfCodebar, lAppend )

         ( dbfCodebar )->cCodArt := cCodigo
         ( dbfCodebar )->cCodBar := hGet( hCodigoBarras, "Codigo" )
         ( dbfCodebar )->cCodPr1 := "001"
         ( dbfCodebar )->cCodPr2 := "003"
         ( dbfCodebar )->cValPr1 := upper( hGet( hCodigoBarras, "Talla" ) ) + if( hhaskey( hCodigoBarras, "Length" ), + "-" + hget( hCodigoBarras, "Length" ), "" )
         ( dbfCodebar )->cValPr2 := upper( hGet( hCodigoBarras, "Color" ) )
 
         ( dbfCodebar )->( dbUnlock() )

      end if 

   next 

Return ( nil )   

//---------------------------------------------------------------------------//

Function processProperties( cCodigo )

   local hCodigoBarras

   while ( dbfPropiedades )->( dbSeek( cCodigo ) ) .and. !( dbfPropiedades )->( eof() )
      dbLockDelete( dbfPropiedades )
   end while
    
   for each hCodigoBarras in aCodigoBarras

      if dbDialogLock( dbfPropiedades, .t. )

         ( dbfPropiedades )->cCodArt := cCodigo
         ( dbfPropiedades )->cCodDiv := "EUR"
         ( dbfPropiedades )->cCodPr1 := "001"
         ( dbfPropiedades )->cCodPr2 := "003"
         ( dbfPropiedades )->cValPr1 := upper( hGet( hCodigoBarras, "Talla" ) ) + if( hhaskey( hCodigoBarras, "Length" ), + "-" + hget( hCodigoBarras, "Length" ), "" )
         ( dbfPropiedades )->cValPr2 := upper( hGet( hCodigoBarras, "Color" ) )
 
         ( dbfPropiedades )->( dbUnlock() )

      end if 

   next 

Return ( nil )   

//---------------------------------------------------------------------------//

Function cCodigoFamiliaBestseller( cNombreFamilia )

   local cFamilia
   local cSubFamilia
   local cCodigoFamiliaBestseller   := ""

   cFamilia                         := substr( cNombreFamilia, 1, at( "/", cNombreFamilia ) - 1 ) 
   cSubFamilia                      := substr( cNombreFamilia, at( "/", cNombreFamilia ) + 1 ) 

   if dbSeekInOrd( cSubFamilia, "cNomFam", dbfFamilia )
      cCodigoFamiliaBestseller      := ( dbfFamilia )->cCodFam
   end if

   if Empty( cCodigoFamiliaBestseller )
      if dbSeekInOrd( cFamilia, "cNomFam", dbfFamilia )
         cCodigoFamiliaBestseller   := ( dbfFamilia )->cCodFam
      end if
   end if

Return ( cCodigoFamiliaBestseller )

//---------------------------------------------------------------------------//

Function cCodigoCategoriaBestseller()

   local cCodigoFamilia             := Alltrim( ( dbfArticulo )->Familia )
   local cCodigoCategoriaBestseller := ""

   do case
      case cCodigoFamilia == "003" .or. cCodigoFamilia == "019" // Name it kids o mini
         cCodigoCategoriaBestseller := "003"

      case cCodigoFamilia == "004" // Jack & jones
         cCodigoCategoriaBestseller := "001"

      case cCodigoFamilia == "005" // Only
         cCodigoCategoriaBestseller := "002"

   end case

Return ( cCodigoCategoriaBestseller )

//---------------------------------------------------------------------------//

Function cCodigoTipoBestseller( cCodigoTipo )

   local cCodigoTipoBestseller      := ""

   if dbSeekInOrd( cCodigoTipo, "cNomTip", dbfTipoArticulo )
      cCodigoTipoBestseller         := ( dbfTipoArticulo )->cCodTip
   end if

Return ( cCodigoTipoBestseller )

//---------------------------------------------------------------------------//

Function cCodigoTemporadaBestseller( cCodigoTemporada )

   local cCodigoTemporadaBestseller := ""

   if dbSeekInOrd( cCodigoTemporada, "Nombre", dbfTemporadaArticulo )
      cCodigoTemporadaBestseller    := ( dbfTemporadaArticulo )->cCodigo
   end if

Return ( cCodigoTemporadaBestseller )

//---------------------------------------------------------------------------//

Function CreateColorIfNotExist()

   local hCodigoBarras
   local lExist

   for each hCodigoBarras in aCodigoBarras 

      lExist     := ( dbfTblPropiedades )->( dbSeek( padr( "003", 20 ) + upper( hGet( hCodigoBarras, "Color" ) ) ) )

      if !( lExist )

         if dbDialogLock( dbfTblPropiedades, .t. )

            ( dbfTblPropiedades )->cCodPro   := "003"
            ( dbfTblPropiedades )->cCodTbl   := upper( hGet( hCodigoBarras, "Color" ) )
            ( dbfTblPropiedades )->cDesTbl   := upper( hGet( hCodigoBarras, "Color" ) )
            ( dbfTblPropiedades )->nColor    := getRgbColor( hGet( hCodigoBarras, "HexCode" ) ) 

            ( dbfTblPropiedades )->( dbUnlock() )

         end if 

      end if 

   next 

Return ( nil )   

//---------------------------------------------------------------------------//
  
Static Function getRgbColor( hexCode )

   local red   := hb_hextonum( substr( hexCode, 2, 2 ) )
   local green := hb_hextonum( substr( hexCode, 5, 2 ) )
   local blue  := hb_hextonum( substr( hexCode, 7, 2 ) )
   local rgb   := rgb( red, green, blue )

Return ( rgb )

//---------------------------------------------------------------------------//

Static Function existCodigoBarras( h, hCodigoBarras )

   if hget( h, "Talla") != hget( hCodigoBarras, "Talla" )
      Return .f.
   end if 

   if hget( h, "Color") != hget( hCodigoBarras, "Color" )
      Return .f.
   end if 

   if hhaskey( h, "Length" )                                   .and. ;
      hhaskey( hCodigoBarras, "Length" )                       .and. ;
      hget( h, "Length") != hget( hCodigoBarras, "Length" )
      Return .f.
   end if 

Return .t.

//---------------------------------------------------------------------------//

#include "BestsellerFtp.prg"