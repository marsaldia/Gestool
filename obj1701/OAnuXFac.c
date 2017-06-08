/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\OAnuXFac.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OANUXFAC );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TPRVGRPPRV );
HB_FUNC_STATIC( OANUXFAC_CREATE );
HB_FUNC_STATIC( OANUXFAC_OPENFILES );
HB_FUNC_STATIC( OANUXFAC_CLOSEFILES );
HB_FUNC_STATIC( OANUXFAC_LRESOURCE );
HB_FUNC_STATIC( OANUXFAC_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATPRV );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( AITMFACPRV );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( CGRUPRV );
HB_FUNC_EXTERN( YEAR );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NIMPLFACPRV );
HB_FUNC_EXTERN( CNOMGRP );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OANUXFAC )
{ "OANUXFAC", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OANUXFAC )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TPRVGRPPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( TPRVGRPPRV )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OANUXFAC_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUXFAC_CREATE )}, NULL },
{ "OANUXFAC_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUXFAC_OPENFILES )}, NULL },
{ "OANUXFAC_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUXFAC_CLOSEFILES )}, NULL },
{ "OANUXFAC_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUXFAC_LRESOURCE )}, NULL },
{ "OANUXFAC_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUXFAC_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ANUFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OFACPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATPRV )}, NULL },
{ "ODBFPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFFECINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFYEA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFGRPPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "AESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMFACPRV )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGRUPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( CGRUPRV )}, NULL },
{ "CCODPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( YEAR )}, NULL },
{ "DFECFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NYEAINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LGRPPRVALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGRPPRVORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGRPPRVDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLFACPRV )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLANK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODGRP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMGRP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMGRP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CNOMGRP )}, NULL },
{ "OGRPPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDIMPORTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OANUXFAC, ".\\.\\Prg\\OAnuXFac.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OANUXFAC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OANUXFAC )
   #include "hbiniseg.h"
#endif

HB_FUNC( OANUXFAC )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,110,0,36,8,0,103,2,0,100,8,
		29,67,2,176,1,0,104,2,0,12,1,29,56,2,
		166,250,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,79,65,110,117,88,70,97,99,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,9,95,1,
		121,72,121,72,121,72,106,9,108,69,120,99,67,101,
		114,111,0,4,1,0,9,112,5,73,36,11,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,8,111,69,115,116,
		97,100,111,0,4,1,0,9,112,5,73,36,12,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,9,111,70,97,
		99,80,114,118,84,0,4,1,0,9,112,5,73,36,
		13,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,9,111,
		70,97,99,80,114,118,76,0,4,1,0,9,112,5,
		73,36,14,0,48,5,0,95,2,106,7,79,66,74,
		69,67,84,0,100,95,1,121,72,121,72,121,72,106,
		8,111,68,98,102,80,114,118,0,4,1,0,9,112,
		5,73,36,15,0,48,5,0,95,2,106,6,65,82,
		82,65,89,0,106,11,76,105,113,117,105,100,97,100,
		97,115,0,106,11,80,101,110,100,105,101,110,116,101,
		115,0,106,6,84,111,100,97,115,0,4,3,0,95,
		1,121,72,121,72,121,72,106,8,97,69,115,116,97,
		100,111,0,4,1,0,9,112,5,73,36,17,0,48,
		6,0,95,2,106,7,99,114,101,97,116,101,0,108,
		7,95,1,121,72,121,72,121,72,112,3,73,36,19,
		0,48,6,0,95,2,106,10,79,112,101,110,70,105,
		108,101,115,0,108,8,95,1,121,72,121,72,121,72,
		112,3,73,36,21,0,48,6,0,95,2,106,11,67,
		108,111,115,101,70,105,108,101,115,0,108,9,95,1,
		121,72,121,72,121,72,112,3,73,36,23,0,48,6,
		0,95,2,106,10,108,82,101,115,111,117,114,99,101,
		0,108,10,95,1,121,72,121,72,121,72,112,3,73,
		36,25,0,48,6,0,95,2,106,10,108,71,101,110,
		101,114,97,116,101,0,108,11,95,1,121,72,121,72,
		121,72,112,3,73,36,27,0,48,12,0,95,2,112,
		0,73,167,14,0,0,176,13,0,104,2,0,95,2,
		20,2,168,48,14,0,95,2,112,0,80,3,176,15,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,16,0,95,3,164,146,1,0,
		73,95,3,110,7,48,14,0,103,2,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUXFAC_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,33,0,48,17,0,102,112,0,73,36,35,0,48,
		18,0,102,106,8,99,67,111,100,71,114,112,0,106,
		8,99,67,111,100,71,114,112,0,112,2,73,36,37,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUXFAC_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,42,0,120,80,1,36,43,0,176,19,
		0,89,15,0,1,0,0,0,176,20,0,95,1,12,
		1,6,12,1,80,2,36,45,0,113,94,1,0,36,
		47,0,48,21,0,102,48,22,0,176,23,0,106,12,
		70,65,67,80,82,86,84,46,68,66,70,0,100,12,
		2,106,12,70,65,67,80,82,86,84,46,68,66,70,
		0,100,176,24,0,12,0,100,176,25,0,12,0,9,
		120,9,9,112,9,112,1,73,48,26,0,48,27,0,
		102,112,0,106,12,70,65,67,80,82,86,84,46,67,
		68,88,0,112,1,73,48,26,0,48,27,0,102,112,
		0,112,0,73,48,28,0,48,27,0,102,112,0,112,
		0,73,36,49,0,48,29,0,102,48,22,0,176,23,
		0,106,12,70,65,67,80,82,86,76,46,68,66,70,
		0,100,12,2,106,12,70,65,67,80,82,86,76,46,
		68,66,70,0,100,176,24,0,12,0,100,176,25,0,
		12,0,9,120,9,9,112,9,112,1,73,48,26,0,
		48,30,0,102,112,0,106,12,70,65,67,80,82,86,
		76,46,67,68,88,0,112,1,73,48,26,0,48,30,
		0,102,112,0,112,0,73,48,28,0,48,30,0,102,
		112,0,112,0,73,36,51,0,48,31,0,102,48,22,
		0,176,23,0,106,11,80,82,79,86,69,69,46,68,
		66,70,0,100,12,2,106,11,80,82,79,86,69,69,
		46,68,66,70,0,100,176,24,0,12,0,100,176,32,
		0,12,0,9,120,9,9,112,9,112,1,73,48,26,
		0,48,33,0,102,112,0,106,11,80,82,79,86,69,
		69,46,67,68,88,0,112,1,73,48,26,0,48,33,
		0,102,112,0,112,0,73,48,28,0,48,33,0,102,
		112,0,112,0,73,114,76,0,0,36,53,0,115,73,
		36,55,0,176,34,0,106,41,73,109,112,111,115,105,
		98,108,101,32,97,98,114,105,114,32,116,111,100,97,
		115,32,108,97,115,32,98,97,115,101,115,32,100,101,
		32,100,97,116,111,115,0,20,1,36,56,0,48,35,
		0,102,112,0,73,36,57,0,9,80,1,36,61,0,
		176,19,0,95,2,20,1,36,63,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUXFAC_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,69,0,176,36,0,48,27,0,102,112,0,12,1,
		31,30,48,37,0,48,27,0,102,112,0,112,0,28,
		17,36,70,0,48,38,0,48,27,0,102,112,0,112,
		0,73,36,72,0,176,36,0,48,30,0,102,112,0,
		12,1,31,30,48,37,0,48,30,0,102,112,0,112,
		0,28,17,36,73,0,48,38,0,48,30,0,102,112,
		0,112,0,73,36,75,0,176,36,0,48,33,0,102,
		112,0,12,1,31,30,48,37,0,48,33,0,102,112,
		0,112,0,28,17,36,76,0,48,38,0,48,33,0,
		102,112,0,112,0,73,36,79,0,48,21,0,102,100,
		112,1,73,36,80,0,48,29,0,102,100,112,1,73,
		36,81,0,48,31,0,102,100,112,1,73,36,83,0,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUXFAC_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,89,0,106,6,84,111,100,97,115,0,
		80,2,36,91,0,48,39,0,102,9,112,1,73,36,
		93,0,48,40,0,102,106,10,65,78,85,71,82,80,
		80,82,86,0,112,1,31,8,36,94,0,9,110,7,
		36,98,0,48,41,0,102,112,0,73,36,101,0,48,
		42,0,102,92,70,92,71,92,80,92,81,92,90,112,
		5,31,8,36,102,0,9,110,7,36,106,0,48,43,
		0,102,112,0,73,36,112,0,48,44,0,102,48,45,
		0,176,46,0,12,0,93,218,0,89,28,0,1,0,
		1,0,2,0,176,47,0,12,0,121,8,28,6,95,
		255,25,7,95,1,165,80,255,6,48,48,0,102,112,
		0,48,49,0,48,50,0,102,112,0,112,0,122,1,
		100,100,100,100,100,100,9,100,100,100,100,100,100,112,
		17,112,1,73,36,115,0,48,51,0,48,52,0,102,
		112,0,48,53,0,48,27,0,102,112,0,112,0,112,
		1,73,36,117,0,48,54,0,102,176,55,0,12,0,
		48,56,0,48,27,0,102,112,0,112,0,112,2,73,
		36,119,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUXFAC_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,128,0,106,1,0,80,1,36,129,0,
		106,1,0,80,2,36,133,0,48,57,0,48,58,0,
		102,112,0,112,0,73,36,134,0,48,59,0,48,60,
		0,102,112,0,112,0,73,36,135,0,48,61,0,48,
		62,0,102,112,0,112,0,73,36,138,0,48,63,0,
		48,27,0,102,112,0,106,8,100,70,101,99,70,97,
		99,0,112,1,73,36,139,0,48,63,0,48,30,0,
		102,112,0,106,8,110,78,117,109,70,97,99,0,112,
		1,73,36,142,0,48,64,0,48,65,0,102,112,0,
		112,0,122,8,28,22,36,143,0,106,11,108,76,105,
		113,117,105,100,97,100,97,0,80,1,25,72,36,144,
		0,48,64,0,48,65,0,102,112,0,112,0,92,2,
		8,28,23,36,145,0,106,12,33,108,76,105,113,117,
		105,100,97,100,97,0,80,1,25,32,36,146,0,48,
		64,0,48,65,0,102,112,0,112,0,92,3,8,28,
		13,36,147,0,106,4,46,116,46,0,80,1,36,150,
		0,176,36,0,48,66,0,48,67,0,102,112,0,112,
		0,12,1,31,31,36,151,0,96,1,0,106,8,32,
		46,97,110,100,46,32,0,48,66,0,48,67,0,102,
		112,0,112,0,72,135,36,154,0,48,18,0,48,27,
		0,102,112,0,176,68,0,12,0,176,69,0,48,70,
		0,48,27,0,102,112,0,112,0,12,1,48,71,0,
		48,27,0,102,112,0,112,0,95,1,100,100,100,100,
		100,100,100,120,112,12,73,36,156,0,48,51,0,48,
		52,0,102,112,0,48,72,0,48,27,0,102,112,0,
		112,0,112,1,73,36,158,0,106,10,33,108,67,111,
		110,116,114,111,108,0,80,2,36,160,0,48,18,0,
		48,30,0,102,112,0,176,68,0,12,0,176,69,0,
		48,70,0,48,30,0,102,112,0,112,0,12,1,48,
		71,0,48,30,0,102,112,0,112,0,176,73,0,95,
		2,12,1,100,100,100,100,100,100,100,120,112,12,73,
		36,162,0,48,74,0,48,27,0,102,112,0,112,0,
		73,36,164,0,48,75,0,102,112,0,32,63,2,48,
		76,0,48,27,0,102,112,0,112,0,32,49,2,36,
		167,0,176,77,0,48,78,0,48,27,0,102,112,0,
		112,0,48,33,0,102,112,0,12,2,80,3,36,172,
		0,176,79,0,48,80,0,48,27,0,102,112,0,112,
		0,12,1,48,81,0,102,112,0,8,29,205,1,48,
		82,0,102,112,0,31,26,95,3,48,83,0,102,112,
		0,16,29,185,1,95,3,48,84,0,102,112,0,34,
		29,173,1,176,85,0,48,86,0,48,27,0,102,112,
		0,112,0,48,87,0,102,112,0,12,2,29,148,1,
		36,174,0,48,88,0,48,30,0,102,112,0,48,86,
		0,48,27,0,102,112,0,112,0,176,89,0,48,90,
		0,48,27,0,102,112,0,112,0,12,1,72,48,91,
		0,48,27,0,102,112,0,112,0,72,112,1,29,91,
		1,36,176,0,48,86,0,48,27,0,102,112,0,112,
		0,176,89,0,48,90,0,48,27,0,102,112,0,112,
		0,12,1,72,48,91,0,48,27,0,102,112,0,112,
		0,72,48,86,0,48,30,0,102,112,0,112,0,176,
		89,0,48,90,0,48,30,0,102,112,0,112,0,12,
		1,72,48,91,0,48,30,0,102,112,0,112,0,72,
		8,29,4,1,48,76,0,48,30,0,102,112,0,112,
		0,32,246,0,36,178,0,48,92,0,102,112,0,28,
		52,176,93,0,48,56,0,48,27,0,102,112,0,112,
		0,48,56,0,48,30,0,102,112,0,112,0,48,94,
		0,102,112,0,48,95,0,102,112,0,48,96,0,102,
		112,0,12,5,121,8,32,167,0,36,182,0,48,88,
		0,48,62,0,102,112,0,95,3,112,1,31,82,36,
		183,0,48,97,0,48,62,0,102,112,0,112,0,73,
		36,184,0,48,98,0,48,62,0,102,112,0,95,3,
		112,1,73,36,185,0,48,99,0,48,62,0,102,112,
		0,176,100,0,95,3,48,62,0,48,101,0,102,112,
		0,112,0,12,2,112,1,73,36,186,0,48,102,0,
		48,62,0,102,112,0,112,0,73,36,189,0,48,103,
		0,102,48,80,0,48,27,0,102,112,0,112,0,176,
		93,0,48,56,0,48,27,0,102,112,0,112,0,48,
		56,0,48,30,0,102,112,0,112,0,48,94,0,102,
		112,0,48,95,0,102,112,0,48,96,0,102,112,0,
		12,5,112,2,73,36,193,0,48,104,0,48,30,0,
		102,112,0,112,0,73,26,171,254,36,201,0,48,104,
		0,48,27,0,102,112,0,112,0,73,36,203,0,48,
		105,0,48,52,0,102,112,0,48,106,0,48,27,0,
		102,112,0,112,0,112,1,73,26,187,253,36,207,0,
		48,105,0,48,52,0,102,112,0,48,53,0,48,27,
		0,102,112,0,112,0,112,1,73,36,210,0,48,107,
		0,48,27,0,102,112,0,176,68,0,12,0,176,69,
		0,48,70,0,48,27,0,102,112,0,112,0,12,1,
		112,2,73,36,211,0,48,107,0,48,30,0,102,112,
		0,176,68,0,12,0,176,69,0,48,70,0,48,30,
		0,102,112,0,112,0,12,1,112,2,73,36,213,0,
		48,59,0,48,58,0,102,112,0,112,0,73,36,215,
		0,48,53,0,48,62,0,102,112,0,112,0,121,15,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,110,0,2,0,116,110,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

