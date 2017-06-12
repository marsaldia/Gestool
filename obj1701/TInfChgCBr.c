/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TInfChgCBr.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TINFCHGCBR );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFGEN );
HB_FUNC_STATIC( TINFCHGCBR_CREATE );
HB_FUNC_STATIC( TINFCHGCBR_OPENFILES );
HB_FUNC_STATIC( TINFCHGCBR_CLOSEFILES );
HB_FUNC_STATIC( TINFCHGCBR_LRESOURCE );
HB_FUNC_STATIC( TINFCHGCBR_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( GETSYSDATE );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( AITMART );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TINFCHGCBR )
{ "TINFCHGCBR", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCHGCBR )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFGEN )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFCHGCBR_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCHGCBR_CREATE )}, NULL },
{ "TINFCHGCBR_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCHGCBR_OPENFILES )}, NULL },
{ "TINFCHGCBR_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCHGCBR_CLOSEFILES )}, NULL },
{ "TINFCHGCBR_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCHGCBR_LRESOURCE )}, NULL },
{ "TINFCHGCBR_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCHGCBR_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSYSDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSYSDATE )}, NULL },
{ "_LDEFSERINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFDIVINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_ODBFBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMART", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMART )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEKINORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LASTCHG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTCHG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDEFECTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTIPBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTIPBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TINFCHGCBR, ".\\.\\Prg\\TInfChgCBr.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TINFCHGCBR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TINFCHGCBR )
   #include "hbiniseg.h"
#endif

HB_FUNC( TINFCHGCBR )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,96,0,36,8,0,103,2,0,100,8,
		29,73,1,176,1,0,104,2,0,12,1,29,62,1,
		166,0,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,11,84,73,110,102,67,104,103,67,66,114,0,
		108,4,4,1,0,108,0,112,3,80,2,36,10,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,8,111,68,98,
		102,66,97,114,0,4,1,0,9,112,5,73,36,12,
		0,48,6,0,95,2,106,7,99,114,101,97,116,101,
		0,108,7,95,1,121,72,121,72,121,72,112,3,73,
		36,14,0,48,6,0,95,2,106,10,79,112,101,110,
		70,105,108,101,115,0,108,8,95,1,121,72,121,72,
		121,72,112,3,73,36,16,0,48,6,0,95,2,106,
		11,67,108,111,115,101,70,105,108,101,115,0,108,9,
		95,1,121,72,121,72,121,72,112,3,73,36,18,0,
		48,6,0,95,2,106,10,108,82,101,115,111,117,114,
		99,101,0,108,10,95,1,121,72,121,72,121,72,112,
		3,73,36,20,0,48,6,0,95,2,106,10,108,71,
		101,110,101,114,97,116,101,0,108,11,95,1,121,72,
		121,72,121,72,112,3,73,36,22,0,48,12,0,95,
		2,112,0,73,167,14,0,0,176,13,0,104,2,0,
		95,2,20,2,168,48,14,0,95,2,112,0,80,3,
		176,15,0,95,3,106,10,73,110,105,116,67,108,97,
		115,115,0,12,2,28,12,48,16,0,95,3,164,146,
		1,0,73,95,3,110,7,48,14,0,103,2,0,112,
		0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCHGCBR_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,26,0,102,80,1,36,28,0,48,17,
		0,95,1,106,8,99,67,111,100,65,114,116,0,106,
		2,67,0,92,18,121,90,8,106,3,64,33,0,6,
		106,16,67,243,100,105,103,111,32,97,114,116,237,99,
		117,108,111,0,9,106,14,67,111,100,46,32,97,114,
		116,237,99,117,108,111,0,92,15,9,112,10,73,36,
		29,0,48,17,0,95,1,106,8,99,78,111,109,65,
		114,116,0,106,2,67,0,92,100,121,90,8,106,3,
		64,33,0,6,106,12,68,101,115,99,114,105,112,99,
		105,243,110,0,9,106,12,68,101,115,99,114,105,112,
		99,105,243,110,0,92,50,9,112,10,73,36,30,0,
		48,17,0,95,1,106,8,99,67,111,100,66,97,114,
		0,106,2,67,0,92,20,121,90,8,106,3,64,33,
		0,6,106,17,67,243,100,105,103,111,32,100,101,32,
		98,97,114,114,97,115,0,120,106,17,67,243,100,105,
		103,111,32,100,101,32,98,97,114,114,97,115,0,92,
		25,9,112,10,73,36,31,0,48,17,0,95,1,106,
		8,99,84,105,112,66,97,114,0,106,2,67,0,92,
		40,121,90,8,106,3,64,33,0,6,106,25,84,105,
		112,111,32,100,101,32,99,243,100,105,103,111,32,100,
		101,32,98,97,114,114,97,115,0,120,106,25,84,105,
		112,111,32,100,101,32,99,243,100,105,103,111,32,100,
		101,32,98,97,114,114,97,115,0,92,40,9,112,10,
		73,36,32,0,48,17,0,95,1,106,9,99,68,101,
		102,101,99,116,111,0,106,2,67,0,92,10,121,90,
		8,106,3,64,33,0,6,106,8,68,101,102,101,99,
		116,111,0,120,106,8,68,101,102,101,99,116,111,0,
		92,10,9,112,10,73,36,33,0,48,17,0,95,1,
		106,8,76,97,115,116,67,104,103,0,106,2,68,0,
		92,8,121,90,8,106,3,64,33,0,6,106,7,67,
		97,109,98,105,111,0,9,106,16,70,101,99,104,97,
		32,100,101,32,99,97,109,98,105,111,0,92,10,9,
		112,10,73,36,35,0,48,18,0,95,1,106,8,67,
		67,79,68,65,82,84,0,106,18,67,67,79,68,65,
		82,84,32,43,32,67,67,79,68,66,65,82,0,112,
		2,73,36,37,0,48,19,0,95,1,89,22,0,0,
		0,1,0,1,0,48,20,0,48,21,0,95,255,112,
		0,112,0,6,89,66,0,0,0,1,0,1,0,106,
		13,65,114,116,237,99,117,108,111,32,32,58,32,0,
		176,22,0,48,20,0,48,21,0,95,255,112,0,112,
		0,12,1,72,106,2,45,0,72,176,22,0,48,23,
		0,48,21,0,95,255,112,0,112,0,12,1,72,6,
		90,6,106,1,0,6,112,3,73,36,39,0,48,24,
		0,95,1,176,25,0,12,0,112,1,73,36,40,0,
		48,26,0,95,1,9,112,1,73,36,41,0,48,27,
		0,95,1,9,112,1,73,36,43,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCHGCBR_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,49,0,120,80,1,36,50,0,176,28,
		0,89,15,0,1,0,0,0,176,29,0,95,1,12,
		1,6,12,1,80,2,36,52,0,113,132,0,0,36,
		54,0,48,30,0,102,48,31,0,176,32,0,106,15,
		65,82,84,67,79,68,69,66,65,82,46,68,66,70,
		0,100,12,2,106,15,65,82,84,67,79,68,69,66,
		65,82,46,68,66,70,0,100,176,33,0,12,0,100,
		176,34,0,12,0,9,120,9,9,112,9,112,1,73,
		48,35,0,48,36,0,102,112,0,106,15,65,82,84,
		67,79,68,69,66,65,82,46,67,68,88,0,112,1,
		73,48,35,0,48,36,0,102,112,0,112,0,73,48,
		37,0,48,36,0,102,112,0,112,0,73,114,76,0,
		0,36,56,0,115,73,36,58,0,176,38,0,106,41,
		73,109,112,111,115,105,98,108,101,32,97,98,114,105,
		114,32,116,111,100,97,115,32,108,97,115,32,98,97,
		115,101,115,32,100,101,32,100,97,116,111,115,0,20,
		1,36,59,0,48,39,0,102,112,0,73,36,60,0,
		9,80,1,36,64,0,176,28,0,95,2,20,1,36,
		66,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCHGCBR_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,72,0,176,40,0,48,36,0,102,112,0,12,1,
		31,30,48,41,0,48,36,0,102,112,0,112,0,28,
		17,36,73,0,48,42,0,48,36,0,102,112,0,112,
		0,73,36,76,0,48,30,0,102,100,112,1,73,36,
		78,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCHGCBR_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,84,0,48,43,0,102,106,10,73,78,
		70,67,72,71,66,65,82,0,112,1,31,8,36,85,
		0,9,110,7,36,88,0,48,44,0,102,92,110,92,
		120,93,130,0,93,140,0,93,88,2,112,5,31,8,
		36,89,0,9,110,7,36,96,0,48,45,0,48,46,
		0,102,112,0,48,47,0,48,48,0,102,112,0,112,
		0,112,1,73,36,98,0,48,49,0,102,176,50,0,
		12,0,48,51,0,48,48,0,102,112,0,112,0,112,
		2,73,36,100,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCHGCBR_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,107,0,102,80,1,36,109,0,106,1,
		0,80,2,36,111,0,48,52,0,48,53,0,95,1,
		112,0,112,0,73,36,112,0,48,54,0,48,21,0,
		95,1,112,0,112,0,73,36,116,0,48,55,0,95,
		1,90,29,106,13,70,101,99,104,97,32,32,32,32,
		32,58,32,0,176,56,0,176,57,0,12,0,12,1,
		72,6,89,58,0,0,0,1,0,1,0,106,13,80,
		101,114,105,111,100,111,32,32,32,58,32,0,176,56,
		0,48,58,0,95,255,112,0,12,1,72,106,4,32,
		62,32,0,72,176,56,0,48,59,0,95,255,112,0,
		12,1,72,6,89,77,0,0,0,1,0,1,0,106,
		13,65,114,116,237,99,117,108,111,115,32,58,32,0,
		48,60,0,95,255,112,0,28,12,106,6,84,111,100,
		111,115,0,25,34,176,61,0,48,62,0,95,255,112,
		0,12,1,106,4,32,62,32,0,72,176,61,0,48,
		63,0,95,255,112,0,12,1,72,72,6,4,3,0,
		112,1,73,36,118,0,106,19,76,97,115,116,67,104,
		103,32,62,61,32,67,116,111,100,40,32,34,0,176,
		56,0,48,58,0,95,1,112,0,12,1,72,106,29,
		34,32,41,32,46,97,110,100,46,32,76,97,115,116,
		67,104,103,32,60,61,32,67,116,111,100,40,32,34,
		0,72,176,56,0,48,59,0,95,1,112,0,12,1,
		72,106,4,34,32,41,0,72,80,2,36,120,0,48,
		60,0,95,1,112,0,31,84,36,121,0,96,2,0,
		106,19,32,46,97,110,100,46,32,67,111,100,105,103,
		111,32,62,61,32,34,0,176,22,0,48,62,0,95,
		1,112,0,12,1,72,106,20,34,32,46,97,110,100,
		46,32,67,111,100,105,103,111,32,60,61,32,34,0,
		72,176,22,0,48,63,0,95,1,112,0,12,1,72,
		106,2,34,0,72,135,36,124,0,176,40,0,48,64,
		0,48,65,0,95,1,112,0,112,0,12,1,31,30,
		36,125,0,106,8,32,46,97,110,100,46,32,0,48,
		64,0,48,65,0,95,1,112,0,112,0,72,80,2,
		36,128,0,48,18,0,48,48,0,95,1,112,0,176,
		66,0,12,0,176,67,0,48,68,0,48,48,0,95,
		1,112,0,112,0,12,1,48,69,0,48,48,0,95,
		1,112,0,112,0,95,2,100,100,100,100,100,100,100,
		120,112,12,73,36,130,0,48,45,0,48,46,0,95,
		1,112,0,48,70,0,48,48,0,95,1,112,0,112,
		0,112,1,73,36,132,0,48,71,0,48,48,0,95,
		1,112,0,106,7,67,111,100,105,103,111,0,112,1,
		73,36,134,0,48,72,0,48,48,0,95,1,112,0,
		112,0,73,36,136,0,48,73,0,48,48,0,95,1,
		112,0,112,0,32,240,1,36,138,0,48,74,0,48,
		36,0,95,1,112,0,48,75,0,48,48,0,95,1,
		112,0,112,0,106,8,99,67,111,100,65,114,116,0,
		112,2,29,153,1,36,140,0,48,20,0,48,36,0,
		95,1,112,0,112,0,48,75,0,48,48,0,95,1,
		112,0,112,0,8,29,122,1,48,73,0,48,36,0,
		95,1,112,0,112,0,32,107,1,36,142,0,48,76,
		0,48,21,0,95,1,112,0,112,0,73,36,144,0,
		48,77,0,48,21,0,95,1,112,0,48,78,0,48,
		48,0,95,1,112,0,112,0,112,1,73,36,145,0,
		48,79,0,48,21,0,95,1,112,0,48,75,0,48,
		48,0,95,1,112,0,112,0,112,1,73,36,146,0,
		48,80,0,48,21,0,95,1,112,0,48,81,0,48,
		48,0,95,1,112,0,112,0,112,1,73,36,147,0,
		48,82,0,48,21,0,95,1,112,0,48,83,0,48,
		36,0,95,1,112,0,112,0,112,1,73,36,149,0,
		48,84,0,48,36,0,95,1,112,0,112,0,28,25,
		36,150,0,48,85,0,48,21,0,95,1,112,0,106,
		3,83,105,0,112,1,73,25,21,36,152,0,48,85,
		0,48,21,0,95,1,112,0,106,1,0,112,1,73,
		36,156,0,48,86,0,48,36,0,95,1,112,0,112,
		0,122,8,28,28,36,157,0,48,87,0,48,21,0,
		95,1,112,0,106,6,69,97,110,49,51,0,112,1,
		73,25,95,36,158,0,48,86,0,48,36,0,95,1,
		112,0,112,0,92,2,8,28,29,36,159,0,48,87,
		0,48,21,0,95,1,112,0,106,7,67,111,100,101,
		51,57,0,112,1,73,25,48,36,160,0,48,86,0,
		48,36,0,95,1,112,0,112,0,92,3,8,28,28,
		36,161,0,48,87,0,48,21,0,95,1,112,0,106,
		8,67,111,100,101,49,50,56,0,112,1,73,36,164,
		0,48,88,0,48,21,0,95,1,112,0,112,0,73,
		36,166,0,48,89,0,48,36,0,95,1,112,0,112,
		0,73,26,109,254,36,172,0,48,89,0,48,48,0,
		95,1,112,0,112,0,73,36,174,0,48,90,0,48,
		46,0,95,1,112,0,48,91,0,48,48,0,95,1,
		112,0,112,0,112,1,73,26,4,254,36,178,0,48,
		92,0,48,48,0,95,1,112,0,176,66,0,12,0,
		176,67,0,48,68,0,48,48,0,95,1,112,0,112,
		0,12,1,112,2,73,36,180,0,48,90,0,48,46,
		0,95,1,112,0,48,47,0,48,48,0,95,1,112,
		0,112,0,112,1,73,36,182,0,48,93,0,48,53,
		0,95,1,112,0,112,0,73,36,184,0,48,47,0,
		48,21,0,95,1,112,0,112,0,121,15,110,7
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
