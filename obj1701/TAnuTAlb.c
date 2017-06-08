/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TAnuTAlb.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TANUTALB );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFTIP );
HB_FUNC_STATIC( TANUTALB_CREATE );
HB_FUNC_STATIC( TANUTALB_OPENFILES );
HB_FUNC_STATIC( TANUTALB_CLOSEFILES );
HB_FUNC_STATIC( TANUTALB_LRESOURCE );
HB_FUNC_STATIC( TANUTALB_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TDATACENTER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATCLI );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( AITMALBCLI );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( YEAR );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( NTOTNALBCLI );
HB_FUNC_EXTERN( NIMPLALBCLI );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TANUTALB )
{ "TANUTALB", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TANUTALB )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFTIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFTIP )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TANUTALB_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUTALB_CREATE )}, NULL },
{ "TANUTALB_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUTALB_OPENFILES )}, NULL },
{ "TANUTALB_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUTALB_CLOSEFILES )}, NULL },
{ "TANUTALB_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUTALB_LRESOURCE )}, NULL },
{ "TANUTALB_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANUTALB_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPANUCREATEFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFFECINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFGRAPH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OALBCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDATACENTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDATACENTER )}, NULL },
{ "_OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATCLI )}, NULL },
{ "ODBFCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "ODEFTIPINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "AESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMALBCLI )}, NULL },
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
{ "LALLTIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTIPORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTIPDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( YEAR )}, NULL },
{ "DFECALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NNUMALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "CREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTNALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTNALBCLI )}, NULL },
{ "LEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLALBCLI )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLANK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODTIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMTIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIPART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDIMPORTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMEDIAMES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INCLUYECERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TANUTALB, ".\\.\\Prg\\TAnuTAlb.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TANUTALB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TANUTALB )
   #include "hbiniseg.h"
#endif

HB_FUNC( TANUTALB )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,122,0,36,8,0,103,2,0,100,8,
		29,25,2,176,1,0,104,2,0,12,1,29,14,2,
		166,208,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,84,65,110,117,84,65,108,98,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,7,79,66,74,69,67,84,0,100,95,
		1,121,72,121,72,121,72,106,8,111,69,115,116,97,
		100,111,0,4,1,0,9,112,5,73,36,11,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,9,111,65,108,98,
		67,108,105,84,0,4,1,0,9,112,5,73,36,12,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,65,
		108,98,67,108,105,76,0,4,1,0,9,112,5,73,
		36,13,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,8,
		111,68,98,102,65,114,116,0,4,1,0,9,112,5,
		73,36,15,0,48,5,0,95,2,106,6,65,82,82,
		65,89,0,106,13,78,111,32,102,97,99,116,117,114,
		97,100,111,0,106,10,70,97,99,116,117,114,97,100,
		111,0,106,6,84,111,100,111,115,0,4,3,0,95,
		1,121,72,121,72,121,72,106,8,97,69,115,116,97,
		100,111,0,4,1,0,9,112,5,73,36,16,0,48,
		6,0,95,2,106,7,67,114,101,97,116,101,0,108,
		7,95,1,121,72,121,72,121,72,112,3,73,36,18,
		0,48,6,0,95,2,106,10,79,112,101,110,70,105,
		108,101,115,0,108,8,95,1,121,72,121,72,121,72,
		112,3,73,36,20,0,48,6,0,95,2,106,11,67,
		108,111,115,101,70,105,108,101,115,0,108,9,95,1,
		121,72,121,72,121,72,112,3,73,36,22,0,48,6,
		0,95,2,106,10,108,82,101,115,111,117,114,99,101,
		0,108,10,95,1,121,72,121,72,121,72,112,3,73,
		36,24,0,48,6,0,95,2,106,10,108,71,101,110,
		101,114,97,116,101,0,108,11,95,1,121,72,121,72,
		121,72,112,3,73,36,26,0,48,12,0,95,2,112,
		0,73,167,14,0,0,176,13,0,104,2,0,95,2,
		20,2,168,48,14,0,95,2,112,0,80,3,176,15,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,16,0,95,3,164,146,1,0,
		73,95,3,110,7,48,14,0,103,2,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUTALB_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,32,0,48,17,0,102,112,0,73,36,34,0,48,
		18,0,102,106,8,99,67,111,100,84,105,112,0,106,
		8,99,67,111,100,84,105,112,0,112,2,73,36,36,
		0,48,19,0,102,9,112,1,73,36,37,0,48,20,
		0,102,120,112,1,73,36,39,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUTALB_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,45,0,120,80,1,36,46,0,176,21,
		0,89,15,0,1,0,0,0,176,22,0,95,1,12,
		1,6,12,1,80,2,36,48,0,113,117,1,0,36,
		50,0,48,23,0,102,48,24,0,176,25,0,12,0,
		112,0,112,1,73,36,52,0,48,26,0,102,48,27,
		0,176,28,0,106,12,65,76,66,67,76,73,76,46,
		68,66,70,0,100,12,2,106,12,65,76,66,67,76,
		73,76,46,68,66,70,0,100,176,29,0,12,0,100,
		176,30,0,12,0,9,120,9,9,112,9,112,1,73,
		48,31,0,48,32,0,102,112,0,106,12,65,76,66,
		67,76,73,76,46,67,68,88,0,112,1,73,48,31,
		0,48,32,0,102,112,0,112,0,73,48,33,0,48,
		32,0,102,112,0,112,0,73,36,54,0,48,34,0,
		102,48,27,0,176,28,0,106,11,67,76,73,69,78,
		84,46,68,66,70,0,100,12,2,106,11,67,76,73,
		69,78,84,46,68,66,70,0,100,176,29,0,12,0,
		100,176,35,0,12,0,9,120,9,9,112,9,112,1,
		73,48,31,0,48,36,0,102,112,0,106,11,67,76,
		73,69,78,84,46,67,68,88,0,112,1,73,48,31,
		0,48,36,0,102,112,0,112,0,73,48,33,0,48,
		36,0,102,112,0,112,0,73,36,56,0,48,37,0,
		102,48,27,0,176,28,0,106,13,65,82,84,73,67,
		85,76,79,46,68,66,70,0,100,12,2,106,13,65,
		82,84,73,67,85,76,79,46,68,66,70,0,100,176,
		29,0,12,0,100,176,38,0,12,0,9,120,9,9,
		112,9,112,1,73,48,31,0,48,39,0,102,112,0,
		106,13,65,82,84,73,67,85,76,79,46,67,68,88,
		0,112,1,73,48,31,0,48,39,0,102,112,0,112,
		0,73,48,33,0,48,39,0,102,112,0,112,0,73,
		114,76,0,0,36,58,0,115,73,36,60,0,176,40,
		0,106,41,73,109,112,111,115,105,98,108,101,32,97,
		98,114,105,114,32,116,111,100,97,115,32,108,97,115,
		32,98,97,115,101,115,32,100,101,32,100,97,116,111,
		115,0,20,1,36,61,0,48,41,0,102,112,0,73,
		36,62,0,9,80,1,36,66,0,176,21,0,95,2,
		20,1,36,68,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUTALB_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,74,0,176,42,0,48,24,0,102,112,0,12,1,
		31,30,48,43,0,48,24,0,102,112,0,112,0,28,
		17,36,75,0,48,44,0,48,24,0,102,112,0,112,
		0,73,36,77,0,176,42,0,48,32,0,102,112,0,
		12,1,31,30,48,43,0,48,32,0,102,112,0,112,
		0,28,17,36,78,0,48,44,0,48,32,0,102,112,
		0,112,0,73,36,80,0,176,42,0,48,36,0,102,
		112,0,12,1,31,30,48,43,0,48,36,0,102,112,
		0,112,0,28,17,36,81,0,48,44,0,48,36,0,
		102,112,0,112,0,73,36,83,0,176,42,0,48,39,
		0,102,112,0,12,1,31,30,48,43,0,48,39,0,
		102,112,0,112,0,28,17,36,84,0,48,44,0,48,
		39,0,102,112,0,112,0,73,36,87,0,48,23,0,
		102,100,112,1,73,36,88,0,48,26,0,102,100,112,
		1,73,36,89,0,48,34,0,102,100,112,1,73,36,
		90,0,48,37,0,102,100,112,1,73,36,92,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUTALB_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,98,0,106,6,84,111,100,111,115,0,
		80,2,36,100,0,48,45,0,102,106,10,73,78,70,
		71,69,78,84,73,80,0,112,1,31,8,36,101,0,
		9,110,7,36,108,0,48,46,0,102,112,0,73,36,
		112,0,48,47,0,102,92,70,92,80,92,90,92,100,
		93,142,3,112,5,31,8,36,113,0,9,110,7,36,
		116,0,48,48,0,48,49,0,102,112,0,48,50,0,
		48,24,0,102,112,0,112,0,112,1,73,36,118,0,
		48,51,0,102,93,210,0,112,1,73,36,119,0,48,
		52,0,102,93,211,0,112,1,73,36,125,0,48,53,
		0,102,48,54,0,176,55,0,12,0,93,218,0,89,
		28,0,1,0,1,0,2,0,176,56,0,12,0,121,
		8,28,6,95,255,25,7,95,1,165,80,255,6,48,
		57,0,102,112,0,48,58,0,48,59,0,102,112,0,
		112,0,122,1,100,100,100,100,100,100,9,100,100,100,
		100,100,100,112,17,112,1,73,36,127,0,48,60,0,
		102,176,61,0,12,0,48,62,0,48,24,0,102,112,
		0,112,0,112,2,73,36,129,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANUTALB_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,136,0,102,80,1,36,139,0,106,1,
		0,80,3,36,140,0,106,1,0,80,4,36,142,0,
		48,63,0,48,64,0,95,1,112,0,112,0,73,36,
		143,0,48,65,0,48,66,0,95,1,112,0,112,0,
		73,36,144,0,48,67,0,48,68,0,95,1,112,0,
		112,0,73,36,149,0,48,69,0,95,1,90,26,106,
		10,70,101,99,104,97,32,32,58,32,0,176,70,0,
		176,71,0,12,0,12,1,72,6,89,40,0,0,0,
		1,0,1,0,106,10,65,241,111,32,32,32,32,58,
		32,0,176,72,0,176,73,0,48,74,0,95,255,112,
		0,12,1,12,1,72,6,89,74,0,0,0,1,0,
		1,0,106,10,84,105,112,111,115,32,32,58,32,0,
		48,75,0,95,255,112,0,28,12,106,6,84,111,100,
		111,115,0,25,34,176,72,0,48,76,0,95,255,112,
		0,12,1,106,4,32,62,32,0,72,176,72,0,48,
		77,0,95,255,112,0,12,1,72,72,6,89,43,0,
		0,0,1,0,1,0,106,10,69,115,116,97,100,111,
		32,58,32,0,48,57,0,95,255,112,0,48,78,0,
		48,79,0,95,255,112,0,112,0,1,72,6,4,4,
		0,112,1,73,36,151,0,48,80,0,48,24,0,95,
		1,112,0,106,8,100,70,101,99,65,108,98,0,112,
		1,73,36,152,0,48,80,0,48,32,0,95,1,112,
		0,106,8,110,78,117,109,65,108,98,0,112,1,73,
		36,155,0,48,78,0,48,79,0,95,1,112,0,112,
		0,122,8,28,26,36,156,0,106,15,110,70,97,99,
		116,117,114,97,100,111,32,60,32,51,0,80,3,25,
		58,36,157,0,48,78,0,48,79,0,95,1,112,0,
		112,0,92,2,8,28,27,36,158,0,106,16,110,70,
		97,99,116,117,114,97,100,111,32,61,61,32,51,0,
		80,3,25,13,36,160,0,106,4,46,116,46,0,80,
		3,36,163,0,176,42,0,48,81,0,48,82,0,95,
		1,112,0,112,0,12,1,31,32,36,164,0,96,3,
		0,106,8,32,46,97,110,100,46,32,0,48,81,0,
		48,82,0,95,1,112,0,112,0,72,135,36,167,0,
		48,18,0,48,24,0,95,1,112,0,176,83,0,12,
		0,176,84,0,48,85,0,48,24,0,95,1,112,0,
		112,0,12,1,48,86,0,48,24,0,95,1,112,0,
		112,0,95,3,100,100,100,100,100,100,100,120,112,12,
		73,36,169,0,48,48,0,48,49,0,95,1,112,0,
		48,87,0,48,24,0,95,1,112,0,112,0,112,1,
		73,36,171,0,106,25,33,108,84,111,116,76,105,110,
		32,46,97,110,100,46,32,33,108,67,111,110,116,114,
		111,108,0,80,4,36,173,0,48,18,0,48,32,0,
		95,1,112,0,176,83,0,12,0,176,84,0,48,85,
		0,48,32,0,95,1,112,0,112,0,12,1,48,86,
		0,48,32,0,95,1,112,0,112,0,176,88,0,95,
		4,12,1,100,100,100,100,100,100,100,120,112,12,73,
		36,175,0,48,89,0,48,24,0,95,1,112,0,112,
		0,73,36,177,0,48,90,0,95,1,112,0,32,144,
		2,48,91,0,48,24,0,95,1,112,0,112,0,32,
		129,2,36,180,0,176,92,0,48,93,0,48,24,0,
		95,1,112,0,112,0,12,1,48,74,0,95,1,112,
		0,8,29,63,2,176,94,0,48,95,0,48,24,0,
		95,1,112,0,112,0,48,96,0,95,1,112,0,12,
		2,29,36,2,36,182,0,48,97,0,48,32,0,95,
		1,112,0,48,95,0,48,24,0,95,1,112,0,112,
		0,176,73,0,48,98,0,48,24,0,95,1,112,0,
		112,0,12,1,72,48,99,0,48,24,0,95,1,112,
		0,112,0,72,112,1,29,231,1,36,184,0,48,95,
		0,48,24,0,95,1,112,0,112,0,176,73,0,48,
		98,0,48,24,0,95,1,112,0,112,0,12,1,72,
		48,99,0,48,24,0,95,1,112,0,112,0,72,48,
		95,0,48,32,0,95,1,112,0,112,0,176,73,0,
		48,98,0,48,32,0,95,1,112,0,112,0,12,1,
		72,48,99,0,48,32,0,95,1,112,0,112,0,72,
		8,29,138,1,36,186,0,176,100,0,48,101,0,48,
		32,0,95,1,112,0,112,0,48,39,0,95,1,112,
		0,106,8,99,67,111,100,84,105,112,0,12,3,80,
		2,36,190,0,48,75,0,95,1,112,0,31,28,95,
		2,48,76,0,95,1,112,0,16,29,55,1,95,2,
		48,77,0,95,1,112,0,34,29,42,1,48,102,0,
		95,1,112,0,28,19,176,103,0,48,32,0,95,1,
		112,0,12,1,121,8,32,16,1,48,104,0,95,1,
		112,0,28,57,176,105,0,48,62,0,48,24,0,95,
		1,112,0,112,0,48,62,0,48,32,0,95,1,112,
		0,112,0,48,106,0,95,1,112,0,48,107,0,95,
		1,112,0,48,108,0,95,1,112,0,12,5,121,8,
		32,208,0,36,192,0,48,97,0,48,68,0,95,1,
		112,0,95,2,112,1,31,97,36,193,0,48,109,0,
		48,68,0,95,1,112,0,112,0,73,36,194,0,48,
		110,0,48,68,0,95,1,112,0,95,2,112,1,73,
		36,195,0,48,111,0,48,68,0,95,1,112,0,176,
		100,0,95,2,48,68,0,48,112,0,95,1,112,0,
		112,0,106,8,99,78,111,109,84,105,112,0,12,3,
		112,1,73,36,196,0,48,113,0,48,68,0,95,1,
		112,0,112,0,73,36,199,0,48,114,0,95,1,48,
		93,0,48,24,0,95,1,112,0,112,0,176,105,0,
		48,62,0,48,24,0,95,1,112,0,112,0,48,62,
		0,48,32,0,95,1,112,0,112,0,48,106,0,95,
		1,112,0,48,107,0,95,1,112,0,48,108,0,95,
		1,112,0,12,5,112,2,73,36,200,0,48,115,0,
		95,1,48,74,0,95,1,112,0,112,1,73,36,204,
		0,48,116,0,48,32,0,95,1,112,0,112,0,73,
		26,31,254,36,212,0,48,116,0,48,24,0,95,1,
		112,0,112,0,73,36,214,0,48,117,0,48,49,0,
		95,1,112,0,112,0,73,26,105,253,36,218,0,48,
		118,0,48,24,0,95,1,112,0,176,83,0,12,0,
		176,84,0,48,85,0,48,24,0,95,1,112,0,112,
		0,12,1,112,2,73,36,220,0,48,118,0,48,32,
		0,95,1,112,0,176,83,0,12,0,176,84,0,48,
		85,0,48,32,0,95,1,112,0,112,0,12,1,112,
		2,73,36,222,0,48,117,0,48,49,0,95,1,112,
		0,48,50,0,48,24,0,95,1,112,0,112,0,112,
		1,73,36,224,0,48,102,0,95,1,112,0,31,13,
		36,225,0,48,119,0,95,1,112,0,73,36,228,0,
		48,65,0,48,64,0,95,1,112,0,112,0,73,36,
		230,0,48,50,0,48,68,0,95,1,112,0,112,0,
		121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,122,0,2,0,116,122,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

