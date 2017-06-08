/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tinfage.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( INFDETAGE );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( MASUND );
HB_FUNC( TINFDETAGE );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFGEN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_STATIC( TINFDETAGE_CREATE );
HB_FUNC_STATIC( TINFDETAGE_OPENFILES );
HB_FUNC_STATIC( TINFDETAGE_CLOSEFILES );
HB_FUNC_STATIC( TINFDETAGE_LRESOURCE );
HB_FUNC_STATIC( TINFDETAGE_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TDATACENTER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LFACTURADO );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( ABS );
HB_FUNC_EXTERN( NUNITENT );
HB_FUNC_EXTERN( NNETLALBCLI );
HB_FUNC_EXTERN( ROUND );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TINFAGE )
{ "INFDETAGE", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( INFDETAGE )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "MASUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MASUND )}, NULL },
{ "CPICOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFDETAGE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFDETAGE )}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFGEN )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFDETAGE_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFDETAGE_CREATE )}, NULL },
{ "TINFDETAGE_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFDETAGE_OPENFILES )}, NULL },
{ "TINFDETAGE_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFDETAGE_CLOSEFILES )}, NULL },
{ "TINFDETAGE_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFDETAGE_LRESOURCE )}, NULL },
{ "TINFDETAGE_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFDETAGE_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OALBCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDATACENTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDATACENTER )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFAGEINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFRESINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CAGEORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CAGEDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LFACTURADO", {HB_FS_PUBLIC}, {HB_FUNCNAME( LFACTURADO )}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABS )}, NULL },
{ "NCANENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUNITENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( NUNITENT )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NNETLALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NNETLALBCLI )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ROUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROUND )}, NULL },
{ "LVTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTIPMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CVTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LRESUMEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCSUALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODSUALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DFECALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NUNDCAJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NUNDART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CREFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDESART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDETALLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NBASCOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCOMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTCOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUNDCAJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUNDART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBASCOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTCOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TINFAGE, ".\\.\\Prg\\Tinfage.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TINFAGE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TINFAGE )
   #include "hbiniseg.h"
#endif

HB_FUNC( INFDETAGE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,11,0,4,0,0,80,2,36,12,0,
		4,0,0,80,3,36,14,0,176,1,0,95,2,106,
		8,67,67,79,68,65,71,69,0,106,2,67,0,92,
		3,121,90,8,106,3,64,33,0,6,106,12,67,111,
		100,46,32,65,103,101,110,116,101,0,9,4,7,0,
		20,2,36,15,0,176,1,0,95,2,106,8,67,67,
		79,68,67,76,73,0,106,2,67,0,92,12,121,90,
		8,106,3,64,33,0,6,106,13,67,111,100,46,32,
		67,108,105,101,110,116,101,0,9,4,7,0,20,2,
		36,16,0,176,1,0,95,2,106,8,67,78,79,77,
		67,76,73,0,106,2,67,0,92,50,121,90,8,106,
		3,64,33,0,6,106,8,67,108,105,101,110,116,101,
		0,120,4,7,0,20,2,36,17,0,176,1,0,95,
		2,106,8,67,67,79,68,65,76,66,0,106,2,67,
		0,92,12,121,90,8,106,3,64,33,0,6,106,10,
		68,111,99,117,109,101,110,116,111,0,120,4,7,0,
		20,2,36,18,0,176,1,0,95,2,106,8,67,67,
		83,85,65,76,66,0,106,2,67,0,92,12,121,90,
		8,106,3,64,33,0,6,106,11,83,117,32,97,108,
		98,97,114,97,110,0,120,4,7,0,20,2,36,19,
		0,176,1,0,95,2,106,8,68,70,69,67,65,76,
		66,0,106,2,68,0,92,8,121,90,6,106,1,0,
		6,106,6,70,101,99,104,97,0,120,4,7,0,20,
		2,36,20,0,176,1,0,95,2,106,8,78,85,78,
		68,67,65,74,0,106,2,78,0,92,13,92,6,90,
		8,176,2,0,12,0,6,106,6,67,97,106,97,115,
		0,120,4,7,0,20,2,36,21,0,176,1,0,95,
		2,106,8,78,85,78,68,65,82,84,0,106,2,78,
		0,92,13,92,6,90,8,176,2,0,12,0,6,106,
		9,85,110,105,100,97,100,101,115,0,120,4,7,0,
		20,2,36,22,0,176,1,0,95,2,106,8,67,82,
		69,70,65,82,84,0,106,2,67,0,92,14,121,90,
		8,106,3,64,33,0,6,106,14,67,111,100,46,32,
		65,114,116,237,99,117,108,111,0,120,4,7,0,20,
		2,36,23,0,176,1,0,95,2,106,8,67,68,69,
		83,65,82,84,0,106,2,67,0,92,50,121,90,8,
		106,3,64,33,0,6,106,9,65,114,116,237,99,117,
		108,111,0,120,4,7,0,20,2,36,24,0,176,1,
		0,95,2,106,8,67,67,79,68,77,79,86,0,106,
		2,67,0,92,2,121,90,8,106,3,64,33,0,6,
		106,5,77,111,118,46,0,120,4,7,0,20,2,36,
		25,0,176,1,0,95,2,106,8,78,66,65,83,67,
		79,77,0,106,2,78,0,92,13,121,89,17,0,0,
		0,1,0,1,0,48,3,0,95,255,112,0,6,106,
		5,66,97,115,101,0,120,4,7,0,20,2,36,26,
		0,176,1,0,95,2,106,8,78,67,79,77,65,71,
		69,0,106,2,78,0,92,4,122,89,17,0,0,0,
		1,0,1,0,48,3,0,95,255,112,0,6,106,10,
		37,67,111,109,105,115,105,243,110,0,120,4,7,0,
		20,2,36,27,0,176,1,0,95,2,106,8,78,84,
		79,84,67,79,77,0,106,2,78,0,92,13,121,89,
		17,0,0,0,1,0,1,0,48,3,0,95,255,112,
		0,6,106,9,67,111,109,105,115,105,243,110,0,120,
		4,7,0,20,2,36,29,0,176,1,0,95,3,106,
		8,67,67,79,68,65,71,69,0,106,18,67,67,79,
		68,65,71,69,32,43,32,67,82,69,70,65,82,84,
		0,4,2,0,20,2,36,31,0,48,4,0,176,5,
		0,12,0,106,34,73,110,102,111,114,109,101,32,100,
		101,32,108,105,113,117,105,100,97,99,105,243,110,32,
		100,101,32,97,103,101,110,116,101,115,0,95,2,95,
		3,106,6,48,49,48,52,51,0,112,4,80,1,36,
		33,0,48,6,0,95,1,89,22,0,0,0,1,0,
		1,0,48,7,0,48,8,0,95,255,112,0,112,0,
		6,89,70,0,0,0,1,0,1,0,106,10,65,103,
		101,110,116,101,32,58,32,0,176,9,0,48,7,0,
		48,8,0,95,255,112,0,112,0,12,1,72,106,2,
		45,0,72,176,10,0,48,7,0,48,8,0,95,255,
		112,0,112,0,48,11,0,95,255,112,0,12,2,72,
		6,90,21,106,16,84,111,116,97,108,32,97,103,101,
		110,116,101,46,46,46,0,6,112,3,73,36,34,0,
		48,12,0,95,1,112,0,73,36,35,0,48,13,0,
		95,1,112,0,73,36,37,0,48,14,0,95,1,112,
		0,73,36,39,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TINFDETAGE )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,121,0,36,43,0,103,2,0,100,8,
		29,195,1,176,15,0,104,2,0,12,1,29,184,1,
		166,122,1,0,122,80,1,48,4,0,176,16,0,12,
		0,106,11,84,73,110,102,68,101,116,65,103,101,0,
		108,17,4,1,0,108,5,112,3,80,2,36,45,0,
		48,18,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,9,111,65,108,
		98,67,108,105,84,0,4,1,0,9,112,5,73,36,
		46,0,48,18,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,9,111,
		65,108,98,67,108,105,76,0,4,1,0,9,112,5,
		73,36,47,0,48,18,0,95,2,100,176,19,0,92,
		2,12,1,95,1,121,72,121,72,121,72,106,5,99,
		86,116,97,0,4,1,0,9,112,5,73,36,48,0,
		48,18,0,95,2,106,6,76,79,71,73,67,0,100,
		95,1,121,72,121,72,121,72,106,5,108,86,116,97,
		0,4,1,0,9,112,5,73,36,50,0,48,20,0,
		95,2,106,7,67,114,101,97,116,101,0,108,21,95,
		1,121,72,121,72,121,72,112,3,73,36,52,0,48,
		20,0,95,2,106,10,79,112,101,110,70,105,108,101,
		115,0,108,22,95,1,121,72,121,72,121,72,112,3,
		73,36,54,0,48,20,0,95,2,106,11,67,108,111,
		115,101,70,105,108,101,115,0,108,23,95,1,121,72,
		121,72,121,72,112,3,73,36,56,0,48,20,0,95,
		2,106,10,108,82,101,115,111,117,114,99,101,0,108,
		24,95,1,121,72,121,72,121,72,112,3,73,36,58,
		0,48,20,0,95,2,106,10,108,71,101,110,101,114,
		97,116,101,0,108,25,95,1,121,72,121,72,121,72,
		112,3,73,36,60,0,48,26,0,95,2,112,0,73,
		167,14,0,0,176,27,0,104,2,0,95,2,20,2,
		168,48,28,0,95,2,112,0,80,3,176,29,0,95,
		3,106,10,73,110,105,116,67,108,97,115,115,0,12,
		2,28,12,48,30,0,95,3,164,146,1,0,73,95,
		3,110,7,48,28,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFDETAGE_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,64,0,102,80,1,36,66,0,48,31,
		0,95,1,106,8,67,67,79,68,65,71,69,0,106,
		2,67,0,92,3,121,90,8,106,3,64,33,0,6,
		106,12,67,111,100,46,32,65,103,101,110,116,101,0,
		9,112,7,73,36,67,0,48,31,0,95,1,106,8,
		67,67,79,68,67,76,73,0,106,2,67,0,92,12,
		121,90,8,106,3,64,33,0,6,106,13,67,111,100,
		46,32,67,108,105,101,110,116,101,0,9,112,7,73,
		36,68,0,48,31,0,95,1,106,8,67,78,79,77,
		67,76,73,0,106,2,67,0,92,50,121,90,8,106,
		3,64,33,0,6,106,8,67,108,105,101,110,116,101,
		0,120,112,7,73,36,69,0,48,31,0,95,1,106,
		8,67,67,79,68,65,76,66,0,106,2,67,0,92,
		12,121,90,8,106,3,64,33,0,6,106,10,68,111,
		99,117,109,101,110,116,111,0,120,112,7,73,36,70,
		0,48,31,0,95,1,106,8,67,67,83,85,65,76,
		66,0,106,2,67,0,92,12,121,90,8,106,3,64,
		33,0,6,106,11,83,117,32,97,108,98,97,114,97,
		110,0,120,112,7,73,36,71,0,48,31,0,95,1,
		106,8,68,70,69,67,65,76,66,0,106,2,68,0,
		92,8,121,90,6,106,1,0,6,106,6,70,101,99,
		104,97,0,120,112,7,73,36,72,0,48,31,0,95,
		1,106,8,78,85,78,68,67,65,74,0,106,2,78,
		0,92,13,92,6,90,8,176,2,0,12,0,6,106,
		6,67,97,106,97,115,0,120,112,7,73,36,73,0,
		48,31,0,95,1,106,8,78,85,78,68,65,82,84,
		0,106,2,78,0,92,13,92,6,90,8,176,2,0,
		12,0,6,106,9,85,110,105,100,97,100,101,115,0,
		120,112,7,73,36,74,0,48,31,0,95,1,106,8,
		67,82,69,70,65,82,84,0,106,2,67,0,92,14,
		121,90,8,106,3,64,33,0,6,106,14,67,111,100,
		46,32,65,114,116,237,99,117,108,111,0,120,112,7,
		73,36,75,0,48,31,0,95,1,106,8,67,68,69,
		83,65,82,84,0,106,2,67,0,92,50,121,90,8,
		106,3,64,33,0,6,106,9,65,114,116,237,99,117,
		108,111,0,120,112,7,73,36,76,0,48,31,0,95,
		1,106,8,67,67,79,68,77,79,86,0,106,2,67,
		0,92,2,121,90,8,106,3,64,33,0,6,106,5,
		77,111,118,46,0,120,112,7,73,36,78,0,48,32,
		0,95,1,106,8,67,67,79,68,65,71,69,0,106,
		18,67,67,79,68,65,71,69,32,43,32,67,82,69,
		70,65,82,84,0,112,2,73,36,80,0,48,6,0,
		95,1,89,22,0,0,0,1,0,1,0,48,7,0,
		48,8,0,95,255,112,0,112,0,6,89,70,0,0,
		0,1,0,1,0,106,10,65,103,101,110,116,101,32,
		58,32,0,176,9,0,48,7,0,48,8,0,95,255,
		112,0,112,0,12,1,72,106,2,45,0,72,176,10,
		0,48,7,0,48,8,0,95,255,112,0,112,0,48,
		11,0,95,255,112,0,12,2,72,6,90,21,106,16,
		84,111,116,97,108,32,97,103,101,110,116,101,46,46,
		46,0,6,112,3,73,36,82,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFDETAGE_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,90,0,120,80,3,36,96,0,176,33,
		0,89,15,0,1,0,0,0,176,34,0,95,1,12,
		1,6,12,1,80,1,36,97,0,113,168,0,0,36,
		99,0,48,35,0,102,48,36,0,176,37,0,12,0,
		112,0,112,1,73,36,100,0,48,38,0,48,36,0,
		102,112,0,106,8,67,67,79,68,65,71,69,0,112,
		1,73,36,102,0,48,39,0,102,48,40,0,176,41,
		0,106,12,65,76,66,67,76,73,76,46,68,66,70,
		0,100,12,2,106,12,65,76,66,67,76,73,76,46,
		68,66,70,0,100,176,42,0,12,0,100,176,43,0,
		12,0,9,120,9,9,112,9,112,1,73,48,44,0,
		48,45,0,102,112,0,106,12,65,76,66,67,76,73,
		76,46,67,68,88,0,112,1,73,48,44,0,48,45,
		0,102,112,0,112,0,73,48,46,0,48,45,0,102,
		112,0,112,0,73,114,77,0,0,36,104,0,115,80,
		2,36,106,0,9,80,3,36,108,0,176,47,0,106,
		41,73,109,112,111,115,105,98,108,101,32,97,98,114,
		105,114,32,116,111,100,97,115,32,108,97,115,32,98,
		97,115,101,115,32,100,101,32,100,97,116,111,115,0,
		20,1,36,109,0,48,48,0,102,112,0,73,36,113,
		0,176,33,0,95,1,20,1,36,115,0,95,3,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFDETAGE_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,121,0,176,49,0,48,36,0,102,112,0,12,1,
		31,30,48,50,0,48,36,0,102,112,0,112,0,28,
		17,36,122,0,48,14,0,48,36,0,102,112,0,112,
		0,73,36,125,0,176,49,0,48,45,0,102,112,0,
		12,1,31,30,48,50,0,48,45,0,102,112,0,112,
		0,28,17,36,126,0,48,14,0,48,45,0,102,112,
		0,112,0,73,36,129,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFDETAGE_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,138,0,102,80,2,36,140,0,48,51,
		0,102,106,12,73,78,70,95,71,69,78,95,65,71,
		69,0,112,1,31,8,36,141,0,9,110,7,36,148,
		0,48,52,0,102,92,70,92,80,92,90,92,100,112,
		4,73,36,154,0,48,53,0,102,92,110,92,120,93,
		130,0,93,140,0,112,4,73,36,156,0,48,54,0,
		102,112,0,73,36,162,0,48,55,0,48,56,0,102,
		112,0,48,57,0,48,36,0,102,112,0,112,0,112,
		1,73,36,164,0,48,58,0,102,112,0,73,36,166,
		0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFDETAGE_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,7,0,36,180,0,122,80,6,36,181,0,122,80,
		7,36,183,0,48,59,0,48,60,0,102,112,0,112,
		0,73,36,185,0,48,61,0,48,8,0,102,112,0,
		112,0,73,36,187,0,48,62,0,48,36,0,102,112,
		0,48,63,0,102,112,0,112,1,73,36,188,0,48,
		64,0,48,36,0,102,112,0,112,0,73,36,193,0,
		48,7,0,48,36,0,102,112,0,112,0,48,63,0,
		102,112,0,16,29,126,4,48,7,0,48,36,0,102,
		112,0,112,0,48,65,0,102,112,0,34,29,105,4,
		176,66,0,48,36,0,102,112,0,12,1,29,91,4,
		48,67,0,48,36,0,102,112,0,112,0,32,77,4,
		36,196,0,48,68,0,48,36,0,102,112,0,112,0,
		48,69,0,102,112,0,16,29,15,4,48,68,0,48,
		36,0,102,112,0,112,0,48,70,0,102,112,0,34,
		29,250,3,36,202,0,48,62,0,48,45,0,102,112,
		0,48,71,0,48,36,0,102,112,0,112,0,176,72,
		0,48,73,0,48,36,0,102,112,0,112,0,12,1,
		72,48,74,0,48,36,0,102,112,0,112,0,72,112,
		1,73,36,203,0,48,64,0,48,45,0,102,112,0,
		112,0,73,36,206,0,48,71,0,48,36,0,102,112,
		0,112,0,176,72,0,48,73,0,48,36,0,102,112,
		0,112,0,12,1,72,48,74,0,48,36,0,102,112,
		0,112,0,72,48,71,0,48,45,0,102,112,0,112,
		0,176,72,0,48,73,0,48,45,0,102,112,0,112,
		0,12,1,72,48,74,0,48,45,0,102,112,0,112,
		0,72,8,29,93,3,48,67,0,48,36,0,102,112,
		0,112,0,32,79,3,36,209,0,48,75,0,48,45,
		0,102,112,0,112,0,48,76,0,102,112,0,16,29,
		32,3,48,75,0,48,45,0,102,112,0,112,0,48,
		77,0,102,112,0,34,29,11,3,36,211,0,176,78,
		0,48,79,0,48,45,0,102,112,0,112,0,12,1,
		95,6,65,80,1,36,212,0,176,78,0,176,80,0,
		48,81,0,48,45,0,102,112,0,112,0,12,1,12,
		1,95,6,65,80,2,36,213,0,176,78,0,48,82,
		0,48,45,0,102,112,0,112,0,12,1,95,7,65,
		80,3,36,214,0,176,78,0,176,83,0,48,81,0,
		48,36,0,102,112,0,112,0,48,81,0,48,45,0,
		102,112,0,112,0,48,84,0,102,112,0,48,85,0,
		102,112,0,48,86,0,102,112,0,12,5,12,1,95,
		7,65,80,4,36,215,0,176,78,0,176,87,0,95,
		4,48,82,0,48,45,0,102,112,0,112,0,65,92,
		100,18,48,85,0,102,112,0,12,2,12,1,95,7,
		65,80,5,36,218,0,48,88,0,102,112,0,28,35,
		48,89,0,48,45,0,102,112,0,112,0,48,90,0,
		102,112,0,8,31,24,176,49,0,48,90,0,102,112,
		0,12,1,31,11,48,88,0,102,112,0,32,38,2,
		36,220,0,48,91,0,102,112,0,28,39,48,62,0,
		48,8,0,102,112,0,48,7,0,48,36,0,102,112,
		0,112,0,48,75,0,48,45,0,102,112,0,112,0,
		72,112,1,32,127,1,36,222,0,48,92,0,48,8,
		0,102,112,0,112,0,73,36,223,0,48,93,0,48,
		8,0,102,112,0,48,7,0,48,36,0,102,112,0,
		112,0,112,1,73,36,224,0,48,94,0,48,8,0,
		102,112,0,48,95,0,48,36,0,102,112,0,112,0,
		112,1,73,36,225,0,48,96,0,48,8,0,102,112,
		0,48,97,0,48,36,0,102,112,0,112,0,112,1,
		73,36,226,0,48,98,0,48,8,0,102,112,0,48,
		71,0,48,36,0,102,112,0,112,0,176,72,0,48,
		73,0,48,36,0,102,112,0,112,0,12,1,72,48,
		74,0,48,36,0,102,112,0,112,0,72,112,1,73,
		36,227,0,48,99,0,48,8,0,102,112,0,48,100,
		0,48,36,0,102,112,0,112,0,112,1,73,36,228,
		0,48,101,0,48,8,0,102,112,0,48,68,0,48,
		36,0,102,112,0,112,0,112,1,73,36,229,0,48,
		102,0,48,8,0,102,112,0,95,1,112,1,73,36,
		230,0,48,103,0,48,8,0,102,112,0,95,2,112,
		1,73,36,231,0,48,104,0,48,8,0,102,112,0,
		48,75,0,48,45,0,102,112,0,112,0,112,1,73,
		36,232,0,48,105,0,48,8,0,102,112,0,48,106,
		0,48,45,0,102,112,0,112,0,112,1,73,36,233,
		0,48,107,0,48,8,0,102,112,0,48,89,0,48,
		45,0,102,112,0,112,0,112,1,73,36,234,0,48,
		108,0,48,8,0,102,112,0,95,4,112,1,73,36,
		235,0,48,109,0,48,8,0,102,112,0,95,3,112,
		1,73,36,236,0,48,110,0,48,8,0,102,112,0,
		95,5,112,1,73,36,237,0,48,111,0,48,8,0,
		102,112,0,112,0,73,25,121,36,241,0,48,102,0,
		48,8,0,102,112,0,21,48,112,0,163,0,112,0,
		95,1,72,112,1,73,36,242,0,48,103,0,48,8,
		0,102,112,0,21,48,113,0,163,0,112,0,95,2,
		72,112,1,73,36,243,0,48,108,0,48,8,0,102,
		112,0,21,48,114,0,163,0,112,0,95,4,72,112,
		1,73,36,244,0,48,110,0,48,8,0,102,112,0,
		21,48,115,0,163,0,112,0,95,5,72,112,1,73,
		36,245,0,48,111,0,48,8,0,102,112,0,112,0,
		73,36,253,0,48,64,0,48,116,0,48,45,0,102,
		112,0,112,0,112,0,73,26,82,252,36,3,1,48,
		64,0,48,116,0,48,36,0,102,112,0,112,0,112,
		0,73,36,5,1,48,117,0,48,56,0,102,112,0,
		112,0,73,26,112,251,36,9,1,48,118,0,48,60,
		0,102,112,0,112,0,73,36,11,1,48,57,0,48,
		8,0,102,112,0,112,0,121,15,110,7
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

