/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TAnuFTik.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TANUFTIK );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFFAM );
HB_FUNC_STATIC( TANUFTIK_CREATE );
HB_FUNC_STATIC( TANUFTIK_OPENFILES );
HB_FUNC_STATIC( TANUFTIK_CLOSEFILES );
HB_FUNC_STATIC( TANUFTIK_LRESOURCE );
HB_FUNC_STATIC( TANUFTIK_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( AITMTIK );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( YEAR );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( CNOMFAM );
HB_FUNC_EXTERN( NIMPLTPV );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TANUFTIK )
{ "TANUFTIK", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TANUFTIK )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFFAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFFAM )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TANUFTIK_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUFTIK_CREATE )}, NULL },
{ "TANUFTIK_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUFTIK_OPENFILES )}, NULL },
{ "TANUFTIK_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUFTIK_CLOSEFILES )}, NULL },
{ "TANUFTIK_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUFTIK_LRESOURCE )}, NULL },
{ "TANUFTIK_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUFTIK_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FAMANUCREATEFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFFECINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFGRAPH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFYEA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFFAMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFCLIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMTIK", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMTIK )}, NULL },
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
{ "LALLCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCLIORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCLIDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( YEAR )}, NULL },
{ "DFECTIK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "NUNTTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPVPTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLANK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMFAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( CNOMFAM )}, NULL },
{ "ODBFFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDIMPORTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLTPV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLTPV )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMEDIAMES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INCLUYECERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TANUFTIK, ".\\.\\Prg\\TAnuFTik.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TANUFTIK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TANUFTIK )
   #include "hbiniseg.h"
#endif

HB_FUNC( TANUFTIK )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,121,0,36,8,0,103,2,0,100,8,
		29,159,1,176,1,0,104,2,0,12,1,29,148,1,
		166,86,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,84,65,110,117,70,84,105,107,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,7,79,66,74,69,67,84,0,100,95,
		1,121,72,121,72,121,72,106,9,111,84,105,107,67,
		108,105,84,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,9,111,84,105,
		107,67,108,105,76,0,4,1,0,9,112,5,73,36,
		12,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,8,111,
		68,98,102,65,114,116,0,4,1,0,9,112,5,73,
		36,14,0,48,6,0,95,2,106,7,67,114,101,97,
		116,101,0,108,7,95,1,121,72,121,72,121,72,112,
		3,73,36,16,0,48,6,0,95,2,106,10,79,112,
		101,110,70,105,108,101,115,0,108,8,95,1,121,72,
		121,72,121,72,112,3,73,36,18,0,48,6,0,95,
		2,106,11,67,108,111,115,101,70,105,108,101,115,0,
		108,9,95,1,121,72,121,72,121,72,112,3,73,36,
		20,0,48,6,0,95,2,106,10,108,82,101,115,111,
		117,114,99,101,0,108,10,95,1,121,72,121,72,121,
		72,112,3,73,36,22,0,48,6,0,95,2,106,10,
		108,71,101,110,101,114,97,116,101,0,108,11,95,1,
		121,72,121,72,121,72,112,3,73,36,24,0,48,12,
		0,95,2,112,0,73,167,14,0,0,176,13,0,104,
		2,0,95,2,20,2,168,48,14,0,95,2,112,0,
		80,3,176,15,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,16,0,95,3,
		164,146,1,0,73,95,3,110,7,48,14,0,103,2,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUFTIK_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,30,0,48,17,0,102,112,0,73,36,32,0,48,
		18,0,102,106,8,67,67,79,68,70,65,77,0,106,
		8,67,67,79,68,70,65,77,0,112,2,73,36,34,
		0,48,19,0,102,9,112,1,73,36,35,0,48,20,
		0,102,120,112,1,73,36,38,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUFTIK_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,44,0,120,80,1,36,45,0,176,21,
		0,89,15,0,1,0,0,0,176,22,0,95,1,12,
		1,6,12,1,80,2,36,47,0,113,88,1,0,36,
		49,0,48,23,0,102,48,24,0,176,25,0,106,10,
		84,73,75,69,84,46,68,66,70,0,100,12,2,106,
		10,84,73,75,69,84,46,68,66,70,0,100,176,26,
		0,12,0,100,176,27,0,12,0,9,120,9,9,112,
		9,112,1,73,48,28,0,48,29,0,102,112,0,106,
		10,84,73,75,69,84,46,67,68,88,0,112,1,73,
		48,28,0,48,29,0,102,112,0,112,0,73,48,30,
		0,48,29,0,102,112,0,112,0,73,36,51,0,48,
		31,0,102,48,24,0,176,25,0,106,10,84,73,75,
		69,76,46,68,66,70,0,100,12,2,106,10,84,73,
		75,69,76,46,68,66,70,0,100,176,26,0,12,0,
		100,176,27,0,12,0,9,120,9,9,112,9,112,1,
		73,48,28,0,48,32,0,102,112,0,106,10,84,73,
		75,69,76,46,67,68,88,0,112,1,73,48,28,0,
		48,32,0,102,112,0,112,0,73,48,30,0,48,32,
		0,102,112,0,112,0,73,36,53,0,48,33,0,102,
		48,24,0,176,25,0,106,13,65,82,84,73,67,85,
		76,79,46,68,66,70,0,100,12,2,106,13,65,82,
		84,73,67,85,76,79,46,68,66,70,0,100,176,26,
		0,12,0,100,176,34,0,12,0,9,120,9,9,112,
		9,112,1,73,48,28,0,48,35,0,102,112,0,106,
		13,65,82,84,73,67,85,76,79,46,67,68,88,0,
		112,1,73,48,28,0,48,35,0,102,112,0,112,0,
		73,48,30,0,48,35,0,102,112,0,112,0,73,114,
		76,0,0,36,55,0,115,73,36,57,0,176,36,0,
		106,41,73,109,112,111,115,105,98,108,101,32,97,98,
		114,105,114,32,116,111,100,97,115,32,108,97,115,32,
		98,97,115,101,115,32,100,101,32,100,97,116,111,115,
		0,20,1,36,58,0,48,37,0,102,112,0,73,36,
		59,0,9,80,1,36,63,0,176,21,0,95,2,20,
		1,36,65,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUFTIK_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,71,0,176,38,0,48,29,0,102,112,0,12,1,
		31,30,48,39,0,48,29,0,102,112,0,112,0,28,
		17,36,72,0,48,40,0,48,29,0,102,112,0,112,
		0,73,36,74,0,176,38,0,48,32,0,102,112,0,
		12,1,31,30,48,39,0,48,32,0,102,112,0,112,
		0,28,17,36,75,0,48,40,0,48,32,0,102,112,
		0,112,0,73,36,77,0,176,38,0,48,35,0,102,
		112,0,12,1,31,30,48,39,0,48,35,0,102,112,
		0,112,0,28,17,36,78,0,48,40,0,48,35,0,
		102,112,0,112,0,73,36,81,0,48,23,0,102,100,
		112,1,73,36,82,0,48,31,0,102,100,112,1,73,
		36,83,0,48,33,0,102,100,112,1,73,36,85,0,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUFTIK_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,91,0,48,41,0,102,106,10,82,69,
		65,78,85,86,84,65,70,0,112,1,31,8,36,92,
		0,9,110,7,36,99,0,48,42,0,102,112,0,73,
		36,105,0,48,43,0,102,92,70,92,80,92,90,92,
		100,93,88,2,112,5,31,8,36,106,0,9,110,7,
		36,111,0,48,44,0,102,92,110,92,111,92,120,92,
		121,100,93,130,0,112,6,31,8,36,112,0,9,110,
		7,36,115,0,48,45,0,102,93,210,0,112,1,73,
		36,116,0,48,46,0,102,93,211,0,112,1,73,36,
		122,0,48,47,0,48,48,0,102,112,0,48,49,0,
		48,35,0,102,112,0,112,0,112,1,73,36,124,0,
		48,50,0,102,176,51,0,12,0,48,52,0,48,29,
		0,102,112,0,112,0,112,2,73,36,126,0,120,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUFTIK_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,133,0,102,80,1,36,135,0,106,1,
		0,80,2,36,136,0,106,1,0,80,3,36,138,0,
		48,53,0,48,54,0,95,1,112,0,112,0,73,36,
		139,0,48,55,0,48,56,0,95,1,112,0,112,0,
		73,36,140,0,48,57,0,48,58,0,95,1,112,0,
		112,0,73,36,145,0,48,59,0,95,1,90,28,106,
		12,70,101,99,104,97,32,32,32,32,58,32,0,176,
		60,0,176,61,0,12,0,12,1,72,6,89,42,0,
		0,0,1,0,1,0,106,12,65,241,111,32,32,32,
		32,32,32,58,32,0,176,62,0,176,63,0,48,64,
		0,95,255,112,0,12,1,12,1,72,6,89,76,0,
		0,0,1,0,1,0,106,12,70,97,109,105,108,105,
		97,32,32,58,32,0,48,65,0,95,255,112,0,28,
		12,106,6,84,111,100,97,115,0,25,34,176,62,0,
		48,66,0,95,255,112,0,12,1,106,4,32,62,32,
		0,72,176,62,0,48,67,0,95,255,112,0,12,1,
		72,72,6,89,76,0,0,0,1,0,1,0,106,12,
		67,108,105,101,110,116,101,115,32,58,32,0,48,68,
		0,95,255,112,0,28,12,106,6,84,111,100,111,115,
		0,25,34,176,62,0,48,69,0,95,255,112,0,12,
		1,106,4,32,62,32,0,72,176,62,0,48,70,0,
		95,255,112,0,12,1,72,72,6,4,4,0,112,1,
		73,36,147,0,48,71,0,48,29,0,95,1,112,0,
		106,8,100,70,101,99,84,105,107,0,112,1,73,36,
		148,0,48,71,0,48,32,0,95,1,112,0,106,8,
		99,78,117,109,84,105,108,0,112,1,73,36,154,0,
		106,39,40,32,99,84,105,112,84,105,107,32,61,61,
		32,34,49,34,32,46,111,114,46,32,99,84,105,112,
		84,105,107,32,61,61,32,34,52,34,32,41,0,80,
		2,36,156,0,48,68,0,95,1,112,0,31,86,36,
		157,0,96,2,0,106,20,32,46,97,110,100,46,32,
		99,67,108,105,84,105,107,32,62,61,32,34,0,176,
		72,0,48,69,0,95,1,112,0,12,1,72,106,21,
		34,32,46,97,110,100,46,32,99,67,108,105,84,105,
		107,32,60,61,32,34,0,72,176,72,0,48,70,0,
		95,1,112,0,12,1,72,106,2,34,0,72,135,36,
		160,0,176,38,0,48,73,0,48,74,0,95,1,112,
		0,112,0,12,1,31,32,36,161,0,96,2,0,106,
		8,32,46,97,110,100,46,32,0,48,73,0,48,74,
		0,95,1,112,0,112,0,72,135,36,164,0,48,18,
		0,48,29,0,95,1,112,0,176,75,0,12,0,176,
		76,0,48,77,0,48,29,0,95,1,112,0,112,0,
		12,1,48,78,0,48,29,0,95,1,112,0,112,0,
		95,2,100,100,100,100,100,100,100,120,112,12,73,36,
		166,0,48,79,0,48,48,0,95,1,112,0,106,8,
		84,105,99,107,101,116,115,0,112,1,73,36,167,0,
		48,47,0,48,48,0,95,1,112,0,48,80,0,48,
		29,0,95,1,112,0,112,0,112,1,73,36,173,0,
		106,10,33,108,67,111,110,116,114,111,108,0,80,3,
		36,175,0,48,65,0,95,1,112,0,31,86,36,176,
		0,96,3,0,106,20,32,46,97,110,100,46,32,99,
		67,111,100,70,97,109,32,62,61,32,34,0,176,72,
		0,48,66,0,95,1,112,0,12,1,72,106,21,34,
		32,46,97,110,100,46,32,99,67,111,100,70,97,109,
		32,60,61,32,34,0,72,176,72,0,48,67,0,95,
		1,112,0,12,1,72,106,2,34,0,72,135,36,179,
		0,48,18,0,48,32,0,95,1,112,0,176,75,0,
		12,0,176,76,0,48,77,0,48,32,0,95,1,112,
		0,112,0,12,1,48,78,0,48,32,0,95,1,112,
		0,112,0,176,81,0,95,3,12,1,100,100,100,100,
		100,100,100,120,112,12,73,36,181,0,48,82,0,48,
		29,0,95,1,112,0,112,0,73,36,182,0,48,83,
		0,95,1,112,0,32,106,3,48,84,0,48,29,0,
		95,1,112,0,112,0,32,91,3,36,185,0,176,85,
		0,48,86,0,48,29,0,95,1,112,0,112,0,12,
		1,48,64,0,95,1,112,0,8,29,25,3,176,87,
		0,48,88,0,48,29,0,95,1,112,0,112,0,48,
		89,0,95,1,112,0,12,2,29,254,2,36,191,0,
		48,90,0,48,32,0,95,1,112,0,48,88,0,48,
		29,0,95,1,112,0,112,0,48,91,0,48,29,0,
		95,1,112,0,112,0,72,48,92,0,48,29,0,95,
		1,112,0,112,0,72,112,1,29,198,2,36,193,0,
		48,88,0,48,29,0,95,1,112,0,112,0,48,91,
		0,48,29,0,95,1,112,0,112,0,72,48,92,0,
		48,29,0,95,1,112,0,112,0,72,48,93,0,48,
		32,0,95,1,112,0,112,0,48,94,0,48,32,0,
		95,1,112,0,112,0,72,48,95,0,48,32,0,95,
		1,112,0,112,0,72,8,29,115,2,48,84,0,48,
		32,0,95,1,112,0,112,0,32,100,2,36,197,0,
		176,38,0,48,96,0,48,32,0,95,1,112,0,112,
		0,12,1,32,21,1,48,97,0,95,1,112,0,28,
		19,48,98,0,48,32,0,95,1,112,0,112,0,121,
		8,32,251,0,48,99,0,95,1,112,0,28,19,48,
		100,0,48,32,0,95,1,112,0,112,0,121,8,32,
		225,0,36,199,0,48,90,0,48,58,0,95,1,112,
		0,48,101,0,48,32,0,95,1,112,0,112,0,112,
		1,31,102,36,200,0,48,102,0,48,58,0,95,1,
		112,0,112,0,73,36,201,0,48,103,0,48,58,0,
		95,1,112,0,48,101,0,48,32,0,95,1,112,0,
		112,0,112,1,73,36,202,0,48,104,0,48,58,0,
		95,1,112,0,176,105,0,48,101,0,48,32,0,95,
		1,112,0,112,0,48,106,0,95,1,112,0,12,2,
		112,1,73,36,203,0,48,107,0,48,58,0,95,1,
		112,0,112,0,73,36,206,0,48,108,0,95,1,48,
		86,0,48,29,0,95,1,112,0,112,0,176,109,0,
		48,52,0,48,29,0,95,1,112,0,112,0,48,52,
		0,48,32,0,95,1,112,0,112,0,48,110,0,95,
		1,112,0,48,111,0,95,1,112,0,48,112,0,95,
		1,112,0,100,122,12,7,112,2,73,36,208,0,48,
		113,0,95,1,48,64,0,95,1,112,0,112,1,73,
		36,218,0,176,38,0,48,114,0,48,32,0,95,1,
		112,0,112,0,12,1,32,17,1,48,97,0,95,1,
		112,0,28,19,48,98,0,48,32,0,95,1,112,0,
		112,0,121,8,32,247,0,48,99,0,95,1,112,0,
		28,19,48,100,0,48,32,0,95,1,112,0,112,0,
		121,8,32,221,0,36,220,0,48,90,0,48,58,0,
		95,1,112,0,48,101,0,48,32,0,95,1,112,0,
		112,0,112,1,31,102,36,221,0,48,102,0,48,58,
		0,95,1,112,0,112,0,73,36,222,0,48,103,0,
		48,58,0,95,1,112,0,48,101,0,48,32,0,95,
		1,112,0,112,0,112,1,73,36,223,0,48,104,0,
		48,58,0,95,1,112,0,176,105,0,48,101,0,48,
		32,0,95,1,112,0,112,0,48,106,0,95,1,112,
		0,12,2,112,1,73,36,224,0,48,107,0,48,58,
		0,95,1,112,0,112,0,73,36,227,0,48,108,0,
		95,1,48,86,0,48,29,0,95,1,112,0,112,0,
		176,109,0,48,29,0,95,1,112,0,48,52,0,48,
		32,0,95,1,112,0,112,0,48,110,0,95,1,112,
		0,48,111,0,95,1,112,0,48,112,0,95,1,112,
		0,100,92,2,12,7,112,2,73,36,229,0,48,113,
		0,95,1,48,64,0,95,1,112,0,112,1,73,36,
		233,0,48,115,0,48,32,0,95,1,112,0,112,0,
		73,26,64,253,36,241,0,48,115,0,48,29,0,95,
		1,112,0,112,0,73,36,243,0,48,116,0,48,48,
		0,95,1,112,0,112,0,73,26,143,252,36,247,0,
		48,117,0,48,29,0,95,1,112,0,176,75,0,12,
		0,176,76,0,48,77,0,48,29,0,95,1,112,0,
		112,0,12,1,112,2,73,36,248,0,48,117,0,48,
		32,0,95,1,112,0,176,75,0,12,0,176,76,0,
		48,77,0,48,32,0,95,1,112,0,112,0,12,1,
		112,2,73,36,250,0,48,116,0,48,48,0,95,1,
		112,0,48,49,0,48,29,0,95,1,112,0,112,0,
		112,1,73,36,252,0,48,97,0,95,1,112,0,31,
		13,36,253,0,48,118,0,95,1,112,0,73,36,0,
		1,48,55,0,48,54,0,95,1,112,0,112,0,73,
		36,2,1,48,49,0,48,58,0,95,1,112,0,112,
		0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,121,0,2,0,116,121,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

