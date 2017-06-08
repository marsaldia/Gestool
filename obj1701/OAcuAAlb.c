/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\OAcuAAlb.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OACUAALB );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TPRVALM );
HB_FUNC_STATIC( OACUAALB_CREATE );
HB_FUNC_STATIC( OACUAALB_OPENFILES );
HB_FUNC_STATIC( OACUAALB_CLOSEFILES );
HB_FUNC_STATIC( OACUAALB_LRESOURCE );
HB_FUNC_STATIC( OACUAALB_LGENERATE );
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
HB_FUNC_EXTERN( AITMALBPRV );
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
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OACUAALB )
{ "OACUAALB", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OACUAALB )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TPRVALM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TPRVALM )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OACUAALB_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUAALB_CREATE )}, NULL },
{ "OACUAALB_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUAALB_OPENFILES )}, NULL },
{ "OACUAALB_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUAALB_CLOSEFILES )}, NULL },
{ "OACUAALB_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUAALB_LRESOURCE )}, NULL },
{ "OACUAALB_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUAALB_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACUCREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OALBPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OALBPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFALMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMALBPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMALBPRV )}, NULL },
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
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INCLUYECERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OACUAALB, ".\\.\\Prg\\OAcuAAlb.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OACUAALB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OACUAALB )
   #include "hbiniseg.h"
#endif

HB_FUNC( OACUAALB )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,96,0,36,8,0,103,2,0,100,8,
		29,202,1,176,1,0,104,2,0,12,1,29,191,1,
		166,129,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,79,65,99,117,65,65,108,98,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,9,95,1,
		121,72,121,72,121,72,106,9,108,69,120,99,67,101,
		114,111,0,4,1,0,9,112,5,73,36,11,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,9,111,65,108,98,
		80,114,118,84,0,4,1,0,9,112,5,73,36,12,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,65,
		108,98,80,114,118,76,0,4,1,0,9,112,5,73,
		36,13,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,8,
		111,68,98,102,65,114,116,0,4,1,0,9,112,5,
		73,36,15,0,48,6,0,95,2,106,7,67,114,101,
		97,116,101,0,108,7,95,1,121,72,121,72,121,72,
		112,3,73,36,17,0,48,6,0,95,2,106,10,79,
		112,101,110,70,105,108,101,115,0,108,8,95,1,121,
		72,121,72,121,72,112,3,73,36,19,0,48,6,0,
		95,2,106,11,67,108,111,115,101,70,105,108,101,115,
		0,108,9,95,1,121,72,121,72,121,72,112,3,73,
		36,21,0,48,6,0,95,2,106,10,108,82,101,115,
		111,117,114,99,101,0,108,10,95,1,121,72,121,72,
		121,72,112,3,73,36,23,0,48,6,0,95,2,106,
		10,108,71,101,110,101,114,97,116,101,0,108,11,95,
		1,121,72,121,72,121,72,112,3,73,36,25,0,48,
		12,0,95,2,112,0,73,167,14,0,0,176,13,0,
		104,2,0,95,2,20,2,168,48,14,0,95,2,112,
		0,80,3,176,15,0,95,3,106,10,73,110,105,116,
		67,108,97,115,115,0,12,2,28,12,48,16,0,95,
		3,164,146,1,0,73,95,3,110,7,48,14,0,103,
		2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUAALB_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,31,0,48,17,0,102,112,0,73,36,33,0,48,
		18,0,102,106,8,99,67,111,100,65,108,109,0,106,
		8,99,67,111,100,65,108,109,0,112,2,73,36,35,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUAALB_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,41,0,120,80,1,36,42,0,176,19,
		0,89,15,0,1,0,0,0,176,20,0,95,1,12,
		1,6,12,1,80,2,36,44,0,113,106,1,0,36,
		46,0,48,21,0,102,48,22,0,176,23,0,106,13,
		65,108,98,80,114,111,118,84,46,68,66,70,0,100,
		12,2,106,13,65,108,98,80,114,111,118,84,46,68,
		66,70,0,100,176,24,0,12,0,100,176,25,0,12,
		0,9,120,9,9,112,9,112,1,73,48,26,0,48,
		27,0,102,112,0,106,13,65,108,98,80,82,79,86,
		84,46,67,68,88,0,112,1,73,48,26,0,48,27,
		0,102,112,0,112,0,73,48,28,0,48,27,0,102,
		112,0,112,0,73,36,48,0,48,29,0,102,48,22,
		0,176,23,0,106,13,65,108,98,80,82,79,86,76,
		46,68,66,70,0,100,12,2,106,13,65,108,98,80,
		82,79,86,76,46,68,66,70,0,100,176,24,0,12,
		0,100,176,25,0,12,0,9,120,9,9,112,9,112,
		1,73,48,26,0,48,30,0,102,112,0,106,13,65,
		108,98,80,82,79,86,76,46,67,68,88,0,112,1,
		73,48,26,0,48,30,0,102,112,0,112,0,73,48,
		28,0,48,30,0,102,112,0,112,0,73,36,50,0,
		48,31,0,102,48,22,0,176,23,0,106,13,65,82,
		84,73,67,85,76,79,46,68,66,70,0,100,12,2,
		106,13,65,82,84,73,67,85,76,79,46,68,66,70,
		0,100,176,24,0,12,0,100,176,32,0,12,0,9,
		120,9,9,112,9,112,1,73,48,26,0,48,33,0,
		102,112,0,106,13,65,82,84,73,67,85,76,79,46,
		67,68,88,0,112,1,73,48,26,0,48,33,0,102,
		112,0,112,0,73,48,28,0,48,33,0,102,112,0,
		112,0,73,114,76,0,0,36,52,0,115,73,36,54,
		0,176,34,0,106,41,73,109,112,111,115,105,98,108,
		101,32,97,98,114,105,114,32,116,111,100,97,115,32,
		108,97,115,32,98,97,115,101,115,32,100,101,32,100,
		97,116,111,115,0,20,1,36,55,0,48,35,0,102,
		112,0,73,36,56,0,9,80,1,36,60,0,176,19,
		0,95,2,20,1,36,62,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUAALB_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,68,0,176,36,0,48,27,0,102,112,0,12,1,
		31,30,48,37,0,48,27,0,102,112,0,112,0,28,
		17,36,69,0,48,38,0,48,27,0,102,112,0,112,
		0,73,36,71,0,176,36,0,48,30,0,102,112,0,
		12,1,31,30,48,37,0,48,30,0,102,112,0,112,
		0,28,17,36,72,0,48,38,0,48,30,0,102,112,
		0,112,0,73,36,74,0,176,36,0,48,33,0,102,
		112,0,12,1,31,30,48,37,0,48,33,0,102,112,
		0,112,0,28,17,36,75,0,48,38,0,48,33,0,
		102,112,0,112,0,73,36,78,0,48,21,0,102,100,
		112,1,73,36,79,0,48,29,0,102,100,112,1,73,
		36,80,0,48,31,0,102,100,112,1,73,36,82,0,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUAALB_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,88,0,48,39,0,102,106,10,73,78,
		70,65,67,85,65,76,77,0,112,1,31,8,36,89,
		0,9,110,7,36,96,0,48,40,0,102,92,70,92,
		80,92,90,92,100,93,188,2,112,5,31,8,36,97,
		0,9,110,7,36,104,0,48,41,0,48,42,0,102,
		112,0,48,43,0,48,27,0,102,112,0,112,0,112,
		1,73,36,106,0,48,44,0,102,112,0,73,36,108,
		0,48,45,0,102,176,46,0,12,0,48,47,0,48,
		27,0,102,112,0,112,0,112,2,73,36,110,0,120,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUAALB_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,117,0,102,80,1,36,119,0,106,1,
		0,80,2,36,120,0,106,1,0,80,3,36,122,0,
		48,48,0,48,49,0,95,1,112,0,112,0,73,36,
		123,0,48,50,0,48,51,0,95,1,112,0,112,0,
		73,36,124,0,48,52,0,48,53,0,95,1,112,0,
		112,0,73,36,128,0,48,54,0,95,1,90,27,106,
		11,70,101,99,104,97,32,32,32,58,32,0,176,55,
		0,176,56,0,12,0,12,1,72,6,89,56,0,0,
		0,1,0,1,0,106,11,80,101,114,105,111,100,111,
		32,58,32,0,176,55,0,48,57,0,95,255,112,0,
		12,1,72,106,4,32,62,32,0,72,176,55,0,48,
		58,0,95,255,112,0,12,1,72,6,89,75,0,0,
		0,1,0,1,0,106,11,65,108,109,97,99,233,110,
		32,58,32,0,48,59,0,95,255,112,0,28,12,106,
		6,84,111,100,111,115,0,25,34,176,60,0,48,61,
		0,95,255,112,0,12,1,106,4,32,62,32,0,72,
		176,60,0,48,62,0,95,255,112,0,12,1,72,72,
		6,4,3,0,112,1,73,36,130,0,48,63,0,48,
		27,0,95,1,112,0,106,8,100,70,101,99,65,108,
		98,0,112,1,73,36,131,0,48,63,0,48,30,0,
		95,1,112,0,106,8,110,78,117,109,65,108,98,0,
		112,1,73,36,133,0,106,19,100,70,101,99,65,108,
		98,32,62,61,32,67,116,111,100,40,32,34,0,176,
		55,0,48,57,0,95,1,112,0,12,1,72,106,29,
		34,32,41,32,46,97,110,100,46,32,100,70,101,99,
		65,108,98,32,60,61,32,67,116,111,100,40,32,34,
		0,72,176,55,0,48,58,0,95,1,112,0,12,1,
		72,106,4,34,32,41,0,72,80,2,36,135,0,176,
		36,0,48,64,0,48,65,0,95,1,112,0,112,0,
		12,1,31,32,36,136,0,96,2,0,106,8,32,46,
		97,110,100,46,32,0,48,64,0,48,65,0,95,1,
		112,0,112,0,72,135,36,139,0,48,18,0,48,27,
		0,95,1,112,0,176,66,0,12,0,176,67,0,48,
		68,0,48,27,0,95,1,112,0,112,0,12,1,48,
		69,0,48,27,0,95,1,112,0,112,0,95,2,100,
		100,100,100,100,100,100,120,112,12,73,36,141,0,48,
		41,0,48,42,0,95,1,112,0,48,70,0,48,27,
		0,95,1,112,0,112,0,112,1,73,36,143,0,48,
		59,0,95,1,112,0,31,79,36,144,0,106,13,99,
		65,108,109,76,105,110,32,62,61,32,34,0,176,71,
		0,48,61,0,95,1,112,0,12,1,72,106,21,34,
		32,46,97,110,100,46,32,99,65,108,109,76,105,110,
		32,60,61,32,34,0,72,176,71,0,48,62,0,95,
		1,112,0,12,1,72,106,2,34,0,72,80,3,25,
		13,36,146,0,106,4,46,116,46,0,80,3,36,149,
		0,48,18,0,48,30,0,95,1,112,0,176,66,0,
		12,0,176,67,0,48,68,0,48,30,0,95,1,112,
		0,112,0,12,1,48,69,0,48,30,0,95,1,112,
		0,112,0,176,72,0,95,3,12,1,100,100,100,100,
		100,100,100,120,112,12,73,36,151,0,48,73,0,48,
		27,0,95,1,112,0,112,0,73,36,153,0,48,74,
		0,95,1,112,0,32,103,1,48,75,0,48,27,0,
		95,1,112,0,112,0,32,88,1,36,155,0,176,76,
		0,48,77,0,48,27,0,95,1,112,0,112,0,48,
		78,0,95,1,112,0,12,2,29,11,1,36,157,0,
		48,79,0,48,30,0,95,1,112,0,48,77,0,48,
		27,0,95,1,112,0,112,0,176,80,0,48,81,0,
		48,27,0,95,1,112,0,112,0,12,1,72,48,82,
		0,48,27,0,95,1,112,0,112,0,72,112,1,29,
		206,0,36,159,0,48,77,0,48,27,0,95,1,112,
		0,112,0,176,80,0,48,81,0,48,27,0,95,1,
		112,0,112,0,12,1,72,48,82,0,48,27,0,95,
		1,112,0,112,0,72,48,77,0,48,30,0,95,1,
		112,0,112,0,176,80,0,48,81,0,48,30,0,95,
		1,112,0,112,0,12,1,72,48,82,0,48,30,0,
		95,1,112,0,112,0,72,8,28,113,48,75,0,48,
		30,0,95,1,112,0,112,0,31,99,36,161,0,48,
		83,0,95,1,112,0,28,56,176,84,0,48,47,0,
		48,27,0,95,1,112,0,112,0,48,47,0,48,30,
		0,95,1,112,0,112,0,48,85,0,95,1,112,0,
		48,86,0,95,1,112,0,48,87,0,95,1,112,0,
		12,5,121,8,31,14,36,163,0,48,88,0,95,1,
		120,112,1,73,36,167,0,48,89,0,48,30,0,95,
		1,112,0,112,0,73,26,56,255,36,175,0,48,89,
		0,48,27,0,95,1,112,0,112,0,73,36,177,0,
		48,90,0,48,42,0,95,1,112,0,48,91,0,48,
		27,0,95,1,112,0,112,0,112,1,73,26,146,254,
		36,181,0,48,90,0,48,42,0,95,1,112,0,48,
		43,0,48,27,0,95,1,112,0,112,0,112,1,73,
		36,183,0,48,92,0,48,27,0,95,1,112,0,176,
		66,0,12,0,176,67,0,48,68,0,48,27,0,95,
		1,112,0,112,0,12,1,112,2,73,36,185,0,48,
		92,0,48,30,0,95,1,112,0,176,66,0,12,0,
		176,67,0,48,68,0,48,30,0,95,1,112,0,112,
		0,12,1,112,2,73,36,187,0,48,93,0,95,1,
		112,0,73,36,189,0,48,50,0,48,49,0,95,1,
		112,0,112,0,73,36,191,0,48,43,0,48,53,0,
		95,1,112,0,112,0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,96,0,2,0,116,96,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

