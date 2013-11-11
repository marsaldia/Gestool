//
#include "FiveWin.Ch"
#include "Font.ch"
#include "Folder.ch"
#include "Print.ch"
#include "Report.ch"
#include "Factu.ch"

#define _MENUITEM_               "01027"

/*
Defines para las lineas de Pago
*/

#define _CSERFAC                 1      //   C      1     0
#define _NNUMFAC                 2      //   N      9     0
#define _CSUFFAC                 3      //   N      9     0
#define _NNUMREC                 4      //   N      2     0
#define _CTIPREC                 5      //   N      2     0
#define _CCODCAJ                 6      //   C     12     0
#define _CCODPRV                 7      //   C     12     0
#define _CNOMPRV                 8      //   C     12     0
#define _DENTRADA                9      //   D      8     0
#define _NIMPORTE               10      //   N     10     0
#define _CDESCRIP               11      //   C    100     0
#define _DPRECOB                12      //   C      8     0
#define _CPGDOPOR               13      //   C     50     0
#define _LCOBRADO               14      //   C      1     0
#define _LCONPGO                15      //   L      1     0
#define _CDIVPGO                16      //   C      3     0
#define _NVDVPGO                17      //
#define _CCTAREC                18      //   C     12     0
#define _LRECIMP                19      //   L      1     0
#define _DFECVTO                20      //   D      8     8
#define _CCODUSR                21      //
#define _DFECCHG                22      //   D      8     0
#define _CTIMCHG                23      //   C      5     0
#define _CTURREC                24      //   C      6     0
#define _LCLOPGO                25      //   L      1     0
#define _DFECIMP                26      //   D      8     0
#define _CHORIMP                27      //   C      5     0
#define _CCODBNC                28      //   C      4     0
#define _CCODPGO                29      //   C      2     0
#define _LNOTARQUEO             30      //   L      1     0
#define _LDEVUELTO              31      //   L      1     0
#define _DFECDEV                32      //   D      8     0
#define _CMOTDEV                33      //   C    250     0
#define _CRECDEV                34      //   C     14     0
#define _CBNCEMP                35
#define _CBNCPRV                36
#define _CENTEMP                37
#define _CSUCEMP                38
#define _CDIGEMP                39
#define _CCTAEMP                40
#define _CENTPRV                41
#define _CSUCPRV                42
#define _CDIGPRV                43
#define _CCTAPRV                44

memvar cDbf
memvar cDbfCol
memvar cDbfRec
memvar cDbfPrv
memvar cDbfPgo
memvar cDbfDiv
memvar cPirDivRec
memvar nPagina
memvar lEnd

static oWndBrw
static dbfDiv
static oBandera
static dbfPrv
static dbfFacPrvP
static dbfFacPrvT
static dbfFacPrvL
static dbfRctPrvT
static dbfRctPrvL
static dbfFPago
static dbfIva
static dbfProvee
static dbfCount
static dbfDoc
static dbfEmp
static dbfBncPrv
static oMenu
static cFiltroUsuario   := ""
static lOldDevuelto     := .f.
static lOpenFiles       := .f.
static bEdtRec          := { |aTmp, aGet, dbfFacPrvP, oBrw, lRectificativa, bValid, nMode| EdtPag( aTmp, aGet, dbfFacPrvP, oBrw, lRectificativa, bValid, nMode ) }

//----------------------------------------------------------------------------//

STATIC FUNCTION OpenFiles( cPatEmp )

   local oBlock

   DEFAULT cPatEmp      := cPatEmp()

   oBlock               := ErrorBlock( { | oError | ApoloBreak( oError ) } )
   BEGIN SEQUENCE

      DisableAcceso()

      lOpenFiles        := .t.

      USE ( cPatEmp + "FACPRVP.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "FACPRVP", @dbfFacPrvP ) )
      SET ADSINDEX TO ( cPatEmp + "FACPRVP.CDX" ) ADDITIVE

      USE ( cPatEmp + "FACPRVT.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "FACPRVT", @dbfFacPrvT ) )
      SET ADSINDEX TO ( cPatEmp + "FACPRVT.CDX" ) ADDITIVE

      USE ( cPatEmp + "FACPRVL.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "FACPRVL", @dbfFacPrvL ) )
      SET ADSINDEX TO ( cPatEmp + "FACPRVL.CDX" ) ADDITIVE

      USE ( cPatEmp + "RctPrvT.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "RctPrvT", @dbfRctPrvT ) )
      SET ADSINDEX TO ( cPatEmp + "RctPrvT.CDX" ) ADDITIVE

      USE ( cPatEmp + "RctPrvL.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "RctPrvL", @dbfRctPrvL ) )
      SET ADSINDEX TO ( cPatEmp + "RctPrvL.CDX" ) ADDITIVE

      USE ( cPatDat() + "DIVISAS.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "DIVISAS", @dbfDiv ) )
      SET ADSINDEX TO ( cPatDat() + "DIVISAS.CDX" ) ADDITIVE

      USE ( cPatPrv() + "PROVEE.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "PROVEE", @dbfPrv ) )
      SET ADSINDEX TO ( cPatPrv() + "PROVEE.CDX" ) ADDITIVE

      USE ( cPatGrp() + "FPAGO.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "FPAGO", @dbfFPago ) )
      SET ADSINDEX TO ( cPatGrp() + "FPAGO.CDX" ) ADDITIVE

      USE ( cPatDat() + "TIVA.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "TIVA", @dbfIva ) )
      SET ADSINDEX TO ( cPatDat() + "TIVA.CDX" ) ADDITIVE

      USE ( cPatEmp + "RDOCUMEN.DBF" ) NEW SHARED VIA ( cDriver() ) ALIAS ( cCheckArea( "RDOCUMEN", @dbfDoc ) )
      SET ADSINDEX TO ( cPatEmp + "RDOCUMEN.CDX" ) ADDITIVE
      SET TAG TO "CTIPO"

      USE ( cPatPrv() + "PROVEE.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "PROVEE", @dbfProvee ) )
      SET ADSINDEX TO ( cPatPrv() + "PROVEE.CDX" ) ADDITIVE

      USE ( cPatDat() + "EMPRESA.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "EMPRESA", @dbfEmp ) )
      SET ADSINDEX TO ( cPatDat() + "EMPRESA.CDX" ) ADDITIVE

      USE ( cPatEmp() + "NCOUNT.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "NCOUNT", @dbfCount ) )
      SET ADSINDEX TO ( cPatEmp() + "NCOUNT.CDX" ) ADDITIVE

      USE ( cPatPrv() + "PRVBNC.DBF" ) NEW VIA ( cDriver() ) SHARED ALIAS ( cCheckArea( "PRVBNC", @dbfBncPrv ) )
      SET ADSINDEX TO ( cPatPrv() + "PRVBNC.CDX" ) ADDITIVE
      SET TAG TO "cCodDef"

      oBandera          := TBandera():New

      /*
      Limitaciones de cajero y cajas--------------------------------------------------------
      */

      if oUser():lFiltroVentas()
         cFiltroUsuario := "Field->cCodUsr == '" + oUser():cCodigo() + "' .and. Field->cCodCaj == '" + oUser():cCaja() + "'"
      end if

      EnableAcceso()

   RECOVER

      lOpenFiles        := .f.

      EnableAcceso()

      msgStop( "Imposible abrir todas las bases de datos de recibos de proveedores" )

   END SEQUENCE

   ErrorBlock( oBlock )

RETURN ( lOpenFiles )

//---------------------------------------------------------------------------//

STATIC FUNCTION CloseFiles()

   DisableAcceso()

   DestroyFastFilter( dbfFacPrvP, .t., .t. )

   if dbfFacPrvP != nil
      ( dbfFacPrvP )->( dbCloseArea() )
   end if

   if dbfDiv != nil
      ( dbfDiv )->( dbCloseArea() )
   end if
   if dbfPrv != nil
      ( dbfPrv )->( dbCloseArea() )
   end if
   if dbfFacPrvT != nil
      ( dbfFacPrvT )->( dbCloseArea() )
   end if
   if dbfFacPrvL != nil
      ( dbfFacPrvL )->( dbCloseArea() )
   end if
   if dbfRctPrvT != nil
      ( dbfRctPrvT )->( dbCloseArea() )
   end if
   if dbfRctPrvL != nil
      ( dbfRctPrvL )->( dbCloseArea() )
   end if
   if dbfFPago != nil
      ( dbfFPago )->( dbCloseArea() )
   end if
   if dbfIva != nil
      ( dbfIva )->( dbCloseArea() )
   end if
   if dbfProvee != nil
      ( dbfProvee )->( dbCloseArea() )
   end if
   if dbfDoc != nil
      ( dbfDoc )->( dbCloseArea() )
   end if
   if dbfEmp != nil
      ( dbfEmp )->( dbCloseArea() )
   end if
   if dbfCount != nil
      ( dbfCount )->( dbCloseArea() )
   end if
   if dbfBncPrv != nil
      ( dbfBncPrv )->( dbCloseArea() )
   end if

   dbfFacPrvP  := nil
   dbfDiv      := nil
   oBandera    := nil
   dbfPrv      := nil
   dbfFacPrvT  := nil
   dbfFacPrvL  := nil
   dbfFPago    := nil
   dbfProvee   := nil
   dbfDoc      := nil
   oWndBrw     := nil
   dbfEmp      := nil
   dbfCount    := nil
   dbfBncPrv   := nil

   oWndBrw     := nil

   lOpenFiles  := .f.

   EnableAcceso()

RETURN .T.

//--------------------------------------------------------------------------//

FUNCTION RecPrv( oMenuItem, oWnd, aNumRec )

   local oImp
   local oPrv
   local oFlt
   local oPdf
   local oMail
   local lEur           := .f.
   local nLevel
   local oRotor
   local lFound
   local nOrdAnt
   local oBtnEur

   DEFAULT  oMenuItem   := _MENUITEM_
   DEFAULT  oWnd        := oWnd()
   DEFAULT  aNumRec     := Array( 1 )

   /*
   Obtenemos el nivel de acceso
   */

   nLevel               := nLevelUsr( oMenuItem )
   if nAnd( nLevel, 1 ) != 0
      msgStop( "Acceso no permitido." )
      return .f.
   end if

   /*
   Cerramos todas las ventanas
   */

   if oWnd != nil
      SysRefresh(); oWnd:CloseAll(); SysRefresh()
   end if

   if !OpenFiles()
      return .f.
   end if

   /*
   Anotamos el movimiento para el navegador
   */

   DisableAcceso()

   DEFINE SHELL oWndBrw FROM 2, 10 TO 18, 70;
      XBROWSE ;
      TITLE    "Pagos de facturas de proveedores" ;
      ALIAS    ( dbfFacPrvP );
      MRU      "Money2_businessman_16";
      BITMAP   Rgb( 0, 114, 198 ) ;
      PROMPTS  "N�mero",;
               "C�digo",;
               "Nombre proveedor",;
               "Expedici�n",;
               "Vencimiento",;
               "Sesi�n",;
               "Cobro",;
               "Importe";
      EDIT     ( WinEdtRec( oWndBrw:oBrw, bEdtRec, dbfFacPrvP, dbfDiv, , oBandera ) ) ;
      ZOOM     ( WinZooRec( oWndBrw:oBrw, bEdtRec, dbfFacPrvP, dbfDiv, , oBandera ) ) ;
      DELETE   ( DelPgoPrv( oWndBrw:oBrw, dbfFacPrvP ) ) ;
      LEVEL    nLevel ;
      OF       oWnd

   oWndBrw:lFechado     := .t.
   oWndBrw:bChgIndex    := {|| if( oUser():lFiltroVentas(), CreateFastFilter( cFiltroUsuario, dbfFacPrvP, .f., , cFiltroUsuario ), CreateFastFilter( "", dbfFacPrvP, .f. ) ) }

   oWndBrw:SetYearComboBoxChange( {|| YearComboBoxChange() } )

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Sesi�n cerrada"
      :nHeadBmpNo       := 3
      :bStrData         := {|| "" }
      :bEditValue       := {|| ( dbfFacPrvP )->lCloPgo }
      :nWidth           := 20
      :lHide            := .t.
      :SetCheck( { "Sel16", "Nil16" } )
      :AddResource( "Zoom16" )
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Pagado"
      :nHeadBmpNo       := 4
      :bStrData         := {|| "" }
      :bBmpData         := {|| nEstadoRecibo( dbfFacPrvP ) }
      :nWidth           := 20
      :AddResource( "Cnt16" )
      :AddResource( "Sel16" )
      :AddResource( "Document_out_16" )
      :AddResource( "ChgPre16" )
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Contabilizado"
      :nHeadBmpNo       := 3
      :bStrData         := {|| "" }
      :bEditValue       := {|| ( dbfFacPrvP )->lConPgo }
      :nWidth           := 20
      :SetCheck( { "Sel16", "Nil16" } )
      :AddResource( "BmpConta16" )
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Impreso"
      :nHeadBmpNo       := 3
      :bStrData         := {|| "" }
      :bEditValue       := {|| ( dbfFacPrvP )->lRecImp }
      :nWidth           := 20
      :lHide            := .t.
      :SetCheck( { "Sel16", "Nil16" } )
      :AddResource( "Imp16" )
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Tipo"
      :bEditValue       := {|| if( !Empty( ( dbfFacPrvP )->cTipRec ), "Rectificativa", "" ) }
      :nWidth           := 60
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "N�mero"
      :cSortOrder       := "nNumFac"
      :bEditValue       := {|| ( dbfFacPrvP )->cSerFac + "/" + AllTrim( Str( ( dbfFacPrvP )->nNumFac ) ) + "-" + Str( ( dbfFacPrvP )->nNumRec ) }
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :nWidth           := 80
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Delegaci�n"
      :bEditValue       := {|| ( dbfFacPrvP )->cSufFac  }
      :nWidth           := 20
      :lHide            := .t.
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Sesi�n"
      :bEditValue       := {|| Trans( ( dbfFacPrvP )->cTurRec, "######" ) }
      :cSortOrder       := "cTurRec"
      :nWidth           := 60
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :lHide            := .t.
      :nDataStrAlign    := 1
      :nHeadStrAlign    := 1
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Expedici�n"
      :cSortOrder       := "dPreCob"
      :bEditValue       := {|| ( dbfFacPrvP )->dPreCob }
      :nWidth           := 80
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :nDataStrAlign    := 3
      :nHeadStrAlign    := 3
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Caja"
      :bEditValue       := {|| ( dbfFacPrvP )->cCodCaj }
      :nWidth           := 40
      :lHide            := .t.
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Usuario"
      :bEditValue       := {|| ( dbfFacPrvP )->cCodUsr }
      :nWidth           := 40
      :lHide            := .t.
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Vencimiento"
      :cSortOrder       := "dFecVto"
      :bEditValue       := {|| ( dbfFacPrvP )->dFecVto }
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :nWidth           := 80
      :nDataStrAlign    := 3
      :nHeadStrAlign    := 3
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Cobro"
      :cSortOrder       := "dEntrada"
      :bEditValue       := {|| Dtoc( ( dbfFacPrvP )->dEntrada ) }
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :nWidth           := 80
      :nDataStrAlign    := 3
      :nHeadStrAlign    := 3
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "C�digo"
      :cSortOrder       := "cCodPrv"
      :bEditValue       := {|| ( dbfFacPrvP )->cCodPrv }
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :nWidth           := 80
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Nombre proveedor"
      :cSortOrder       := "cNomPrv"
      :bEditValue       := {|| ( dbfFacPrvP )->cNomPrv }
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :nWidth           := 180
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Descripci�n"
      :bEditValue       := {|| ( dbfFacPrvP )->cDescrip }
      :nWidth           := 200
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Importe"
      :cSortOrder       := "nImporte"
      :bEditValue       := {|| nTotRecPrv( dbfFacPrvP, dbfDiv, if( lEur, cDivChg(), cDivEmp() ), .t. ) }
      :bLClickHeader    := {| nMRow, nMCol, nFlags, oCol | oWndBrw:ClickOnHeader( oCol ) }
      :nWidth           := 80
      :nDataStrAlign    := 1
      :nHeadStrAlign    := 1
   end with

   with object ( oWndBrw:AddXCol() )
      :cHeader          := "Div."
      :bEditValue       := {|| cSimDiv( if( lEur, cDivChg(), ( dbfFacPrvP )->cDivPgo ), dbfDiv ) }
      :nWidth           := 30
   end with

   oWndBrw:lAutoSeek    := .f.
   oWndBrw:cHtmlHelp    := "Recibo de proveedor"

   oWndBrw:CreateXFromCode()

   DEFINE BTNSHELL RESOURCE "BUS" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( oWndBrw:SearchSetFocus() ) ;
      TOOLTIP  "(B)uscar" ;
      HOTKEY   "B"

   oWndBrw:AddSeaBar()

   DEFINE BTNSHELL RESOURCE "EDIT" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( oWndBrw:RecEdit() );
      TOOLTIP  "(M)odificar";
      BEGIN GROUP;
      HOTKEY   "M";
      LEVEL    ACC_EDIT

   DEFINE BTNSHELL RESOURCE "DEL" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( oWndBrw:RecDel() );
      TOOLTIP  "(E)liminar";
      HOTKEY   "E";
      LEVEL    ACC_DELE

   DEFINE BTNSHELL RESOURCE "ZOOM" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( oWndBrw:RecZoom() );
      TOOLTIP  "(Z)oom";
      HOTKEY   "Z";
      LEVEL    ACC_ZOOM

   DEFINE BTNSHELL oImp RESOURCE "IMP", "IMPDOC2" GROUP OF oWndBrw ;
      NOBORDER ;
      ACTION   ( GenRecPrv( IS_PRINTER ) ) ;
      TOOLTIP  "(I)mprimir";
      HOTKEY   "I";
      LEVEL    ACC_IMPR

   lGenRecPrv( oWndBrw:oBrw, oImp, IS_PRINTER )

   DEFINE BTNSHELL RESOURCE "SERIE1" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( PrnSerie() ) ;
      TOOLTIP  "Imp(r)imir series";
      HOTKEY   "R";
      LEVEL    ACC_IMPR

   DEFINE BTNSHELL oPrv RESOURCE "PREV1" OF oWndBrw ;
      NOBORDER ;
      MENU     This:Toggle() ;
      ACTION   ( GenRecPrv( IS_SCREEN ) ) ;
      TOOLTIP  "(P)revisualizar";
      HOTKEY   "P";
      LEVEL    ACC_IMPR

   lGenRecPrv( oWndBrw:oBrw, oPrv, IS_SCREEN )

   DEFINE BTNSHELL oPdf RESOURCE "DOCLOCK" OF oWndBrw ;
      NOBORDER ;
      MENU     This:Toggle() ;
      ACTION   ( GenRecPrv( IS_PDF ) ) ;
      TOOLTIP  "Pd(f)";
      HOTKEY   "F";
      LEVEL    ACC_IMPR

      lGenRecPrv( oWndBrw:oBrw, oPdf, IS_PDF ) ;

   DEFINE BTNSHELL oMail RESOURCE "Mail" OF oWndBrw ;
      NOBORDER ;
      MENU     This:Toggle() ;
      ACTION   ( GenRecPrv( IS_MAIL ) ) ;
      TOOLTIP  "Correo electr�nico";
      LEVEL    ACC_IMPR

      lGenRecPrv( oWndBrw:oBrw, oMail, IS_MAIL ) ;

   #ifndef __TACTIL__

   DEFINE BTNSHELL RESOURCE "PREV1" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( InfPrevisionPagos():New( "Listado de previsi�n de pagos" ):Play() ) ;
      TOOLTIP  "Pre(v)isi�n";
      HOTKEY   "V";
      LEVEL    ACC_ZOOM

   #endif

   DEFINE BTNSHELL RESOURCE "Money2_" OF oWndBrw GROUP ;
      NOBORDER ;
      ACTION   ( lLiquida( oWndBrw:oBrw ) ) ;
      TOOLTIP  "Pagar" ;
      LEVEL    ACC_EDIT

   DEFINE BTNSHELL RESOURCE "BMPCONTA" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( TraRecPrv( oWndBrw:oBrw ) ) ;
      TOOLTIP  "(C)ontabilizar" ;
      HOTKEY   "C";
      LEVEL    ACC_EDIT

   if oUser():lAdministrador()

      DEFINE BTNSHELL RESOURCE "CHGSTATE" OF oWndBrw ;
         NOBORDER ;
         ACTION   ( TraRecPrv( oWndBrw:oBrw, "Cambiar estado de recibos", "Contabilizado", .t. ) ) ;
         TOOLTIP  "Cambiar Es(t)ado" ;
         HOTKEY   "T";
         LEVEL    ACC_EDIT

   end if

   DEFINE BTNSHELL oBtnEur RESOURCE "BAL_EURO" OF oWndBrw ;
      NOBORDER ;
      ACTION   ( lEur := !lEur, oWndBrw:Refresh() ) ;
      TOOLTIP  "M(o)neda";
      HOTKEY   "O";

   if oUser():lAdministrador()

      DEFINE BTNSHELL RESOURCE "BMPCHG" OF oWndBrw ;
         NOBORDER ;
         ACTION   ( TDlgFlt():New( aItmRecPrv(), dbfFacPrvP ):ChgFields(), oWndBrw:Refresh() );
         TOOLTIP  "Cambiar campos" ;
         LEVEL    ACC_EDIT

   end if

   if !oUser():lFiltroVentas()

   end if

   DEFINE BTNSHELL RESOURCE "Sel" GROUP OF oWndBrw ;
      NOBORDER ;
      ACTION   ( FilterRecibos( .t. ) );
      TOOLTIP  "Solo cob(r)ados" ;
      HOTKEY   "R";

   DEFINE BTNSHELL RESOURCE "Cnt" GROUP OF oWndBrw ;
      NOBORDER ;
      ACTION   ( FilterRecibos( .f. ) );
      TOOLTIP  "Solo (p)endientes" ;
      HOTKEY   "P";

   DEFINE BTNSHELL RESOURCE "Document_out_" GROUP OF oWndBrw ;
      NOBORDER ;
      ACTION   ( FilterRecibos() );
      TOOLTIP  "Solo de(v)ueltos" ;
      HOTKEY   "V";

   DEFINE BTNSHELL oRotor RESOURCE "ROTOR" GROUP OF oWndBrw ;
      ACTION   ( oRotor:Expand() ) ;
      TOOLTIP  "Rotor" ;
      LEVEL    ACC_EDIT

      DEFINE BTNSHELL RESOURCE "BUSINESSMAN_" OF oWndBrw ;
         NOBORDER ;
         ACTION   ( EdtPrv( ( dbfFacPrvP )->cCodPrv ) );
         TOOLTIP  "Modificar proveedor" ;
         FROM     oRotor ;
         CLOSED ;
         LEVEL    ACC_EDIT

      DEFINE BTNSHELL RESOURCE "INFO" OF oWndBrw ;
         NOBORDER ;
         ACTION   ( InfProveedor( ( dbfFacPrvP )->cCodPrv ) );
         TOOLTIP  "Informe proveedor" ;
         FROM     oRotor ;
         CLOSED ;
         LEVEL    ACC_EDIT

      DEFINE BTNSHELL RESOURCE "DOCUMENT_BUSINESSMAN_" OF oWndBrw ;
         NOBORDER ;
         ACTION   ( ZooFacPrv( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac ) );
         TOOLTIP  "Visualizar factura" ;
         FROM     oRotor ;
         CLOSED ;
         LEVEL    ACC_EDIT

   DEFINE BTNSHELL RESOURCE "END"  GROUP OF oWndBrw ;
      NOBORDER ;
      ACTION   ( oWndBrw:End() ) ;
      TOOLTIP  "(S)alir";
      HOTKEY   "S"

   if !oUser():lFiltroVentas()
      oWndBrw:oActiveFilter:SetFields( aItmRecPrv() )
      oWndBrw:oActiveFilter:SetFilterType( REC_PRV )
   end if

   ACTIVATE WINDOW oWndBrw VALID ( CloseFiles() )

   EnableAcceso()

   if ValType( aNumRec ) == "A" .and. !Empty( aNumRec[ 1 ] )
      ExternalPago( aNumRec )
   end if

Return .t.

//--------------------------------------------------------------------------//

Static Function ExternalPago( aNumRec )

   local nOrdAnt  := ( dbfFacPrvP )->( OrdSetFocus( "nNumFac" ) )

   if ( dbfFacPrvP )->( dbSeek( aNumRec[ 1 ] ) ) .and. !Empty( oWndBrw )
      oWndBrw:Refresh()
      oWndBrw:RecEdit()
   end if

   ( dbfFacPrvP )->( OrdSetFocus( nOrdAnt ) )

   aNumRec        := Array( 1 )

Return .t.

//--------------------------------------------------------------------------//

FUNCTION EdtPag( aTmp, aGet, dbfFacPrvP, oBrw, lRectificativa, bValid, nMode )

   local oDlg
   local oBmpDiv
   local oGetSubCta
   local cGetSubCta
   local cPirDiv        := cPirDiv( aTmp[ _CDIVPGO ], dbfDiv )
   local nDinDiv        := nRinDiv( aTmp[ _CDIVPGO ], dbfDiv )
   local oFld
   local oBmpGeneral
   local oBmpDevolucion
   local oBmpBancos

   if Empty( aTmp[ _CCODCAJ ] )
      aTmp[ _CCODCAJ ]  := oUser():cCaja()
   end if

   lOldDevuelto         := aTmp[ _LDEVUELTO ]

   DEFINE DIALOG oDlg RESOURCE "Recibos" TITLE "Recibos de proveedor"

      REDEFINE FOLDER oFld ;
         ID       500;
         OF       oDlg ;
         PROMPT   "&General",;
                  "Bancos",;
                  "Devoluci�n" ;
         DIALOGS  "Pgo_Prv_1",;
                  "RecibosProveedoresBancos",;
                  "Recibos_2"

      REDEFINE BITMAP oBmpGeneral ;
         ID       500 ;
         RESOURCE "Money_Alpha_48" ;
         TRANSPARENT ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _DPRECOB ] VAR aTmp[ _DPRECOB ] ;
			ID 		100 ;
         SPINNER ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         ON HELP  aGet[ _DPRECOB ]:cText( Calendario( aTmp[ _DPRECOB ] ) ) ;
         COLOR    CLR_GET ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _DFECVTO ] VAR aTmp[ _DFECVTO ] ;
         ID       250 ;
         SPINNER ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         ON HELP  aGet[ _DFECVTO ]:cText( Calendario( aTmp[ _DFECVTO ] ) ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _DENTRADA ] VAR aTmp[ _DENTRADA ] ;
			ID 		110 ;
         SPINNER ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         ON HELP  aGet[ _DENTRADA ]:cText( Calendario( aTmp[ _DENTRADA ] ) ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CCODPRV ] VAR aTmp[ _CCODPRV ] ;
         ID       120 ;
         WHEN     ( .f. ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CNOMPRV ] VAR aTmp[ _CNOMPRV ];
         ID       121 ;
         WHEN     ( .f. ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CTURREC ] VAR aTmp[ _CTURREC ] ;
         ID       335 ;
         SPINNER ;
         WHEN     ( nMode != ZOOM_MODE .and. lUsrMaster() ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CCODPGO ] VAR aTmp[ _CCODPGO ] ;
         ID       310 ;
         IDTEXT   311 ;
			WHEN 		( nMode != ZOOM_MODE ) ;
			PICTURE  "@!" ;
         VALID    ( cFPago( aGet[ _CCODPGO ], dbfFPago, aGet[ _CCODPGO ]:oHelpText ) ) ;
         BITMAP   "LUPA" ;
         ON HELP  ( BrwFPago( aGet[ _CCODPGO ], aGet[ _CCODPGO ]:oHelpText ) ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CDESCRIP ] VAR aTmp[ _CDESCRIP ] ;
         ID       140 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         COLOR    CLR_GET ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CPGDOPOR ] VAR aTmp[ _CPGDOPOR ] ;
         ID       150 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         COLOR    CLR_GET ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _NIMPORTE ] VAR aTmp[ _NIMPORTE ] ;
         ID       180 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         PICTURE  ( cPirDiv ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE CHECKBOX aGet[ _LRECIMP ] VAR aTmp[ _LRECIMP ];
         ID       160 ;
         WHEN     ( nMode != ZOOM_MODE .and. lUsrMaster() ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _DFECIMP ] VAR aTmp[ _DFECIMP ] ;
         ID       161 ;
         SPINNER ;
         WHEN     ( nMode != ZOOM_MODE .and. lUsrMaster() ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CHORIMP ] VAR aTmp[ _CHORIMP ] ;
         ID       162 ;
         WHEN     ( nMode != ZOOM_MODE .and. lUsrMaster() ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CDIVPGO ] VAR aTmp[ _CDIVPGO ];
         WHEN     ( .f. ) ;
         VALID    ( cDivOut( aGet[ _CDIVPGO ], oBmpDiv, aTmp[ _NVDVPGO ], @cPirDiv, @nDinDiv, nil, nil, nil, nil, nil, dbfDiv, oBandera ) );
         PICTURE  "@!";
         ID       170 ;
			COLOR 	CLR_GET ;
         BITMAP   "LUPA" ;
         ON HELP  BrwDiv( aGet[ _CDIVPGO ], oBmpDiv, aTmp[ _NVDVPGO ], dbfDiv, oBandera ) ;
         OF       oFld:aDialogs[ 1 ]

		REDEFINE BITMAP oBmpDiv ;
         ID       171;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE CHECKBOX aGet[ _LCOBRADO ] VAR aTmp[ _LCOBRADO ];
         ID       220 ;
         ON CHANGE( lValCheck( aGet, aTmp ) ) ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE CHECKBOX aGet[ _LNOTARQUEO ] VAR aTmp[ _LNOTARQUEO ];
         ID       330 ;
			WHEN 		( nMode != ZOOM_MODE ) ;
         OF       oFld:aDialogs[ 1 ]

      REDEFINE GET aGet[ _CCTAREC ] VAR aTmp[ _CCTAREC ] ;
         ID       240 ;
         PICTURE  ( Replicate( "X", nLenSubcuentaContaplus() ) ) ;
         WHEN     ( nLenCuentaContaplus() != 0 .AND. nMode != ZOOM_MODE ) ;
         BITMAP   "LUPA" ;
         ON HELP  ( BrwChkSubCta( aGet[ _CCTAREC ], oGetSubCta ) ) ;
         VALID    ( MkSubCta( aGet[ _CCTAREC ], { aTmp[ _CCTAREC ] }, oGetSubCta ) );
         OF       oFld:aDialogs[ 1 ]

		REDEFINE GET oGetSubCta VAR cGetSubCta ;
         ID       241 ;
			WHEN 		.F. ;
         OF       oFld:aDialogs[ 1 ]

      /*
      Segunda caja de dialogo--------------------------------------------------
      */

      REDEFINE BITMAP oBmpBancos ;
         ID       500 ;
         RESOURCE "office_building_48_alpha" ;
         TRANSPARENT ;
         OF       oFld:aDialogs[ 2 ]

      REDEFINE GET aGet[ _CBNCEMP ] VAR aTmp[ _CBNCEMP ];
         ID       100 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         BITMAP   "LUPA" ;
         ON HELP  ( BrwBncEmp( aGet[ _CBNCEMP ], aGet[ _CENTEMP ], aGet[ _CSUCEMP ], aGet[ _CDIGEMP ], aGet[ _CCTAEMP ] ) );
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CENTEMP ] VAR aTmp[ _CENTEMP ];
         ID       110 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTEMP ], aTmp[ _CSUCEMP ], aTmp[ _CDIGEMP ], aTmp[ _CCTAEMP ], aGet[ _CDIGEMP ] ) ) ;
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CSUCEMP ] VAR aTmp[ _CSUCEMP ];
         ID       120 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTEMP ], aTmp[ _CSUCEMP ], aTmp[ _CDIGEMP ], aTmp[ _CCTAEMP], aGet[ _CDIGEMP ] ) ) ;
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CDIGEMP ] VAR aTmp[ _CDIGEMP ];
         ID       130 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTEMP ], aTmp[ _CSUCEMP ], aTmp[ _CDIGEMP ], aTmp[ _CCTAEMP ], aGet[ _CDIGEMP ] ) ) ;
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CCTAEMP ] VAR aTmp[ _CCTAEMP ];
         ID       140 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTEMP ], aTmp[ _CSUCEMP ], aTmp[ _CDIGEMP ], aTmp[ _CCTAEMP ], aGet[ _CDIGEMP ] ) ) ;
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CBNCPRV ] VAR aTmp[ _CBNCPRV ];
         ID       200 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         BITMAP   "LUPA" ;
         ON HELP  ( BrwBncPrv( aGet[ _CBNCPRV ], aGet[ _CENTPRV ], aGet[ _CSUCPRV ], aGet[ _CDIGPRV ], aGet[ _CCTAPRV ], aTmp[ _CCODPRV ] ) );
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CENTPRV ] VAR aTmp[ _CENTPRV ];
         ID       210 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTPRV ], aTmp[ _CSUCPRV ], aTmp[ _CDIGPRV ], aTmp[ _CCTAPRV ], aGet[ _CDIGPRV ] ) ) ;
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CSUCPRV ] VAR aTmp[ _CSUCPRV ];
         ID       220 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTPRV ], aTmp[ _CSUCPRV ], aTmp[ _CDIGPRV ], aTmp[ _CCTAPRV], aGet[ _CDIGPRV ] ) ) ;
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CDIGPRV ] VAR aTmp[ _CDIGPRV ];
         ID       230 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTPRV ], aTmp[ _CSUCPRV ], aTmp[ _CDIGPRV ], aTmp[ _CCTAPRV ], aGet[ _CDIGPRV ] ) ) ;
         OF       oFld:aDialogs[2]

      REDEFINE GET aGet[ _CCTAPRV ] VAR aTmp[ _CCTAPRV ];
         ID       240 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( lCalcDC( aTmp[ _CENTPRV ], aTmp[ _CSUCPRV ], aTmp[ _CDIGPRV ], aTmp[ _CCTAPRV ], aGet[ _CDIGPRV ] ) ) ;
         OF       oFld:aDialogs[2]

      /*
      Tercera Caja de Di�logo--------------------------------------------------
      */

      REDEFINE BITMAP oBmpDevolucion ;
         ID       500 ;
         RESOURCE "money2_delete_48" ;
         TRANSPARENT ;
         OF       oFld:aDialogs[ 3 ]

      REDEFINE CHECKBOX aGet[ _LDEVUELTO ] VAR aTmp[ _LDEVUELTO ];
         ID       100 ;
         WHEN     ( aTmp[ _LCOBRADO] .and. nMode != ZOOM_MODE ) ;
         ON CHANGE( lValDevPrv( aGet, aTmp, .f. ) ) ;
         OF       oFld:aDialogs[ 3 ]

      REDEFINE GET aGet[ _DFECDEV ] VAR aTmp[ _DFECDEV ] ;
         ID       110 ;
         SPINNER ;
         WHEN     ( aTmp[ _LCOBRADO] .and. nMode != ZOOM_MODE ) ;
         OF       oFld:aDialogs[ 3 ]

      REDEFINE GET aGet[ _CMOTDEV ] VAR aTmp[ _CMOTDEV ] ;
         ID       120 ;
         WHEN     ( aTmp[ _LCOBRADO] .and. nMode != ZOOM_MODE ) ;
         OF       oFld:aDialogs[ 3 ]

      REDEFINE GET aGet[ _CRECDEV ] VAR aTmp[ _CRECDEV ] ;
         ID       130 ;
         WHEN     ( .f. ) ;
         OF       oFld:aDialogs[ 3 ]







         /*REDEFINE GET aGet[ _CBANCO ] VAR aTmp[ _CBANCO ];
         ID       340 ;
         WHEN     ( nMode != ZOOM_MODE );
         BITMAP   "LUPA" ;
         ON HELP  ( BrwBncPrv( aGet[ _CBANCO ], aGet[ _CCUENTA ], aTmp[ _CCODPRV ] ) );
         OF       oFld:aDialogs[1]

      REDEFINE GET aGet[ _CCUENTA ] VAR aTmp[ _CCUENTA ] ;
         ID       320 ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         VALID    ( CalcDigit( aTmp[ _CCUENTA ], aGet[ _CCUENTA ] ), .t. ) ;
         PICTURE  "@R ####-####-##-##########" ;
         OF       oFld:aDialogs[ 1 ]*/













		REDEFINE BUTTON ;
         ID       IDOK ;
         OF       oDlg ;
         WHEN     ( nMode != ZOOM_MODE ) ;
         ACTION   ( EndTrans( aTmp, aGet, dbfFacPrvP, oBrw, oDlg, nDinDiv, nMode ) )

		REDEFINE BUTTON ;
         ID       IDCANCEL ;
			OF 		oDlg ;
         CANCEL ;
         ACTION   ( oDlg:end() )


   if nMode != ZOOM_MODE
      oDlg:AddFastKey( VK_F5, {|| EndTrans( aTmp, aGet, dbfFacPrvP, oBrw, oDlg, nDinDiv, nMode ) } )
   end if

   oDlg:AddFastKey ( VK_F1, {|| ChmHelp ("Pagos") } )

   oDlg:bStart    := {|| lValDevPrv( aGet, aTmp, .t. ) }

   ACTIVATE DIALOG oDlg ;
         CENTER ;
         ON INIT ( EdtRecMenu( aTmp, oDlg ),;
                   aGet[ _CDIVPGO ]:lValid(),;
                   aGet[ _CCTAREC ]:lValid(),;
                   aGet[ _CCODPGO ]:lValid() )

   EndEdtRecMenu()

   if !Empty( oBmpDiv )
      oBmpDiv:End()
   end if

   if !Empty( oBmpGeneral )
      oBmpGeneral:End()
   end if

   if !Empty( oBmpDevolucion )
      oBmpDevolucion:End()
   end if

RETURN ( oDlg:nResult == IDOK )

//--------------------------------------------------------------------------//

Static Function lValCheck( aGet, aTmp )

   if aTmp[ _LCOBRADO ]
      aGet[ _DENTRADA ]:cText( GetSysDate() )
      aGet[ _CTURREC  ]:cText( cCurSesion( nil, .f. ) )
   else
      aGet[ _DENTRADA ]:cText( Ctod( "" ) )
   end if

return .t.

//---------------------------------------------------------------------------//

static function EndTrans( aTmp, aGet, dbfFacPrvP, oBrw, oDlg, nDinDiv, nMode )

   local nImp
   local nCon
   local nRec        := ( dbfFacPrvP )->( Recno() )
   local lImpNeg     := ( dbfFacPrvP )->nImporte < 0
   local nImpTmp     := abs( aTmp[ _NIMPORTE ] )
   local nImpFld     := abs( ( dbfFacPrvP )->nImporte )
   local cNumFac     := aTmp[ _CSERFAC ] + Str( aTmp[ _NNUMFAC ] ) + aTmp[ _CSUFFAC ]
   local cNumRec     := aTmp[ _CSERFAC ] + Str( aTmp[ _NNUMFAC ] ) + aTmp[ _CSUFFAC ] + Str( aTmp[ _NNUMREC ] )
   local lDevuelto   := aTmp[ _LDEVUELTO ]
   local aTabla
   local nOrdAnt

   /*
   El importe no puede ser mayor q el importe anterior
   */

   if nImpTmp > nImpFld
      msgStop( "El importe no puede ser superior al actual." )
      return nil
   end if

   if !lExisteTurno( aGet[ _CTURREC ]:VarGet() )
      msgStop( "La sesi�n introducida no existe." )
      aGet[ _CTURREC ]:SetFocus()
      return nil
   end if

   oDlg:Disable()

   aTmp[ _DFECCHG ]  := GetSysDate()
   aTmp[ _CTIMCHG ]  := Time()

   /*
   Comprobamos q los importes sean distintos
   */

   if nImpFld != nImpTmp

      /*
      El importe ha cambiado por tanto debemos de hacer un nuevo recibo por la diferencia
      */

      nImp                          := ( nImpFld - nImpTmp ) * if( lImpNeg, - 1 , 1 )

      /*
      Obtnenemos el nuevo numero del contador
      */

      nCon                          := nNewReciboProveedor( aTmp[ _CSERFAC ] + Str( aTmp[ _NNUMFAC ] ) + aTmp[ _CSUFFAC ], aTmp[ _CTIPREC ], dbfFacPrvP )

      /*
      A�adimos el nuevo recibo
      */

      ( dbfFacPrvP )->( dbAppend() )
      ( dbfFacPrvP )->cSerFac       := aTmp[ _CSERFAC ]
      ( dbfFacPrvP )->nNumFac       := aTmp[ _NNUMFAC ]
      ( dbfFacPrvP )->cSufFac       := aTmp[ _CSUFFAC ]
      ( dbfFacPrvP )->nNumRec       := nCon
      ( dbfFacPrvP )->dEntrada      := Ctod( "" )
      ( dbfFacPrvP )->nImporte      := nImp
      ( dbfFacPrvP )->cDescrip      := "Recibo n�" + AllTrim( Str( nCon ) ) + " de factura " + aTmp[ _CSERFAC ] + '/' + AllTrim( Str( aTmp[ _NNUMFAC ] ) ) + '/' + aTmp[ _CSUFFAC ]
      ( dbfFacPrvP )->dPreCob       := GetSysDate()
      ( dbfFacPrvP )->cPgdoPor      := ""
      ( dbfFacPrvP )->lCobrado      := .f.
      ( dbfFacPrvP )->cDivPgo       := aTmp[ _CDIVPGO ]
      ( dbfFacPrvP )->nVdvPgo       := aTmp[ _NVDVPGO ]
      ( dbfFacPrvP )->lConPgo       := .f.
      ( dbfFacPrvP )->cTurRec       := cCurSesion()
      ( dbfFacPrvP )->lCloPgo       := .f.
      ( dbfFacPrvP )->( dbUnLock() )

   end if

   ( dbfFacPrvP )->( DbGoTo( nRec ) )

   /*
   Grabamos el registro--------------------------------------------------------
   */

   WinGather( aTmp, aGet, dbfFacPrvP, oBrw, nMode, , .f. )

   /*
   Si es Devuelto creamos el tiket nuevo---------------------------------------
   */

   nRec     := ( dbfFacPrvP )->( Recno() )

   if lOldDevuelto != lDevuelto

      if lDevuelto

         nOrdAnt                        := ( dbfFacPrvP )->( OrdSetFocus( "nNumFac" ) )

         if ( dbfFacPrvP )->( dbSeek( cNumRec ) )
            aTabla                      := DBScatter( dbfFacPrvP )
         end if

         nCon                           := nNewReciboProveedor( aTabla[ _CSERFAC ] + Str( aTabla[ _NNUMFAC ] ) + aTabla[ _CSUFFAC ], aTabla[ _CTIPREC ], dbfFacPrvP )

         if aTabla != nil

            ( dbfFacPrvP )->( dbAppend() )

            ( dbfFacPrvP )->cSerFac     := aTabla[ _CSERFAC ]
            ( dbfFacPrvP )->nNumFac     := aTabla[ _NNUMFAC ]
            ( dbfFacPrvP )->cSufFac     := aTabla[ _CSUFFAC ]
            ( dbfFacPrvP )->nNumRec     := nCon
            ( dbfFacPrvP )->cTipRec     := aTabla[ _CTIPREC ]
            ( dbfFacPrvP )->cCodCaj     := aTabla[ _CCODCAJ ]
            ( dbfFacPrvP )->cCodPrv     := aTabla[ _CCODPRV ]
            ( dbfFacPrvP )->cNomPrv     := aTabla[ _CNOMPRV ]
            ( dbfFacPrvP )->nImporte    := aTabla[ _NIMPORTE ]
            ( dbfFacPrvP )->cDescrip    := "Recibo N�" + AllTrim( Str( nCon ) ) + " generado de la devoluci�n del recibo " + aTabla[ _CSERFAC ] + "/" + AllTrim( Str( aTabla[ _NNUMFAC ] ) ) + "/" + aTabla[ _CSUFFAC ] + " - " + AllTrim( Str( aTabla[ _NNUMREC ] ) )
            ( dbfFacPrvP )->dPreCob     := GetSysDate()
            ( dbfFacPrvP )->cDivPgo     := aTabla[ _CDIVPGO ]
            ( dbfFacPrvP )->nVdvPgo     := aTabla[ _NVDVPGO ]
            ( dbfFacPrvP )->dFecVto     := GetSysDate()
            ( dbfFacPrvP )->cCodUsr     := oUser():cCodigo()
            ( dbfFacPrvP )->dFecChg     := GetSysDate()
            ( dbfFacPrvP )->cTimChg     := Time()
            ( dbfFacPrvP )->cTurRec     := cCurSesion()
            ( dbfFacPrvP )->cCodPgo     := aTabla[ _CCODPGO ]
            ( dbfFacPrvP )->cRecDev     := cNumRec

            ( dbfFacPrvP )->( dbUnLock() )

         end if

         ( dbfFacPrvP )->( OrdSetFocus( nOrdAnt ) )

      else

         nOrdAnt                        := ( dbfFacPrvP )->( OrdSetFocus( "cRecDev" ) )

         if ( dbfFacPrvP )->( dbSeek( cNumRec ) ) .and. dbDialogLock( dbfFacPrvP )
            ( dbfFacPrvP )->( dbDelete() )
            ( dbfFacPrvP )->( dbUnLock() )
         end if

         ( dbfFacPrvP )->( OrdSetFocus( nOrdAnt ) )

      end if

   end if

   ( dbfFacPrvP )->( dbGoTo( nRec ) )

   /*
   Comprobamos el estado de la factura---------------------------------------
   */

   if dbfFacPrvT != nil          .and.;
      dbfFacPrvL != nil          .and.;
      dbfIva     != nil          .and.;
      dbfDiv     != nil          .and.;
      ( dbfFacPrvT )->( dbSeek( cNumFac ) )

      ChkLqdFacPrv( nil, dbfFacPrvT, dbfFacPrvL, dbfFacPrvP, dbfIva, dbfDiv )

   end if

   /*
   Escribe los datos pendientes------------------------------------------------
   */

   dbCommitAll()

   oDlg:Enable()

   oDlg:end( IDOK )

return nil

//--------------------------------------------------------------------------//

STATIC FUNCTION PrnSerie()

	local oDlg
   local oRad
   local nRad        := 1
   local oSerIni
   local oSerFin
   local oFmtRec
   local cFmtRec     := cSelPrimerDoc( "RP" )
   local oSayRec
   local cSayRec
   local oNotRem
   local lNotRem     := .f.
   local lNotImp     := .f.
   local lNotCob     := .f.
   local oCodPgo
   local cCodPgo     := Space( 3 )
   local oTxtPgo
   local cTxtPgo     := ""
   local nRecno      := ( dbfFacPrvP )->( recno() )
   local nOrdAnt     := ( dbfFacPrvP )->( OrdSetFocus( 1 ) )
   local dFecIni     := CtoD( "01/" + Str( Month( GetSysDate() ), 2 ) + "/" + Str( Year( Date() ) ) )
   local dFecFin     := GetSysDate()
   local cSerIni     := ( dbfFacPrvP )->cSerFac
   local cSerFin     := ( dbfFacPrvP )->cSerFac
   local nDocIni     := ( dbfFacPrvP )->nNumFac
   local nDocFin     := ( dbfFacPrvP )->nNumFac
   local cSufIni     := ( dbfFacPrvP )->cSufFac
   local cSufFin     := ( dbfFacPrvP )->cSufFac
   local nNumIni     := ( dbfFacPrvP )->nNumRec
   local nNumFin     := ( dbfFacPrvP )->nNumRec
   local nCopPrn     := 1
   local oPrinter
   local cPrinter    := PrnGetName()
   local lInvOrden   := .f.

   cSayRec           := cNombreDoc( cFmtRec )

   DEFINE DIALOG oDlg RESOURCE "IMPSERREC"

   REDEFINE RADIO oRad VAR nRad ;
      ID       90, 91 ;
      OF       oDlg

   REDEFINE GET oFmtRec VAR cFmtRec ;
      ID       100 ;
      COLOR    CLR_GET ;
      VALID    ( cDocumento( oFmtRec, oSayRec, dbfDoc ) ) ;
      BITMAP   "LUPA" ;
      ON HELP  ( BrwDocumento( oFmtRec, oSayRec, "RP" ) ) ;
      OF       oDlg

   REDEFINE GET oSayRec VAR cSayRec ;
      ID       101 ;
      WHEN     ( .f. );
      COLOR    CLR_GET ;
      OF       oDlg

   TBtnBmp():ReDefine( 92, "Printer_pencil_16",,,,,{|| EdtDocumento( cFmtRec ) }, oDlg, .f., , .f.,  )

   REDEFINE GET dFecIni ;
      ID       110 ;
      SPINNER ;
      WHEN     ( nRad == 1 ) ;
      OF       oDlg

   REDEFINE GET dFecFin ;
      ID       120 ;
      SPINNER ;
      WHEN     ( nRad == 1 ) ;
      OF       oDlg

   REDEFINE GET oSerIni VAR cSerIni ;
      ID       130 ;
      PICTURE  "@!" ;
      UPDATE ;
      SPINNER ;
      ON UP    ( UpSerie( oSerIni ) );
      ON DOWN  ( DwSerie( oSerIni ) );
      WHEN     ( nRad == 2 ) ;
      VALID    ( cSerIni >= "A" .AND. cSerIni <= "Z"  );
      OF       oDlg

   REDEFINE GET oSerFin VAR cSerFin ;
      ID       170 ;
      PICTURE  "@!" ;
      UPDATE ;
      SPINNER ;
      ON UP    ( UpSerie( oSerFin ) );
      ON DOWN  ( DwSerie( oSerFin ) );
      WHEN     ( nRad == 2 ) ;
      VALID    ( cSerFin >= "A" .AND. cSerFin <= "Z"  );
      OF       oDlg

   REDEFINE GET nDocIni;
      ID       140 ;
      PICTURE  "999999999" ;
      SPINNER ;
      WHEN     ( nRad == 2 ) ;
		OF 		oDlg

   REDEFINE GET nDocFin;
      ID       180 ;
      PICTURE  "999999999" ;
      SPINNER ;
      WHEN     ( nRad == 2 ) ;
		OF 		oDlg

   REDEFINE GET cSufIni ;
      ID       150 ;
      PICTURE  "##" ;
      WHEN     ( nRad == 2 ) ;
		OF 		oDlg

   REDEFINE GET cSufFin ;
      ID       190 ;
      PICTURE  "##" ;
      WHEN     ( nRad == 2 ) ;
		OF 		oDlg

   REDEFINE GET nNumIni ;
      ID       160 ;
      PICTURE  "99" ;
      WHEN     ( nRad == 2 ) ;
		OF 		oDlg

   REDEFINE GET nNumFin ;
      ID       200 ;
      PICTURE  "99" ;
      WHEN     ( nRad == 2 ) ;
		OF 		oDlg

   REDEFINE GET nCopPrn;
      ID       260 ;
      VALID    nCopPrn > 0 ;
		PICTURE 	"999999999" ;
      SPINNER ;
      MIN      1 ;
      MAX      99999 ;
      OF       oDlg



   REDEFINE GET oPrinter VAR cPrinter;
         WHEN     ( .f. ) ;
         ID       320 ;
         OF       oDlg

   TBtnBmp():ReDefine( 321, "Printer_preferences_16",,,,,{|| PrinterPreferences( oPrinter ) }, oDlg, .f., , .f.,  )





   REDEFINE CHECKBOX lInvOrden ;
      ID       500 ;
      OF       oDlg

   /*
   Formas de pago_____________________________________________________________________
   */

   REDEFINE GET oCodPgo VAR cCodPgo;
      ID       210 ;
      PICTURE  "@!" ;
      VALID    ( cFPago( oCodPgo, dbfFPago, oTxtPgo ) ) ;
      BITMAP   "LUPA" ;
      ON HELP  ( BrwFPago( oCodPgo, oTxtPgo ) );
      OF       oDlg

   REDEFINE GET oTxtPgo VAR cTxtPgo;
      ID       220 ;
      WHEN     .F. ;
      COLOR    CLR_GET ;
      OF       oDlg

   REDEFINE CHECKBOX oNotRem VAR lNotRem;
      ID       230 ;
		OF 		oDlg

   REDEFINE CHECKBOX lNotImp;
      ID       240 ;
		OF 		oDlg

   REDEFINE CHECKBOX lNotCob;
      ID       250 ;
		OF 		oDlg

   REDEFINE BUTTON ;
      ID       IDOK ;
		OF 		oDlg ;
      ACTION   (  StartPrint( SubStr( cFmtRec, 1, 3 ), nRad, dFecIni, dFecFin, cSerIni + Str( nDocIni, 9 ) + cSufIni + Str( nNumIni, 2 ), cSerFin + Str( nDocFin, 9 ) + cSufFin + Str( nNumFin, 2 ), cCodPgo, lNotRem, lNotImp, lNotCob, oDlg, nCopPrn, cPrinter, lInvOrden ),;
                  oDlg:end( IDOK ) )

   REDEFINE BUTTON ;
      ID       IDCANCEL ;
		OF 		oDlg ;
      CANCEL ;
      ACTION   ( oDlg:end() )

   oDlg:AddFastKey( VK_F5, {|| StartPrint( SubStr( cFmtRec, 1, 3 ), nRad, dFecIni, dFecFin, cSerIni + Str( nDocIni, 9 ) + cSufIni + Str( nNumIni, 2 ), cSerFin + Str( nDocFin, 9 ) + cSufFin + Str( nNumFin, 2 ), cCodPgo, lNotRem, lNotImp, lNotCob, oDlg, nCopPrn, cPrinter, lInvOrden ), oDlg:end( IDOK ) } )

   ACTIVATE DIALOG oDlg CENTER ON INIT ( oNotRem:Hide() )

   ( dbfFacPrvP )->( dbGoTo( nRecNo ) )
   ( dbfFacPrvP )->( ordSetFocus( nOrdAnt ) )

	oWndBrw:oBrw:refresh()

RETURN NIL

//--------------------------------------------------------------------------//

STATIC FUNCTION StartPrint( cCodDoc, nRad, dFecIni, dFecFin, cDocIni, cDocFin, cCodPgo, lNotRem, lNotImp, lNotCob, oDlg, nCopPrn, cPrinter, lInvOrden )

   local nOrd
   local nImpYet     := 1

   DEFAULT nCopPrn   := 1

   if Empty( cCodDoc )
      return nil
   end if

   oDlg:disable()

   if !lInvOrden

      if nRad == 1
         nOrd        := ( dbfFacPrvP )->( OrdSetFocus( "DENTRADA" ) )
         ( dbfFacPrvP )->( DbSeek( dFecIni, .t. ) )
      else
         nOrd        := ( dbfFacPrvP )->( OrdSetFocus( "NNUMFAC" ) )
         ( dbfFacPrvP )->( DbSeek( cDocIni, .t. ) )
      end if

      while !( dbfFacPrvP )->( eof() )

         if (  if( nRad == 1, ( ( dbfFacPrvP )->dEntrada >= dFecIni .and. ( dbfFacPrvP )->dEntrada <= dFecFin ), .t. )                  .and. ;
               if( nRad == 2, ( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac + Str( ( dbfFacPrvP )->nNumRec ) >= cDocIni           .and. ;
                                ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac + Str( ( dbfFacPrvP )->nNumRec ) <= cDocFin ), .t. )  .and. ;
               if( !Empty( cCodPgo ), cCodPgo == cPgoFacPrv( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac, 9 ) + ( dbfFacPrvP )->cSufFac, dbfFacPrvT ), .t. ) .and. ;
               if( lNotImp, !( dbfFacPrvP )->lRecImp, .t. )                                                                             .and. ;
               if( lNotCob, !( dbfFacPrvP )->lCobrado, .t. ) )

            while nImpYet <= nCopPrn
               GenRecPrv( IS_PRINTER, "Imprimiendo recibo : " + ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac, , cPrinter )
               nImpYet++
            end while

         end if

         nImpYet := 1
         ( dbfFacPrvP )->( dbSkip( 1 ) )

      end while

      ( dbfFacPrvP )->( OrdSetFocus( nOrd ) )

   else

      if nRad == 1
         nOrd        := ( dbfFacPrvP )->( OrdSetFocus( "DENTRADA" ) )
         ( dbfFacPrvP )->( DbSeek( dFecFin ) )
      else
         nOrd        := ( dbfFacPrvP )->( OrdSetFocus( "NNUMFAC" ) )
         ( dbfFacPrvP )->( DbSeek( cDocFin ) )
      end if

      while !( dbfFacPrvP )->( Bof() )

         if (  if( nRad == 1, ( ( dbfFacPrvP )->dEntrada >= dFecIni .and. ( dbfFacPrvP )->dEntrada <= dFecFin ), .t. )                  .and. ;
               if( nRad == 2, ( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac >= cDocIni           .and. ;
                                ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac <= cDocFin ), .t. )  .and. ;
               if( !Empty( cCodPgo ), cCodPgo == cPgoFacPrv( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac, 9 ) + ( dbfFacPrvP )->cSufFac, dbfFacPrvT ), .t. ) .and. ;
               if( lNotImp, !( dbfFacPrvP )->lRecImp, .t. )                                                                             .and. ;
               if( lNotCob, !( dbfFacPrvP )->lCobrado, .t. ) )

               while nImpYet <= nCopPrn
                  GenRecPrv( IS_PRINTER, "Imprimiendo recibo : " + ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac, , cPrinter )
                  nImpYet++
               end while

         end if

         nImpYet := 1

         ( dbfFacPrvP )->( dbSkip( - 1 ) )

      end while

      ( dbfFacPrvP )->( OrdSetFocus( nOrd ) )

   end if

   oDlg:enable()

RETURN NIL

//---------------------------------------------------------------------------//

FUNCTION GenRecPrv( nDevice, cCaption, cCodDoc, cPrinter, nCopies )

   local oInf
   local oDevice

   DEFAULT nDevice      := IS_PRINTER
   DEFAULT cCaption     := "Imprimiendo recibos"
   DEFAULT nCopies      := 1
   DEFAULT cCodDoc      := cFormatoDocumento( ( dbfFacPrvP )->cSerFac, "nRecPrv", dbfCount )

   if Empty( cCodDoc )
      cCodDoc           := cFirstDoc( "RP", dbfDoc )
   end if

   if !lExisteDocumento( cCodDoc, dbfDoc )
      return nil
   end if

   if lVisualDocumento( cCodDoc, dbfDoc )

      PrintReportRecPrv( nDevice, nCopies, cPrinter, dbfDoc )

   else

      private cDbf         := dbfFacPrvT
      private cDbfCol      := dbfFacPrvL
      private cDbfRec      := dbfFacPrvP
      private cDbfPrv      := dbfPrv
      private cDbfPgo      := dbfFPago
      private cDbfDiv      := dbfDiv
      private cPirDivRec   := cPorDiv( ( dbfFacPrvP )->cDivPgo, dbfDiv )

      ( dbfFacPrvT)->( dbSeek( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac ) )
      ( dbfPrv    )->( dbSeek( ( dbfFacPrvT )->cCodPrv ) )
      ( dbfFPago  )->( dbSeek( ( dbfFacPrvT )->cCodPago) )

      if !Empty( cPrinter )
         oDevice           := TPrinter():New( cCaption, .f., .t., cPrinter )
         REPORT oInf CAPTION cCaption TO DEVICE oDevice
      else
         REPORT oInf CAPTION cCaption PREVIEW
      end if

      if !Empty( oInf ) .and. oInf:lCreated

         oInf:lFinish            := .f.
         oInf:lNoCancel          := .t.
         oInf:bSkip              := {|| ( dbfFacPrvP )->( dbSkip() ) }

         oInf:oDevice:lPrvModal  := .t.

         do case
            case nDevice == IS_PRINTER
               oInf:bPreview  := {| oDevice | PrintPreview( oDevice ) }

            case nDevice == IS_PDF
               oInf:bPreview  := {| oDevice | PrintPdf( oDevice ) }

         end case

         SetMargin(  cCodDoc, oInf )
         PrintColum( cCodDoc, oInf )

      end if

      END REPORT

      if !Empty( oInf )

         ACTIVATE REPORT oInf WHILE ( .f. ) ON ENDPAGE ( eItems( oInf ) )

         if nDevice == IS_PRINTER
            oInf:oDevice:end()
         end if

      end if

      oInf                 := nil

   end if

   //Marca para ya impreso

   if nDevice == IS_PRINTER .and. dbDialogLock( dbfFacPrvP )
      ( dbfFacPrvP )->lRecImp := .t.
      ( dbfFacPrvP )->dFecImp := GetSysDate()
      ( dbfFacPrvP )->cHorImp := SubStr( Time(), 1, 5 )
      ( dbfFacPrvP )->( dbUnLock() )
   end if

   /*
   Refrescamos la pantalla principal-------------------------------------------
   */

   if !Empty( oWndBrw )
      oWndBrw:Refresh()
   end if

RETURN NIL

//---------------------------------------------------------------------------//

STATIC FUNCTION eItems( oInf )

   private nPagina      := oInf:nPage
	private lEnd			:= oInf:lFinish

	/*
	Reposicionamos en las distintas areas
	*/

   IF ( dbfFacPrvP )->cSerFac == "A"
      PrintItems( "RPA", oInf )
	ELSE
      PrintItems( "RPB", oInf )
	END IF

RETURN NIL

//-------------------------------------------------------------------------//

/*
Cambia el estado de un recibo
*/

STATIC FUNCTION ChgState( lState )

   DEFAULT lState := !( dbfFacPrvP )->lConPgo

   if ( dbfFacPrvP )->lConPgo != lState .and. dbLock( dbfFacPrvP )
      ( dbfFacPrvP )->lConPgo := lState
      ( dbfFacPrvP )->( dbUnLock() )
   end if

RETURN NIL

//-------------------------------------------------------------------------//

/*
Contabiliza los recibos
*/

FUNCTION TraRecPrv( oBrw, cTitle, cOption, lChgState )

	local oDlg
   local oMtrInf
   local nMtrInf
   local oSerIni
   local oSerFin
   local oDocIni
   local oDocFin
   local nRad        := 2
   local oSimula
   local lSimula     := .t.
   local nRecno      := ( dbfFacPrvP )->( Recno() )
   local nOrdAnt     := ( dbfFacPrvP )->( OrdSetFocus( 1 ) )
   local cSerIni     := ( dbfFacPrvP )->cSerFac
   local cSerFin     := ( dbfFacPrvP )->cSerFac
   local nDocIni     := ( dbfFacPrvP )->nNumFac
   local nDocFin     := ( dbfFacPrvP )->nNumFac
   local cSufIni     := ( dbfFacPrvP )->cSufFac
   local cSufFin     := ( dbfFacPrvP )->cSufFac
   local nNumIni     := ( dbfFacPrvP )->nNumRec
   local nNumFin     := ( dbfFacPrvP )->nNumRec
   local cTipo       := "Todas"
   local oTree
   local oImageList
   local oBtnCancel

   DEFAULT cTitle    := "Contabilizar recibos"
   DEFAULT cOption   := "Simular resultados"
   DEFAULT lChgState := .f.

   oImageList        := TImageList():New( 16, 16 )
   oImageList:AddMasked( TBitmap():Define( "bRed" ), Rgb( 255, 0, 255 ) )
   oImageList:AddMasked( TBitmap():Define( "bGreen" ), Rgb( 255, 0, 255 ) )

   DEFINE DIALOG oDlg RESOURCE "ConSerRec"

   REDEFINE COMBOBOX cTipo ;
      ITEMS    { "Todas", "Facturas", "Rectificativas" } ;
      ID       80 ;
      OF       oDlg

   REDEFINE RADIO nRad ;
      ID       90, 91 ;
      OF       oDlg

   REDEFINE GET oSerIni VAR cSerIni;
      ID       100 ;
      PICTURE  "@!" ;
      WHEN     ( nRad == 2 );
      SPINNER ;
      ON UP    ( UpSerie( oSerIni ) );
      ON DOWN  ( DwSerie( oSerIni ) );
      VALID    ( cSerIni >= "A" .and. cSerIni <= "Z" );
      UPDATE ;
      OF       oDlg

   REDEFINE BTNBMP ;
      ID       101 ;
      OF       oDlg ;
      RESOURCE "Up16" ;
      NOBORDER ;
      ACTION   ( dbFirst( dbfFacPrvT, "nNumFac", oDocIni, cSerIni, "nNumFac" ) )

   REDEFINE GET oSerFin VAR cSerFin;
      ID       110 ;
      PICTURE  "@!" ;
      WHEN     ( nRad == 2 );
      SPINNER ;
      ON UP    ( UpSerie( oSerFin ) );
      ON DOWN  ( DwSerie( oSerFin ) );
      VALID    ( cSerFin >= "A" .and. cSerFin <= "Z" );
      UPDATE ;
      OF       oDlg

   REDEFINE BTNBMP ;
      ID       111 ;
      OF       oDlg ;
      RESOURCE "Down16" ;
      NOBORDER ;
      ACTION   ( dbLast( dbfFacPrvT, "nNumFac", oDocFin, cSerFin, "nNumFac" ) )

   REDEFINE GET oDocIni VAR nDocIni;
      ID       120 ;
      WHEN     ( nRad == 2 );
      PICTURE  "999999999" ;
      SPINNER ;
		OF 		oDlg

   REDEFINE GET oDocFin VAR nDocFin;
      ID       130 ;
      WHEN     ( nRad == 2 );
      PICTURE  "999999999" ;
      SPINNER ;
		OF 		oDlg

   REDEFINE GET cSufIni ;
      ID       140 ;
      WHEN     ( nRad == 2 );
      PICTURE  "##" ;
		OF 		oDlg

   REDEFINE GET cSufFin ;
      ID       150 ;
      WHEN     ( nRad == 2 );
      PICTURE  "##" ;
		OF 		oDlg

   REDEFINE GET nNumIni ;
      ID       160 ;
      WHEN     ( nRad == 2 );
      PICTURE  "99" ;
		OF 		oDlg

   REDEFINE GET nNumFin ;
      ID       170 ;
      WHEN     ( nRad == 2 );
      PICTURE  "99" ;
		OF 		oDlg

   REDEFINE CHECKBOX oSimula VAR lSimula;
      ID       190 ;
		OF 		oDlg

   oTree       := TTreeView():Redefine( 180, oDlg )

   REDEFINE METER oMtrInf ;
      VAR      nMtrInf ;
      NOPERCENTAGE ;
      ID       200;
      OF       oDlg

   oMtrInf:SetTotal( ( dbfFacPrvP )->( OrdKeyCount() ) )

   REDEFINE BUTTON ;
      ID       IDOK ;
		OF 		oDlg ;
      ACTION   ( PasRec( cSerIni + Str( nDocIni ) + cSufIni + Str( nNumIni ), cSerFin + Str( nDocFin ) + cSufFin + Str( nNumFin ), nRad, cTipo, lSimula, lChgState, oBrw, oDlg, oTree, oMtrInf, oBtnCancel ) )

   REDEFINE BUTTON oBtnCancel ;
      ID       IDCANCEL ;
		OF 		oDlg ;
      CANCEL ;
      ACTION   ( oDlg:end() )

   oDlg:AddFastKey( VK_F5, {|| PasRec( cSerIni + Str( nDocIni ) + cSufIni + Str( nNumIni ), cSerFin + Str( nDocFin ) + cSufFin + Str( nNumFin ), nRad, cTipo, lSimula, lChgState, oBrw, oDlg, oTree, oMtrInf, oBtnCancel ) } )

   oDlg:bStart := {|| oSerIni:SetFocus(), SetWindowText( oSimula:hWnd, cOption ), oSimula:Refresh() }

   ACTIVATE DIALOG oDlg ;
      CENTER ;
      ON INIT  ( oTree:SetImageList( oImageList ) )

   ( dbfFacPrvP )->( dbGoTo( nRecNo ) )
   ( dbfFacPrvP )->( OrdSetFocus( nOrdAnt ) )

   if oBrw != nil
      oBrw:refresh()
   end if

RETURN NIL

//------------------------------------------------------------------------//

STATIC FUNCTION PasRec( cDocIni, cDocFin, nRad, cTipo, lSimula, lChgState, oBrw, oDlg, oTree, oMtrInf, oBtnCancel )


   local aPos
   local lWhile      := .t.
   local bWhile
   local aSimula     := {}
   local nOrden      := ( dbfFacPrvP )->( OrdSetFocus( "nNumFac" ) )
   local nRecno      := ( dbfFacPrvP )->( Recno() )
   local lReturn

   /*
   Preparamos la pantalla para mostrar la simulaci�n---------------------------
   */

   if lSimula
      aPos              := { 0, 0 }
      ClientToScreen( oDlg:hWnd, aPos )
      oDlg:Move( aPos[ 1 ] - 22, aPos[ 2 ] - 510 )
   end if

   oDlg:Disable()

   oBtnCancel:bAction   := {|| lWhile := .f. }
   oBtnCancel:Enable()

   oTree:Enable()
   oTree:DeleteAll()

   if !lChgState
      OpenDiario()
   end if

   if nRad == 1

      ( dbfFacPrvP )->( dbGoTop() )

      bWhile         := {||   lWhile .and. !( dbfFacPrvP )->( eof() ) }

   else

      ( dbfFacPrvP )->( dbSeek( cDocIni, .t. ) )

      bWhile         := {||   lWhile                                                                                                                         .and. ;
                              ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac + Str( ( dbfFacPrvP )->nNumRec ) >= cDocIni .and. ;
                              ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac + Str( ( dbfFacPrvP )->nNumRec ) <= cDocFin .and. ;
                              !( dbfFacPrvP )->( eof() ) }

   end if

   oMtrInf:Set( ( dbfFacPrvP )->( OrdKeyNo() ) )

   while ( Eval( bWhile ) )

      do case
         case ( cTipo == "Facturas" .or. cTipo == "Todas" )       .and. Empty( ( dbfFacPrvP )->cTipRec )

            if lChgState
               lReturn  := ChgState( lSimula )
            else
               lReturn  := CntRecPrv( lSimula, oTree, nil, aSimula, .f., dbfFacPrvT, dbfFacPrvP, dbfPrv, dbfFPago, dbfDiv )
            end if

         case ( cTipo == "Rectificativas" .or. cTipo == "Todas" ) .and. !Empty( ( dbfFacPrvP )->cTipRec )

            if lChgState
               lReturn  := ChgState( lSimula )
            else
               lReturn  := CntRecPrv( lSimula, oTree, nil, aSimula, .f., dbfRctPrvT, dbfFacPrvP, dbfPrv, dbfFPago, dbfDiv )
            end if

      end case

      if IsFalse( lReturn )
         exit
      end if

      ( dbfFacPrvP )->( dbSkip() )

      oMtrInf:Set( ( dbfFacPrvP )->( OrdKeyNo() ) )

   end do

   oMtrInf:Set( ( dbfFacPrvP )->( OrdKeyCount() ) )

   ( dbfFacPrvP )->( OrdSetFocus( nOrden ) )
   ( dbfFacPrvP )->( dbGoTo( nRecno ) )

   if !lChgState
      CloseDiario()
   end if

   oBtnCancel:bAction   := {|| oDlg:End() }

   if lSimula
      WndCenter( oDlg:hWnd )
   end if

   oDlg:Enable()

Return nil

//------------------------------------------------------------------------//

static function ImpPrePago()

   local oDlg
   local oDesde
   local oHasta
   local oPrvDesde
   local oPrvHasta
   local oNomPrvDesde
   local oNomPrvHasta
   local cPrvDesde      := dbFirst( dbfPrv )
   local cPrvHasta      := dbLast( dbfPrv )
   local cNomPrvDesde   := dbFirst( dbfPrv, 2 )
   local cNomPrvHasta   := dbFirst( dbfPrv, 2 )
   local dDesde         := nFirstDay( Month( Date() ) )
   local dHasta         := nLastDay( Month( Date() ) )
   local cTitulo        := Padr( cCodEmp() + " - " + cNbrEmp(), 50 )
   local cSubTitulo     := Padr( "Previsi�n de pagos", 50 )

	/*
	Llamada a la funcion que activa la caja de dialogo
	*/

   DEFINE DIALOG oDlg RESOURCE "INF_PREPAGOS"

      REDEFINE GET oDesde VAR dDesde;
         SPINNER ;
         ID       100 ;
         OF       oDlg

      REDEFINE GET oHasta VAR dHasta;
         SPINNER ;
         ID       110 ;
         OF       oDlg

      REDEFINE GET oPrvDesde VAR cPrvDesde;
         ID       120 ;
         COLOR    CLR_GET ;
         VALID    ( cProvee( oPrvDesde, dbfPrv, oNomPrvDesde ) ) ;
         BITMAP   "LUPA" ;
         ON HELP  ( BrwProvee( oPrvDesde, oNomPrvDesde ) ) ;
         OF       oDlg

      REDEFINE GET oNomPrvDesde VAR cNomPrvDesde ;
         WHEN     .F. ;
         COLOR    CLR_GET ;
         ID       121 ;
         OF       oDlg

      REDEFINE GET oPrvHasta VAR cPrvHasta;
         ID       130 ;
         COLOR    CLR_GET ;
         VALID    ( cProvee( oPrvHasta, dbfPrv, oNomPrvHasta ) ) ;
         BITMAP   "LUPA" ;
         ON HELP  ( BrwProvee( oPrvHasta, oNomPrvHasta ) ) ;
         OF       oDlg

      REDEFINE GET oNomPrvHasta VAR cNomPrvHasta ;
         WHEN     .F. ;
         COLOR    CLR_GET ;
         ID       131 ;
         OF       oDlg

		REDEFINE GET cTitulo ;
			ID 		160 ;
			OF 		oDlg

		REDEFINE GET cSubTitulo ;
			ID 		170 ;
			OF 		oDlg

		REDEFINE BUTTON ;
         ID       508;
			OF 		oDlg ;
         ACTION   PrnPrePago( dDesde, dHasta, cPrvDesde, cPrvHasta, cTitulo, cSubTitulo, 1 )

		REDEFINE BUTTON ;
         ID       IDOK ;
			OF 		oDlg ;
         ACTION   PrnPrePago( dDesde, dHasta, cPrvDesde, cPrvHasta, cTitulo, cSubTitulo, 2 )

		REDEFINE BUTTON ;
         ID       IDCANCEL ;
			OF 		oDlg ;
         CANCEL ;
         ACTION   ( oDlg:end() )

	ACTIVATE DIALOG oDlg CENTER

RETURN ( oDlg:nResult == IDOK )

//---------------------------------------------------------------------------//

static function PrnPrePago( dDesde, dHasta, cPrvDesde, cPrvHasta, cTitulo, cSubTitulo, nDevice )

   local oReport
   local nRecno   := ( dbfFacPrvP )->( Recno() )
   local oFont1   := TFont():New( "Courier New", 0, -12, .F., .T. )
   local oFont2   := TFont():New( "Courier New", 0, -12, .F., .f. )

   ( dbfFacPrvP )->( dbGoTop() )

   IF nDevice == 1

		REPORT oReport ;
			TITLE 	Rtrim( cTitulo), Rtrim( cSubTitulo ), "" ;
         FONT     oFont1, oFont2 ;
         HEADER   "Periodo   : " + dToC( dDesde ) + " -> " + dToC( dHasta ),;
                  "Proveedor : " + rtrim( cPrvDesde ) + " -> " + rtrim( cPrvHasta ),;
                  "Fecha     : " + dToc( Date() ) LEFT ;
         FOOTER   "P�gina    : " + str( oReport:nPage, 3 ) CENTERED;
         CAPTION  cSubTitulo;
			PREVIEW

	ELSE

		REPORT oReport ;
			TITLE 	Rtrim( cTitulo), Rtrim( cSubTitulo ), "" ;
         HEADER   "Periodo   : " + dToC( dDesde ) + " -> " + dToC( dHasta ),;
                  "Proveedor : " + rtrim( cPrvDesde ) + " -> " + rtrim( cPrvHasta ),;
                  "Fecha     : " + dToc( Date() ) LEFT ;
         FOOTER   "P�gina    : " + str( oReport:nPage, 3 ) CENTERED;
         CAPTION  cSubTitulo;
         TO PRINTER

	END IF

   COLUMN TITLE   "N. Recibo" ;
         DATA     (dbfFacPrvP)->cSerFac + "/" + AllTrim( Str( (dbfFacPrvP)->nNumFac ) ) + "/" + (dbfFacPrvP)->cSufFac + "-" + AllTrim( Str( (dbfFacPrvP)->nNumRec ) ) ;
         SIZE     18 ;
         FONT     2

   COLUMN TITLE   "F. Previs." ;
         DATA     DtoC( (dbfFacPrvP)->DPRECOB );
         SIZE     10 ;
         FONT     2

   COLUMN TITLE   "Descripci�n" ;
         DATA     (dbfFacPrvP)->CDESCRIP;
         SIZE     30 ;
         FONT     2

   COLUMN TITLE   "Importe" ;
         DATA     (dbfFacPrvP)->nImporte / (dbfFacPrvP)->nVdvPgo ;
         PICTURE  cPirDiv( (dbfFacPrvP)->cDivPgo, dbfDiv ) ;
         SIZE     12 ;
			TOTAL ;
			FONT 		2

	END REPORT

   IF !Empty( oReport ) .and.  oReport:lCreated
		oReport:Margin( 0, RPT_RIGHT, RPT_CMETERS )
      oReport:bSkip := {|| ( dbfFacPrvP )->( dbSkip() ) }
   END IF

	ACTIVATE REPORT oReport	;
      FOR   ( dbfFacPrvP )->DPRECOB >= dDesde                .AND. ;
            ( dbfFacPrvP )->DPRECOB <= dHasta                .AND. ;
            cCodFacPrv( (dbfFacPrvP)->cSerFac + Str( (dbfFacPrvP)->nNumFac ) + (dbfFacPrvP)->cSufFac, dbfFacPrvT ) >= cPrvDesde  .AND. ;
            cCodFacPrv( (dbfFacPrvP)->cSerFac + Str( (dbfFacPrvP)->nNumFac ) + (dbfFacPrvP)->cSufFac, dbfFacPrvT ) <= cPrvHasta  .AND. ;
            Empty( ( dbfFacPrvP )->dEntrada )                        ;
      WHILE !( dbfFacPrvP )->( eof() )

	oFont1:end()
	oFont2:end()

   ( dbfFacPrvP )->( dbGoTo( nRecno ) )

RETURN NIL

//---------------------------------------------------------------------------//

function SynRecPrv( cPatEmp )

   local nCon
   local nTotFac
   local nTotRec

   USE ( cPatEmp + "FACPRVP.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "FACPRVP", @dbfFacPrvP ) )
   SET ADSINDEX TO ( cPatEmp + "FACPRVP.CDX" ) ADDITIVE
   
   USE ( cPatEmp + "FACPRVT.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "FACPRVT", @dbfFacPrvT ) )
   SET ADSINDEX TO ( cPatEmp + "FACPRVT.CDX" ) ADDITIVE
   
   USE ( cPatEmp + "FACPRVL.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "FACPRVL", @dbfFacPrvL ) )
   SET ADSINDEX TO ( cPatEmp + "FACPRVL.CDX" ) ADDITIVE

   USE ( cPatEmp + "RctPrvT.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "RctPrvT", @dbfRctPrvT ) )
   SET ADSINDEX TO ( cPatEmp + "RctPrvT.CDX" ) ADDITIVE

   USE ( cPatEmp + "RctPrvL.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "RctPrvL", @dbfRctPrvL ) )
   SET ADSINDEX TO ( cPatEmp + "RctPrvL.CDX" ) ADDITIVE

   USE ( cPatDat() + "DIVISAS.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "DIVISAS", @dbfDiv ) )
   SET ADSINDEX TO ( cPatDat() + "DIVISAS.CDX" ) ADDITIVE

   USE ( cPatPrv() + "PROVEE.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "PROVEE", @dbfPrv ) )
   SET ADSINDEX TO ( cPatPrv() + "PROVEE.CDX" ) ADDITIVE

   USE ( cPatGrp() + "FPAGO.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "FPAGO", @dbfFPago ) )
   SET ADSINDEX TO ( cPatGrp() + "FPAGO.CDX" ) ADDITIVE

   USE ( cPatDat() + "TIVA.DBF" ) NEW VIA ( cDriver() ) EXCLUSIVE ALIAS ( cCheckArea( "TIVA", @dbfIva ) )
   SET ADSINDEX TO ( cPatDat() + "TIVA.CDX" ) ADDITIVE

   // Rellenamos los campos----------------------------------------------------
   
   ( dbfFacPrvP )->( OrdSetFocus( 0 ) )
   ( dbfFacPrvP )->( dbGoTop() )

   while !( dbfFacPrvP )->( eof() )

      if Empty( ( dbfFacPrvP )->cSufFac )
         ( dbfFacPrvP )->cSufFac := "00"
      end if

      if Empty( ( dbfFacPrvP )->cCodPrv )
         ( dbfFacPrvP )->cCodPrv := RetFld( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac, dbfFacPrvT, "cCodPrv" )
      end if

      if Empty( ( dbfFacPrvP )->cNomPrv )
         ( dbfFacPrvP )->cNomPrv := RetFld( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac, dbfFacPrvT, "cNomPrv" )
      end if

      if Empty( ( dbfFacPrvP )->cCodCaj )
         ( dbfFacPrvP )->cCodCaj := RetFld( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac, dbfFacPrvT, "cCodCaj" )
      end if

      if Empty( ( dbfFacPrvP )->cCodUsr )
         ( dbfFacPrvP )->cCodUsr := RetFld( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac, dbfFacPrvT, "cCodUsr" )
      end if

      ( dbfFacPrvP )->( dbSkip() )

   end while
   ( dbfFacPrvP )->( OrdSetFocus( 1 ) )

   // Repasamos los totales ---------------------------------------------------

   ( dbfFacPrvT )->( OrdSetFocus( 1 ) )
   ( dbfFacPrvT )->( dbGoTop() )

   while !( dbfFacPrvT )->( eof() )

      GenPgoFacPrv( ( dbfFacPrvT )->cSerFac + Str( ( dbfFacPrvT )->nNumFac ) + ( dbfFacPrvT )->cSufFac, dbfFacPrvT, dbfFacPrvL, dbfFacPrvP, dbfPrv, dbfFPago, dbfDiv )

      /*

      nTotFac := nTotFacPrv( ( dbfFacPrvT )->cSerFac + Str( ( dbfFacPrvT )->nNumFac ) + ( dbfFacPrvT )->cSufFac, dbfFacPrvT, dbfFacPrvL, dbfIva, dbfDiv, dbfFacPrvP, nil, nil, .f. )
      nTotRec := nPagFacPrv( ( dbfFacPrvT )->cSerFac + Str( ( dbfFacPrvT )->nNumFac ) + ( dbfFacPrvT )->cSufFac, dbfFacPrvP, nil, dbfDiv, .f. )

      if nTotFac > nTotRec

         nCon                       := nNewReciboProveedor( ( dbfFacPrvT )->cSerFac + Str( ( dbfFacPrvT )->nNumFac ) + ( dbfFacPrvT )->cSufFac, Space( 1 ), dbfFacPrvP )
         
         // A�adimos el nuevo recibo----------------------------------------------
         
         ( dbfFacPrvP )->( dbAppend() )
         ( dbfFacPrvP )->cSerFac     := ( dbfFacPrvT )->cSerFac
         ( dbfFacPrvP )->nNumFac     := ( dbfFacPrvT )->nNumFac
         ( dbfFacPrvP )->cSufFac     := ( dbfFacPrvT )->cSufFac
         ( dbfFacPrvP )->cCodPrv     := ( dbfFacPrvT )->cCodPrv
         ( dbfFacPrvP )->cNomPrv     := ( dbfFacPrvT )->cNomPrv
         ( dbfFacPrvP )->nNumRec     := nCon
         ( dbfFacPrvP )->dEntrada    := Ctod( "" )
         ( dbfFacPrvP )->nImporte    := nTotFac - nTotRec
         ( dbfFacPrvP )->cDescrip    := "Recibo n�" + AllTrim( Str( nCon ) ) + " de factura " + ( dbfFacPrvT )->cSerFac + "/" + AllTrim( Str( ( dbfFacPrvT )->nNumFac ) ) + "/" + ( dbfFacPrvT )->cSufFac
         ( dbfFacPrvP )->dPreCob     := GetSysDate()
         ( dbfFacPrvP )->cPgdoPor    := ""
         ( dbfFacPrvP )->lCobrado    := .f.
         ( dbfFacPrvP )->cDivPgo     := ( dbfFacPrvT )->cDivFac
         ( dbfFacPrvP )->nVdvPgo     := ( dbfFacPrvT )->nVdvFac
         ( dbfFacPrvP )->lConPgo     := .f.
         ( dbfFacPrvP )->cTurRec     := cCurSesion()
         ( dbfFacPrvP )->lCloPgo     := .f.
         ( dbfFacPrvP )->( dbUnLock() )
      
      end if

      */

      ChkLqdFacPrv( , dbfFacPrvT, dbfFacPrvL, dbfFacPrvP, dbfIva, dbfDiv )

      ( dbfFacPrvT )->( dbSkip() )

      SysRefresh()

   end while

   if !Empty( dbfFacPrvP )
      ( dbfFacPrvP )->( dbCloseArea() )
   end if
   
   if !Empty( dbfFacPrvT )
      ( dbfFacPrvT )->( dbCloseArea() )
   end if
   
   if !Empty( dbfFacPrvL )
      ( dbfFacPrvL )->( dbCloseArea() )
   end if

   if !Empty( dbfRctPrvT )
      ( dbfRctPrvT )->( dbCloseArea() )
   end if

   if !Empty( dbfRctPrvL )
      ( dbfRctPrvL )->( dbCloseArea() )
   end if

   if !Empty( dbfDiv )    
      ( dbfDiv )->( dbCloseArea() )
   end if

   if !Empty( dbfPrv )    
      ( dbfPrv )->( dbCloseArea() )
   end if

   if !Empty( dbfFPago )
      ( dbfFPago )->( dbCloseArea() )
   end if

   if !Empty( dbfIva ) 
      ( dbfIva )->( dbCloseArea() )
   end if

return nil

//------------------------------------------------------------------------//

function nTotRecPrv( uFacPrvP, uDiv, cDivRet, lPic )

   local cPirDiv
   local cCodDiv
   local nTotalRec

   DEFAULT uFacPrvP  := dbfFacPrvP
   DEFAULT uDiv      := dbfDiv
   DEFAULT cDivRet   := cDivEmp()
   DEFAULT lPic      := .f.

   do case
      case ValType( uFacPrvP ) == "O"
         cCodDiv     := uFacPrvP:cDivPgo
         nTotalRec   := uFacPrvP:nImporte

      case ValType( uFacPrvP ) == "C"
         cCodDiv     := ( uFacPrvP )->cDivPgo
         nTotalRec   := ( uFacPrvP )->nImporte
   end case

   if cDivRet != nil .and. cDivRet != cCodDiv
      nTotalRec      := nCnv2Div( nTotalRec, cCodDiv, cDivRet, uDiv )
      cPirDiv        := cPirDiv( cDivRet, uDiv )
   else
      cPirDiv        := cPirDiv( cCodDiv, uDiv )
   end if

return ( if( lPic, Trans( nTotalRec, cPirDiv ), nTotalRec ) )

//------------------------------------------------------------------------//

function nVtaRecPrv( cCodPrv, dDesde, dHasta, dbfFacPrvP, dbfIva, dbfDiv )

   local nCon     := 0
   local nRec     := ( dbfFacPrvP )->( Recno() )

   /*
   Facturas a Clientes -------------------------------------------------------
   */

   if ( dbfFacPrvP )->( dbSeek( cCodPrv ) )

      while ( dbfFacPrvP )->cCodPrv == cCodPrv .and. !( dbfFacPrvP )->( Eof() )

         if ( dDesde == nil .or. ( dbfFacPrvP )->dPreCob >= dDesde )    .and.;
            ( dHasta == nil .or. ( dbfFacPrvP )->dPreCob <= dHasta )

            nCon  += nTotRecPrv( dbfFacPrvP, dbfDiv, cDivEmp(), .f. )

         end if

         ( dbfFacPrvP )->( dbSkip() )

      end while

   end if

   ( dbfFacPrvP )->( dbGoTo( nRec ) )

return nCon

//----------------------------------------------------------------------------//


FUNCTION aDocRecPrv()

   local aDoc  := {}

   /*
   Itmes-----------------------------------------------------------------------
   */

   aAdd( aDoc, { "Empresa",         "EM" } )
   aAdd( aDoc, { "Recibos",         "RP" } )
   aAdd( aDoc, { "Factura",         "FP" } )
   aAdd( aDoc, { "Proveedor",       "PR" } )
   aAdd( aDoc, { "Almacen",         "AL" } )
   aAdd( aDoc, { "Divisas",         "DV" } )
   aAdd( aDoc, { "Formas de pago",  "PG" } )

RETURN ( aDoc )

//--------------------------------------------------------------------------//

/*
Crea los ficheros de la facturaci�n
*/

FUNCTION mkRecPrv( cPath, oMeter, lReindex )

   DEFAULT lReindex  := .t.

   if oMeter != NIL
		oMeter:cText	:= "Generando Bases"
		sysrefresh()
   end if

   dbCreate( cPath + "FacPrvP.DBF", aSqlStruct( aItmRecPrv() ), cDriver() )

   if lReindex
      rxRecPrv( cPath )
   end if

RETURN NIL

//--------------------------------------------------------------------------//

FUNCTION rxRecPrv( cPath, oMeter )

   local dbfFacPrvP

   DEFAULT cPath  := cPatEmp()

   if !lExistTable( cPath + "FacPrvP.DBF" )
      mkRecPrv( cPath, oMeter, .f. )
   end if

   fEraseIndex( cPath + "FacPrvP.CDX" )

   dbUseArea( .t., cDriver(), cPath + "FacPrvP.DBF", cCheckArea( "FacPrvP", @dbfFacPrvP ), .f. )

   if !( dbfFacPrvP )->( neterr() )

      ( dbfFacPrvP )->( __dbPack() )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "nNumFac", "cSerFac + Str( nNumFac ) + cSufFac + Str( nNumRec )", {|| Field->cSerFac + Str( Field->nNumFac ) + Field->cSufFac + Str( Field->nNumRec ) }, ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "cCodPrv", "cCodPrv", {|| Field->cCodPrv } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "cNomPrv", "cNomPrv", {|| Field->cNomPrv } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "dEntrada", "dEntrada", {|| Field->dEntrada } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "dPreCob", "dPreCob", {|| Field->dPreCob } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "dFecVto", "dFecVto", {|| Field->dFecVto } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) ) // , , , , , , , , , , , .t.
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "nImporte", "nImporte", {|| Field->nImporte } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted() .AND. !lCobrado", {|| !Deleted() .AND. !Field->lCobrado } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "lCobrado", "cSerFac + Str( nNumFac ) + cSufFac + Str( nNumRec )", {|| Field->cSerFac + Str( Field->nNumFac ) + Field->cSufFac + Str( Field->nNumRec ) }, ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "cTurRec", "cTurRec + cSufFac + cCodCaj", {|| Field->cTurRec + Field->cSufFac + Field->cCodCaj } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted() .and. !Empty( cTipRec )", {|| !Deleted() .and. !Empty( Field->cTipRec ) } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "rNumFac", "cSerFac + Str( nNumFac ) + cSufFac + Str( nNumRec )", {|| Field->cSerFac + Str( Field->nNumFac ) + Field->cSufFac + Str( Field->nNumRec ) }, ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted() .and. Empty( cTipRec )", {|| !Deleted() .and. Empty( Field->cTipRec ) } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "fNumFac", "cSerFac + Str( nNumFac ) + cSufFac + Str( nNumRec )", {|| Field->cSerFac + Str( Field->nNumFac ) + Field->cSufFac + Str( Field->nNumRec ) }, ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted()", {|| !Deleted() } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.CDX", "cRecDev", "cRecDev", {|| Field->cRecDev } ) )

      ( dbfFacPrvP )->( ordCondSet( "!Deleted() .and. Field->lCobrado", {|| !Deleted() .and. Field->lCobrado } ) )
      ( dbfFacPrvP )->( ordCreate( cPath + "FacPrvP.Cdx", "lCtaBnc", "Field->cEntEmp + Field->cSucEmp + Field->cDigEmp + Field->cCtaEmp", {|| Field->cEntEmp + Field->cSucEmp + Field->cDigEmp + Field->cCtaEmp } ) )

      ( dbfFacPrvP )->( dbCloseArea() )

   else

      msgStop( "Imposible abrir en modo exclusivo la tabla de recibos de proveedores" )

   end if

RETURN NIL

//--------------------------------------------------------------------------//

function aItmRecPrv()

   local aRecFacPrv := {}

   aAdd( aRecFacPrv, { "cSerFac"    ,"C",  1, 0, "Serie de factura",                      "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "nNumFac"    ,"N",  9, 0, "N�mero de factura",                     "'999999999'", "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cSufFac"    ,"C",  2, 0, "Sufijo de factura",                     "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "nNumRec"    ,"N",  2, 0, "N�mero del recibo",                     "'99'",        "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cTipRec"    ,"C",  1, 0, "Tipo de recibo",                        "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "CCODCAJ"    ,"C",  3, 0, "C�digo de caja",                        "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "CCODPRV"    ,"C", 12, 0, "C�digo de proveedor",                   "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cNomPrv"    ,"C", 80, 0, "Nombre de proveedor",                   "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "DENTRADA"   ,"D",  8, 0, "Fecha de entrada",                      "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "NIMPORTE"   ,"N", 16, 6, "Importe del pago",                      "cPirDivRec",  "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "CDESCRIP"   ,"C",100, 0, "Concepto del pago",                     "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "DPRECOB"    ,"D",  8, 0, "Fecha de previsi�n de pago",            "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "CPGDOPOR"   ,"C", 50, 0, "Pagado por" ,                           "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "LCOBRADO"   ,"L",  1, 0, "L�gico de pagado" ,                     "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "LCONPGO"    ,"L",  1, 0, "L�gico de contabilizado" ,              "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "CDIVPGO"    ,"C",  3, 0, "C�digo de la divisa" ,                  "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "NVDVPGO"    ,"N", 16, 6, "Cambio de la divisa" ,                  "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "CCTAREC"    ,"C", 12, 0, "Cuenta de contabilidad",                "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "LRECIMP"    ,"L",  1, 0, "Recibo ya impreso",                     "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "DFECVTO"    ,"D",  8, 0, "Fecha de vencimiento",                  "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cCodUsr"    ,"C",  3, 0, "C�digo de usuario",                     "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "dFecChg"    ,"D",  8, 0, "Fecha de �ltima modificaci�n",          "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cTimChg"    ,"C",  5, 0, "Hora de �ltima modificaci�n",           "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cTurRec"    ,"C",  6, 0, "Sesi�n del recibo",                     "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "lCloPgo"    ,"L",  1, 0, "L�gico de turno cerrado",               "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "dFecImp"    ,"D",  8, 0, "�ltima fecha de impresi�n" ,            "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cHorImp"    ,"C",  5, 0, "Hora de la �ltima impresi�n",           "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cCodBnc"    ,"C",  4, 0, "C�digo del banco",                      "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cCodPgo"    ,"C",  2, 0, "C�digo de la forma de pago",            "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "lNotArqueo" ,"L",  1, 0, "L�gico de no incluir en arqueo",        "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "lDevuelto"  ,"L",  1, 0, "L�gico recibo devuelto" ,               "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "dFecDev"    ,"D",  8, 0, "Fecha devoluci�n" ,                     "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cMotDev"    ,"C",250, 0, "Motivo devoluci�n" ,                    "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cRecDev"    ,"C", 14, 0, "Recibo de procedencia" ,                "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cBncEmp"    ,"C", 50, 0, "Banco de la empresa para el recibo" ,   "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cBncPrv"    ,"C", 50, 0, "Banco del proveedor para el recibo" ,   "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cEntEmp"    ,"C",  4, 0, "Entidad de la cuenta de la empresa",    "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cSucEmp"    ,"C",  4, 0, "Sucursal de la cuenta de la empresa",   "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cDigEmp"    ,"C",  2, 0, "D�gito de control de la cuenta de la empresa", "",     "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cCtaEmp"    ,"C", 10, 0, "Cuenta bancaria de la empresa",         "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cEntPrv"    ,"C",  4, 0, "Entidad de la cuenta del proveedor",    "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cSucPrv"    ,"C",  4, 0, "Sucursal de la cuenta del proveedor",   "",            "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cDigPrv"    ,"C",  2, 0, "D�gito de control de la cuenta del proveedor", "",     "", "( cDbfRec )" } )
   aAdd( aRecFacPrv, { "cCtaPrv"    ,"C", 10, 0, "Cuenta bancaria del proveedor",         "",            "", "( cDbfRec )" } )

return ( aRecFacPrv )

//---------------------------------------------------------------------------//

FUNCTION aCalRecPrv()

   local aCalRecPrv  := {}

   aAdd( aCalRecPrv, {"nImpRecPrv( cDbfRec, cDbfDiv )", "N", 16, 6, "Importe del recibo", "",  "", "" } )
   aAdd( aCalRecPrv, {"cTxtRecPrv( cDbfRec, cDbfDiv )", "C",100, 0, "Importe en letras",  "",  "", "" } )

return ( aCalRecPrv )

//---------------------------------------------------------------------------//

static function lLiquida( oBrw )

   if !( dbfFacPrvP )->lCobrado
      if ( dbfFacPrvP )->( dbRLock() )
         ( dbfFacPrvP )->lCobrado   := .t.
         ( dbfFacPrvP )->dEntrada   := GetSysDate()
         ( dbfFacPrvP )->cTurRec    := cCurSesion()
         ( dbfFacPrvP )->( dbUnLock() )
      end if
   else
      msgStop( "Recibo ya cobrado" )
   end if

   if oBrw != nil
      oBrw:Refresh()
   end if

return nil

//---------------------------------------------------------------------------//

static function lGenRecPrv( oBrw, oBtn, nDevice )

   local bAction

   DEFAULT nDevice   := IS_PRINTER

   IF !( dbfDoc )->( dbSeek( "RP" ) )

      DEFINE BTNSHELL RESOURCE "DOCUMENT" OF oWndBrw ;
         NOBORDER ;
         ACTION   ( msgStop( "No hay recibos de clientes predefinidos" ) );
         TOOLTIP  "No hay documentos" ;
         HOTKEY   "N";
         FROM     oBtn ;
         CLOSED ;
         LEVEL    ACC_EDIT

   ELSE

      WHILE ( dbfDoc )->CTIPO == "RP" .AND. !( dbfDoc )->( eof() )

         bAction  := bGenRecPrv( nDevice, ( dbfDoc )->Codigo, "Imprimiendo recibos de clientes" )

         oWndBrw:NewAt( "Document", , , bAction, Rtrim( ( dbfDoc )->cDescrip ) , , , , , oBtn )

         ( dbfDoc )->( dbSkip() )

      END DO

   END IF

return nil

//---------------------------------------------------------------------------//

static function bGenRecPrv( nDevice, cCodDoc, cTitle )

   local nDev  := by( nDevice )
   local cCod  := by( cCodDoc )
   local cTit  := by( cTitle  )

return {|| GenRecPrv( nDev, cTit, cCod ) }

//---------------------------------------------------------------------------//

Static Function EdtRecMenu( aTmp, oDlg )

   MENU oMenu

      MENUITEM    "&1. Rotor"

         MENU

            MENUITEM "&1. Visualizar factura";
            MESSAGE  "Visualiza la factura de la que procede" ;
            RESOURCE "Document_Businessman_16" ;
            ACTION   ( ZooFacPrv( aTmp[ _CSERFAC ] + Str( aTmp[ _NNUMFAC ] ) + aTmp[ _CSUFFAC ] ) )

            SEPARATOR

            MENUITEM "&2. Modificar proveedor";
            MESSAGE  "Modifica el proveedor de la factura" ;
            RESOURCE "Businessman_16";
            ACTION   ( EdtPrv( aTmp[ _CCODPRV ] ) )

            MENUITEM "&3. Informe proveedor";
            MESSAGE  "Informe del proveedor de la factura" ;
            RESOURCE "Info16";
            ACTION   ( InfProveedor( aTmp[ _CCODPRV ] ) )

         ENDMENU

   ENDMENU

   oDlg:SetMenu( oMenu )

Return ( oMenu )

//---------------------------------------------------------------------------//

Static Function EndEdtRecMenu()

Return ( oMenu:End() )

//---------------------------------------------------------------------------//

Function EdtRecPrv( nNumFac, lOpenBrowse )

   local nLevel         := nLevelUsr( _MENUITEM_ )

   DEFAULT lOpenBrowse  := .f.

   if nAnd( nLevel, 1 ) != 0 .or. nAnd( nLevel, ACC_EDIT ) == 0
      msgStop( 'Acceso no permitido.' )
      return .t.
   end if

   if lOpenBrowse

      if RecPrv()
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            oWndBrw:RecEdit()
         else
            MsgStop( "No se encuentra recibo" )
         end if
      end if

   else

      if OpenFiles( nil, .t. )
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            WinEdtRec( nil, bEdtRec, dbfFacPrvP )
         else
            MsgStop( "No se encuentra recibo" )
         end if
         CloseFiles()
      end if

   end if

RETURN NIL

//----------------------------------------------------------------------------//

Function ZooRecPrv( nNumFac, lOpenBrowse )

   local nLevel         := nLevelUsr( _MENUITEM_ )

   DEFAULT lOpenBrowse  := .f.

   if nAnd( nLevel, 1 ) != 0 .or. nAnd( nLevel, ACC_ZOOM ) == 0
      msgStop( 'Acceso no permitido.' )
      return .t.
   end if

   if lOpenBrowse

      if RecPrv()
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            oWndBrw:RecZoom()
         else
            MsgStop( "No se encuentra recibo" )
         end if
      end if

   else

      if OpenFiles( nil, .t. )
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            WinZooRec( nil, bEdtRec, dbfFacPrvP )
         else
            MsgStop( "No se encuentra factura" )
         end if
         CloseFiles()
      end if

   end if

RETURN NIL

//----------------------------------------------------------------------------//

Function DelRecPrv( nNumFac, lOpenBrowse )

   local nLevel         := nLevelUsr( _MENUITEM_ )

   DEFAULT lOpenBrowse  := .f.

   if nAnd( nLevel, 1 ) != 0 .or. nAnd( nLevel, ACC_ZOOM ) == 0
      msgStop( 'Acceso no permitido.' )
      return .t.
   end if

   if lOpenBrowse

      if RecPrv()
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            oWndBrw:RecDel()
         else
            MsgStop( "No se encuentra recibo" )
         end if
      end if

   else

      if OpenFiles( nil, .t. )
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            dbDelRec( oWndBrw:oBrw, dbfFacPrvP )
         else
            MsgStop( "No se encuentra recibo" )
         end if
         CloseFiles()
      end if

   end if

Return nil

//----------------------------------------------------------------------------//

Function PrnRecPrv( nNumFac, lOpenBrowse )

   local nLevel         := nLevelUsr( _MENUITEM_ )

   DEFAULT lOpenBrowse  := .f.

   if nAnd( nLevel, 1 ) != 0 .or. nAnd( nLevel, ACC_ZOOM ) == 0
      msgStop( 'Acceso no permitido.' )
      return .t.
   end if

   if lOpenBrowse

      if RecPrv()
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            GenRecPrv( IS_PRINTER )
         else
            MsgStop( "No se encuentra recibo" )
         end if
      end if

   else

      if OpenFiles( nil, .t. )
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            GenRecPrv( IS_PRINTER )
         else
            MsgStop( "No se encuentra recibo" )
         end if
         CloseFiles()
      end if

   end if

RETURN NIL

//---------------------------------------------------------------------------//

Function VisRecPrv( nNumFac, lOpenBrowse )

   local nLevel         := nLevelUsr( _MENUITEM_ )

   DEFAULT lOpenBrowse  := .f.

   if nAnd( nLevel, 1 ) != 0 .or. nAnd( nLevel, ACC_ZOOM ) == 0
      msgStop( 'Acceso no permitido.' )
      return .t.
   end if

   if lOpenBrowse

      if FacPrv()
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            GenRecPrv( IS_SCREEN )
         else
            MsgStop( "No se encuentra recibo" )
         end if
      end if

   else

      if OpenFiles( nil, .t. )
         if dbSeekInOrd( nNumFac, "nNumFac", dbfFacPrvP )
            GenRecPrv( IS_SCREEN )
         else
            MsgStop( "No se encuentra recibo" )
         end if
         CloseFiles()
      end if

   end if

Return nil

//---------------------------------------------------------------------------//
#include "FastRepH.ch"

Static Function DataReport( oFr )

   /*
   Zona de datos------------------------------------------------------------
   */

   oFr:ClearDataSets()

   oFr:SetWorkArea(     "Recibos", ( dbfFacPrvP )->( Select() ), .f., { FR_RB_CURRENT, FR_RB_CURRENT, 0 } )
   oFr:SetFieldAliases( "Recibos", cItemsToReport( aItmRecPrv() ) )

   oFr:SetWorkArea(     "Facturas", ( dbfFacPrvT )->( Select() ) )
   oFr:SetFieldAliases( "Facturas", cItemsToReport( aItmFacPrv() ) )

   oFr:SetWorkArea(     "Empresa", ( dbfEmp )->( Select() ) )
   oFr:SetFieldAliases( "Empresa", cItemsToReport( aItmEmp() ) )

   oFr:SetWorkArea(     "Proveedor", ( dbfProvee )->( Select() ) )
   oFr:SetFieldAliases( "Proveedor", cItemsToReport( aItmPrv() ) )

   oFr:SetWorkArea(     "Formas de pago", ( dbfFpago )->( Select() ) )
   oFr:SetFieldAliases( "Formas de pago", cItemsToReport( aItmFPago() ) )

   oFr:SetWorkArea(     "Bancos", ( dbfBncPrv )->( Select() ) )
   oFr:SetFieldAliases( "Bancos", cItemsToReport( aPrvBnc() ) )

   oFr:SetMasterDetail( "Recibos", "Facturas",                 {|| ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac } )
   oFr:SetMasterDetail( "Recibos", "Empresa",                  {|| cCodigoEmpresaEnUso() } )
   oFr:SetMasterDetail( "Recibos", "Proveedor",                {|| ( dbfFacPrvP )->cCodPrv } )
   oFr:SetMasterDetail( "Recibos", "Formas de pago",           {|| ( dbfFacPrvP )->cCodPgo } )
   oFr:SetMasterDetail( "Recibos", "Bancos",                   {|| ( dbfFacPrvP )->cCodPrv } )

   oFr:SetResyncPair(   "Recibos", "Facturas" )
   oFr:SetResyncPair(   "Recibos", "Empresa" )
   oFr:SetResyncPair(   "Recibos", "Proveedor" )
   oFr:SetResyncPair(   "Recibos", "Formas de pago" )
   oFr:SetResyncPair(   "Recibos", "Bancos" )

Return nil

//---------------------------------------------------------------------------//

Static Function VariableReport( oFr )

   oFr:DeleteCategory(  "Recibos" )

   /*
   Creaci�n de variables----------------------------------------------------
   */

   oFr:AddVariable(     "Recibos", "Total factura",               "CallHbFunc('nTotFactProvee')" )
   oFr:AddVariable(     "Recibos", "Importe formato texto",       "CallHbFunc('cTxtRecPrv')" )
   oFr:AddVariable(     "Recibos", "Mes creaci�n recibo",         "CallHbFunc('cMonthFecEnt')" )
   oFr:AddVariable(     "Recibos", "Mes vencimiento recibo",      "CallHbFunc('cMonthFecVto')" )
   oFr:AddVariable(     "Recibos", "Cuenta bancaria proveedor",   "CallHbFunc('cCtaRecPrv')" )

Return nil

//---------------------------------------------------------------------------//

Function DesignReportRecPrv( oFr, dbfDoc )

   local lOpen    := .f.
   local lFlag    := .f.

   /*
   Tratamiento para no hacer dos veces el openfiles al editar el documento en imprimir series
   */

   if lOpenFiles
      lFlag       := .t.
   else
      if Openfiles()
         lFlag    := .t.
         lOpen    := .t.
      else
         lFlag    := .f.
      end if
   end if

   if lFlag

      /*
      Zona de datos------------------------------------------------------------
      */

      DataReport( oFr )

      /*
      Paginas y bandas---------------------------------------------------------
      */

      if !Empty( ( dbfDoc )->mReport )

         oFr:LoadFromBlob( ( dbfDoc )->( Select() ), "mReport")

      else

         oFr:SetProperty(     "Report",            "ScriptLanguage", "PascalScript" )
         oFr:SetProperty(     "Report.ScriptText", "Text",;
                                                   + ;
                                                   "procedure DetalleOnMasterDetail(Sender: TfrxComponent);"   + Chr(13) + Chr(10) + ;
                                                   "begin"                                                     + Chr(13) + Chr(10) + ;
                                                   "CallHbFunc('nTotRecPrv');"                                 + Chr(13) + Chr(10) + ;
                                                   "end;"                                                      + Chr(13) + Chr(10) + ;
                                                   "begin"                                                     + Chr(13) + Chr(10) + ;
                                                   "end." )

         oFr:AddPage(         "MainPage" )

         oFr:AddBand(         "CuerpoDocumento",   "MainPage", frxPageHeader )
         oFr:SetProperty(     "CuerpoDocumento",   "Top", 0 )
         oFr:SetProperty(     "CuerpoDocumento",   "Height", 300 )

         oFr:AddBand(         "CabeceraColumnas",  "MainPage", frxMasterData )
         oFr:SetProperty(     "CabeceraColumnas",  "Top", 300 )
         oFr:SetProperty(     "CabeceraColumnas",  "Height", 0 )
         oFr:SetProperty(     "CabeceraColumnas",  "StartNewPage", .t. )
         oFr:SetObjProperty(  "CabeceraColumnas",  "DataSet", "Recibos" )

      end if

      /*
      Zona de variables--------------------------------------------------------
      */

      VariableReport( oFr )

      /*
      Dise�o de report---------------------------------------------------------
      */

      oFr:DesignReport()

      /*
      Destruye el dise�ador----------------------------------------------------
      */

      oFr:DestroyFr()

      /*
      Cierra ficheros----------------------------------------------------------
      */

      if lOpen
         CloseFiles()
      end if

   else

      Return .f.

   end if

Return .t.

//---------------------------------------------------------------------------//

Function PrintReportRecPrv( nDevice, nCopies, cPrinter, dbfDoc )

   local oFr
   local cFilePdf       := cPatTmp() + "ReciboProveedor" + StrTran( ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac + "-" + Str( ( dbfFacPrvP )->nNumRec ), " ", "" ) + ".Pdf"

   DEFAULT nDevice      := IS_SCREEN
   DEFAULT nCopies      := 1
   DEFAULT cPrinter     := PrnGetName()

   SysRefresh()

   oFr                  := frReportManager():New()

   oFr:LoadLangRes(     "Spanish.Xml" )

   oFr:SetIcon( 1 )

   oFr:SetTitle(        "Dise�ador de documentos" )

   /*
   Manejador de eventos--------------------------------------------------------
   */

   oFr:SetEventHandler( "Designer", "OnSaveReport", {|| oFr:SaveToBlob( ( dbfDoc )->( Select() ), "mReport" ) } )

   /*
   Zona de datos------------------------------------------------------------
   */

   DataReport( oFr )

   /*
   Cargar el informe-----------------------------------------------------------
   */

   if !Empty( ( dbfDoc )->mReport )

      oFr:LoadFromBlob( ( dbfDoc )->( Select() ), "mReport")

      /*
      Zona de variables--------------------------------------------------------
      */

      VariableReport( oFr )

      /*
      Preparar el report-------------------------------------------------------
      */

      oFr:PrepareReport()

      /*
      Imprimir el informe------------------------------------------------------
      */

      do case
         case nDevice == IS_SCREEN
            oFr:ShowPreparedReport()

         case nDevice == IS_PRINTER
            oFr:PrintOptions:SetPrinter( cPrinter )
            oFr:PrintOptions:SetCopies( nCopies )
            oFr:PrintOptions:SetShowDialog( .f. )
            oFr:Print()

         case nDevice == IS_PDF
            oFr:PrintOptions:SetShowDialog( .f. )
            oFr:SetProperty(  "PDFExport", "DefaultPath",      cPatTmp() )
            oFr:SetProperty(  "PDFExport", "FileName",         cFilePdf )
            oFr:SetProperty(  "PDFExport", "ShowDialog",       .f. )
            oFr:SetProperty(  "PDFExport", "EmbeddedFonts",    .t. )
            oFr:SetProperty(  "PDFExport", "PrintOptimized",   .t. )
            oFr:SetProperty(  "PDFExport", "Outline",          .t. )
            oFr:SetProperty(  "PDFExport", "OpenAfterExport",  .t. )
            oFr:DoExport(     "PDFExport" )

         case nDevice == IS_MAIL

            oFr:SetProperty(  "PDFExport", "ShowDialog",       .f. )
            oFr:SetProperty(  "PDFExport", "DefaultPath",      cPatTmp() )
            oFr:SetProperty(  "PDFExport", "FileName",         cFilePdf  )
            oFr:SetProperty(  "PDFExport", "EmbeddedFonts",    .t. )
            oFr:SetProperty(  "PDFExport", "PrintOptimized",   .t. )
            oFr:SetProperty(  "PDFExport", "Outline",          .t. )
            oFr:SetProperty(  "PDFExport", "OpenAfterExport",  .f. )
            oFr:DoExport(     "PDFExport" )

            if file( cFilePdf )

               with object ( TGenMailing():New() )

                  :SetTypeDocument( "nRecPrv" )
                  :SetDe(           uFieldEmpresa( "cNombre" ) )
                  :SetCopia(        uFieldEmpresa( "cCcpMai" ) )
                  :SetAdjunto(      cFilePdf )
                  :SetPara(         RetFld( ( dbfFacPrvP )->cCodPrv, dbfPrv, "cMeiInt" ) )
                  :SetAsunto(       "Envio de recibo de factura de proveedor n�mero " + StrTran( ( dbfFacPrvP )->cSerFac + "/" + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac + "-" + Str( ( dbfFacPrvP )->nNumRec ), " ", "" ) )
                  :SetMensaje(      "Adjunto le remito nuestro recibo de factura de proveedor " + StrTran( ( dbfFacPrvP )->cSerFac + "/" + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac + "-" + Str( ( dbfFacPrvP )->nNumRec ), " ", "" ) + Space( 1 ) )
                  :SetMensaje(      "de fecha " + Dtoc( ( dbfFacPrvP )->dPreCob ) + Space( 1 ) )
                  :SetMensaje(      CRLF )
                  :SetMensaje(      CRLF )
                  :SetMensaje(      "Reciba un cordial saludo." )

                  :GeneralResource( dbfFacPrvP, aItmRecPrv() )

               end with

            end if

      end case

   end if

   /*
   Destruye el dise�ador-------------------------------------------------------
   */

   oFr:DestroyFr()

Return .t.

//---------------------------------------------------------------------------//

function nTotFactProvee( cNumRec, cFacPrvT, cFacPrvL, cDbfIva, cDbfDiv, cFacPrvP )

   DEFAULT cNumRec   := ( dbfFacPrvP )->cSerFac + Str( ( dbfFacPrvP )->nNumFac ) + ( dbfFacPrvP )->cSufFac
   DEFAULT cFacPrvT  := dbfFacPrvT
   DEFAULT cFacPrvL  := dbfFacPrvL
   DEFAULT cDbfIva   := dbfIva
   DEFAULT cDbfDiv   := dbfDiv
   DEFAULT cFacPrvP  := dbfFacPrvP

Return ( nTotFacPrv( cNumRec, cFacPrvT, cFacPrvL, cDbfIva, cDbfDiv, cFacPrvP, nil, nil, .f. ) )

//---------------------------------------------------------------------------//

function cTxtRecPrv( cFacPrvP, cDbfDiv )

   local cImp
   local lMas        := .t.

   DEFAULT cFacPrvP  := dbfFacPrvP
   DEFAULT cDbfDiv   := dbfDiv

   lMas              := lMasDiv( ( cFacPrvP )->cDivPgo, cDbfDiv )
   cImp              := Num2Text( nTotRecPrv( cFacPrvP, cDbfDiv, ( cFacPrvP )->cDivPgo, .f. ), lMas )

RETURN ( cImp )

//---------------------------------------------------------------------------//

Function cCtaRecPrv( cFacPrvP, cBncPrv )

   DEFAULT cFacPrvP  := dbfFacPrvP
   DEFAULT cBncPrv   := dbfBncPrv

Return ( cProveeCuenta( ( cFacPrvP )->cCodPrv, cBncPrv ) )

//---------------------------------------------------------------------------//

function cMonthFecVto( cFacPrvP )

   DEFAULT cFacPrvP  := dbfFacPrvP

RETURN ( cMonthToStr( ( dbfFacPrvP )->dFecVto ) )

//---------------------------------------------------------------------------//

function cMonthFecEnt( cFacPrvP )

   DEFAULT cFacPrvP  := dbfFacPrvP

RETURN ( cMonthToStr( ( dbfFacPrvP )->dEntrada ) )

//---------------------------------------------------------------------------//

Static Function YearComboBoxChange()

   if oWndBrw:oWndBar:lAllYearComboBox()
      DestroyFastFilter( dbfFacPrvP )
      CreateUserFilter( "", dbfFacPrvP, .f., , , "all" )
   else
      DestroyFastFilter( dbfFacPrvP )
      CreateUserFilter( "Year( Field->dPreCob ) == " + oWndBrw:oWndBar:cYearComboBox(), dbfFacPrvP, .f., , , "Year( Field->dPreCob ) == " + oWndBrw:oWndBar:cYearComboBox() )
   end if

   ( dbfFacPrvP )->( dbGoTop() )

   oWndBrw:Refresh()

Return nil

//---------------------------------------------------------------------------//

Function DelPgoPrv( oBrw, dbfRctPrvP )

   if ( dbfRctPrvP )->lCloPgo .and. !oUser():lAdministrador()
      MsgStop( "Solo pueden eliminar los recibos cerrados los administradores." )
      return .f.
   end if

   if ( dbfRctPrvP )->lCobrado .and. !oUser():lAdministrador()
      msgStop( "Este tiket esta cobrado.", "Imposible eliminar" )
      return .f.
   end if

   WinDelRec( oBrw, dbfRctPrvP )

Return .t.

//---------------------------------------------------------------------------//

Function lValDevPrv( aGet, aTmp, lIntro )

   DEFAULT lIntro := .f.

   if aTmp[ _LDEVUELTO ]

      if !lIntro
         aGet[ _DFECDEV ]:cText( GetSysDate() )
      end if

      aGet[ _DPRECOB    ]:HardDisable()
      aGet[ _DFECVTO    ]:HardDisable()
      aGet[ _NIMPORTE   ]:HardDisable()
      aGet[ _LCOBRADO   ]:HardDisable()
      aGet[ _DENTRADA   ]:HardDisable()
      aGet[ _CCODPGO    ]:HardDisable()
      aGet[ _CDESCRIP   ]:HardDisable()
      aGet[ _CPGDOPOR   ]:HardDisable()
      aGet[ _LRECIMP    ]:HardDisable()
      aGet[ _DFECIMP    ]:HardDisable()
      aGet[ _CHORIMP    ]:HardDisable()
      aGet[ _LNOTARQUEO ]:HardDisable()
      aGet[ _CCTAREC    ]:HardDisable()

   else

      if !lIntro
         aGet[ _DFECDEV ]:cText( Ctod( "" ) )
         aGet[ _CMOTDEV ]:cText( Space( 250 ) )
      end if

      aGet[ _DPRECOB    ]:HardEnable()
      aGet[ _DFECVTO    ]:HardEnable()
      aGet[ _NIMPORTE   ]:HardEnable()
      aGet[ _LCOBRADO   ]:HardEnable()
      aGet[ _DENTRADA   ]:HardEnable()
      aGet[ _CCODPGO    ]:HardEnable()
      aGet[ _CPGDOPOR   ]:HardEnable()
      aGet[ _LRECIMP    ]:HardEnable()
      aGet[ _DFECIMP    ]:HardEnable()
      aGet[ _CHORIMP    ]:HardEnable()
      aGet[ _LNOTARQUEO ]:HardEnable()
      aGet[ _CCTAREC    ]:HardEnable()

   end if

   if Empty( aTmp[ _CRECDEV ] )
      aGet[ _CRECDEV ]:Disable()
   else
      aGet[ _CRECDEV ]:Enable()
   end if

return .t.

//---------------------------------------------------------------------------//

FUNCTION ExtEdtRecPrv( cFacPrvP, cFacPrvT, cFacPrvL, cPgo, cIva, cDiv, oBcn, oBan, lRectificativa )

   local nLevel            := nLevelUsr( _MENUITEM_ )

   DEFAULT lRectificativa  := .f.

   if nAnd( nLevel, 1 ) != 0 .or. nAnd( nLevel, ACC_EDIT ) == 0
      msgStop( 'Acceso no permitido.' )
      return .t.
   end if

   dbfFacPrvP              := cFacPrvP
   dbfFacPrvT              := cFacPrvT
   dbfFacPrvL              := cFacPrvL
   dbfFPago                := cPgo
   dbfIva                  := cIva
   dbfDiv                  := cDiv
   oBandera                := oBan

   WinEdtRec( nil, bEdtRec, dbfFacPrvP, lRectificativa )

Return .t.

//----------------------------------------------------------------------------//

FUNCTION ExtDelRecPrv( cFacPrvP )

   local nLevel         := nLevelUsr( _MENUITEM_ )

   if nAnd( nLevel, 1 ) != 0 .or. nAnd( nLevel, ACC_DELE ) == 0
      msgStop( 'Acceso no permitido.' )
      return .t.
   end if

   DelPgoPrv( nil, cFacPrvP )

Return .t.

//----------------------------------------------------------------------------//

Static Function FilterRecibos( lCobrado )

   with object ( TDlgFlt():Init( oWndBrw ) )

      do case
         case IsTrue( lCobrado )
            :cExpFilter    := "lCobrado .and. !lDevuelto"
         case IsFalse( lCobrado )
            :cExpFilter    := "!lCobrado .and. !lDevuelto"
         case IsNil( lCobrado )
            :cExpFilter    := "lDevuelto"
      end case

      :AplyFilter()

   end with

Return ( nil )

//---------------------------------------------------------------------------//