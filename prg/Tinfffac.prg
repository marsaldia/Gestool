#include "FiveWin.Ch"
#include "Font.ch"
#include "Factu.ch" 
#include "MesDbf.ch"

//---------------------------------------------------------------------------//

CLASS TInfFFac FROM TInfFam

   DATA  lDesglose   AS LOGIC    INIT .t.
   DATA  oFacCliT    AS OBJECT
   DATA  oFacCliL    AS OBJECT
   DATA  oFacRecT    AS OBJECT
   DATA  oFacRecL    AS OBJECT
   DATA  oEstado     AS OBJECT
   DATA  aEstado     AS ARRAY    INIT  { "Pendiente", "Liquidada", "Todas" }

   METHOD Create()

   METHOD OpenFiles()

   METHOD CloseFiles()

   METHOD lResource( cFld )

   METHOD lGenerate()

END CLASS

//---------------------------------------------------------------------------//

METHOD Create() CLASS TInfFFac

   ::DetCreateFields()

   ::AddTmpIndex( "cCodFam", "cCodFam + CCODART + CCODPR1 + CCODPR2 + CVALPR1 + CVALPR2 + CLOTE" )

   ::AddGroup( {|| ::oDbf:cCodFam }, {|| "Familia  : " + Rtrim( ::oDbf:cCodFam ) + "-" + Rtrim( oRetFld( ::oDbf:cCodFam, ::oDbfFam ) ) }, {||"Total familia..."} )
   ::AddGroup( {|| ::oDbf:cCodFam + ::oDbf:cCodArt }, {|| "Art�culo : " + Rtrim( ::oDbf:cCodArt ) + "-" + Rtrim( oRetFld( ::oDbf:cCodArt, ::oDbfArt ) ) }, {||"Total art�culo..."} )

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD OpenFiles() CLASS TInfFFac

   local lOpen    := .t.
   local oBlock   := ErrorBlock( {| oError | ApoloBreak( oError ) } )

   BEGIN SEQUENCE

   ::oFacCliT := TDataCenter():oFacCliT()     

   DATABASE NEW ::oFacCliL    PATH ( cPatEmp() ) FILE "FACCLIL.DBF"  VIA ( cDriver() ) SHARED INDEX "FACCLIL.CDX"

   DATABASE NEW ::oFacRecT    PATH ( cPatEmp() ) FILE "FACRECT.DBF"  VIA ( cDriver() ) SHARED INDEX "FACRECT.CDX"

   DATABASE NEW ::oFacRecL    PATH ( cPatEmp() ) FILE "FACRECL.DBF"  VIA ( cDriver() ) SHARED INDEX "FACRECL.CDX"

   RECOVER

      msgStop( 'Imposible abrir todas las bases de datos' )
      ::CloseFiles()
      lOpen          := .f.

   END SEQUENCE

   ErrorBlock( oBlock )

RETURN ( lOpen )

//---------------------------------------------------------------------------//

METHOD CloseFiles() CLASS TInfFFac

   if !Empty( ::oFacCliT ) .and. ::oFacCliT:Used()
      ::oFacCliT:End()
   end if
   if !Empty( ::oFacCliL ) .and. ::oFacCliL:Used()
      ::oFacCliL:End()
   end if
   if !Empty( ::oFacRecT ) .and. ::oFacRecT:Used()
      ::oFacRecT:End()
   end if
   if !Empty( ::oFacRecL ) .and. ::oFacRecL:Used()
      ::oFacRecL:End()
   end if

   ::oFacCliT := nil
   ::oFacCliL := nil

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD lResource( cFld ) CLASS TInfFFac

   local cEstado := "Todas"

   if !::StdResource( "INFDETFAM" )
      return .f.
   end if

   // Monta familias

   if !::lDefFamInf( 110, 120, 130, 140, 600 )
      return .f.
   end if

   /*
   Monta los articulos de manera automatica
   */

   if !::lDefArtInf( 70, 80, 90, 100, 800 )
      return .f.
   end if

   /*
   Monta los clientes de manera automatica
   */

   if !::oDefCliInf( 160, 161, 170, 171, , 150 )
      return .f.
   end if

   // Meter

   ::oMtrInf:SetTotal( ::oFacCliT:Lastrec() )

   ::oDefExcInf( 210 )
   ::oDefExcImp( 211 )

   ::oDefSalInf(201)

   REDEFINE COMBOBOX ::oEstado ;
      VAR      cEstado ;
      ID       218 ;
      ITEMS    ::aEstado ;
      OF       ::oFld:aDialogs[1]

   REDEFINE CHECKBOX ::lDesglose ;
      ID       700 ;
      OF       ::oFld:aDialogs[1]

   ::CreateFilter( aItmFacCli(), ::oFacCliT:cAlias )

   ::bPreGenerate    := {|| ::NewGroup( ::lDesglose ) }
   ::bPostGenerate   := {|| ::QuiGroup( ::lDesglose ) }

RETURN .t.

//---------------------------------------------------------------------------//
/*
Esta funcion crea la base de datos para generar posteriormente el informe
*/

METHOD lGenerate() CLASS TInfFFac

   local cExpHead  := ""
   local cExpLine  := ""

   ::oDlg:Disable()
   ::oBtnCancel:Enable()
   ::oDbf:Zap()

   ::aHeader   := {  {|| "Fecha     : " + Dtoc( Date() ) },;
                     {|| "Periodo   : " + Dtoc( ::dIniInf ) + " > " + Dtoc( ::dFinInf ) },;
                     {|| "Familias  : " + if( ::lAllFam, "Todas", AllTrim ( ::cFamOrg )  + " > " + AllTrim ( ::cFamDes ) ) },;
                     {|| "Art�culos : " + if( ::lAllArt, "Todos", AllTrim ( ::cArtOrg )  + " > " + AllTrim ( ::cArtDes ) ) },;
                     {|| "Clientes  : " + if( ::lAllCli, "Todos", AllTrim ( ::cCliOrg )  + " > " + AllTrim ( ::cCliDes ) ) },;
                     {|| "Estado    : " + ::aEstado[ ::oEstado:nAt ] } }

   ::oFacCliT:OrdSetFocus( "dFecFac" )
   ::oFacCliL:OrdSetFocus( "nNumFac" )

   do case
      case ::oEstado:nAt == 1
         cExpHead    := '!lLiquidada .and. dFecFac >= Ctod( "' + Dtoc( ::dIniInf ) + '" ) .and. dFecFac <= Ctod( "' + Dtoc( ::dFinInf ) + '" )'
      case ::oEstado:nAt == 2
         cExpHead    := 'lLiquidada.and. dFecFac >= Ctod( "' + Dtoc( ::dIniInf ) + '" ) .and. dFecFac <= Ctod( "' + Dtoc( ::dFinInf ) + '" )'
      otherwise
         cExpHead    := 'dFecFac >= Ctod( "' + Dtoc( ::dIniInf ) + '" ) .and. dFecFac <= Ctod( "' + Dtoc( ::dFinInf ) + '" )'
   end case

   if !::lAllCli
      cExpHead       += ' .and. cCodCli >= "' + Rtrim( ::cCliOrg ) + '" .and. cCodCli <= "' + Rtrim( ::cCliDes ) + '"'
   end if

   if !Empty( ::oFilter:cExpresionFilter )
      cExpHead       += ' .and. ' + ::oFilter:cExpresionFilter
   end if

   ::oFacCliT:AddTmpIndex( Auth():Codigo(), GetFileNoExt( ::oFacCliT:cFile ), ::oFacCliT:OrdKey(), ( cExpHead ), , , , , , , , .t. )

   ::oMtrInf:SetTotal( ::oFacCliT:OrdKeyCount() )

   /*
   Lineas de albaranes
   */

   cExpLine          := '!lTotLin .and. !lControl'

   if !::lAllFam
      cExpLine       += ' .and. cCodFam >= "' + RTrim( ::cFamOrg ) + '" .and. cCodFam <= "' + RTrim( ::cFamDes ) + '"'
   end if

   if !::lAllArt
      cExpLine       += ' .and. cRef >= "' + ::cArtOrg + '" .and. cRef <= "' + ::cArtDes + '"'
   end if

   ::oFacCliL:AddTmpIndex( Auth():Codigo(), GetFileNoExt( ::oFacCliL:cFile ), ::oFacCliL:OrdKey(), cAllTrimer( cExpLine ), , , , , , , , .t. )

  ::oFacCliT:GoTop()

   while !::lBreak .and. !::oFacCliT:Eof()

      if lChkSer( ::oFacCliT:cSerie, ::aSer )

         if ::oFacCliL:Seek( ::oFacCliT:cSerie + Str( ::oFacCliT:nNumFac ) + ::oFacCliT:cSufFac )

            while ::oFacCliT:cSerie + Str( ::oFacCliT:nNumFac ) + ::oFacCliT:cSufFac == ::oFacCliL:cSerie + Str( ::oFacCliL:nNumFac ) + ::oFacCliL:cSufFac .AND. ! ::oFacCliL:eof()

            if !( ::lExcCero .AND. nTotNFacCli( ::oFacCliL ) == 0 ) .and.;
               !( ::lExcImp .AND. nImpLFacCli( ::oFacCliT:cAlias, ::oFacCliL:cAlias, ::nDecOut, ::nDerOut, ::nValDiv ) == 0 )

               /*
               A�adimos un nuevo registro
               */

               ::AppFac( .f. )

            end if

            ::oFacCliL:Skip()

            end while

         end if

      end if

      ::oFacCliT:Skip()

      ::oMtrInf:AutoInc()

   end while

   ::oFacCliT:IdxDelete( Auth():Codigo(), GetFileNoExt( ::oFacCliT:cFile ) )
   ::oFacCliL:IdxDelete( Auth():Codigo(), GetFileNoExt( ::oFacCliL:cFile ) )

   /*
   comenzamos con las rectificativas
    */

   ::oFacRecT:OrdSetFocus( "dFecFac" )
   ::oFacRecL:OrdSetFocus( "nNumFac" )

   cExpHead    := 'dFecFac >= Ctod( "' + Dtoc( ::dIniInf ) + '" ) .and. dFecFac <= Ctod( "' + Dtoc( ::dFinInf ) + '" )'

   if !::lAllCli
      cExpHead       += ' .and. cCodCli >= "' + Rtrim( ::cCliOrg ) + '" .and. cCodCli <= "' + Rtrim( ::cCliDes ) + '"'
   end if

   if !Empty( ::oFilter:cExpresionFilter )
      cExpHead       += ' .and. ' + ::oFilter:cExpresionFilter
   end if

   ::oFacRecT:AddTmpIndex( Auth():Codigo(), GetFileNoExt( ::oFacRecT:cFile ), ::oFacRecT:OrdKey(), ( cExpHead ), , , , , , , , .t. )

   ::oMtrInf:SetTotal( ::oFacRecT:OrdKeyCount() )

   /*
   Lineas de albaranes
   */

   cExpLine          := '!lTotLin .and. !lControl'

   if !::lAllFam
      cExpLine       += ' .and. cCodFam >= "' + RTrim( ::cFamOrg ) + '" .and. cCodFam <= "' + RTrim( ::cFamDes ) + '"'
   end if

   if !::lAllArt
      cExpLine       += ' .and. cRef >= "' + ::cArtOrg + '" .and. cRef <= "' + ::cArtDes + '"'
   end if

   ::oFacRecL:AddTmpIndex( Auth():Codigo(), GetFileNoExt( ::oFacRecL:cFile ), ::oFacRecL:OrdKey(), cAllTrimer( cExpLine ), , , , , , , , .t. )

  ::oFacRecT:GoTop()

   while !::lBreak .and. !::oFacRecT:Eof()

      if lChkSer( ::oFacRecT:cSerie, ::aSer )

         if ::oFacRecL:Seek( ::oFacRecT:cSerie + Str( ::oFacRecT:nNumFac ) + ::oFacRecT:cSufFac )

            while ::oFacRecT:cSerie + Str( ::oFacRecT:nNumFac ) + ::oFacRecT:cSufFac == ::oFacRecL:cSerie + Str( ::oFacRecL:nNumFac ) + ::oFacRecL:cSufFac .AND. ! ::oFacRecL:eof()

            if !( ::lExcCero .AND. nTotNFacRec( ::oFacRecL ) == 0 ) .and.;
               !( ::lExcImp .AND. nImpLFacRec( ::oFacRecT:cAlias, ::oFacRecL:cAlias, ::nDecOut, ::nDerOut, ::nValDiv ) == 0 )

               /*
               A�adimos un nuevo registro
               */

               ::AppFacRec( .f. )

            end if

            ::oFacRecL:Skip()

            end while

         end if

      end if

      ::oFacRecT:Skip()

      ::oMtrInf:AutoInc()

   end while

   ::oFacRecT:IdxDelete( Auth():Codigo(), GetFileNoExt( ::oFacRecT:cFile ) )
   ::oFacRecL:IdxDelete( Auth():Codigo(), GetFileNoExt( ::oFacRecL:cFile ) )

   ::oMtrInf:AutoInc( ::oFacCliT:Lastrec() )

   ::oDlg:Enable()

RETURN ( ::oDbf:LastRec() > 0 )

//---------------------------------------------------------------------------//