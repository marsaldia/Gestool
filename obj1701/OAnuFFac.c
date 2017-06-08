/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\OAnuFFac.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OANUFFAC );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TPRVFAM );
HB_FUNC_STATIC( OANUFFAC_CREATE );
HB_FUNC_STATIC( OANUFFAC_OPENFILES );
HB_FUNC_STATIC( OANUFFAC_CLOSEFILES );
HB_FUNC_STATIC( OANUFFAC_LRESOURCE );
HB_FUNC_STATIC( OANUFFAC_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATDAT );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( AITMFACPRV );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( YEAR );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( ATOTFACPRV );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( NIMPLFACPRV );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OANUFFAC )
{ "OANUFFAC", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OANUFFAC )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TPRVFAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TPRVFAM )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OANUFFAC_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUFFAC_CREATE )}, NULL },
{ "OANUFFAC_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUFFAC_OPENFILES )}, NULL },
{ "OANUFFAC_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUFFAC_CLOSEFILES )}, NULL },
{ "OANUFFAC_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUFFAC_LRESOURCE )}, NULL },
{ "OANUFFAC_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OANUFFAC_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ANUFAMFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFFECINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFGRAPH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "_OFACPRVP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFIVA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATDAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATDAT )}, NULL },
{ "ODBFIVA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFYEA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFFAMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "AESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMFACPRV )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NYEAINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFAMORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFAMDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( YEAR )}, NULL },
{ "DFECFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LFACGAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATOTFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATOTFACPRV )}, NULL },
{ "NNUMFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDIVINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "BLANK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDIMPORTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLFACPRV )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INCLUYECERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OANUFFAC, ".\\.\\Prg\\OAnuFFac.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OANUFFAC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OANUFFAC )
   #include "hbiniseg.h"
#endif

HB_FUNC( OANUFFAC )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,123,0,36,8,0,103,2,0,100,8,
		29,152,2,176,1,0,104,2,0,12,1,29,141,2,
		166,79,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,111,65,110,117,70,70,97,99,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,9,95,1,
		121,72,121,72,121,72,106,9,108,82,101,115,117,109,
		101,110,0,4,1,0,9,112,5,73,36,11,0,48,
		5,0,95,2,106,6,76,79,71,73,67,0,9,95,
		1,121,72,121,72,121,72,106,9,108,69,120,99,67,
		101,114,111,0,4,1,0,9,112,5,73,36,12,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,8,111,69,115,
		116,97,100,111,0,4,1,0,9,112,5,73,36,13,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,70,
		97,99,80,114,118,84,0,4,1,0,9,112,5,73,
		36,14,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,9,
		111,70,97,99,80,114,118,76,0,4,1,0,9,112,
		5,73,36,15,0,48,5,0,95,2,106,7,79,66,
		74,69,67,84,0,100,95,1,121,72,121,72,121,72,
		106,9,111,70,97,99,80,114,118,80,0,4,1,0,
		9,112,5,73,36,16,0,48,5,0,95,2,106,7,
		79,66,74,69,67,84,0,100,95,1,121,72,121,72,
		121,72,106,8,111,68,98,102,73,118,97,0,4,1,
		0,9,112,5,73,36,17,0,48,5,0,95,2,106,
		6,65,82,82,65,89,0,106,11,80,101,110,100,105,
		101,110,116,101,115,0,106,9,67,111,98,114,97,100,
		97,115,0,106,6,84,111,100,97,115,0,4,3,0,
		95,1,121,72,121,72,121,72,106,8,97,69,115,116,
		97,100,111,0,4,1,0,9,112,5,73,36,19,0,
		48,6,0,95,2,106,7,67,114,101,97,116,101,0,
		108,7,95,1,121,72,121,72,121,72,112,3,73,36,
		21,0,48,6,0,95,2,106,10,79,112,101,110,70,
		105,108,101,115,0,108,8,95,1,121,72,121,72,121,
		72,112,3,73,36,23,0,48,6,0,95,2,106,11,
		67,108,111,115,101,70,105,108,101,115,0,108,9,95,
		1,121,72,121,72,121,72,112,3,73,36,25,0,48,
		6,0,95,2,106,10,108,82,101,115,111,117,114,99,
		101,0,108,10,95,1,121,72,121,72,121,72,112,3,
		73,36,27,0,48,6,0,95,2,106,10,108,71,101,
		110,101,114,97,116,101,0,108,11,95,1,121,72,121,
		72,121,72,112,3,73,36,29,0,48,12,0,95,2,
		112,0,73,167,14,0,0,176,13,0,104,2,0,95,
		2,20,2,168,48,14,0,95,2,112,0,80,3,176,
		15,0,95,3,106,10,73,110,105,116,67,108,97,115,
		115,0,12,2,28,12,48,16,0,95,3,164,146,1,
		0,73,95,3,110,7,48,14,0,103,2,0,112,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUFFAC_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,35,0,48,17,0,102,112,0,73,36,37,0,48,
		18,0,102,106,8,99,67,111,100,70,97,109,0,106,
		8,99,67,111,100,70,97,109,0,112,2,73,36,39,
		0,48,19,0,102,9,112,1,73,36,40,0,48,20,
		0,102,120,112,1,73,36,42,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUFFAC_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,48,0,120,80,1,36,49,0,176,21,
		0,89,15,0,1,0,0,0,176,22,0,95,1,12,
		1,6,12,1,80,2,36,51,0,113,203,1,0,36,
		53,0,48,23,0,102,48,24,0,176,25,0,106,12,
		70,65,67,80,82,86,84,46,68,66,70,0,100,12,
		2,106,12,70,65,67,80,82,86,84,46,68,66,70,
		0,100,176,26,0,12,0,100,176,27,0,12,0,9,
		120,9,9,112,9,112,1,73,48,28,0,48,29,0,
		102,112,0,106,12,70,65,67,80,82,86,84,46,67,
		68,88,0,112,1,73,48,28,0,48,29,0,102,112,
		0,112,0,73,48,30,0,48,29,0,102,112,0,112,
		0,73,36,55,0,48,31,0,102,48,24,0,176,25,
		0,106,12,70,65,67,80,82,86,76,46,68,66,70,
		0,100,12,2,106,12,70,65,67,80,82,86,76,46,
		68,66,70,0,100,176,26,0,12,0,100,176,27,0,
		12,0,9,120,9,9,112,9,112,1,73,48,28,0,
		48,32,0,102,112,0,106,12,70,65,67,80,82,86,
		76,46,67,68,88,0,112,1,73,48,28,0,48,32,
		0,102,112,0,112,0,73,48,30,0,48,32,0,102,
		112,0,112,0,73,36,57,0,48,33,0,102,48,24,
		0,176,25,0,106,12,70,65,67,80,82,86,80,46,
		68,66,70,0,100,12,2,106,12,70,65,67,80,82,
		86,80,46,68,66,70,0,100,176,26,0,12,0,100,
		176,27,0,12,0,9,120,9,9,112,9,112,1,73,
		48,28,0,48,34,0,102,112,0,106,12,70,65,67,
		80,82,86,80,46,67,68,88,0,112,1,73,48,28,
		0,48,34,0,102,112,0,112,0,73,48,30,0,48,
		34,0,102,112,0,112,0,73,36,59,0,48,35,0,
		102,48,24,0,176,25,0,106,9,84,73,86,65,46,
		68,66,70,0,100,12,2,106,9,84,73,86,65,46,
		68,66,70,0,100,176,26,0,12,0,100,176,36,0,
		12,0,9,120,9,9,112,9,112,1,73,48,28,0,
		48,37,0,102,112,0,106,9,84,73,86,65,46,67,
		68,88,0,112,1,73,48,28,0,48,37,0,102,112,
		0,112,0,73,48,30,0,48,37,0,102,112,0,112,
		0,73,114,76,0,0,36,61,0,115,73,36,63,0,
		176,38,0,106,41,73,109,112,111,115,105,98,108,101,
		32,97,98,114,105,114,32,116,111,100,97,115,32,108,
		97,115,32,98,97,115,101,115,32,100,101,32,100,97,
		116,111,115,0,20,1,36,64,0,48,39,0,102,112,
		0,73,36,65,0,9,80,1,36,69,0,176,21,0,
		95,2,20,1,36,71,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUFFAC_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,77,0,176,40,0,48,29,0,102,112,0,12,1,
		31,30,48,41,0,48,29,0,102,112,0,112,0,28,
		17,36,78,0,48,42,0,48,29,0,102,112,0,112,
		0,73,36,81,0,176,40,0,48,32,0,102,112,0,
		12,1,31,30,48,41,0,48,32,0,102,112,0,112,
		0,28,17,36,82,0,48,42,0,48,32,0,102,112,
		0,112,0,73,36,85,0,176,40,0,48,34,0,102,
		112,0,12,1,31,30,48,41,0,48,34,0,102,112,
		0,112,0,28,17,36,86,0,48,42,0,48,34,0,
		102,112,0,112,0,73,36,89,0,176,40,0,48,37,
		0,102,112,0,12,1,31,30,48,41,0,48,37,0,
		102,112,0,112,0,28,17,36,90,0,48,42,0,48,
		37,0,102,112,0,112,0,73,36,93,0,48,23,0,
		102,100,112,1,73,36,94,0,48,31,0,102,100,112,
		1,73,36,95,0,48,33,0,102,100,112,1,73,36,
		96,0,48,35,0,102,100,112,1,73,36,98,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUFFAC_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,104,0,106,6,84,111,100,97,115,0,
		80,2,36,106,0,48,43,0,102,106,11,73,78,70,
		71,69,78,70,65,77,66,0,112,1,31,8,36,107,
		0,9,110,7,36,114,0,48,44,0,102,112,0,73,
		36,120,0,48,45,0,102,92,70,92,80,92,90,92,
		100,93,88,2,112,5,31,8,36,121,0,9,110,7,
		36,124,0,48,46,0,48,47,0,102,112,0,48,48,
		0,48,29,0,102,112,0,112,0,112,1,73,36,126,
		0,48,49,0,102,112,0,73,36,132,0,48,50,0,
		102,48,51,0,176,52,0,12,0,93,218,0,89,28,
		0,1,0,1,0,2,0,176,53,0,12,0,121,8,
		28,6,95,255,25,7,95,1,165,80,255,6,48,54,
		0,102,112,0,48,55,0,48,56,0,102,112,0,112,
		0,122,1,100,100,100,100,100,100,9,100,100,100,100,
		100,100,112,17,112,1,73,36,134,0,48,57,0,102,
		176,58,0,12,0,48,59,0,48,29,0,102,112,0,
		112,0,112,2,73,36,136,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OANUFFAC_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,143,0,102,80,1,36,145,0,106,1,
		0,80,2,36,146,0,106,1,0,80,3,36,147,0,
		4,0,0,80,4,36,149,0,48,60,0,48,61,0,
		95,1,112,0,112,0,73,36,150,0,48,62,0,48,
		63,0,95,1,112,0,112,0,73,36,151,0,48,64,
		0,48,65,0,95,1,112,0,112,0,73,36,156,0,
		48,66,0,95,1,90,27,106,11,70,101,99,104,97,
		32,32,32,58,32,0,176,67,0,176,68,0,12,0,
		12,1,72,6,89,41,0,0,0,1,0,1,0,106,
		11,65,241,111,32,32,32,32,32,58,32,0,176,69,
		0,176,70,0,48,71,0,95,255,112,0,12,1,12,
		1,72,6,89,75,0,0,0,1,0,1,0,106,11,
		70,97,109,105,108,105,97,32,58,32,0,48,72,0,
		95,255,112,0,28,12,106,6,84,111,100,97,115,0,
		25,34,176,69,0,48,73,0,95,255,112,0,12,1,
		106,4,32,62,32,0,72,176,69,0,48,74,0,95,
		255,112,0,12,1,72,72,6,89,44,0,0,0,1,
		0,1,0,106,11,69,115,116,97,100,111,32,32,58,
		32,0,48,54,0,95,255,112,0,48,75,0,48,76,
		0,95,255,112,0,112,0,1,72,6,4,4,0,112,
		1,73,36,158,0,48,77,0,48,29,0,95,1,112,
		0,106,8,100,70,101,99,70,97,99,0,112,1,73,
		36,159,0,48,77,0,48,32,0,95,1,112,0,106,
		8,110,78,117,109,70,97,99,0,112,1,73,36,162,
		0,48,75,0,48,76,0,95,1,112,0,112,0,122,
		8,28,23,36,163,0,106,12,33,108,76,105,113,117,
		105,100,97,100,97,0,80,2,25,73,36,164,0,48,
		75,0,48,76,0,95,1,112,0,112,0,92,2,8,
		28,22,36,165,0,106,11,108,76,105,113,117,105,100,
		97,100,97,0,80,2,25,33,36,166,0,48,75,0,
		48,76,0,95,1,112,0,112,0,92,3,8,28,13,
		36,167,0,106,4,46,116,46,0,80,2,36,170,0,
		176,40,0,48,78,0,48,79,0,95,1,112,0,112,
		0,12,1,31,32,36,171,0,96,2,0,106,8,32,
		46,97,110,100,46,32,0,48,78,0,48,79,0,95,
		1,112,0,112,0,72,135,36,174,0,48,18,0,48,
		29,0,95,1,112,0,176,80,0,12,0,176,81,0,
		48,82,0,48,29,0,95,1,112,0,112,0,12,1,
		48,83,0,48,29,0,95,1,112,0,112,0,95,2,
		100,100,100,100,100,100,100,120,112,12,73,36,176,0,
		48,46,0,48,47,0,95,1,112,0,48,84,0,48,
		29,0,95,1,112,0,112,0,112,1,73,36,178,0,
		48,72,0,95,1,112,0,31,79,36,179,0,106,13,
		99,67,111,100,70,97,109,32,62,61,32,34,0,176,
		85,0,48,73,0,95,1,112,0,12,1,72,106,21,
		34,32,46,97,110,100,46,32,99,67,111,100,70,97,
		109,32,60,61,32,34,0,72,176,85,0,48,74,0,
		95,1,112,0,12,1,72,106,2,34,0,72,80,3,
		25,13,36,181,0,106,4,46,116,46,0,80,3,36,
		184,0,48,18,0,48,32,0,95,1,112,0,176,80,
		0,12,0,176,81,0,48,82,0,48,32,0,95,1,
		112,0,112,0,12,1,48,83,0,48,32,0,95,1,
		112,0,112,0,176,86,0,95,3,12,1,100,100,100,
		100,100,100,100,120,112,12,73,36,186,0,48,87,0,
		48,29,0,95,1,112,0,112,0,73,36,188,0,48,
		88,0,95,1,112,0,32,92,3,48,89,0,48,29,
		0,95,1,112,0,112,0,32,77,3,36,191,0,176,
		90,0,48,91,0,48,29,0,95,1,112,0,112,0,
		12,1,48,71,0,95,1,112,0,8,29,255,2,176,
		92,0,48,93,0,48,29,0,95,1,112,0,112,0,
		48,94,0,95,1,112,0,12,2,29,228,2,36,193,
		0,48,95,0,48,29,0,95,1,112,0,112,0,29,
		9,1,48,72,0,95,1,112,0,29,255,0,36,195,
		0,176,96,0,48,93,0,48,29,0,95,1,112,0,
		112,0,176,70,0,48,97,0,48,29,0,95,1,112,
		0,112,0,12,1,72,48,98,0,48,29,0,95,1,
		112,0,112,0,72,48,59,0,48,29,0,95,1,112,
		0,112,0,48,59,0,48,32,0,95,1,112,0,112,
		0,48,59,0,48,37,0,95,1,112,0,112,0,48,
		59,0,48,99,0,95,1,112,0,112,0,48,59,0,
		48,34,0,95,1,112,0,112,0,48,100,0,95,1,
		112,0,12,7,80,4,36,197,0,48,101,0,48,65,
		0,95,1,112,0,176,102,0,92,16,12,1,112,1,
		31,80,36,198,0,48,103,0,48,65,0,95,1,112,
		0,112,0,73,36,199,0,48,104,0,48,65,0,95,
		1,112,0,176,102,0,92,16,12,1,112,1,73,36,
		200,0,48,105,0,48,65,0,95,1,112,0,176,102,
		0,92,40,12,1,112,1,73,36,201,0,48,106,0,
		48,65,0,95,1,112,0,112,0,73,36,204,0,48,
		107,0,95,1,48,91,0,48,29,0,95,1,112,0,
		112,0,95,4,122,1,112,2,73,26,204,1,36,208,
		0,48,101,0,48,32,0,95,1,112,0,48,93,0,
		48,29,0,95,1,112,0,112,0,176,70,0,48,97,
		0,48,29,0,95,1,112,0,112,0,12,1,72,48,
		98,0,48,29,0,95,1,112,0,112,0,72,112,1,
		29,143,1,36,210,0,48,93,0,48,29,0,95,1,
		112,0,112,0,176,70,0,48,97,0,48,29,0,95,
		1,112,0,112,0,12,1,72,48,98,0,48,29,0,
		95,1,112,0,112,0,72,48,93,0,48,32,0,95,
		1,112,0,112,0,176,70,0,48,97,0,48,32,0,
		95,1,112,0,112,0,12,1,72,48,98,0,48,32,
		0,95,1,112,0,112,0,72,8,29,50,1,48,89,
		0,48,32,0,95,1,112,0,112,0,32,35,1,36,
		212,0,48,108,0,95,1,112,0,28,57,176,109,0,
		48,59,0,48,29,0,95,1,112,0,112,0,48,59,
		0,48,32,0,95,1,112,0,112,0,48,110,0,95,
		1,112,0,48,111,0,95,1,112,0,48,112,0,95,
		1,112,0,12,5,121,8,32,205,0,36,214,0,48,
		101,0,48,65,0,95,1,112,0,48,113,0,48,32,
		0,95,1,112,0,112,0,112,1,31,102,36,215,0,
		48,103,0,48,65,0,95,1,112,0,112,0,73,36,
		216,0,48,104,0,48,65,0,95,1,112,0,48,113,
		0,48,32,0,95,1,112,0,112,0,112,1,73,36,
		217,0,48,105,0,48,65,0,95,1,112,0,176,114,
		0,48,113,0,48,32,0,95,1,112,0,112,0,48,
		115,0,95,1,112,0,12,2,112,1,73,36,218,0,
		48,106,0,48,65,0,95,1,112,0,112,0,73,36,
		221,0,48,107,0,95,1,48,91,0,48,29,0,95,
		1,112,0,112,0,176,109,0,48,59,0,48,29,0,
		95,1,112,0,112,0,48,59,0,48,32,0,95,1,
		112,0,112,0,48,110,0,95,1,112,0,48,111,0,
		95,1,112,0,48,112,0,95,1,112,0,12,5,112,
		2,73,36,225,0,48,116,0,48,32,0,95,1,112,
		0,112,0,73,26,119,254,36,235,0,48,116,0,48,
		29,0,95,1,112,0,112,0,73,36,237,0,48,117,
		0,48,47,0,95,1,112,0,48,118,0,48,29,0,
		95,1,112,0,112,0,112,1,73,26,157,252,36,241,
		0,48,117,0,48,47,0,95,1,112,0,48,48,0,
		48,29,0,95,1,112,0,112,0,112,1,73,36,243,
		0,48,119,0,48,29,0,95,1,112,0,176,80,0,
		12,0,176,81,0,48,82,0,48,29,0,95,1,112,
		0,112,0,12,1,112,2,73,36,245,0,48,119,0,
		48,32,0,95,1,112,0,176,80,0,12,0,176,81,
		0,48,82,0,48,32,0,95,1,112,0,112,0,12,
		1,112,2,73,36,247,0,48,108,0,95,1,112,0,
		31,13,36,248,0,48,120,0,95,1,112,0,73,36,
		251,0,48,62,0,48,61,0,95,1,112,0,112,0,
		73,36,253,0,48,48,0,48,65,0,95,1,112,0,
		112,0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,123,0,2,0,116,123,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

