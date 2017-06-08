/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TInfTFacRec.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TINFTFACREC );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFTIP );
HB_FUNC_STATIC( TINFTFACREC_CREATE );
HB_FUNC_STATIC( TINFTFACREC_OPENFILES );
HB_FUNC_STATIC( TINFTFACREC_CLOSEFILES );
HB_FUNC_STATIC( TINFTFACREC_LRESOURCE );
HB_FUNC_STATIC( TINFTFACREC_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCHECKBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( AITMFACREC );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NTOTNFACREC );
HB_FUNC_EXTERN( NIMPLFACREC );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TINFTFACREC )
{ "TINFTFACREC", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TINFTFACREC )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFTIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFTIP )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFTFACREC_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFTFACREC_CREATE )}, NULL },
{ "TINFTFACREC_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFTFACREC_OPENFILES )}, NULL },
{ "TINFTFACREC_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFTFACREC_CLOSEFILES )}, NULL },
{ "TINFTFACREC_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFTFACREC_LRESOURCE )}, NULL },
{ "TINFTFACREC_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFTFACREC_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DETCREATEFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODTIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "OTIPART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LSALTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OFACRECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACRECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACRECL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACRECL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFTIPINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LDESGLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDESGLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMFACREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMFACREC )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BPREGENERATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BPOSTGENERATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QUIGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLTIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CTIPORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTIPDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERIE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTNFACREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTNFACREC )}, NULL },
{ "LEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLFACREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLFACREC )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPFACREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TINFTFACREC, ".\\.\\Prg\\TInfTFacRec.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TINFTFACREC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TINFTFACREC )
   #include "hbiniseg.h"
#endif

HB_FUNC( TINFTFACREC )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,116,0,36,8,0,103,2,0,100,8,
		29,163,1,176,1,0,104,2,0,12,1,29,152,1,
		166,90,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,12,84,73,110,102,84,70,97,99,82,101,99,
		0,108,4,4,1,0,108,0,112,3,80,2,36,10,
		0,48,5,0,95,2,106,6,76,79,71,73,67,0,
		120,95,1,121,72,121,72,121,72,106,10,108,68,101,
		115,103,108,111,115,101,0,4,1,0,9,112,5,73,
		36,11,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,9,
		111,70,97,99,82,101,99,84,0,4,1,0,9,112,
		5,73,36,12,0,48,5,0,95,2,106,7,79,66,
		74,69,67,84,0,100,95,1,121,72,121,72,121,72,
		106,9,111,70,97,99,82,101,99,76,0,4,1,0,
		9,112,5,73,36,14,0,48,6,0,95,2,106,7,
		67,114,101,97,116,101,0,108,7,95,1,121,72,121,
		72,121,72,112,3,73,36,16,0,48,6,0,95,2,
		106,10,79,112,101,110,70,105,108,101,115,0,108,8,
		95,1,121,72,121,72,121,72,112,3,73,36,18,0,
		48,6,0,95,2,106,11,67,108,111,115,101,70,105,
		108,101,115,0,108,9,95,1,121,72,121,72,121,72,
		112,3,73,36,20,0,48,6,0,95,2,106,10,108,
		82,101,115,111,117,114,99,101,0,108,10,95,1,121,
		72,121,72,121,72,112,3,73,36,22,0,48,6,0,
		95,2,106,10,108,71,101,110,101,114,97,116,101,0,
		108,11,95,1,121,72,121,72,121,72,112,3,73,36,
		24,0,48,12,0,95,2,112,0,73,167,14,0,0,
		176,13,0,104,2,0,95,2,20,2,168,48,14,0,
		95,2,112,0,80,3,176,15,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		16,0,95,3,164,146,1,0,73,95,3,110,7,48,
		14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFTFACREC_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,28,0,102,80,1,36,30,0,48,17,
		0,95,1,112,0,73,36,32,0,48,18,0,95,1,
		106,8,67,67,79,68,84,73,80,0,106,66,67,67,
		79,68,84,73,80,32,43,32,67,67,79,68,65,82,
		84,32,43,32,67,67,79,68,80,82,49,32,43,32,
		67,67,79,68,80,82,50,32,43,32,67,86,65,76,
		80,82,49,32,43,32,67,86,65,76,80,82,50,32,
		43,32,67,76,79,84,69,0,112,2,73,36,34,0,
		48,19,0,95,1,89,22,0,0,0,1,0,1,0,
		48,20,0,48,21,0,95,255,112,0,112,0,6,89,
		89,0,0,0,1,0,1,0,106,14,84,105,112,111,
		32,97,114,116,46,32,32,58,32,0,176,22,0,48,
		20,0,48,21,0,95,255,112,0,112,0,12,1,72,
		106,2,45,0,72,176,23,0,48,20,0,48,21,0,
		95,255,112,0,112,0,48,21,0,48,24,0,95,255,
		112,0,112,0,106,8,99,78,111,109,84,105,112,0,
		12,3,72,6,90,28,106,23,84,111,116,97,108,32,
		116,105,112,111,32,97,114,116,237,99,117,108,111,46,
		46,46,0,6,100,48,25,0,95,1,112,0,112,5,
		73,36,35,0,48,19,0,95,1,89,35,0,0,0,
		1,0,1,0,48,20,0,48,21,0,95,255,112,0,
		112,0,48,26,0,48,21,0,95,255,112,0,112,0,
		72,6,89,77,0,0,0,1,0,1,0,106,12,65,
		114,116,237,99,117,108,111,32,58,32,0,176,22,0,
		48,26,0,48,21,0,95,255,112,0,112,0,12,1,
		72,106,2,45,0,72,176,22,0,176,23,0,48,26,
		0,48,21,0,95,255,112,0,112,0,48,27,0,95,
		255,112,0,12,2,12,1,72,6,90,23,106,18,84,
		111,116,97,108,32,97,114,116,237,99,117,108,111,46,
		46,46,0,6,112,3,73,36,37,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFTFACREC_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,43,0,120,80,1,36,44,0,176,28,
		0,89,15,0,1,0,0,0,176,29,0,95,1,12,
		1,6,12,1,80,2,36,46,0,113,238,0,0,36,
		48,0,48,30,0,102,48,31,0,176,32,0,106,12,
		70,65,67,82,69,67,84,46,68,66,70,0,100,12,
		2,106,12,70,65,67,82,69,67,84,46,68,66,70,
		0,100,176,33,0,12,0,100,176,34,0,12,0,9,
		120,9,9,112,9,112,1,73,48,35,0,48,36,0,
		102,112,0,106,12,70,65,67,82,69,67,84,46,67,
		68,88,0,112,1,73,48,35,0,48,36,0,102,112,
		0,112,0,73,48,37,0,48,36,0,102,112,0,112,
		0,73,36,50,0,48,38,0,102,48,31,0,176,32,
		0,106,12,70,65,67,82,69,67,76,46,68,66,70,
		0,100,12,2,106,12,70,65,67,82,69,67,76,46,
		68,66,70,0,100,176,33,0,12,0,100,176,34,0,
		12,0,9,120,9,9,112,9,112,1,73,48,35,0,
		48,39,0,102,112,0,106,12,70,65,67,82,69,67,
		76,46,67,68,88,0,112,1,73,48,35,0,48,39,
		0,102,112,0,112,0,73,48,37,0,48,39,0,102,
		112,0,112,0,73,114,76,0,0,36,52,0,115,73,
		36,54,0,176,40,0,106,41,73,109,112,111,115,105,
		98,108,101,32,97,98,114,105,114,32,116,111,100,97,
		115,32,108,97,115,32,98,97,115,101,115,32,100,101,
		32,100,97,116,111,115,0,20,1,36,55,0,48,41,
		0,102,112,0,73,36,56,0,9,80,1,36,60,0,
		176,28,0,95,2,20,1,36,62,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFTFACREC_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,68,0,176,42,0,48,36,0,102,112,0,12,1,
		31,30,48,43,0,48,36,0,102,112,0,112,0,28,
		17,36,69,0,48,44,0,48,36,0,102,112,0,112,
		0,73,36,71,0,176,42,0,48,39,0,102,112,0,
		12,1,31,30,48,43,0,48,39,0,102,112,0,112,
		0,28,17,36,72,0,48,44,0,48,39,0,102,112,
		0,112,0,73,36,75,0,48,30,0,102,100,112,1,
		73,36,76,0,48,38,0,102,100,112,1,73,36,78,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFTFACREC_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,82,0,102,80,2,36,84,0,48,45,
		0,95,2,106,11,73,78,70,95,71,69,78,49,49,
		69,0,112,1,31,8,36,85,0,9,110,7,36,90,
		0,48,46,0,95,2,92,110,92,120,93,130,0,93,
		140,0,93,142,3,112,5,31,8,36,91,0,9,110,
		7,36,98,0,48,47,0,95,2,92,70,92,80,92,
		90,92,100,93,32,3,112,5,31,8,36,99,0,9,
		110,7,36,102,0,48,48,0,48,49,0,95,2,112,
		0,48,50,0,48,36,0,95,2,112,0,112,0,112,
		1,73,36,104,0,48,51,0,95,2,93,210,0,112,
		1,73,36,105,0,48,52,0,95,2,93,211,0,112,
		1,73,36,109,0,48,53,0,176,54,0,12,0,93,
		88,2,89,37,0,1,0,1,0,2,0,176,55,0,
		12,0,121,8,28,11,48,56,0,95,255,112,0,25,
		11,48,57,0,95,255,95,1,112,1,6,48,58,0,
		48,59,0,95,2,112,0,112,0,122,1,100,100,100,
		100,100,100,9,100,9,112,12,73,36,111,0,48,60,
		0,95,2,176,61,0,12,0,48,62,0,48,36,0,
		95,2,112,0,112,0,112,2,73,36,113,0,48,63,
		0,95,2,89,24,0,0,0,1,0,2,0,48,64,
		0,95,255,48,56,0,95,255,112,0,112,1,6,112,
		1,73,36,114,0,48,65,0,95,2,89,24,0,0,
		0,1,0,2,0,48,66,0,95,255,48,56,0,95,
		255,112,0,112,1,6,112,1,73,36,116,0,120,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFTFACREC_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,123,0,102,80,1,36,126,0,106,1,
		0,80,3,36,127,0,106,1,0,80,4,36,129,0,
		48,67,0,48,68,0,95,1,112,0,112,0,73,36,
		130,0,48,69,0,48,70,0,95,1,112,0,112,0,
		73,36,131,0,48,71,0,48,21,0,95,1,112,0,
		112,0,73,36,136,0,48,72,0,95,1,90,29,106,
		13,70,101,99,104,97,32,32,32,32,32,58,32,0,
		176,73,0,176,74,0,12,0,12,1,72,6,89,58,
		0,0,0,1,0,1,0,106,13,80,101,114,105,111,
		100,111,32,32,32,58,32,0,176,73,0,48,75,0,
		95,255,112,0,12,1,72,106,4,32,62,32,0,72,
		176,73,0,48,76,0,95,255,112,0,12,1,72,6,
		89,77,0,0,0,1,0,1,0,106,13,84,105,112,
		111,115,32,32,32,32,32,58,32,0,48,77,0,95,
		255,112,0,28,12,106,6,84,111,100,111,115,0,25,
		34,176,78,0,48,79,0,95,255,112,0,12,1,106,
		4,32,62,32,0,72,176,78,0,48,80,0,95,255,
		112,0,12,1,72,72,6,89,77,0,0,0,1,0,
		1,0,106,13,65,114,116,237,99,117,108,111,115,32,
		58,32,0,48,81,0,95,255,112,0,28,12,106,6,
		84,111,100,111,115,0,25,34,176,78,0,48,82,0,
		95,255,112,0,12,1,106,4,32,62,32,0,72,176,
		78,0,48,83,0,95,255,112,0,12,1,72,72,6,
		4,4,0,112,1,73,36,138,0,48,84,0,48,36,
		0,95,1,112,0,106,8,100,70,101,99,70,97,99,
		0,112,1,73,36,139,0,48,84,0,48,39,0,95,
		1,112,0,106,8,110,78,117,109,70,97,99,0,112,
		1,73,36,141,0,106,19,100,70,101,99,70,97,99,
		32,62,61,32,67,116,111,100,40,32,34,0,176,73,
		0,48,75,0,95,1,112,0,12,1,72,106,29,34,
		32,41,32,46,97,110,100,46,32,100,70,101,99,70,
		97,99,32,60,61,32,67,116,111,100,40,32,34,0,
		72,176,73,0,48,76,0,95,1,112,0,12,1,72,
		106,4,34,32,41,0,72,80,3,36,143,0,176,42,
		0,48,85,0,48,86,0,95,1,112,0,112,0,12,
		1,31,32,36,144,0,96,3,0,106,8,32,46,97,
		110,100,46,32,0,48,85,0,48,86,0,95,1,112,
		0,112,0,72,135,36,147,0,48,18,0,48,36,0,
		95,1,112,0,176,87,0,12,0,176,88,0,48,89,
		0,48,36,0,95,1,112,0,112,0,12,1,48,90,
		0,48,36,0,95,1,112,0,112,0,95,3,100,100,
		100,100,100,100,100,120,112,12,73,36,149,0,48,48,
		0,48,49,0,95,1,112,0,48,91,0,48,36,0,
		95,1,112,0,112,0,112,1,73,36,155,0,106,25,
		33,108,84,111,116,76,105,110,32,46,97,110,100,46,
		32,33,108,67,111,110,116,114,111,108,0,80,4,36,
		157,0,48,81,0,95,1,112,0,31,70,36,158,0,
		96,4,0,106,17,32,46,97,110,100,46,32,99,82,
		101,102,32,62,61,32,34,0,48,82,0,95,1,112,
		0,72,106,18,34,32,46,97,110,100,46,32,99,82,
		101,102,32,60,61,32,34,0,72,48,83,0,95,1,
		112,0,72,106,2,34,0,72,135,36,161,0,48,18,
		0,48,39,0,95,1,112,0,176,87,0,12,0,176,
		88,0,48,89,0,48,39,0,95,1,112,0,112,0,
		12,1,48,90,0,48,39,0,95,1,112,0,112,0,
		176,92,0,95,4,12,1,100,100,100,100,100,100,100,
		120,112,12,73,36,163,0,48,93,0,48,36,0,95,
		1,112,0,112,0,73,36,165,0,48,94,0,48,36,
		0,95,1,112,0,112,0,32,162,1,36,167,0,176,
		95,0,48,96,0,48,36,0,95,1,112,0,112,0,
		48,97,0,95,1,112,0,12,2,29,97,1,36,169,
		0,48,98,0,48,39,0,95,1,112,0,48,96,0,
		48,36,0,95,1,112,0,112,0,176,99,0,48,100,
		0,48,36,0,95,1,112,0,112,0,12,1,72,48,
		101,0,48,36,0,95,1,112,0,112,0,72,112,1,
		29,36,1,36,171,0,48,96,0,48,36,0,95,1,
		112,0,112,0,176,99,0,48,100,0,48,36,0,95,
		1,112,0,112,0,12,1,72,48,101,0,48,36,0,
		95,1,112,0,112,0,72,48,96,0,48,39,0,95,
		1,112,0,112,0,176,99,0,48,100,0,48,39,0,
		95,1,112,0,112,0,12,1,72,48,101,0,48,39,
		0,95,1,112,0,112,0,72,8,29,199,0,36,173,
		0,176,23,0,48,102,0,48,39,0,95,1,112,0,
		112,0,48,27,0,95,1,112,0,106,8,99,67,111,
		100,84,105,112,0,12,3,80,2,36,177,0,48,77,
		0,95,1,112,0,31,26,95,2,48,79,0,95,1,
		112,0,16,28,116,95,2,48,80,0,95,1,112,0,
		34,28,104,48,103,0,95,1,112,0,28,18,176,104,
		0,48,39,0,95,1,112,0,12,1,121,8,31,79,
		48,105,0,95,1,112,0,28,56,176,106,0,48,62,
		0,48,36,0,95,1,112,0,112,0,48,62,0,48,
		39,0,95,1,112,0,112,0,48,107,0,95,1,112,
		0,48,108,0,95,1,112,0,48,109,0,95,1,112,
		0,12,5,121,8,31,16,36,183,0,48,110,0,95,
		1,95,2,9,112,2,73,36,187,0,48,111,0,48,
		39,0,95,1,112,0,112,0,73,26,226,254,36,195,
		0,48,111,0,48,36,0,95,1,112,0,112,0,73,
		36,197,0,48,112,0,48,49,0,95,1,112,0,112,
		0,73,26,82,254,36,201,0,48,113,0,48,36,0,
		95,1,112,0,176,87,0,12,0,176,88,0,48,89,
		0,48,36,0,95,1,112,0,112,0,12,1,112,2,
		73,36,203,0,48,113,0,48,39,0,95,1,112,0,
		176,87,0,12,0,176,88,0,48,89,0,48,39,0,
		95,1,112,0,112,0,12,1,112,2,73,36,205,0,
		48,112,0,48,49,0,95,1,112,0,48,50,0,48,
		36,0,95,1,112,0,112,0,112,1,73,36,207,0,
		48,69,0,48,68,0,95,1,112,0,112,0,73,36,
		209,0,48,50,0,48,21,0,95,1,112,0,112,0,
		121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,116,0,2,0,116,116,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

