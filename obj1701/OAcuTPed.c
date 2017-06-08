/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\OAcuTPed.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OACUTPED );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TPRVTIP );
HB_FUNC_STATIC( OACUTPED_CREATE );
HB_FUNC_STATIC( OACUTPED_OPENFILES );
HB_FUNC_STATIC( OACUTPED_CLOSEFILES );
HB_FUNC_STATIC( OACUTPED_LRESOURCE );
HB_FUNC_STATIC( OACUTPED_LGENERATE );
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
HB_FUNC_EXTERN( AITMPEDPRV );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( NTOTNPEDPRV );
HB_FUNC_EXTERN( NIMPLPEDPRV );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OACUTPED )
{ "OACUTPED", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OACUTPED )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TPRVTIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TPRVTIP )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OACUTPED_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUTPED_CREATE )}, NULL },
{ "OACUTPED_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUTPED_OPENFILES )}, NULL },
{ "OACUTPED_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUTPED_CLOSEFILES )}, NULL },
{ "OACUTPED_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUTPED_LRESOURCE )}, NULL },
{ "OACUTPED_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OACUTPED_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACUCREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OPEDPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPEDPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OPEDPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPEDPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFTIPINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMPEDPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMPEDPRV )}, NULL },
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
{ "LALLTIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CTIPORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTIPDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "CREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTNPEDPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTNPEDPRV )}, NULL },
{ "LEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLPEDPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLPEDPRV )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INCLUYECERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OACUTPED, ".\\.\\Prg\\OAcuTPed.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OACUTPED
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OACUTPED )
   #include "hbiniseg.h"
#endif

HB_FUNC( OACUTPED )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,99,0,36,8,0,103,2,0,100,8,
		29,201,1,176,1,0,104,2,0,12,1,29,190,1,
		166,128,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,79,65,99,117,84,80,101,100,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,9,95,1,
		121,72,121,72,121,72,106,8,108,69,120,99,77,111,
		118,0,4,1,0,9,112,5,73,36,11,0,48,5,
		0,95,2,106,7,79,66,74,69,67,84,0,100,95,
		1,121,72,121,72,121,72,106,9,111,80,101,100,80,
		114,118,84,0,4,1,0,9,112,5,73,36,12,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,9,111,80,101,
		100,80,114,118,76,0,4,1,0,9,112,5,73,36,
		13,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,8,111,
		68,98,102,65,114,116,0,4,1,0,9,112,5,73,
		36,15,0,48,6,0,95,2,106,7,67,114,101,97,
		116,101,0,108,7,95,1,121,72,121,72,121,72,112,
		3,73,36,17,0,48,6,0,95,2,106,10,79,112,
		101,110,70,105,108,101,115,0,108,8,95,1,121,72,
		121,72,121,72,112,3,73,36,19,0,48,6,0,95,
		2,106,11,67,108,111,115,101,70,105,108,101,115,0,
		108,9,95,1,121,72,121,72,121,72,112,3,73,36,
		21,0,48,6,0,95,2,106,10,108,82,101,115,111,
		117,114,99,101,0,108,10,95,1,121,72,121,72,121,
		72,112,3,73,36,23,0,48,6,0,95,2,106,10,
		108,71,101,110,101,114,97,116,101,0,108,11,95,1,
		121,72,121,72,121,72,112,3,73,36,25,0,48,12,
		0,95,2,112,0,73,167,14,0,0,176,13,0,104,
		2,0,95,2,20,2,168,48,14,0,95,2,112,0,
		80,3,176,15,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,16,0,95,3,
		164,146,1,0,73,95,3,110,7,48,14,0,103,2,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUTPED_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		36,31,0,48,17,0,102,112,0,73,36,33,0,48,
		18,0,102,106,8,99,67,111,100,84,105,112,0,106,
		8,99,67,111,100,84,105,112,0,112,2,73,36,35,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUTPED_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,41,0,120,80,1,36,42,0,176,19,
		0,89,15,0,1,0,0,0,176,20,0,95,1,12,
		1,6,12,1,80,2,36,44,0,113,106,1,0,36,
		46,0,48,21,0,102,48,22,0,176,23,0,106,13,
		80,69,68,80,82,79,86,84,46,68,66,70,0,100,
		12,2,106,13,80,69,68,80,82,79,86,84,46,68,
		66,70,0,100,176,24,0,12,0,100,176,25,0,12,
		0,9,120,9,9,112,9,112,1,73,48,26,0,48,
		27,0,102,112,0,106,13,80,69,68,80,82,79,86,
		84,46,67,68,88,0,112,1,73,48,26,0,48,27,
		0,102,112,0,112,0,73,48,28,0,48,27,0,102,
		112,0,112,0,73,36,48,0,48,29,0,102,48,22,
		0,176,23,0,106,13,80,69,68,80,82,79,86,76,
		46,68,66,70,0,100,12,2,106,13,80,69,68,80,
		82,79,86,76,46,68,66,70,0,100,176,24,0,12,
		0,100,176,25,0,12,0,9,120,9,9,112,9,112,
		1,73,48,26,0,48,30,0,102,112,0,106,13,80,
		69,68,80,82,79,86,76,46,67,68,88,0,112,1,
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

HB_FUNC_STATIC( OACUTPED_CLOSEFILES )
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

HB_FUNC_STATIC( OACUTPED_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,88,0,48,39,0,102,106,10,73,78,
		70,65,67,85,84,73,80,0,112,1,31,8,36,89,
		0,9,110,7,36,96,0,48,40,0,102,92,70,92,
		80,92,90,92,100,93,142,3,112,5,31,8,36,97,
		0,9,110,7,36,104,0,48,41,0,48,42,0,102,
		112,0,48,43,0,48,27,0,102,112,0,112,0,112,
		1,73,36,106,0,48,44,0,102,93,210,0,112,1,
		73,36,107,0,48,45,0,102,93,211,0,112,1,73,
		36,109,0,48,46,0,102,176,47,0,12,0,48,48,
		0,48,27,0,102,112,0,112,0,112,2,73,36,111,
		0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OACUTPED_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,118,0,102,80,1,36,120,0,106,1,
		0,80,2,36,122,0,48,49,0,48,50,0,95,1,
		112,0,112,0,73,36,123,0,48,51,0,48,52,0,
		95,1,112,0,112,0,73,36,124,0,48,53,0,48,
		54,0,95,1,112,0,112,0,73,36,128,0,48,55,
		0,95,1,90,29,106,13,70,101,99,104,97,32,32,
		32,32,32,58,32,0,176,56,0,176,57,0,12,0,
		12,1,72,6,89,58,0,0,0,1,0,1,0,106,
		13,80,101,114,105,111,100,111,32,32,32,58,32,0,
		176,56,0,48,58,0,95,255,112,0,12,1,72,106,
		4,32,62,32,0,72,176,56,0,48,59,0,95,255,
		112,0,12,1,72,6,89,77,0,0,0,1,0,1,
		0,106,13,84,105,112,111,32,65,114,116,46,32,58,
		32,0,48,60,0,95,255,112,0,28,12,106,6,84,
		111,100,111,115,0,25,34,176,61,0,48,62,0,95,
		255,112,0,12,1,106,4,32,62,32,0,72,176,61,
		0,48,63,0,95,255,112,0,12,1,72,72,6,4,
		3,0,112,1,73,36,130,0,48,64,0,48,27,0,
		95,1,112,0,106,8,100,70,101,99,80,101,100,0,
		112,1,73,36,132,0,106,19,100,70,101,99,80,101,
		100,32,62,61,32,67,116,111,100,40,32,34,0,176,
		56,0,48,58,0,95,1,112,0,12,1,72,106,29,
		34,32,41,32,46,97,110,100,46,32,100,70,101,99,
		80,101,100,32,60,61,32,67,116,111,100,40,32,34,
		0,72,176,56,0,48,59,0,95,1,112,0,12,1,
		72,106,4,34,32,41,0,72,80,2,36,134,0,176,
		36,0,48,65,0,48,66,0,95,1,112,0,112,0,
		12,1,31,32,36,135,0,96,2,0,106,8,32,46,
		97,110,100,46,32,0,48,65,0,48,66,0,95,1,
		112,0,112,0,72,135,36,138,0,48,18,0,48,27,
		0,95,1,112,0,176,67,0,12,0,176,68,0,48,
		69,0,48,27,0,95,1,112,0,112,0,12,1,48,
		70,0,48,27,0,95,1,112,0,112,0,95,2,100,
		100,100,100,100,100,100,120,112,12,73,36,140,0,48,
		41,0,48,42,0,95,1,112,0,48,71,0,48,27,
		0,95,1,112,0,112,0,112,1,73,36,142,0,48,
		72,0,48,27,0,95,1,112,0,112,0,73,36,144,
		0,48,73,0,95,1,112,0,32,228,1,48,74,0,
		48,27,0,95,1,112,0,112,0,32,213,1,36,146,
		0,176,75,0,48,76,0,48,27,0,95,1,112,0,
		112,0,48,77,0,95,1,112,0,12,2,29,136,1,
		36,148,0,48,78,0,48,30,0,95,1,112,0,48,
		76,0,48,27,0,95,1,112,0,112,0,176,79,0,
		48,80,0,48,27,0,95,1,112,0,112,0,12,1,
		72,48,81,0,48,27,0,95,1,112,0,112,0,72,
		112,1,29,75,1,36,150,0,48,76,0,48,27,0,
		95,1,112,0,112,0,176,79,0,48,80,0,48,27,
		0,95,1,112,0,112,0,12,1,72,48,81,0,48,
		27,0,95,1,112,0,112,0,72,48,76,0,48,30,
		0,95,1,112,0,112,0,176,79,0,48,80,0,48,
		30,0,95,1,112,0,112,0,12,1,72,48,81,0,
		48,30,0,95,1,112,0,112,0,72,8,29,238,0,
		48,74,0,48,30,0,95,1,112,0,112,0,32,223,
		0,36,154,0,48,60,0,95,1,112,0,31,91,176,
		82,0,48,83,0,48,30,0,95,1,112,0,112,0,
		48,33,0,95,1,112,0,106,8,99,67,111,100,84,
		105,112,0,12,3,48,62,0,95,1,112,0,16,29,
		147,0,176,82,0,48,83,0,48,30,0,95,1,112,
		0,112,0,48,33,0,95,1,112,0,106,8,99,67,
		111,100,84,105,112,0,12,3,48,63,0,95,1,112,
		0,34,28,102,48,84,0,95,1,112,0,28,18,176,
		85,0,48,30,0,95,1,112,0,12,1,121,8,31,
		77,48,86,0,95,1,112,0,28,56,176,87,0,48,
		48,0,48,27,0,95,1,112,0,112,0,48,48,0,
		48,30,0,95,1,112,0,112,0,48,88,0,95,1,
		112,0,48,89,0,95,1,112,0,48,90,0,95,1,
		112,0,12,5,121,8,31,14,36,156,0,48,91,0,
		95,1,120,112,1,73,36,160,0,48,92,0,48,30,
		0,95,1,112,0,112,0,73,26,187,254,36,168,0,
		48,92,0,48,27,0,95,1,112,0,112,0,73,36,
		170,0,48,93,0,48,42,0,95,1,112,0,48,94,
		0,48,27,0,95,1,112,0,112,0,112,1,73,26,
		21,254,36,174,0,48,93,0,48,42,0,95,1,112,
		0,48,43,0,48,27,0,95,1,112,0,112,0,112,
		1,73,36,176,0,48,95,0,48,27,0,95,1,112,
		0,176,67,0,12,0,176,68,0,48,69,0,48,27,
		0,95,1,112,0,112,0,12,1,112,2,73,36,178,
		0,48,96,0,95,1,112,0,73,36,180,0,48,51,
		0,48,50,0,95,1,112,0,112,0,73,36,182,0,
		48,43,0,48,54,0,95,1,112,0,112,0,121,15,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,99,0,2,0,116,99,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

