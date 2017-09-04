/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Ttarage.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TARAGE );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFGEN );
HB_FUNC_STATIC( TARAGE_CREATE );
HB_FUNC_STATIC( TARAGE_OPENFILES );
HB_FUNC_STATIC( TARAGE_CLOSEFILES );
HB_FUNC_STATIC( TARAGE_LRESOURCE );
HB_FUNC_STATIC( TARAGE_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATCLI );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( CPATDAT );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( CNBRAGENT );
HB_FUNC_EXTERN( RETCLIENT );
HB_FUNC_EXTERN( RETARTICULO );
HB_FUNC_EXTERN( RETFAMILIA );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TTARAGE )
{ "TARAGE", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TARAGE )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFGEN )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TARAGE_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TARAGE_CREATE )}, NULL },
{ "TARAGE_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TARAGE_OPENFILES )}, NULL },
{ "TARAGE_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TARAGE_CLOSEFILES )}, NULL },
{ "TARAGE_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TARAGE_LRESOURCE )}, NULL },
{ "TARAGE_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TARAGE_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPICIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CNOMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_ODBFCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATCLI )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCLIATP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCLIATP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ODBFFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATDAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATDAT )}, NULL },
{ "ODBFDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFFECINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFDIVINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFSERINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LLOADDIVISA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFAGEINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "CAGEORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CAGEDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "LAGEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNBRAGENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CNBRAGENT )}, NULL },
{ "ODBFAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RETCLIENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RETCLIENT )}, NULL },
{ "NTIPATP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RETARTICULO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RETARTICULO )}, NULL },
{ "RETFAMILIA", {HB_FS_PUBLIC}, {HB_FUNCNAME( RETFAMILIA )}, NULL },
{ "_NPRCART1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPRCART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPRCART2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPRCART2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPRCART3", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPRCART3", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPRCART4", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPRCART4", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPRCART5", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPRCART5", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPRCART6", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPRCART6", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDTOART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDTOART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDTOPRM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDPRART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDTODIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDTODIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCOMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DFECINI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECINI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DFECFIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECFIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TTARAGE, ".\\.\\Prg\\Ttarage.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TTARAGE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TTARAGE )
   #include "hbiniseg.h"
#endif

HB_FUNC( TARAGE )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,123,0,36,8,0,103,2,0,100,8,
		29,69,1,176,1,0,104,2,0,12,1,29,58,1,
		166,252,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,7,84,97,114,65,103,101,0,108,4,4,1,
		0,108,0,112,3,80,2,36,10,0,48,5,0,95,
		2,106,7,79,66,74,69,67,84,0,100,95,1,121,
		72,121,72,121,72,106,8,111,67,108,105,65,116,112,
		0,4,1,0,9,112,5,73,36,12,0,48,6,0,
		95,2,106,7,67,114,101,97,116,101,0,108,7,95,
		1,121,72,121,72,121,72,112,3,73,36,14,0,48,
		6,0,95,2,106,10,79,112,101,110,70,105,108,101,
		115,0,108,8,95,1,121,72,121,72,121,72,112,3,
		73,36,16,0,48,6,0,95,2,106,11,67,108,111,
		115,101,70,105,108,101,115,0,108,9,95,1,121,72,
		121,72,121,72,112,3,73,36,18,0,48,6,0,95,
		2,106,10,108,82,101,115,111,117,114,99,101,0,108,
		10,95,1,121,72,121,72,121,72,112,3,73,36,20,
		0,48,6,0,95,2,106,10,108,71,101,110,101,114,
		97,116,101,0,108,11,95,1,121,72,121,72,121,72,
		112,3,73,36,22,0,48,12,0,95,2,112,0,73,
		167,14,0,0,176,13,0,104,2,0,95,2,20,2,
		168,48,14,0,95,2,112,0,80,3,176,15,0,95,
		3,106,10,73,110,105,116,67,108,97,115,115,0,12,
		2,28,12,48,16,0,95,3,164,146,1,0,73,95,
		3,110,7,48,14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TARAGE_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,26,0,102,80,1,36,28,0,48,17,
		0,95,1,106,8,99,67,111,100,65,103,101,0,106,
		2,67,0,92,3,121,90,8,106,3,64,33,0,6,
		106,10,67,111,100,46,32,97,103,101,46,0,9,106,
		12,67,111,100,46,32,97,103,101,110,116,101,0,92,
		6,9,112,10,73,36,29,0,48,17,0,95,1,106,
		8,99,78,111,109,65,103,101,0,106,2,67,0,92,
		50,121,90,8,106,3,64,33,0,6,106,7,65,103,
		101,110,116,101,0,9,106,14,78,111,109,98,114,101,
		32,97,103,101,110,116,101,0,92,40,9,112,10,73,
		36,30,0,48,17,0,95,1,106,8,99,67,111,100,
		67,108,105,0,106,2,67,0,92,12,121,90,8,106,
		3,64,33,0,6,106,10,67,111,100,46,32,99,108,
		105,46,0,9,106,13,67,111,100,46,32,99,108,105,
		101,110,116,101,0,92,12,9,112,10,73,36,31,0,
		48,17,0,95,1,106,8,99,78,111,109,67,108,105,
		0,106,2,67,0,92,50,121,90,8,106,3,64,33,
		0,6,106,8,67,108,105,101,110,116,101,0,9,106,
		15,78,111,109,98,114,101,32,99,108,105,101,110,116,
		101,0,92,40,9,112,10,73,36,32,0,48,17,0,
		95,1,106,8,99,67,111,100,65,114,116,0,106,2,
		67,0,92,18,121,90,8,106,3,64,33,0,6,106,
		5,67,111,100,46,0,120,106,14,67,111,100,46,32,
		97,114,116,237,99,117,108,111,0,92,18,9,112,10,
		73,36,33,0,48,17,0,95,1,106,8,99,78,111,
		109,65,114,116,0,106,2,67,0,92,100,121,90,8,
		106,3,64,33,0,6,106,17,65,114,116,237,99,117,
		108,111,47,102,97,109,105,108,105,97,0,120,106,17,
		65,114,116,237,99,117,108,111,47,102,97,109,105,108,
		105,97,0,92,40,9,112,10,73,36,34,0,48,17,
		0,95,1,106,9,110,80,114,99,65,114,116,49,0,
		106,2,78,0,92,19,92,6,89,17,0,0,0,1,
		0,1,0,48,18,0,95,255,112,0,6,106,9,80,
		114,101,99,105,111,32,49,0,120,106,9,80,114,101,
		99,105,111,32,49,0,92,10,9,112,10,73,36,35,
		0,48,17,0,95,1,106,9,110,80,114,99,65,114,
		116,50,0,106,2,78,0,92,19,92,6,89,17,0,
		0,0,1,0,1,0,48,18,0,95,255,112,0,6,
		106,9,80,114,101,99,105,111,32,50,0,9,106,9,
		80,114,101,99,105,111,32,50,0,92,10,9,112,10,
		73,36,36,0,48,17,0,95,1,106,9,110,80,114,
		99,65,114,116,51,0,106,2,78,0,92,19,92,6,
		89,17,0,0,0,1,0,1,0,48,18,0,95,255,
		112,0,6,106,9,80,114,101,99,105,111,32,51,0,
		9,106,9,80,114,101,99,105,111,32,51,0,92,10,
		9,112,10,73,36,37,0,48,17,0,95,1,106,9,
		110,80,114,99,65,114,116,52,0,106,2,78,0,92,
		19,92,6,89,17,0,0,0,1,0,1,0,48,18,
		0,95,255,112,0,6,106,9,80,114,101,99,105,111,
		32,52,0,9,106,9,80,114,101,99,105,111,32,52,
		0,92,10,9,112,10,73,36,38,0,48,17,0,95,
		1,106,9,110,80,114,99,65,114,116,53,0,106,2,
		78,0,92,19,92,6,89,17,0,0,0,1,0,1,
		0,48,18,0,95,255,112,0,6,106,9,80,114,101,
		99,105,111,32,53,0,9,106,9,80,114,101,99,105,
		111,32,53,0,92,10,9,112,10,73,36,39,0,48,
		17,0,95,1,106,9,110,80,114,99,65,114,116,54,
		0,106,2,78,0,92,19,92,6,89,17,0,0,0,
		1,0,1,0,48,18,0,95,255,112,0,6,106,9,
		80,114,101,99,105,111,32,54,0,9,106,9,80,114,
		101,99,105,111,32,54,0,92,10,9,112,10,73,36,
		40,0,48,17,0,95,1,106,8,110,68,116,111,65,
		114,116,0,106,2,78,0,92,6,92,2,90,14,106,
		9,64,32,57,57,57,46,57,57,0,6,106,5,37,
		68,116,111,0,120,106,14,68,116,111,37,32,97,114,
		116,237,99,117,108,111,0,92,6,9,112,10,73,36,
		41,0,48,17,0,95,1,106,8,110,68,116,111,80,
		114,109,0,106,2,78,0,92,6,92,2,90,14,106,
		9,64,32,57,57,57,46,57,57,0,6,106,9,37,
		68,116,111,32,80,114,109,0,9,106,15,68,116,111,
		37,32,112,114,111,109,111,99,105,243,110,0,92,6,
		9,112,10,73,36,42,0,48,17,0,95,1,106,8,
		110,68,116,111,68,105,118,0,106,2,78,0,92,19,
		92,6,89,17,0,0,0,1,0,1,0,48,18,0,
		95,255,112,0,6,106,12,68,116,111,46,32,108,105,
		110,101,97,108,0,9,106,12,68,116,111,46,32,108,
		105,110,101,97,108,0,92,10,9,112,10,73,36,43,
		0,48,17,0,95,1,106,8,110,67,111,109,65,103,
		101,0,106,2,78,0,92,6,92,2,90,14,106,9,
		64,32,57,57,57,46,57,57,0,6,106,10,67,111,
		109,46,32,97,103,101,46,0,9,106,16,67,111,109,
		105,115,105,243,110,32,97,103,101,110,116,101,0,92,
		6,9,112,10,73,36,44,0,48,17,0,95,1,106,
		8,100,70,101,99,73,110,105,0,106,2,68,0,92,
		8,121,90,6,106,1,0,6,106,7,73,110,105,99,
		105,111,0,9,106,13,70,101,99,104,97,32,105,110,
		105,99,105,111,0,92,8,9,112,10,73,36,45,0,
		48,17,0,95,1,106,8,100,70,101,99,70,105,110,
		0,106,2,68,0,92,8,121,90,6,106,1,0,6,
		106,4,70,105,110,0,9,106,10,70,101,99,104,97,
		32,102,105,110,0,92,8,9,112,10,73,36,47,0,
		48,19,0,95,1,106,8,99,67,111,100,65,103,101,
		0,106,18,99,67,111,100,65,103,101,32,43,32,99,
		67,111,100,67,108,105,0,112,2,73,36,49,0,48,
		20,0,95,1,89,22,0,0,0,1,0,1,0,48,
		21,0,48,22,0,95,255,112,0,112,0,6,89,61,
		0,0,0,1,0,1,0,106,11,65,103,101,110,116,
		101,32,32,58,32,0,176,23,0,48,21,0,48,22,
		0,95,255,112,0,112,0,12,1,72,106,4,32,45,
		32,0,72,48,24,0,48,22,0,95,255,112,0,112,
		0,72,6,90,9,176,25,0,122,12,1,6,112,3,
		73,36,50,0,48,20,0,95,1,89,22,0,0,0,
		1,0,1,0,48,26,0,48,22,0,95,255,112,0,
		112,0,6,89,61,0,0,0,1,0,1,0,106,11,
		67,108,105,101,110,116,101,32,58,32,0,176,23,0,
		48,26,0,48,22,0,95,255,112,0,112,0,12,1,
		72,106,4,32,45,32,0,72,48,27,0,48,22,0,
		95,255,112,0,112,0,72,6,90,9,176,25,0,122,
		12,1,6,112,3,73,36,52,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TARAGE_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,58,0,120,80,1,36,59,0,176,28,
		0,89,15,0,1,0,0,0,176,29,0,95,1,12,
		1,6,12,1,80,2,36,61,0,113,71,2,0,36,
		63,0,48,30,0,102,48,31,0,176,32,0,106,11,
		67,76,73,69,78,84,46,68,66,70,0,100,12,2,
		106,11,67,76,73,69,78,84,46,68,66,70,0,100,
		176,33,0,12,0,100,176,34,0,12,0,9,120,9,
		9,112,9,112,1,73,48,35,0,48,36,0,102,112,
		0,106,11,67,76,73,69,78,84,46,67,68,88,0,
		112,1,73,48,35,0,48,36,0,102,112,0,112,0,
		73,48,37,0,48,36,0,102,112,0,112,0,73,36,
		65,0,48,38,0,102,48,31,0,176,32,0,106,11,
		67,76,73,65,84,80,46,68,66,70,0,100,12,2,
		106,11,67,76,73,65,84,80,46,68,66,70,0,100,
		176,33,0,12,0,100,176,34,0,12,0,9,120,9,
		9,112,9,112,1,73,48,35,0,48,39,0,102,112,
		0,106,11,67,76,73,65,84,80,46,67,68,88,0,
		112,1,73,48,35,0,48,39,0,102,112,0,112,0,
		73,48,37,0,48,39,0,102,112,0,112,0,73,36,
		67,0,48,40,0,102,48,31,0,176,32,0,106,13,
		70,65,77,73,76,73,65,83,46,68,66,70,0,100,
		12,2,106,13,70,65,77,73,76,73,65,83,46,68,
		66,70,0,100,176,33,0,12,0,100,176,41,0,12,
		0,9,120,9,9,112,9,112,1,73,48,35,0,48,
		42,0,102,112,0,106,13,70,65,77,73,76,73,65,
		83,46,67,68,88,0,112,1,73,48,35,0,48,42,
		0,102,112,0,112,0,73,48,37,0,48,42,0,102,
		112,0,112,0,73,36,69,0,48,43,0,102,48,31,
		0,176,32,0,106,13,65,82,84,73,67,85,76,79,
		46,68,66,70,0,100,12,2,106,13,65,82,84,73,
		67,85,76,79,46,68,66,70,0,100,176,33,0,12,
		0,100,176,41,0,12,0,9,120,9,9,112,9,112,
		1,73,48,35,0,48,44,0,102,112,0,106,13,65,
		82,84,73,67,85,76,79,46,67,68,88,0,112,1,
		73,48,35,0,48,44,0,102,112,0,112,0,73,48,
		37,0,48,44,0,102,112,0,112,0,73,36,71,0,
		48,45,0,102,48,31,0,176,32,0,106,12,68,73,
		86,73,83,65,83,46,68,66,70,0,100,12,2,106,
		12,68,73,86,73,83,65,83,46,68,66,70,0,100,
		176,33,0,12,0,100,176,46,0,12,0,9,120,9,
		9,112,9,112,1,73,48,35,0,48,47,0,102,112,
		0,106,12,68,73,86,73,83,65,83,46,67,68,88,
		0,112,1,73,48,35,0,48,47,0,102,112,0,112,
		0,73,48,37,0,48,47,0,102,112,0,112,0,73,
		114,76,0,0,36,73,0,115,73,36,75,0,176,48,
		0,106,41,73,109,112,111,115,105,98,108,101,32,97,
		98,114,105,114,32,116,111,100,97,115,32,108,97,115,
		32,98,97,115,101,115,32,100,101,32,100,97,116,111,
		115,0,20,1,36,76,0,48,49,0,102,112,0,73,
		36,77,0,9,80,1,36,81,0,176,28,0,95,2,
		20,1,36,83,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TARAGE_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,89,0,176,50,0,48,36,0,102,112,0,12,1,
		31,30,48,51,0,48,36,0,102,112,0,112,0,28,
		17,36,90,0,48,52,0,48,36,0,102,112,0,112,
		0,73,36,92,0,176,50,0,48,39,0,102,112,0,
		12,1,31,30,48,51,0,48,39,0,102,112,0,112,
		0,28,17,36,93,0,48,52,0,48,39,0,102,112,
		0,112,0,73,36,95,0,176,50,0,48,42,0,102,
		112,0,12,1,31,30,48,51,0,48,42,0,102,112,
		0,112,0,28,17,36,96,0,48,52,0,48,42,0,
		102,112,0,112,0,73,36,98,0,176,50,0,48,44,
		0,102,112,0,12,1,31,30,48,51,0,48,44,0,
		102,112,0,112,0,28,17,36,99,0,48,52,0,48,
		44,0,102,112,0,112,0,73,36,102,0,48,30,0,
		102,100,112,1,73,36,103,0,48,38,0,102,100,112,
		1,73,36,104,0,48,40,0,102,100,112,1,73,36,
		105,0,48,43,0,102,100,112,1,73,36,107,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TARAGE_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,113,0,48,53,0,102,9,112,1,73,
		36,114,0,48,54,0,102,9,112,1,73,36,115,0,
		48,55,0,102,9,112,1,73,36,117,0,48,56,0,
		102,106,11,73,78,70,95,65,71,69,65,84,80,0,
		112,1,31,8,36,118,0,9,110,7,36,121,0,48,
		57,0,48,58,0,102,112,0,112,0,73,36,123,0,
		48,59,0,102,112,0,73,36,129,0,48,60,0,102,
		92,70,92,80,92,90,92,100,93,162,3,112,5,31,
		8,36,130,0,9,110,7,36,137,0,48,61,0,48,
		62,0,102,112,0,48,63,0,48,39,0,102,112,0,
		112,0,112,1,73,36,139,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TARAGE_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,146,0,102,80,1,36,150,0,48,57,
		0,48,64,0,95,1,112,0,112,0,73,36,151,0,
		48,65,0,48,66,0,95,1,112,0,112,0,73,36,
		152,0,48,67,0,48,22,0,95,1,112,0,112,0,
		73,36,154,0,48,68,0,48,39,0,95,1,112,0,
		112,0,73,36,157,0,48,69,0,95,1,90,27,106,
		11,70,101,99,104,97,32,32,32,58,32,0,176,70,
		0,176,71,0,12,0,12,1,72,6,89,56,0,0,
		0,1,0,1,0,106,11,65,103,101,110,116,101,115,
		32,58,32,0,176,23,0,48,72,0,95,255,112,0,
		12,1,72,106,4,32,62,32,0,72,176,23,0,48,
		73,0,95,255,112,0,12,1,72,6,4,2,0,112,
		1,73,36,163,0,48,74,0,95,1,112,0,32,36,
		3,48,75,0,48,39,0,95,1,112,0,112,0,32,
		21,3,36,165,0,176,76,0,48,26,0,48,39,0,
		95,1,112,0,112,0,48,36,0,95,1,112,0,106,
		8,99,65,103,101,110,116,101,0,12,3,80,2,36,
		167,0,48,77,0,95,1,112,0,31,28,95,2,48,
		72,0,95,1,112,0,16,29,166,2,95,2,48,73,
		0,95,1,112,0,34,29,153,2,36,173,0,48,78,
		0,48,22,0,95,1,112,0,112,0,73,36,175,0,
		48,79,0,48,22,0,95,1,112,0,95,2,112,1,
		73,36,176,0,48,80,0,48,22,0,95,1,112,0,
		176,81,0,95,2,48,82,0,95,1,112,0,12,2,
		112,1,73,36,178,0,48,83,0,48,22,0,95,1,
		112,0,48,26,0,48,39,0,95,1,112,0,112,0,
		112,1,73,36,179,0,48,84,0,48,22,0,95,1,
		112,0,176,85,0,48,26,0,48,39,0,95,1,112,
		0,112,0,48,36,0,95,1,112,0,12,2,112,1,
		73,36,181,0,48,86,0,48,39,0,95,1,112,0,
		112,0,122,34,28,32,36,182,0,48,87,0,48,22,
		0,95,1,112,0,48,88,0,48,39,0,95,1,112,
		0,112,0,112,1,73,25,30,36,184,0,48,87,0,
		48,22,0,95,1,112,0,48,89,0,48,39,0,95,
		1,112,0,112,0,112,1,73,36,187,0,48,86,0,
		48,39,0,95,1,112,0,112,0,122,34,28,44,36,
		188,0,48,90,0,48,22,0,95,1,112,0,176,91,
		0,48,88,0,48,39,0,95,1,112,0,112,0,48,
		44,0,95,1,112,0,12,2,112,1,73,25,42,36,
		190,0,48,90,0,48,22,0,95,1,112,0,176,92,
		0,48,89,0,48,39,0,95,1,112,0,112,0,48,
		42,0,95,1,112,0,12,2,112,1,73,36,193,0,
		48,93,0,48,22,0,95,1,112,0,48,94,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,194,0,
		48,95,0,48,22,0,95,1,112,0,48,96,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,195,0,
		48,97,0,48,22,0,95,1,112,0,48,98,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,196,0,
		48,99,0,48,22,0,95,1,112,0,48,100,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,197,0,
		48,101,0,48,22,0,95,1,112,0,48,102,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,198,0,
		48,103,0,48,22,0,95,1,112,0,48,104,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,199,0,
		48,105,0,48,22,0,95,1,112,0,48,106,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,200,0,
		48,107,0,48,22,0,95,1,112,0,48,108,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,201,0,
		48,109,0,48,22,0,95,1,112,0,48,110,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,202,0,
		48,111,0,48,22,0,95,1,112,0,48,112,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,203,0,
		48,113,0,48,22,0,95,1,112,0,48,114,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,204,0,
		48,115,0,48,22,0,95,1,112,0,48,116,0,48,
		39,0,95,1,112,0,112,0,112,1,73,36,206,0,
		48,117,0,48,22,0,95,1,112,0,112,0,73,36,
		210,0,48,118,0,48,39,0,95,1,112,0,112,0,
		73,36,212,0,48,119,0,48,62,0,95,1,112,0,
		48,120,0,48,39,0,95,1,112,0,112,0,112,1,
		73,26,213,252,36,216,0,48,119,0,48,62,0,95,
		1,112,0,48,63,0,48,39,0,95,1,112,0,112,
		0,112,1,73,36,218,0,48,65,0,48,64,0,95,
		1,112,0,112,0,73,36,220,0,48,57,0,48,58,
		0,95,1,112,0,112,0,73,36,222,0,48,63,0,
		48,22,0,95,1,112,0,112,0,121,15,110,7
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

