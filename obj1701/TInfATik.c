/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TInfATik.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TINFATIK );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFALM );
HB_FUNC_STATIC( TINFATIK_CREATE );
HB_FUNC_STATIC( TINFATIK_OPENFILES );
HB_FUNC_STATIC( TINFATIK_CLOSEFILES );
HB_FUNC_STATIC( TINFATIK_LRESOURCE );
HB_FUNC_STATIC( TINFATIK_LGENERATE );
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
HB_FUNC_EXTERN( AITMTIK );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TINFATIK )
{ "TINFATIK", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TINFATIK )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFALM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFALM )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFATIK_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFATIK_CREATE )}, NULL },
{ "TINFATIK_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFATIK_OPENFILES )}, NULL },
{ "TINFATIK_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFATIK_CLOSEFILES )}, NULL },
{ "TINFATIK_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFATIK_LRESOURCE )}, NULL },
{ "TINFATIK_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFATIK_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OTIKCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIKCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OTIKCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIKCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFALMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFCLIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LDESGLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDESGLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMTIK", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMTIK )}, NULL },
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
{ "LALLALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CALMORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALMDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCLIORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCLIDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERTIK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNUMTIK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFTIK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNUMTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCBATIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPVPTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPTIKCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPCMTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TINFATIK, ".\\.\\Prg\\TInfATik.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TINFATIK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TINFATIK )
   #include "hbiniseg.h"
#endif

HB_FUNC( TINFATIK )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,118,0,36,8,0,103,2,0,100,8,
		29,204,1,176,1,0,104,2,0,12,1,29,193,1,
		166,131,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,84,73,110,102,65,84,105,107,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,120,95,1,
		121,72,121,72,121,72,106,10,108,68,101,115,103,108,
		111,115,101,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,106,8,78,85,77,69,82,73,67,
		0,122,95,1,121,72,121,72,121,72,106,8,110,69,
		115,116,97,100,111,0,4,1,0,9,112,5,73,36,
		12,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,9,111,
		84,105,107,67,108,105,84,0,4,1,0,9,112,5,
		73,36,13,0,48,5,0,95,2,106,7,79,66,74,
		69,67,84,0,100,95,1,121,72,121,72,121,72,106,
		9,111,84,105,107,67,108,105,76,0,4,1,0,9,
		112,5,73,36,15,0,48,6,0,95,2,106,7,67,
		114,101,97,116,101,0,108,7,95,1,121,72,121,72,
		121,72,112,3,73,36,17,0,48,6,0,95,2,106,
		10,79,112,101,110,70,105,108,101,115,0,108,8,95,
		1,121,72,121,72,121,72,112,3,73,36,19,0,48,
		6,0,95,2,106,11,67,108,111,115,101,70,105,108,
		101,115,0,108,9,95,1,121,72,121,72,121,72,112,
		3,73,36,21,0,48,6,0,95,2,106,10,108,82,
		101,115,111,117,114,99,101,0,108,10,95,1,121,72,
		121,72,121,72,112,3,73,36,23,0,48,6,0,95,
		2,106,10,108,71,101,110,101,114,97,116,101,0,108,
		11,95,1,121,72,121,72,121,72,112,3,73,36,25,
		0,48,12,0,95,2,112,0,73,167,14,0,0,176,
		13,0,104,2,0,95,2,20,2,168,48,14,0,95,
		2,112,0,80,3,176,15,0,95,3,106,10,73,110,
		105,116,67,108,97,115,115,0,12,2,28,12,48,16,
		0,95,3,164,146,1,0,73,95,3,110,7,48,14,
		0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFATIK_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,29,0,102,80,1,36,31,0,48,17,
		0,95,1,112,0,73,36,33,0,48,18,0,95,1,
		106,8,67,67,79,68,65,76,77,0,106,66,67,67,
		79,68,65,76,77,32,43,32,67,67,79,68,65,82,
		84,32,43,32,67,67,79,68,80,82,49,32,43,32,
		67,67,79,68,80,82,50,32,43,32,67,86,65,76,
		80,82,49,32,43,32,67,86,65,76,80,82,50,32,
		43,32,99,76,79,84,69,0,112,2,73,36,35,0,
		48,19,0,95,1,89,22,0,0,0,1,0,1,0,
		48,20,0,48,21,0,95,255,112,0,112,0,6,89,
		72,0,0,0,1,0,1,0,106,12,65,108,109,97,
		99,233,110,32,32,58,32,0,176,22,0,48,20,0,
		48,21,0,95,255,112,0,112,0,12,1,72,106,2,
		45,0,72,176,23,0,48,20,0,48,21,0,95,255,
		112,0,112,0,48,24,0,95,255,112,0,12,2,72,
		6,90,23,106,18,84,111,116,97,108,32,97,108,109,
		97,99,233,110,32,46,46,46,0,6,112,3,73,36,
		36,0,48,19,0,95,1,89,35,0,0,0,1,0,
		1,0,48,20,0,48,21,0,95,255,112,0,112,0,
		48,25,0,48,21,0,95,255,112,0,112,0,72,6,
		89,77,0,0,0,1,0,1,0,106,12,65,114,116,
		237,99,117,108,111,32,58,32,0,176,22,0,48,25,
		0,48,21,0,95,255,112,0,112,0,12,1,72,106,
		2,45,0,72,176,22,0,176,23,0,48,25,0,48,
		21,0,95,255,112,0,112,0,48,26,0,95,255,112,
		0,12,2,12,1,72,6,90,23,106,18,84,111,116,
		97,108,32,97,114,116,237,99,117,108,111,46,46,46,
		0,6,112,3,73,36,39,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFATIK_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,45,0,120,80,1,36,46,0,176,27,
		0,89,15,0,1,0,0,0,176,28,0,95,1,12,
		1,6,12,1,80,2,36,48,0,113,226,0,0,36,
		50,0,48,29,0,102,48,30,0,176,31,0,106,10,
		84,73,75,69,84,46,68,66,70,0,100,12,2,106,
		10,84,73,75,69,84,46,68,66,70,0,100,176,32,
		0,12,0,100,176,33,0,12,0,9,120,9,9,112,
		9,112,1,73,48,34,0,48,35,0,102,112,0,106,
		10,84,73,75,69,84,46,67,68,88,0,112,1,73,
		48,34,0,48,35,0,102,112,0,112,0,73,48,36,
		0,48,35,0,102,112,0,112,0,73,36,52,0,48,
		37,0,102,48,30,0,176,31,0,106,10,84,73,75,
		69,76,46,68,66,70,0,100,12,2,106,10,84,73,
		75,69,76,46,68,66,70,0,100,176,32,0,12,0,
		100,176,33,0,12,0,9,120,9,9,112,9,112,1,
		73,48,34,0,48,38,0,102,112,0,106,10,84,73,
		75,69,76,46,67,68,88,0,112,1,73,48,34,0,
		48,38,0,102,112,0,112,0,73,48,36,0,48,38,
		0,102,112,0,112,0,73,114,76,0,0,36,54,0,
		115,73,36,56,0,176,39,0,106,41,73,109,112,111,
		115,105,98,108,101,32,97,98,114,105,114,32,116,111,
		100,97,115,32,108,97,115,32,98,97,115,101,115,32,
		100,101,32,100,97,116,111,115,0,20,1,36,57,0,
		48,40,0,102,112,0,73,36,58,0,9,80,1,36,
		62,0,176,27,0,95,2,20,1,36,64,0,95,1,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFATIK_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,70,0,176,41,0,48,35,0,102,112,0,12,1,
		31,30,48,42,0,48,35,0,102,112,0,112,0,28,
		17,36,71,0,48,43,0,48,35,0,102,112,0,112,
		0,73,36,73,0,176,41,0,48,38,0,102,112,0,
		12,1,31,30,48,42,0,48,38,0,102,112,0,112,
		0,28,17,36,74,0,48,43,0,48,38,0,102,112,
		0,112,0,73,36,77,0,48,29,0,102,100,112,1,
		73,36,78,0,48,37,0,102,100,112,1,73,36,80,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFATIK_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,84,0,102,80,2,36,86,0,48,44,
		0,95,2,106,12,73,78,70,95,71,69,78,48,49,
		65,66,0,112,1,31,8,36,87,0,9,110,7,36,
		94,0,48,45,0,95,2,92,70,92,80,92,90,92,
		100,93,188,2,112,5,31,8,36,95,0,9,110,7,
		36,102,0,48,46,0,95,2,92,110,92,120,93,130,
		0,93,140,0,93,32,3,112,5,31,8,36,103,0,
		9,110,7,36,110,0,48,47,0,95,2,93,160,0,
		93,161,0,93,170,0,93,171,0,100,93,150,0,112,
		6,31,8,36,111,0,9,110,7,36,120,0,48,48,
		0,176,49,0,12,0,93,88,2,89,37,0,1,0,
		1,0,2,0,176,50,0,12,0,121,8,28,11,48,
		51,0,95,255,112,0,25,11,48,52,0,95,255,95,
		1,112,1,6,48,53,0,48,54,0,95,2,112,0,
		112,0,122,1,100,100,100,100,100,100,9,100,9,112,
		12,73,36,122,0,48,55,0,48,56,0,95,2,112,
		0,48,57,0,48,35,0,95,2,112,0,112,0,112,
		1,73,36,124,0,48,58,0,95,2,112,0,73,36,
		126,0,48,59,0,95,2,176,60,0,12,0,48,61,
		0,48,35,0,95,2,112,0,112,0,112,2,73,36,
		128,0,48,62,0,95,2,89,24,0,0,0,1,0,
		2,0,48,63,0,95,255,48,51,0,95,255,112,0,
		112,1,6,112,1,73,36,129,0,48,64,0,95,2,
		89,24,0,0,0,1,0,2,0,48,65,0,95,255,
		48,51,0,95,255,112,0,112,1,6,112,1,73,36,
		131,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFATIK_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,138,0,102,80,1,36,140,0,106,1,
		0,80,2,36,141,0,106,1,0,80,3,36,143,0,
		48,66,0,48,67,0,95,1,112,0,112,0,73,36,
		144,0,48,68,0,48,69,0,95,1,112,0,112,0,
		73,36,145,0,48,70,0,48,21,0,95,1,112,0,
		112,0,73,36,151,0,48,71,0,95,1,90,29,106,
		13,70,101,99,104,97,32,32,32,32,32,58,32,0,
		176,72,0,176,73,0,12,0,12,1,72,6,89,58,
		0,0,0,1,0,1,0,106,13,80,101,114,105,111,
		100,111,32,32,32,58,32,0,176,72,0,48,74,0,
		95,255,112,0,12,1,72,106,4,32,62,32,0,72,
		176,72,0,48,75,0,95,255,112,0,12,1,72,6,
		89,77,0,0,0,1,0,1,0,106,13,65,108,109,
		97,99,101,110,32,32,32,58,32,0,48,76,0,95,
		255,112,0,28,12,106,6,84,111,100,111,115,0,25,
		34,176,77,0,48,78,0,95,255,112,0,12,1,106,
		4,32,62,32,0,72,176,77,0,48,79,0,95,255,
		112,0,12,1,72,72,6,89,77,0,0,0,1,0,
		1,0,106,13,65,114,116,237,99,117,108,111,115,32,
		58,32,0,48,80,0,95,255,112,0,28,12,106,6,
		84,111,100,111,115,0,25,34,176,77,0,48,81,0,
		95,255,112,0,12,1,106,4,32,62,32,0,72,176,
		77,0,48,82,0,95,255,112,0,12,1,72,72,6,
		89,77,0,0,0,1,0,1,0,106,13,67,108,105,
		101,110,116,101,115,32,32,58,32,0,48,83,0,95,
		255,112,0,28,12,106,6,84,111,100,111,115,0,25,
		34,176,77,0,48,84,0,95,255,112,0,12,1,106,
		4,32,62,32,0,72,176,77,0,48,85,0,95,255,
		112,0,12,1,72,72,6,4,5,0,112,1,73,36,
		153,0,48,86,0,48,35,0,95,1,112,0,106,8,
		100,70,101,99,84,105,107,0,112,1,73,36,154,0,
		48,86,0,48,38,0,95,1,112,0,106,8,99,78,
		117,109,84,105,108,0,112,1,73,36,160,0,106,19,
		100,70,101,99,84,105,107,32,62,61,32,67,116,111,
		100,40,32,34,0,176,72,0,48,74,0,95,1,112,
		0,12,1,72,106,29,34,32,41,32,46,97,110,100,
		46,32,100,70,101,99,84,105,107,32,60,61,32,67,
		116,111,100,40,32,34,0,72,176,72,0,48,75,0,
		95,1,112,0,12,1,72,106,4,34,32,41,0,72,
		80,2,36,162,0,48,83,0,95,1,112,0,31,86,
		36,163,0,96,2,0,106,20,32,46,97,110,100,46,
		32,99,67,108,105,84,105,107,32,62,61,32,34,0,
		176,22,0,48,84,0,95,1,112,0,12,1,72,106,
		21,34,32,46,97,110,100,46,32,99,67,108,105,84,
		105,107,32,60,61,32,34,0,72,176,22,0,48,85,
		0,95,1,112,0,12,1,72,106,2,34,0,72,135,
		36,166,0,48,76,0,95,1,112,0,31,86,36,167,
		0,96,2,0,106,20,32,46,97,110,100,46,32,99,
		65,108,109,84,105,107,32,62,61,32,34,0,176,22,
		0,48,78,0,95,1,112,0,12,1,72,106,21,34,
		32,46,97,110,100,46,32,99,65,108,109,84,105,107,
		32,60,61,32,34,0,72,176,22,0,48,79,0,95,
		1,112,0,12,1,72,106,2,34,0,72,135,36,170,
		0,96,2,0,106,46,32,46,97,110,100,46,32,40,
		32,99,84,105,112,84,105,107,32,61,61,32,34,49,
		34,32,46,111,114,46,32,99,84,105,112,84,105,107,
		32,61,61,32,34,52,34,32,41,0,135,36,172,0,
		176,41,0,48,87,0,48,88,0,95,1,112,0,112,
		0,12,1,31,32,36,173,0,96,2,0,106,8,32,
		46,97,110,100,46,32,0,48,87,0,48,88,0,95,
		1,112,0,112,0,72,135,36,176,0,48,18,0,48,
		35,0,95,1,112,0,176,89,0,12,0,176,90,0,
		48,91,0,48,35,0,95,1,112,0,112,0,12,1,
		48,92,0,48,35,0,95,1,112,0,112,0,95,2,
		100,100,100,100,100,100,100,120,112,12,73,36,178,0,
		48,55,0,48,56,0,95,1,112,0,48,93,0,48,
		35,0,95,1,112,0,112,0,112,1,73,36,184,0,
		106,10,33,108,67,111,110,116,114,111,108,0,80,3,
		36,186,0,48,80,0,95,1,112,0,28,62,36,187,
		0,96,3,0,106,48,32,46,97,110,100,46,32,33,
		69,109,112,116,121,40,32,99,67,98,97,84,105,108,
		32,41,32,46,111,114,46,32,33,69,109,112,116,121,
		40,32,99,67,111,109,84,105,108,32,41,0,135,26,
		220,0,36,189,0,96,3,0,106,48,32,46,97,110,
		100,46,32,40,32,40,32,33,69,109,112,116,121,40,
		32,99,67,98,97,84,105,108,32,41,32,46,97,110,
		100,46,32,99,67,98,97,84,105,108,32,62,61,32,
		34,0,48,81,0,95,1,112,0,72,106,21,34,32,
		46,97,110,100,46,32,99,67,98,97,84,105,108,32,
		60,61,32,34,0,72,48,82,0,95,1,112,0,72,
		106,4,34,32,41,0,72,135,36,190,0,96,3,0,
		106,7,32,46,111,114,46,32,0,135,36,191,0,96,
		3,0,106,39,40,32,33,69,109,112,116,121,40,32,
		99,67,111,109,84,105,108,32,41,32,46,97,110,100,
		46,32,99,67,111,109,84,105,108,32,62,61,32,34,
		0,48,81,0,95,1,112,0,72,106,21,34,32,46,
		97,110,100,46,32,99,67,111,109,84,105,108,32,60,
		61,32,34,0,72,48,82,0,95,1,112,0,72,106,
		6,34,32,41,32,41,0,72,135,36,194,0,48,18,
		0,48,38,0,95,1,112,0,176,89,0,12,0,176,
		90,0,48,91,0,48,38,0,95,1,112,0,112,0,
		12,1,48,92,0,48,38,0,95,1,112,0,112,0,
		176,94,0,95,3,12,1,100,100,100,100,100,100,100,
		120,112,12,73,36,196,0,48,95,0,48,35,0,95,
		1,112,0,112,0,73,36,198,0,48,96,0,95,1,
		112,0,32,142,1,48,97,0,48,35,0,95,1,112,
		0,112,0,32,127,1,36,201,0,176,98,0,48,99,
		0,48,35,0,95,1,112,0,112,0,48,100,0,95,
		1,112,0,12,2,29,62,1,48,101,0,48,38,0,
		95,1,112,0,48,99,0,48,35,0,95,1,112,0,
		112,0,48,102,0,48,35,0,95,1,112,0,112,0,
		72,48,103,0,48,35,0,95,1,112,0,112,0,72,
		112,1,29,9,1,36,207,0,48,99,0,48,35,0,
		95,1,112,0,112,0,48,102,0,48,35,0,95,1,
		112,0,112,0,72,48,103,0,48,35,0,95,1,112,
		0,112,0,72,48,104,0,48,38,0,95,1,112,0,
		112,0,48,105,0,48,38,0,95,1,112,0,112,0,
		72,48,106,0,48,38,0,95,1,112,0,112,0,72,
		8,29,182,0,48,97,0,48,38,0,95,1,112,0,
		112,0,32,167,0,36,210,0,176,41,0,48,107,0,
		48,38,0,95,1,112,0,112,0,12,1,31,52,48,
		108,0,95,1,112,0,28,18,48,109,0,48,38,0,
		95,1,112,0,112,0,121,8,31,27,36,216,0,48,
		110,0,95,1,48,107,0,48,38,0,95,1,112,0,
		112,0,122,9,112,3,73,36,225,0,176,41,0,48,
		111,0,48,38,0,95,1,112,0,112,0,12,1,31,
		53,48,108,0,95,1,112,0,28,18,48,112,0,48,
		38,0,95,1,112,0,112,0,121,8,31,28,36,227,
		0,48,110,0,95,1,48,111,0,48,38,0,95,1,
		112,0,112,0,92,2,9,112,3,73,36,231,0,48,
		113,0,48,38,0,95,1,112,0,112,0,73,26,253,
		254,36,237,0,48,113,0,48,35,0,95,1,112,0,
		112,0,73,36,239,0,48,114,0,48,56,0,95,1,
		112,0,112,0,73,26,107,254,36,243,0,48,115,0,
		48,35,0,95,1,112,0,176,89,0,12,0,176,90,
		0,48,91,0,48,35,0,95,1,112,0,112,0,12,
		1,112,2,73,36,245,0,48,115,0,48,38,0,95,
		1,112,0,176,89,0,12,0,176,90,0,48,91,0,
		48,38,0,95,1,112,0,112,0,12,1,112,2,73,
		36,247,0,48,114,0,48,56,0,95,1,112,0,48,
		57,0,48,35,0,95,1,112,0,112,0,112,1,73,
		36,249,0,48,68,0,48,67,0,95,1,112,0,112,
		0,73,36,251,0,48,57,0,48,21,0,95,1,112,
		0,112,0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,118,0,2,0,116,118,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

