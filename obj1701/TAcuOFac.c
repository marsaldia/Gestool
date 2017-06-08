/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TAcuOFac.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TACUOFAC );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFPGO );
HB_FUNC_STATIC( TACUOFAC_CREATE );
HB_FUNC_STATIC( TACUOFAC_OPENFILES );
HB_FUNC_STATIC( TACUOFAC_CLOSEFILES );
HB_FUNC_STATIC( TACUOFAC_LRESOURCE );
HB_FUNC_STATIC( TACUOFAC_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TDATACENTER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( AITMFACCLI );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NIMPLFACCLI );
HB_FUNC_EXTERN( NIMPLFACREC );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TACUOFAC )
{ "TACUOFAC", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TACUOFAC )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFPGO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFPGO )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TACUOFAC_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TACUOFAC_CREATE )}, NULL },
{ "TACUOFAC_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TACUOFAC_OPENFILES )}, NULL },
{ "TACUOFAC_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TACUOFAC_CLOSEFILES )}, NULL },
{ "TACUOFAC_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TACUOFAC_LRESOURCE )}, NULL },
{ "TACUOFAC_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TACUOFAC_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACUCREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OFACCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDATACENTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDATACENTER )}, NULL },
{ "_OFACCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACRECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACRECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACRECL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACRECL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFFPGINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMFACCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMFACCLI )}, NULL },
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
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLFPG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CFPGDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFPGHAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
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
{ "CSERIE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLFACCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLFACCLI )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLFACREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLFACREC )}, NULL },
{ "ADDFACREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INCLUYECERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TACUOFAC, ".\\.\\Prg\\TAcuOFac.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TACUOFAC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TACUOFAC )
   #include "hbiniseg.h"
#endif

HB_FUNC( TACUOFAC )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,102,0,36,8,0,103,2,0,100,8,
		29,34,2,176,1,0,104,2,0,12,1,29,23,2,
		166,217,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,84,65,99,117,79,70,97,99,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,9,95,1,
		121,72,121,72,121,72,106,9,108,69,120,99,67,101,
		114,111,0,4,1,0,9,112,5,73,36,11,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,9,111,70,97,99,
		67,108,105,84,0,4,1,0,9,112,5,73,36,12,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,70,
		97,99,67,108,105,76,0,4,1,0,9,112,5,73,
		36,13,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,9,
		111,70,97,99,82,101,99,84,0,4,1,0,9,112,
		5,73,36,14,0,48,5,0,95,2,106,7,79,66,
		74,69,67,84,0,100,95,1,121,72,121,72,121,72,
		106,9,111,70,97,99,82,101,99,76,0,4,1,0,
		9,112,5,73,36,15,0,48,5,0,95,2,106,7,
		79,66,74,69,67,84,0,100,95,1,121,72,121,72,
		121,72,106,8,111,68,98,102,65,114,116,0,4,1,
		0,9,112,5,73,36,17,0,48,6,0,95,2,106,
		7,67,114,101,97,116,101,0,108,7,95,1,121,72,
		121,72,121,72,112,3,73,36,19,0,48,6,0,95,
		2,106,10,79,112,101,110,70,105,108,101,115,0,108,
		8,95,1,121,72,121,72,121,72,112,3,73,36,21,
		0,48,6,0,95,2,106,11,67,108,111,115,101,70,
		105,108,101,115,0,108,9,95,1,121,72,121,72,121,
		72,112,3,73,36,23,0,48,6,0,95,2,106,10,
		108,82,101,115,111,117,114,99,101,0,108,10,95,1,
		121,72,121,72,121,72,112,3,73,36,25,0,48,6,
		0,95,2,106,10,108,71,101,110,101,114,97,116,101,
		0,108,11,95,1,121,72,121,72,121,72,112,3,73,
		36,27,0,48,12,0,95,2,112,0,73,167,14,0,
		0,176,13,0,104,2,0,95,2,20,2,168,48,14,
		0,95,2,112,0,80,3,176,15,0,95,3,106,10,
		73,110,105,116,67,108,97,115,115,0,12,2,28,12,
		48,16,0,95,3,164,146,1,0,73,95,3,110,7,
		48,14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TACUOFAC_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,33,0,48,17,0,102,112,0,73,36,35,0,48,
		18,0,102,106,8,99,67,111,100,80,103,111,0,106,
		8,99,67,111,100,80,103,111,0,112,2,73,36,37,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TACUOFAC_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,43,0,120,80,1,36,44,0,176,19,
		0,89,15,0,1,0,0,0,176,20,0,95,1,12,
		1,6,12,1,80,2,36,46,0,113,235,1,0,36,
		48,0,48,21,0,102,48,22,0,176,23,0,12,0,
		112,0,112,1,73,36,50,0,48,24,0,102,48,25,
		0,176,26,0,106,12,70,65,67,67,76,73,76,46,
		68,66,70,0,100,12,2,106,12,70,65,67,67,76,
		73,76,46,68,66,70,0,100,176,27,0,12,0,100,
		176,28,0,12,0,9,120,9,9,112,9,112,1,73,
		48,29,0,48,30,0,102,112,0,106,12,70,65,67,
		67,76,73,76,46,67,68,88,0,112,1,73,48,29,
		0,48,30,0,102,112,0,112,0,73,48,31,0,48,
		30,0,102,112,0,112,0,73,36,52,0,48,32,0,
		102,48,25,0,176,26,0,106,12,70,65,67,82,69,
		67,84,46,68,66,70,0,100,12,2,106,12,70,65,
		67,82,69,67,84,46,68,66,70,0,100,176,27,0,
		12,0,100,176,28,0,12,0,9,120,9,9,112,9,
		112,1,73,48,29,0,48,33,0,102,112,0,106,12,
		70,65,67,82,69,67,84,46,67,68,88,0,112,1,
		73,48,29,0,48,33,0,102,112,0,112,0,73,48,
		31,0,48,33,0,102,112,0,112,0,73,36,54,0,
		48,34,0,102,48,25,0,176,26,0,106,12,70,65,
		67,82,69,67,76,46,68,66,70,0,100,12,2,106,
		12,70,65,67,82,69,67,76,46,68,66,70,0,100,
		176,27,0,12,0,100,176,28,0,12,0,9,120,9,
		9,112,9,112,1,73,48,29,0,48,35,0,102,112,
		0,106,12,70,65,67,82,69,67,76,46,67,68,88,
		0,112,1,73,48,29,0,48,35,0,102,112,0,112,
		0,73,48,31,0,48,35,0,102,112,0,112,0,73,
		36,56,0,48,36,0,102,48,25,0,176,26,0,106,
		13,65,82,84,73,67,85,76,79,46,68,66,70,0,
		100,12,2,106,13,65,82,84,73,67,85,76,79,46,
		68,66,70,0,100,176,27,0,12,0,100,176,37,0,
		12,0,9,120,9,9,112,9,112,1,73,48,29,0,
		48,38,0,102,112,0,106,13,65,82,84,73,67,85,
		76,79,46,67,68,88,0,112,1,73,48,29,0,48,
		38,0,102,112,0,112,0,73,48,31,0,48,38,0,
		102,112,0,112,0,73,114,76,0,0,36,58,0,115,
		73,36,60,0,176,39,0,106,41,73,109,112,111,115,
		105,98,108,101,32,97,98,114,105,114,32,116,111,100,
		97,115,32,108,97,115,32,98,97,115,101,115,32,100,
		101,32,100,97,116,111,115,0,20,1,36,61,0,48,
		40,0,102,112,0,73,36,62,0,9,80,1,36,66,
		0,176,19,0,95,2,20,1,36,68,0,95,1,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TACUOFAC_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,74,0,176,41,0,48,22,0,102,112,0,12,1,
		31,30,48,42,0,48,22,0,102,112,0,112,0,28,
		17,36,75,0,48,43,0,48,22,0,102,112,0,112,
		0,73,36,77,0,176,41,0,48,30,0,102,112,0,
		12,1,31,30,48,42,0,48,30,0,102,112,0,112,
		0,28,17,36,78,0,48,43,0,48,30,0,102,112,
		0,112,0,73,36,80,0,176,41,0,48,33,0,102,
		112,0,12,1,31,30,48,42,0,48,33,0,102,112,
		0,112,0,28,17,36,81,0,48,43,0,48,33,0,
		102,112,0,112,0,73,36,83,0,176,41,0,48,35,
		0,102,112,0,12,1,31,30,48,42,0,48,35,0,
		102,112,0,112,0,28,17,36,84,0,48,43,0,48,
		35,0,102,112,0,112,0,73,36,86,0,176,41,0,
		48,38,0,102,112,0,12,1,31,30,48,42,0,48,
		38,0,102,112,0,112,0,28,17,36,87,0,48,43,
		0,48,38,0,102,112,0,112,0,73,36,90,0,48,
		21,0,102,100,112,1,73,36,91,0,48,24,0,102,
		100,112,1,73,36,92,0,48,32,0,102,100,112,1,
		73,36,93,0,48,34,0,102,100,112,1,73,36,94,
		0,48,36,0,102,100,112,1,73,36,96,0,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TACUOFAC_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,102,0,48,44,0,102,106,10,73,78,
		70,65,67,85,70,80,71,0,112,1,31,8,36,103,
		0,9,110,7,36,110,0,48,45,0,102,92,70,92,
		80,92,90,92,100,93,188,2,112,5,31,8,36,111,
		0,9,110,7,36,118,0,48,46,0,48,47,0,102,
		112,0,48,48,0,48,22,0,102,112,0,112,0,112,
		1,73,36,120,0,48,49,0,102,112,0,73,36,122,
		0,48,50,0,102,176,51,0,12,0,48,52,0,48,
		22,0,102,112,0,112,0,112,2,73,36,124,0,120,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TACUOFAC_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,131,0,102,80,1,36,133,0,106,1,
		0,80,2,36,134,0,106,1,0,80,3,36,136,0,
		48,53,0,48,54,0,95,1,112,0,112,0,73,36,
		137,0,48,55,0,48,56,0,95,1,112,0,112,0,
		73,36,138,0,48,57,0,48,58,0,95,1,112,0,
		112,0,73,36,142,0,48,59,0,95,1,90,27,106,
		11,70,101,99,104,97,32,32,32,58,32,0,176,60,
		0,176,61,0,12,0,12,1,72,6,89,56,0,0,
		0,1,0,1,0,106,11,80,101,114,105,111,100,111,
		32,58,32,0,176,60,0,48,62,0,95,255,112,0,
		12,1,72,106,4,32,62,32,0,72,176,60,0,48,
		63,0,95,255,112,0,12,1,72,6,89,75,0,0,
		0,1,0,1,0,106,11,70,46,32,80,97,103,111,
		32,58,32,0,48,64,0,95,255,112,0,28,12,106,
		6,84,111,100,97,115,0,25,34,176,65,0,48,66,
		0,95,255,112,0,12,1,106,4,32,62,32,0,72,
		176,65,0,48,67,0,95,255,112,0,12,1,72,72,
		6,4,3,0,112,1,73,36,144,0,48,68,0,48,
		22,0,95,1,112,0,106,8,100,70,101,99,70,97,
		99,0,112,1,73,36,145,0,48,68,0,48,30,0,
		95,1,112,0,106,8,110,78,117,109,70,97,99,0,
		112,1,73,36,147,0,106,19,100,70,101,99,70,97,
		99,32,62,61,32,67,116,111,100,40,32,34,0,176,
		60,0,48,62,0,95,1,112,0,12,1,72,106,29,
		34,32,41,32,46,97,110,100,46,32,100,70,101,99,
		70,97,99,32,60,61,32,67,116,111,100,40,32,34,
		0,72,176,60,0,48,63,0,95,1,112,0,12,1,
		72,106,4,34,32,41,0,72,80,2,36,149,0,48,
		64,0,95,1,112,0,31,88,36,150,0,96,2,0,
		106,21,32,46,97,110,100,46,32,99,67,111,100,80,
		97,103,111,32,62,61,32,34,0,176,69,0,48,66,
		0,95,1,112,0,12,1,72,106,22,34,32,46,97,
		110,100,46,32,99,67,111,100,80,97,103,111,32,60,
		61,32,34,0,72,176,69,0,48,67,0,95,1,112,
		0,12,1,72,106,2,34,0,72,135,36,153,0,176,
		41,0,48,70,0,48,71,0,95,1,112,0,112,0,
		12,1,31,32,36,154,0,96,2,0,106,8,32,46,
		97,110,100,46,32,0,48,70,0,48,71,0,95,1,
		112,0,112,0,72,135,36,157,0,48,18,0,48,22,
		0,95,1,112,0,176,72,0,12,0,176,73,0,48,
		74,0,48,22,0,95,1,112,0,112,0,12,1,48,
		75,0,48,22,0,95,1,112,0,112,0,95,2,100,
		100,100,100,100,100,100,120,112,12,73,36,159,0,48,
		46,0,48,47,0,95,1,112,0,48,76,0,48,22,
		0,95,1,112,0,112,0,112,1,73,36,161,0,106,
		25,33,108,84,111,116,76,105,110,32,46,97,110,100,
		46,32,33,108,67,111,110,116,114,111,108,0,80,3,
		36,163,0,48,18,0,48,30,0,95,1,112,0,176,
		72,0,12,0,176,73,0,48,74,0,48,30,0,95,
		1,112,0,112,0,12,1,48,75,0,48,30,0,95,
		1,112,0,112,0,176,77,0,95,3,12,1,100,100,
		100,100,100,100,100,120,112,12,73,36,165,0,48,78,
		0,48,22,0,95,1,112,0,112,0,73,36,167,0,
		48,79,0,95,1,112,0,32,88,1,48,80,0,48,
		22,0,95,1,112,0,112,0,32,73,1,36,170,0,
		176,81,0,48,82,0,48,22,0,95,1,112,0,112,
		0,48,83,0,95,1,112,0,12,2,29,8,1,48,
		84,0,48,30,0,95,1,112,0,48,82,0,48,22,
		0,95,1,112,0,112,0,176,85,0,48,86,0,48,
		22,0,95,1,112,0,112,0,12,1,72,48,87,0,
		48,22,0,95,1,112,0,112,0,72,112,1,29,206,
		0,36,172,0,48,82,0,48,22,0,95,1,112,0,
		112,0,176,85,0,48,86,0,48,22,0,95,1,112,
		0,112,0,12,1,72,48,87,0,48,22,0,95,1,
		112,0,112,0,72,48,82,0,48,30,0,95,1,112,
		0,112,0,176,85,0,48,86,0,48,30,0,95,1,
		112,0,112,0,12,1,72,48,87,0,48,30,0,95,
		1,112,0,112,0,72,8,28,113,48,80,0,48,30,
		0,95,1,112,0,112,0,31,99,36,174,0,48,88,
		0,95,1,112,0,28,56,176,89,0,48,52,0,48,
		22,0,95,1,112,0,112,0,48,52,0,48,30,0,
		95,1,112,0,112,0,48,90,0,95,1,112,0,48,
		91,0,95,1,112,0,48,92,0,95,1,112,0,12,
		5,121,8,31,14,36,176,0,48,93,0,95,1,120,
		112,1,73,36,180,0,48,94,0,48,30,0,95,1,
		112,0,112,0,73,26,56,255,36,186,0,48,94,0,
		48,22,0,95,1,112,0,112,0,73,36,188,0,48,
		95,0,48,47,0,95,1,112,0,112,0,73,26,161,
		254,36,192,0,48,95,0,48,47,0,95,1,112,0,
		48,48,0,48,22,0,95,1,112,0,112,0,112,1,
		73,36,194,0,48,96,0,48,22,0,95,1,112,0,
		176,72,0,12,0,176,73,0,48,74,0,48,22,0,
		95,1,112,0,112,0,12,1,112,2,73,36,195,0,
		48,96,0,48,30,0,95,1,112,0,176,72,0,12,
		0,176,73,0,48,74,0,48,30,0,95,1,112,0,
		112,0,12,1,112,2,73,36,201,0,48,68,0,48,
		33,0,95,1,112,0,106,8,100,70,101,99,70,97,
		99,0,112,1,73,36,202,0,48,68,0,48,35,0,
		95,1,112,0,106,8,110,78,117,109,70,97,99,0,
		112,1,73,36,204,0,106,19,100,70,101,99,70,97,
		99,32,62,61,32,67,116,111,100,40,32,34,0,176,
		60,0,48,62,0,95,1,112,0,12,1,72,106,29,
		34,32,41,32,46,97,110,100,46,32,100,70,101,99,
		70,97,99,32,60,61,32,67,116,111,100,40,32,34,
		0,72,176,60,0,48,63,0,95,1,112,0,12,1,
		72,106,4,34,32,41,0,72,80,2,36,206,0,48,
		64,0,95,1,112,0,31,88,36,207,0,96,2,0,
		106,21,32,46,97,110,100,46,32,99,67,111,100,80,
		97,103,111,32,62,61,32,34,0,176,69,0,48,66,
		0,95,1,112,0,12,1,72,106,22,34,32,46,97,
		110,100,46,32,99,67,111,100,80,97,103,111,32,60,
		61,32,34,0,72,176,69,0,48,67,0,95,1,112,
		0,12,1,72,106,2,34,0,72,135,36,210,0,176,
		41,0,48,70,0,48,71,0,95,1,112,0,112,0,
		12,1,31,32,36,211,0,96,2,0,106,8,32,46,
		97,110,100,46,32,0,48,70,0,48,71,0,95,1,
		112,0,112,0,72,135,36,214,0,48,18,0,48,33,
		0,95,1,112,0,176,72,0,12,0,176,73,0,48,
		74,0,48,33,0,95,1,112,0,112,0,12,1,48,
		75,0,48,33,0,95,1,112,0,112,0,95,2,100,
		100,100,100,100,100,100,120,112,12,73,36,216,0,48,
		46,0,48,47,0,95,1,112,0,48,76,0,48,33,
		0,95,1,112,0,112,0,112,1,73,36,218,0,106,
		25,33,108,84,111,116,76,105,110,32,46,97,110,100,
		46,32,33,108,67,111,110,116,114,111,108,0,80,3,
		36,220,0,48,18,0,48,35,0,95,1,112,0,176,
		72,0,12,0,176,73,0,48,74,0,48,35,0,95,
		1,112,0,112,0,12,1,48,75,0,48,35,0,95,
		1,112,0,112,0,176,77,0,95,3,12,1,100,100,
		100,100,100,100,100,120,112,12,73,36,222,0,48,78,
		0,48,33,0,95,1,112,0,112,0,73,36,224,0,
		48,79,0,95,1,112,0,32,88,1,48,80,0,48,
		33,0,95,1,112,0,112,0,32,73,1,36,227,0,
		176,81,0,48,82,0,48,33,0,95,1,112,0,112,
		0,48,83,0,95,1,112,0,12,2,29,8,1,48,
		84,0,48,35,0,95,1,112,0,48,82,0,48,33,
		0,95,1,112,0,112,0,176,85,0,48,86,0,48,
		33,0,95,1,112,0,112,0,12,1,72,48,87,0,
		48,33,0,95,1,112,0,112,0,72,112,1,29,206,
		0,36,229,0,48,82,0,48,33,0,95,1,112,0,
		112,0,176,85,0,48,86,0,48,33,0,95,1,112,
		0,112,0,12,1,72,48,87,0,48,33,0,95,1,
		112,0,112,0,72,48,82,0,48,35,0,95,1,112,
		0,112,0,176,85,0,48,86,0,48,35,0,95,1,
		112,0,112,0,12,1,72,48,87,0,48,35,0,95,
		1,112,0,112,0,72,8,28,113,48,80,0,48,35,
		0,95,1,112,0,112,0,31,99,36,231,0,48,88,
		0,95,1,112,0,28,56,176,97,0,48,52,0,48,
		33,0,95,1,112,0,112,0,48,52,0,48,35,0,
		95,1,112,0,112,0,48,90,0,95,1,112,0,48,
		91,0,95,1,112,0,48,92,0,95,1,112,0,12,
		5,121,8,31,14,36,233,0,48,98,0,95,1,120,
		112,1,73,36,237,0,48,94,0,48,35,0,95,1,
		112,0,112,0,73,26,56,255,36,243,0,48,94,0,
		48,33,0,95,1,112,0,112,0,73,36,245,0,48,
		95,0,48,47,0,95,1,112,0,112,0,73,26,161,
		254,36,249,0,48,95,0,48,47,0,95,1,112,0,
		48,48,0,48,33,0,95,1,112,0,112,0,112,1,
		73,36,251,0,48,96,0,48,33,0,95,1,112,0,
		176,72,0,12,0,176,73,0,48,74,0,48,33,0,
		95,1,112,0,112,0,12,1,112,2,73,36,253,0,
		48,96,0,48,35,0,95,1,112,0,176,72,0,12,
		0,176,73,0,48,74,0,48,35,0,95,1,112,0,
		112,0,12,1,112,2,73,36,255,0,48,88,0,95,
		1,112,0,31,13,36,0,1,48,99,0,95,1,112,
		0,73,36,3,1,48,55,0,48,54,0,95,1,112,
		0,112,0,73,36,5,1,48,48,0,48,58,0,95,
		1,112,0,112,0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,102,0,2,0,116,102,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

