/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\oAcuACom.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OACUACOM );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TPRVALM );
HB_FUNC_STATIC( OACUACOM_CREATE );
HB_FUNC_STATIC( OACUACOM_OPENFILES );
HB_FUNC_STATIC( OACUACOM_CLOSEFILES );
HB_FUNC_STATIC( OACUACOM_LRESOURCE );
HB_FUNC_STATIC( OACUACOM_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATDAT );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( AITMCOMPRAS );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NIMPLALBPRV );
HB_FUNC_EXTERN( ATOTFACPRV );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( NIMPLFACPRV );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OACUACOM )
{ "OACUACOM", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OACUACOM )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TPRVALM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TPRVALM )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OACUACOM_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUACOM_CREATE )}, NULL },
{ "OACUACOM_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUACOM_OPENFILES )}, NULL },
{ "OACUACOM_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUACOM_CLOSEFILES )}, NULL },
{ "OACUACOM_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUACOM_LRESOURCE )}, NULL },
{ "OACUACOM_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUACOM_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACUCREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OALBPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "OALBPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OALBPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMCOMPRAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMCOMPRAS )}, NULL },
{ "ODEFALMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "LALLALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CALMORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALMDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLALBPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLALBPRV )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LFACGAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATOTFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATOTFACPRV )}, NULL },
{ "NNUMFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDIVINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NNUMUNI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NIMPART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NIMPTOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NIVATOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTFIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NNUMUNI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPTOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPREMED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIVATOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTFIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLFACPRV )}, NULL },
{ "ADDFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INCLUYECERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OACUACOM, ".\\.\\Prg\\oAcuACom.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OACUACOM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OACUACOM )
   #include "hbiniseg.h"
#endif

HB_FUNC( OACUACOM )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,134,0,36,8,0,103,2,0,100,8,
		29,78,2,176,1,0,104,2,0,12,1,29,67,2,
		166,5,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,79,65,99,117,65,67,111,109,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,7,79,66,74,69,67,84,0,100,95,
		1,121,72,121,72,121,72,106,8,111,68,98,102,65,
		114,116,0,4,1,0,9,112,5,73,36,11,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,9,111,65,108,98,
		80,114,118,84,0,4,1,0,9,112,5,73,36,12,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,65,
		108,98,80,114,118,76,0,4,1,0,9,112,5,73,
		36,13,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,9,
		111,70,97,99,80,114,118,84,0,4,1,0,9,112,
		5,73,36,14,0,48,5,0,95,2,106,7,79,66,
		74,69,67,84,0,100,95,1,121,72,121,72,121,72,
		106,9,111,70,97,99,80,114,118,76,0,4,1,0,
		9,112,5,73,36,15,0,48,5,0,95,2,106,7,
		79,66,74,69,67,84,0,100,95,1,121,72,121,72,
		121,72,106,9,111,70,97,99,80,114,118,80,0,4,
		1,0,9,112,5,73,36,16,0,48,5,0,95,2,
		106,7,79,66,74,69,67,84,0,100,95,1,121,72,
		121,72,121,72,106,8,111,68,98,102,73,118,97,0,
		4,1,0,9,112,5,73,36,18,0,48,6,0,95,
		2,106,7,67,114,101,97,116,101,0,108,7,95,1,
		121,72,121,72,121,72,112,3,73,36,20,0,48,6,
		0,95,2,106,10,79,112,101,110,70,105,108,101,115,
		0,108,8,95,1,121,72,121,72,121,72,112,3,73,
		36,22,0,48,6,0,95,2,106,11,67,108,111,115,
		101,70,105,108,101,115,0,108,9,95,1,121,72,121,
		72,121,72,112,3,73,36,24,0,48,6,0,95,2,
		106,10,108,82,101,115,111,117,114,99,101,0,108,10,
		95,1,121,72,121,72,121,72,112,3,73,36,26,0,
		48,6,0,95,2,106,10,108,71,101,110,101,114,97,
		116,101,0,108,11,95,1,121,72,121,72,121,72,112,
		3,73,36,28,0,48,12,0,95,2,112,0,73,167,
		14,0,0,176,13,0,104,2,0,95,2,20,2,168,
		48,14,0,95,2,112,0,80,3,176,15,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,16,0,95,3,164,146,1,0,73,95,3,
		110,7,48,14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUACOM_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,34,0,48,17,0,102,112,0,73,36,36,0,48,
		18,0,102,106,8,99,67,111,100,65,108,109,0,106,
		8,99,67,111,100,65,108,109,0,112,2,73,36,38,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUACOM_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,44,0,120,80,1,36,45,0,176,19,
		0,89,15,0,1,0,0,0,176,20,0,95,1,12,
		1,6,12,1,80,2,36,47,0,113,45,3,0,36,
		49,0,48,21,0,102,48,22,0,176,23,0,106,13,
		65,82,84,73,67,85,76,79,46,68,66,70,0,100,
		12,2,106,13,65,82,84,73,67,85,76,79,46,68,
		66,70,0,100,176,24,0,12,0,100,176,25,0,12,
		0,9,120,9,9,112,9,112,1,73,48,26,0,48,
		27,0,102,112,0,106,13,65,82,84,73,67,85,76,
		79,46,67,68,88,0,112,1,73,48,26,0,48,27,
		0,102,112,0,112,0,73,48,28,0,48,27,0,102,
		112,0,112,0,73,36,51,0,48,29,0,102,48,22,
		0,176,23,0,106,13,65,76,66,80,82,79,86,84,
		46,68,66,70,0,100,12,2,106,13,65,76,66,80,
		82,79,86,84,46,68,66,70,0,100,176,24,0,12,
		0,100,176,30,0,12,0,9,120,9,9,112,9,112,
		1,73,48,26,0,48,31,0,102,112,0,106,13,65,
		76,66,80,82,79,86,84,46,67,68,88,0,112,1,
		73,48,26,0,48,31,0,102,112,0,112,0,73,48,
		28,0,48,31,0,102,112,0,112,0,73,36,53,0,
		48,32,0,102,48,22,0,176,23,0,106,13,65,76,
		66,80,82,79,86,76,46,68,66,70,0,100,12,2,
		106,13,65,76,66,80,82,79,86,76,46,68,66,70,
		0,100,176,24,0,12,0,100,176,30,0,12,0,9,
		120,9,9,112,9,112,1,73,48,26,0,48,33,0,
		102,112,0,106,13,65,76,66,80,82,79,86,76,46,
		67,68,88,0,112,1,73,48,26,0,48,33,0,102,
		112,0,112,0,73,48,28,0,48,33,0,102,112,0,
		112,0,73,36,55,0,48,34,0,102,48,22,0,176,
		23,0,106,12,70,65,67,80,82,86,84,46,68,66,
		70,0,100,12,2,106,12,70,65,67,80,82,86,84,
		46,68,66,70,0,100,176,24,0,12,0,100,176,30,
		0,12,0,9,120,9,9,112,9,112,1,73,48,26,
		0,48,35,0,102,112,0,106,12,70,65,67,80,82,
		86,84,46,67,68,88,0,112,1,73,48,26,0,48,
		35,0,102,112,0,112,0,73,48,28,0,48,35,0,
		102,112,0,112,0,73,36,57,0,48,36,0,102,48,
		22,0,176,23,0,106,12,70,65,67,80,82,86,76,
		46,68,66,70,0,100,12,2,106,12,70,65,67,80,
		82,86,76,46,68,66,70,0,100,176,24,0,12,0,
		100,176,30,0,12,0,9,120,9,9,112,9,112,1,
		73,48,26,0,48,37,0,102,112,0,106,12,70,65,
		67,80,82,86,76,46,67,68,88,0,112,1,73,48,
		26,0,48,37,0,102,112,0,112,0,73,48,28,0,
		48,37,0,102,112,0,112,0,73,36,59,0,48,38,
		0,102,48,22,0,176,23,0,106,12,70,65,67,80,
		82,86,80,46,68,66,70,0,100,12,2,106,12,70,
		65,67,80,82,86,80,46,68,66,70,0,100,176,24,
		0,12,0,100,176,30,0,12,0,9,120,9,9,112,
		9,112,1,73,48,26,0,48,39,0,102,112,0,106,
		12,70,65,67,80,82,86,80,46,67,68,88,0,112,
		1,73,48,26,0,48,39,0,102,112,0,112,0,73,
		48,28,0,48,39,0,102,112,0,112,0,73,36,61,
		0,48,40,0,102,48,22,0,176,23,0,106,9,84,
		73,86,65,46,68,66,70,0,100,12,2,106,9,84,
		73,86,65,46,68,66,70,0,100,176,24,0,12,0,
		100,176,41,0,12,0,9,120,9,9,112,9,112,1,
		73,48,26,0,48,42,0,102,112,0,106,9,84,73,
		86,65,46,67,68,88,0,112,1,73,48,26,0,48,
		42,0,102,112,0,112,0,73,48,28,0,48,42,0,
		102,112,0,112,0,73,114,76,0,0,36,63,0,115,
		73,36,65,0,176,43,0,106,41,73,109,112,111,115,
		105,98,108,101,32,97,98,114,105,114,32,116,111,100,
		97,115,32,108,97,115,32,98,97,115,101,115,32,100,
		101,32,100,97,116,111,115,0,20,1,36,66,0,48,
		44,0,102,112,0,73,36,67,0,9,80,1,36,71,
		0,176,19,0,95,2,20,1,36,73,0,95,1,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUACOM_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,79,0,176,45,0,48,31,0,102,112,0,12,1,
		31,30,48,46,0,48,31,0,102,112,0,112,0,28,
		17,36,80,0,48,47,0,48,31,0,102,112,0,112,
		0,73,36,83,0,176,45,0,48,33,0,102,112,0,
		12,1,31,30,48,46,0,48,33,0,102,112,0,112,
		0,28,17,36,84,0,48,47,0,48,33,0,102,112,
		0,112,0,73,36,87,0,176,45,0,48,35,0,102,
		112,0,12,1,31,30,48,46,0,48,35,0,102,112,
		0,112,0,28,17,36,88,0,48,47,0,48,35,0,
		102,112,0,112,0,73,36,91,0,176,45,0,48,37,
		0,102,112,0,12,1,31,30,48,46,0,48,37,0,
		102,112,0,112,0,28,17,36,92,0,48,47,0,48,
		37,0,102,112,0,112,0,73,36,95,0,176,45,0,
		48,39,0,102,112,0,12,1,31,30,48,46,0,48,
		39,0,102,112,0,112,0,28,17,36,96,0,48,47,
		0,48,39,0,102,112,0,112,0,73,36,99,0,176,
		45,0,48,27,0,102,112,0,12,1,31,30,48,46,
		0,48,27,0,102,112,0,112,0,28,17,36,100,0,
		48,47,0,48,27,0,102,112,0,112,0,73,36,103,
		0,176,45,0,48,42,0,102,112,0,12,1,31,30,
		48,46,0,48,42,0,102,112,0,112,0,28,17,36,
		104,0,48,47,0,48,42,0,102,112,0,112,0,73,
		36,107,0,48,29,0,102,100,112,1,73,36,108,0,
		48,32,0,102,100,112,1,73,36,109,0,48,34,0,
		102,100,112,1,73,36,110,0,48,36,0,102,100,112,
		1,73,36,111,0,48,38,0,102,100,112,1,73,36,
		112,0,48,21,0,102,100,112,1,73,36,113,0,48,
		40,0,102,100,112,1,73,36,115,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUACOM_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,121,0,48,48,0,102,106,10,73,78,
		70,65,67,85,65,76,77,0,112,1,31,8,36,122,
		0,9,110,7,36,125,0,48,49,0,102,176,50,0,
		12,0,48,31,0,102,112,0,48,35,0,102,112,0,
		4,2,0,120,112,3,73,36,127,0,48,51,0,102,
		92,70,92,80,92,90,92,100,93,188,2,112,5,31,
		8,36,128,0,9,110,7,36,131,0,48,52,0,102,
		112,0,73,36,133,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUACOM_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,140,0,102,80,1,36,142,0,106,1,
		0,80,2,36,143,0,106,1,0,80,3,36,144,0,
		4,0,0,80,4,36,146,0,48,53,0,48,54,0,
		95,1,112,0,112,0,73,36,147,0,48,55,0,48,
		56,0,95,1,112,0,112,0,73,36,148,0,48,57,
		0,48,58,0,95,1,112,0,112,0,73,36,152,0,
		48,59,0,95,1,90,29,106,13,70,101,99,104,97,
		32,32,32,32,32,58,32,0,176,60,0,176,61,0,
		12,0,12,1,72,6,89,58,0,0,0,1,0,1,
		0,106,13,80,101,114,105,111,100,111,32,32,32,58,
		32,0,176,60,0,48,62,0,95,255,112,0,12,1,
		72,106,4,32,62,32,0,72,176,60,0,48,63,0,
		95,255,112,0,12,1,72,6,89,77,0,0,0,1,
		0,1,0,106,13,65,108,109,97,99,233,110,32,32,
		32,58,32,0,48,64,0,95,255,112,0,28,12,106,
		6,84,111,100,111,115,0,25,34,176,65,0,48,66,
		0,95,255,112,0,12,1,106,4,32,62,32,0,72,
		176,65,0,48,67,0,95,255,112,0,12,1,72,72,
		6,4,3,0,112,1,73,36,154,0,48,68,0,48,
		31,0,95,1,112,0,106,8,100,70,101,99,65,108,
		98,0,112,1,73,36,155,0,48,68,0,48,33,0,
		95,1,112,0,106,8,110,78,117,109,65,108,98,0,
		112,1,73,36,157,0,106,37,33,108,70,97,99,116,
		117,114,97,100,111,32,46,97,110,100,46,32,100,70,
		101,99,65,108,98,32,62,61,32,67,116,111,100,40,
		32,34,0,176,60,0,48,62,0,95,1,112,0,12,
		1,72,106,29,34,32,41,32,46,97,110,100,46,32,
		100,70,101,99,65,108,98,32,60,61,32,67,116,111,
		100,40,32,34,0,72,176,60,0,48,63,0,95,1,
		112,0,12,1,72,106,4,34,32,41,0,72,80,2,
		36,159,0,176,45,0,48,69,0,48,70,0,95,1,
		112,0,112,0,12,1,31,32,36,160,0,96,2,0,
		106,8,32,46,97,110,100,46,32,0,48,69,0,48,
		70,0,95,1,112,0,112,0,72,135,36,163,0,48,
		18,0,48,31,0,95,1,112,0,176,71,0,12,0,
		176,72,0,48,73,0,48,31,0,95,1,112,0,112,
		0,12,1,48,74,0,48,31,0,95,1,112,0,112,
		0,95,2,100,100,100,100,100,100,100,120,112,12,73,
		36,165,0,48,75,0,48,76,0,95,1,112,0,106,
		21,80,114,111,99,101,115,97,110,100,111,32,97,108,
		98,97,114,97,110,101,115,0,112,1,73,36,166,0,
		48,77,0,48,76,0,95,1,112,0,48,78,0,48,
		31,0,95,1,112,0,112,0,112,1,73,36,168,0,
		48,64,0,95,1,112,0,31,79,36,169,0,106,13,
		99,65,108,109,76,105,110,32,62,61,32,34,0,176,
		79,0,48,66,0,95,1,112,0,12,1,72,106,21,
		34,32,46,97,110,100,46,32,99,65,108,109,76,105,
		110,32,60,61,32,34,0,72,176,79,0,48,67,0,
		95,1,112,0,12,1,72,106,2,34,0,72,80,3,
		25,13,36,171,0,106,4,46,116,46,0,80,3,36,
		174,0,48,18,0,48,33,0,95,1,112,0,176,71,
		0,12,0,176,72,0,48,73,0,48,33,0,95,1,
		112,0,112,0,12,1,48,74,0,48,33,0,95,1,
		112,0,112,0,176,80,0,95,3,12,1,100,100,100,
		100,100,100,100,120,112,12,73,36,176,0,48,81,0,
		48,31,0,95,1,112,0,112,0,73,36,178,0,48,
		82,0,95,1,112,0,32,107,1,48,83,0,48,31,
		0,95,1,112,0,112,0,32,92,1,36,180,0,176,
		84,0,48,85,0,48,31,0,95,1,112,0,112,0,
		48,86,0,95,1,112,0,12,2,29,15,1,36,182,
		0,48,87,0,48,33,0,95,1,112,0,48,85,0,
		48,31,0,95,1,112,0,112,0,176,88,0,48,89,
		0,48,31,0,95,1,112,0,112,0,12,1,72,48,
		90,0,48,31,0,95,1,112,0,112,0,72,112,1,
		29,210,0,36,184,0,48,85,0,48,31,0,95,1,
		112,0,112,0,176,88,0,48,89,0,48,31,0,95,
		1,112,0,112,0,12,1,72,48,90,0,48,31,0,
		95,1,112,0,112,0,72,48,85,0,48,33,0,95,
		1,112,0,112,0,176,88,0,48,89,0,48,33,0,
		95,1,112,0,112,0,12,1,72,48,90,0,48,33,
		0,95,1,112,0,112,0,72,8,28,117,48,83,0,
		48,33,0,95,1,112,0,112,0,31,103,36,186,0,
		48,91,0,95,1,112,0,28,60,176,92,0,48,93,
		0,48,31,0,95,1,112,0,112,0,48,93,0,48,
		33,0,95,1,112,0,112,0,48,94,0,95,1,112,
		0,48,95,0,95,1,112,0,48,96,0,95,1,112,
		0,100,100,120,120,12,9,121,8,31,14,36,188,0,
		48,97,0,95,1,120,112,1,73,36,192,0,48,98,
		0,48,33,0,95,1,112,0,112,0,73,26,52,255,
		36,200,0,48,98,0,48,31,0,95,1,112,0,112,
		0,73,36,202,0,48,99,0,48,76,0,95,1,112,
		0,48,100,0,48,31,0,95,1,112,0,112,0,112,
		1,73,26,142,254,36,206,0,48,101,0,48,31,0,
		95,1,112,0,176,71,0,12,0,176,72,0,48,73,
		0,48,31,0,95,1,112,0,112,0,12,1,112,2,
		73,36,207,0,48,101,0,48,33,0,95,1,112,0,
		176,71,0,12,0,176,72,0,48,73,0,48,33,0,
		95,1,112,0,112,0,12,1,112,2,73,36,211,0,
		48,68,0,48,35,0,95,1,112,0,106,8,100,70,
		101,99,70,97,99,0,112,1,73,36,212,0,48,68,
		0,48,37,0,95,1,112,0,106,8,110,78,117,109,
		70,97,99,0,112,1,73,36,214,0,106,19,100,70,
		101,99,70,97,99,32,62,61,32,67,116,111,100,40,
		32,34,0,176,60,0,48,62,0,95,1,112,0,12,
		1,72,106,29,34,32,41,32,46,97,110,100,46,32,
		100,70,101,99,70,97,99,32,60,61,32,67,116,111,
		100,40,32,34,0,72,176,60,0,48,63,0,95,1,
		112,0,12,1,72,106,4,34,32,41,0,72,80,2,
		36,216,0,176,45,0,48,69,0,48,70,0,95,1,
		112,0,112,0,12,1,31,32,36,217,0,96,2,0,
		106,8,32,46,97,110,100,46,32,0,48,69,0,48,
		70,0,95,1,112,0,112,0,72,135,36,220,0,48,
		18,0,48,35,0,95,1,112,0,176,71,0,12,0,
		176,72,0,48,73,0,48,35,0,95,1,112,0,112,
		0,12,1,48,74,0,48,35,0,95,1,112,0,112,
		0,95,2,100,100,100,100,100,100,100,120,112,12,73,
		36,222,0,48,75,0,48,76,0,95,1,112,0,106,
		20,80,114,111,99,101,115,97,110,100,111,32,102,97,
		99,116,117,114,97,115,0,112,1,73,36,223,0,48,
		77,0,48,76,0,95,1,112,0,48,78,0,48,35,
		0,95,1,112,0,112,0,112,1,73,36,225,0,48,
		64,0,95,1,112,0,31,79,36,226,0,106,13,99,
		65,108,109,76,105,110,32,62,61,32,34,0,176,79,
		0,48,66,0,95,1,112,0,12,1,72,106,21,34,
		32,46,97,110,100,46,32,99,65,108,109,76,105,110,
		32,60,61,32,34,0,72,176,79,0,48,67,0,95,
		1,112,0,12,1,72,106,2,34,0,72,80,3,25,
		13,36,228,0,106,4,46,116,46,0,80,3,36,231,
		0,48,18,0,48,37,0,95,1,112,0,176,71,0,
		12,0,176,72,0,48,73,0,48,37,0,95,1,112,
		0,112,0,12,1,48,74,0,48,37,0,95,1,112,
		0,112,0,176,80,0,95,3,12,1,100,100,100,100,
		100,100,100,120,112,12,73,36,233,0,48,81,0,48,
		35,0,95,1,112,0,112,0,73,36,235,0,48,82,
		0,95,1,112,0,32,185,3,48,83,0,48,35,0,
		95,1,112,0,112,0,32,170,3,36,237,0,176,84,
		0,48,102,0,48,35,0,95,1,112,0,112,0,48,
		86,0,95,1,112,0,12,2,29,93,3,36,239,0,
		48,103,0,48,35,0,95,1,112,0,112,0,29,63,
		2,36,241,0,176,104,0,48,102,0,48,35,0,95,
		1,112,0,112,0,176,88,0,48,105,0,48,35,0,
		95,1,112,0,112,0,12,1,72,48,106,0,48,35,
		0,95,1,112,0,112,0,72,48,93,0,48,35,0,
		95,1,112,0,112,0,48,93,0,48,37,0,95,1,
		112,0,112,0,48,93,0,48,42,0,95,1,112,0,
		112,0,48,93,0,48,107,0,95,1,112,0,112,0,
		48,93,0,48,39,0,95,1,112,0,112,0,48,108,
		0,95,1,112,0,12,7,80,4,36,243,0,48,87,
		0,48,58,0,95,1,112,0,48,109,0,48,35,0,
		95,1,112,0,112,0,112,1,32,205,0,36,245,0,
		48,110,0,48,58,0,95,1,112,0,112,0,73,36,
		247,0,48,111,0,48,58,0,95,1,112,0,48,109,
		0,48,35,0,95,1,112,0,112,0,112,1,73,36,
		248,0,48,112,0,48,58,0,95,1,112,0,176,113,
		0,48,109,0,48,58,0,95,1,112,0,112,0,48,
		114,0,95,1,112,0,12,2,112,1,73,36,249,0,
		48,115,0,48,58,0,95,1,112,0,122,112,1,73,
		36,250,0,48,116,0,48,58,0,95,1,112,0,95,
		4,122,1,112,1,73,36,251,0,48,117,0,48,58,
		0,95,1,112,0,95,4,122,1,112,1,73,36,252,
		0,48,118,0,48,58,0,95,1,112,0,95,4,92,
		2,1,112,1,73,36,253,0,48,119,0,48,58,0,
		95,1,112,0,95,4,92,4,1,112,1,73,36,255,
		0,48,120,0,48,58,0,95,1,112,0,112,0,73,
		26,235,1,36,3,1,48,121,0,48,58,0,95,1,
		112,0,112,0,73,36,5,1,48,115,0,48,58,0,
		95,1,112,0,21,48,122,0,163,0,112,0,122,72,
		112,1,73,36,6,1,48,116,0,48,58,0,95,1,
		112,0,21,48,123,0,163,0,112,0,95,4,122,1,
		72,112,1,73,36,7,1,48,117,0,48,58,0,95,
		1,112,0,21,48,124,0,163,0,112,0,95,4,122,
		1,72,112,1,73,36,8,1,48,125,0,48,58,0,
		95,1,112,0,48,124,0,48,58,0,95,1,112,0,
		112,0,48,122,0,48,58,0,95,1,112,0,112,0,
		18,112,1,73,36,9,1,48,118,0,48,58,0,95,
		1,112,0,21,48,126,0,163,0,112,0,95,4,92,
		2,1,72,112,1,73,36,10,1,48,119,0,48,58,
		0,95,1,112,0,21,48,127,0,163,0,112,0,95,
		4,92,4,1,72,112,1,73,36,12,1,48,120,0,
		48,58,0,95,1,112,0,112,0,73,26,15,1,36,
		18,1,48,87,0,48,37,0,95,1,112,0,48,102,
		0,48,35,0,95,1,112,0,112,0,176,88,0,48,
		105,0,48,35,0,95,1,112,0,112,0,12,1,72,
		48,106,0,48,35,0,95,1,112,0,112,0,72,112,
		1,29,210,0,36,20,1,48,102,0,48,35,0,95,
		1,112,0,112,0,176,88,0,48,105,0,48,35,0,
		95,1,112,0,112,0,12,1,72,48,106,0,48,35,
		0,95,1,112,0,112,0,72,48,102,0,48,37,0,
		95,1,112,0,112,0,176,88,0,48,105,0,48,37,
		0,95,1,112,0,112,0,12,1,72,48,106,0,48,
		37,0,95,1,112,0,112,0,72,8,28,117,48,83,
		0,48,37,0,95,1,112,0,112,0,31,103,36,22,
		1,48,91,0,95,1,112,0,28,60,176,128,0,48,
		93,0,48,35,0,95,1,112,0,112,0,48,93,0,
		48,37,0,95,1,112,0,112,0,48,94,0,95,1,
		112,0,48,95,0,95,1,112,0,48,96,0,95,1,
		112,0,100,100,120,120,12,9,121,8,31,14,36,24,
		1,48,129,0,95,1,120,112,1,73,36,28,1,48,
		98,0,48,37,0,95,1,112,0,112,0,73,26,52,
		255,36,38,1,48,98,0,48,35,0,95,1,112,0,
		112,0,73,36,40,1,48,99,0,48,76,0,95,1,
		112,0,48,100,0,48,35,0,95,1,112,0,112,0,
		112,1,73,26,64,252,36,44,1,48,99,0,48,76,
		0,95,1,112,0,48,130,0,48,35,0,95,1,112,
		0,112,0,112,1,73,36,46,1,48,101,0,48,35,
		0,95,1,112,0,176,71,0,12,0,176,72,0,48,
		73,0,48,35,0,95,1,112,0,112,0,12,1,112,
		2,73,36,47,1,48,101,0,48,37,0,95,1,112,
		0,176,71,0,12,0,176,72,0,48,73,0,48,37,
		0,95,1,112,0,112,0,12,1,112,2,73,36,49,
		1,48,131,0,95,1,112,0,73,36,51,1,48,55,
		0,48,54,0,95,1,112,0,112,0,73,36,53,1,
		48,130,0,48,58,0,95,1,112,0,112,0,121,15,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,134,0,2,0,116,134,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

