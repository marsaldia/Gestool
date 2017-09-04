/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\SincronizaPreventa.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SINCRONIZAPREVENTA );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFGEN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_STATIC( SINCRONIZAPREVENTA_OPENFILES );
HB_FUNC_STATIC( SINCRONIZAPREVENTA_CLOSEFILES );
HB_FUNC_STATIC( SINCRONIZAPREVENTA_ACTIVATE );
HB_FUNC_STATIC( SINCRONIZAPREVENTA_SEARCH );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( NLEVELUSR );
HB_FUNC_EXTERN( NAND );
HB_FUNC_EXTERN( SYSREFRESH );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( GETPVPROFSTRING );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TBITMAP );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TSAY );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( WRITEPPROSTRING );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( PDARUTASENDERRECIVER );
HB_FUNC_EXTERN( PDAALMACENSENDERRECIVER );
HB_FUNC_EXTERN( PDATIVASENDERRECIVER );
HB_FUNC_EXTERN( PDATRANSSENDERRECIVER );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SINCRONIZAPREVENTA )
{ "SINCRONIZAPREVENTA", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SINCRONIZAPREVENTA )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFGEN )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SINCRONIZAPREVENTA_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SINCRONIZAPREVENTA_OPENFILES )}, NULL },
{ "SINCRONIZAPREVENTA_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SINCRONIZAPREVENTA_CLOSEFILES )}, NULL },
{ "SINCRONIZAPREVENTA_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SINCRONIZAPREVENTA_ACTIVATE )}, NULL },
{ "SINCRONIZAPREVENTA_SEARCH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SINCRONIZAPREVENTA_SEARCH )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "NLEVELUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NLEVELUSR )}, NULL },
{ "NAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( NAND )}, NULL },
{ "SYSREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SYSREFRESH )}, NULL },
{ "CLOSEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPENFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CRUTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "GETPVPROFSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPVPROFSTRING )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "_CCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBITMAP )}, NULL },
{ "_ORUTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "CRUTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OMESSAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSAY )}, NULL },
{ "CMESSAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "SEARCH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WRITEPPROSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( WRITEPPROSTRING )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PDARUTASENDERRECIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( PDARUTASENDERRECIVER )}, NULL },
{ "OMESSAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PDAALMACENSENDERRECIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( PDAALMACENSENDERRECIVER )}, NULL },
{ "PDATIVASENDERRECIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( PDATIVASENDERRECIVER )}, NULL },
{ "PDATRANSSENDERRECIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( PDATRANSSENDERRECIVER )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SINCRONIZAPREVENTA, ".\\.\\Prg\\SincronizaPreventa.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SINCRONIZAPREVENTA
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SINCRONIZAPREVENTA )
   #include "hbiniseg.h"
#endif

HB_FUNC( SINCRONIZAPREVENTA )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,75,0,36,7,0,103,2,0,100,8,
		29,80,2,176,1,0,104,2,0,12,1,29,69,2,
		166,7,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,19,83,105,110,99,114,111,110,105,122,97,80,
		114,101,118,101,110,116,97,0,108,4,4,1,0,108,
		0,112,3,80,2,36,9,0,48,5,0,95,2,106,
		7,79,66,74,69,67,84,0,100,95,1,121,72,121,
		72,121,72,106,8,111,77,101,116,77,115,103,0,4,
		1,0,9,112,5,73,36,10,0,48,5,0,95,2,
		106,7,79,66,74,69,67,84,0,100,95,1,121,72,
		121,72,121,72,106,6,111,82,117,116,97,0,4,1,
		0,9,112,5,73,36,11,0,48,5,0,95,2,106,
		10,67,72,65,82,65,67,84,69,82,0,176,6,0,
		93,250,0,12,1,95,1,121,72,121,72,121,72,106,
		6,99,82,117,116,97,0,4,1,0,9,112,5,73,
		36,12,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,12,
		111,67,111,100,69,109,112,114,101,115,97,0,4,1,
		0,9,112,5,73,36,13,0,48,5,0,95,2,106,
		10,67,72,65,82,65,67,84,69,82,0,176,6,0,
		93,250,0,12,1,95,1,121,72,121,72,121,72,106,
		12,99,67,111,100,69,109,112,114,101,115,97,0,4,
		1,0,9,112,5,73,36,14,0,48,5,0,95,2,
		106,7,79,66,74,69,67,84,0,100,95,1,121,72,
		121,72,121,72,106,9,111,77,101,115,115,97,103,101,
		0,4,1,0,9,112,5,73,36,15,0,48,5,0,
		95,2,106,10,67,72,65,82,65,67,84,69,82,0,
		106,1,0,95,1,121,72,121,72,121,72,106,9,99,
		77,101,115,115,97,103,101,0,4,1,0,9,112,5,
		73,36,17,0,48,7,0,95,2,106,10,79,112,101,
		110,70,105,108,101,115,0,108,8,95,1,121,72,121,
		72,121,72,112,3,73,36,19,0,48,7,0,95,2,
		106,11,67,108,111,115,101,70,105,108,101,115,0,108,
		9,95,1,121,72,121,72,121,72,112,3,73,36,21,
		0,48,7,0,95,2,106,9,65,99,116,105,118,97,
		116,101,0,108,10,95,1,121,72,121,72,121,72,112,
		3,73,36,23,0,48,7,0,95,2,106,7,83,101,
		97,114,99,104,0,108,11,95,1,121,72,121,72,121,
		72,112,3,73,36,25,0,48,12,0,95,2,112,0,
		73,167,14,0,0,176,13,0,104,2,0,95,2,20,
		2,168,48,14,0,95,2,112,0,80,3,176,15,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,16,0,95,3,164,146,1,0,73,
		95,3,110,7,48,14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SINCRONIZAPREVENTA_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,31,0,120,80,1,36,32,0,176,17,
		0,89,15,0,1,0,0,0,176,18,0,95,1,12,
		1,6,12,1,80,2,36,34,0,113,126,0,0,36,
		36,0,48,19,0,102,48,20,0,176,21,0,106,13,
		65,82,84,73,67,85,76,79,46,68,66,70,0,100,
		12,2,106,13,65,82,84,73,67,85,76,79,46,68,
		66,70,0,100,176,22,0,12,0,100,176,23,0,12,
		0,9,120,9,9,112,9,112,1,73,48,24,0,48,
		25,0,102,112,0,106,13,65,82,84,73,67,85,76,
		79,46,67,68,88,0,112,1,73,48,24,0,48,25,
		0,102,112,0,112,0,73,48,26,0,48,25,0,102,
		112,0,112,0,73,114,88,0,0,36,38,0,115,73,
		36,40,0,176,27,0,106,42,73,109,112,111,115,105,
		98,108,101,32,97,98,114,105,114,32,116,111,100,97,
		115,32,108,97,115,32,98,97,115,101,115,32,100,101,
		32,100,97,116,111,115,46,0,106,9,65,116,101,110,
		99,105,243,110,0,20,2,36,42,0,48,28,0,102,
		112,0,73,36,44,0,9,80,1,36,48,0,176,17,
		0,95,2,20,1,36,50,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SINCRONIZAPREVENTA_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,56,0,176,29,0,48,25,0,102,112,0,12,1,
		31,17,36,57,0,48,30,0,48,25,0,102,112,0,
		112,0,73,36,60,0,48,19,0,102,100,112,1,73,
		36,62,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SINCRONIZAPREVENTA_ACTIVATE )
{
	static const HB_BYTE pcode[] =
	{
		13,7,2,36,66,0,102,80,3,36,70,0,121,80,
		6,36,72,0,106,1,0,80,7,36,74,0,106,1,
		0,80,8,36,77,0,95,1,100,8,28,12,106,6,
		48,52,48,49,54,0,80,1,36,78,0,95,2,100,
		8,28,9,176,31,0,12,0,80,2,36,82,0,176,
		32,0,95,1,12,1,80,5,36,83,0,176,33,0,
		95,5,122,12,2,121,69,28,39,36,84,0,176,27,
		0,106,21,65,99,99,101,115,111,32,110,111,32,112,
		101,114,109,105,116,105,100,111,46,0,20,1,36,85,
		0,100,110,7,36,90,0,95,2,100,69,28,23,36,
		91,0,176,34,0,20,0,48,35,0,95,2,112,0,
		73,176,34,0,20,0,36,94,0,48,36,0,95,3,
		112,0,31,9,36,95,0,95,3,110,7,36,102,0,
		48,37,0,95,3,176,38,0,176,39,0,106,9,80,
		114,101,118,101,110,116,97,0,106,5,82,117,116,97,
		0,176,6,0,93,250,0,12,1,176,40,0,12,0,
		106,12,69,109,112,114,101,115,97,46,73,110,105,0,
		72,12,4,93,250,0,12,2,112,1,73,36,103,0,
		48,41,0,95,3,176,38,0,176,39,0,106,9,80,
		114,101,118,101,110,116,97,0,106,8,69,109,112,114,
		101,115,97,0,176,6,0,93,250,0,12,1,176,40,
		0,12,0,106,12,69,109,112,114,101,115,97,46,73,
		110,105,0,72,12,4,93,250,0,12,2,112,1,73,
		36,105,0,48,2,0,176,42,0,12,0,100,100,100,
		100,100,106,13,83,73,78,67,82,79,78,73,90,65,
		80,67,0,100,9,100,100,100,100,176,31,0,12,0,
		9,100,100,100,100,100,9,100,106,5,111,68,108,103,
		0,100,100,112,24,80,4,36,111,0,48,43,0,176,
		44,0,12,0,93,88,2,106,16,103,99,95,112,100,
		97,95,119,114,105,116,101,95,52,56,0,100,95,4,
		100,100,9,9,100,100,9,100,100,120,112,14,80,9,
		36,116,0,48,45,0,95,3,48,43,0,176,46,0,
		12,0,92,100,89,37,0,1,0,1,0,3,0,176,
		47,0,12,0,121,8,28,11,48,48,0,95,255,112,
		0,25,11,48,37,0,95,255,95,1,112,1,6,95,
		4,100,100,100,100,100,100,100,100,9,100,100,9,9,
		100,100,100,100,100,100,100,100,100,112,25,112,1,73,
		36,121,0,48,49,0,95,3,48,43,0,176,46,0,
		12,0,92,120,89,37,0,1,0,1,0,3,0,176,
		47,0,12,0,121,8,28,11,48,50,0,95,255,112,
		0,25,11,48,41,0,95,255,95,1,112,1,6,95,
		4,100,100,100,100,100,100,100,100,9,100,100,9,9,
		100,100,100,100,100,100,100,100,100,112,25,112,1,73,
		36,126,0,48,51,0,95,3,48,43,0,176,52,0,
		12,0,92,110,89,17,0,0,0,1,0,3,0,48,
		53,0,95,255,112,0,6,95,4,100,100,100,9,100,
		9,9,100,112,11,112,1,73,36,131,0,48,43,0,
		176,54,0,12,0,93,244,1,89,21,0,0,0,2,
		0,3,0,4,0,48,55,0,95,255,95,254,112,1,
		6,95,4,100,100,9,100,100,100,9,112,10,73,36,
		136,0,48,43,0,176,54,0,12,0,93,38,2,89,
		17,0,0,0,1,0,4,0,48,30,0,95,255,112,
		0,6,95,4,100,100,9,100,100,100,9,112,10,73,
		36,138,0,48,56,0,95,4,48,57,0,95,4,112,
		0,48,58,0,95,4,112,0,48,59,0,95,4,112,
		0,120,100,100,100,48,60,0,95,4,112,0,100,100,
		100,112,11,73,36,140,0,48,28,0,95,3,112,0,
		73,36,142,0,48,30,0,95,9,112,0,73,36,148,
		0,176,61,0,106,9,80,114,101,118,101,110,116,97,
		0,106,5,82,117,116,97,0,48,48,0,95,3,112,
		0,176,40,0,12,0,106,12,69,109,112,114,101,115,
		97,46,73,110,105,0,72,20,4,36,149,0,176,61,
		0,106,9,80,114,101,118,101,110,116,97,0,106,8,
		69,109,112,114,101,115,97,0,48,50,0,95,3,112,
		0,176,40,0,12,0,106,12,69,109,112,114,101,115,
		97,46,73,110,105,0,72,20,4,36,151,0,95,3,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SINCRONIZAPREVENTA_SEARCH )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,159,0,176,62,0,48,48,0,102,112,
		0,12,1,106,4,69,77,80,0,72,176,62,0,48,
		50,0,102,112,0,12,1,72,106,2,92,0,72,80,
		4,36,161,0,176,29,0,48,48,0,102,112,0,12,
		1,28,74,176,29,0,48,50,0,102,112,0,12,1,
		28,61,36,162,0,176,27,0,106,43,76,97,32,114,
		117,116,97,32,100,101,108,32,115,101,114,118,105,100,
		111,114,32,110,111,32,112,117,101,100,101,32,101,115,
		116,97,114,32,118,97,99,105,97,46,0,20,1,36,
		163,0,9,110,7,36,166,0,48,63,0,95,1,112,
		0,73,36,168,0,176,17,0,89,15,0,1,0,0,
		0,176,18,0,95,1,12,1,6,12,1,80,2,36,
		169,0,113,109,0,0,36,179,0,48,64,0,176,65,
		0,12,0,100,48,66,0,102,112,0,95,4,112,3,
		73,36,185,0,48,64,0,176,67,0,12,0,100,48,
		66,0,102,112,0,95,4,112,3,73,36,191,0,48,
		64,0,176,68,0,12,0,100,48,66,0,102,112,0,
		176,62,0,48,48,0,102,112,0,12,1,112,3,73,
		36,217,0,48,64,0,176,69,0,12,0,100,48,66,
		0,102,112,0,95,4,112,3,73,114,75,0,0,36,
		225,0,115,80,3,36,227,0,176,27,0,106,47,79,
		99,117,114,114,105,243,32,117,110,32,101,114,114,111,
		114,32,97,108,32,115,105,110,99,114,111,110,105,122,
		97,114,32,108,111,115,32,102,105,99,104,101,114,111,
		115,13,10,0,176,70,0,95,3,12,1,72,20,1,
		36,231,0,176,17,0,95,2,20,1,36,233,0,48,
		71,0,95,1,112,0,73,36,235,0,176,72,0,106,
		33,80,114,111,99,101,115,111,32,102,105,110,97,108,
		105,122,97,100,111,32,99,111,114,114,101,99,116,97,
		109,101,110,116,101,0,20,1,36,237,0,48,30,0,
		95,1,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,75,0,2,0,116,75,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

