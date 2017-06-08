/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TStkMinArt.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TSTKMINART );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFGEN );
HB_FUNC_STATIC( TSTKMINART_CREATE );
HB_FUNC_STATIC( TSTKMINART_OPENFILES );
HB_FUNC_STATIC( TSTKMINART_CLOSEFILES );
HB_FUNC_STATIC( TSTKMINART_LRESOURCE );
HB_FUNC_STATIC( TSTKMINART_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( MASUND );
HB_FUNC_EXTERN( CNOMBREUNIDADES );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( TSTOCK );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCHECKBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TRADMENU );
HB_FUNC_EXTERN( AITMART );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TSTKMINART )
{ "TSTKMINART", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TSTKMINART )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFGEN )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSTKMINART_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTKMINART_CREATE )}, NULL },
{ "TSTKMINART_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTKMINART_OPENFILES )}, NULL },
{ "TSTKMINART_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTKMINART_CLOSEFILES )}, NULL },
{ "TSTKMINART_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTKMINART_LRESOURCE )}, NULL },
{ "TSTKMINART_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTKMINART_LGENERATE )}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MASUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MASUND )}, NULL },
{ "CNOMBREUNIDADES", {HB_FS_PUBLIC}, {HB_FUNCNAME( CNOMBREUNIDADES )}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "_OALBPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "OALBPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACRECL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACRECL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OTIKCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIKCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OPROLIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPROLIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OPROMAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPROMAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OHISMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OHISMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSTOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSTOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSTOCK )}, NULL },
{ "LOPENFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSTOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFSERINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFALMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFFAMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LMINCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LMINCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRADMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRADMENU )}, NULL },
{ "NESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMART", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMART )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "LALLALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CALMORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALMDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFAMORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFAMDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMINIMO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NSTOCKALMACEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FAMILIA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NNUMUND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NUNDMIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDIFUND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NNUMUND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUNDMIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TSTKMINART, ".\\.\\Prg\\TStkMinArt.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TSTKMINART
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TSTKMINART )
   #include "hbiniseg.h"
#endif

HB_FUNC( TSTKMINART )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,134,0,36,7,0,103,2,0,100,8,
		29,74,4,176,1,0,104,2,0,12,1,29,63,4,
		166,1,4,0,122,80,1,48,2,0,176,3,0,12,
		0,106,11,84,83,116,107,77,105,110,65,114,116,0,
		108,4,4,1,0,108,0,112,3,80,2,36,9,0,
		48,5,0,95,2,106,6,76,79,71,73,67,0,9,
		95,1,121,72,121,72,121,72,106,9,108,82,101,115,
		117,109,101,110,0,4,1,0,9,112,5,73,36,10,
		0,48,5,0,95,2,106,6,76,79,71,73,67,0,
		9,95,1,121,72,121,72,121,72,106,9,108,69,120,
		99,67,101,114,111,0,4,1,0,9,112,5,73,36,
		11,0,48,5,0,95,2,106,6,76,79,71,73,67,
		0,120,95,1,121,72,121,72,121,72,106,9,108,77,
		105,110,67,101,114,111,0,4,1,0,9,112,5,73,
		36,12,0,48,5,0,95,2,106,8,78,85,77,69,
		82,73,67,0,92,2,95,1,121,72,121,72,121,72,
		106,8,110,69,115,116,97,100,111,0,4,1,0,9,
		112,5,73,36,13,0,48,5,0,95,2,106,7,79,
		66,74,69,67,84,0,100,95,1,121,72,121,72,121,
		72,106,8,111,68,98,102,65,114,116,0,4,1,0,
		9,112,5,73,36,14,0,48,5,0,95,2,106,7,
		79,66,74,69,67,84,0,100,95,1,121,72,121,72,
		121,72,106,9,111,65,108,109,97,99,101,110,0,4,
		1,0,9,112,5,73,36,15,0,48,5,0,95,2,
		106,7,79,66,74,69,67,84,0,100,95,1,121,72,
		121,72,121,72,106,9,111,70,97,109,105,108,105,97,
		0,4,1,0,9,112,5,73,36,16,0,48,5,0,
		95,2,106,7,79,66,74,69,67,84,0,100,95,1,
		121,72,121,72,121,72,106,7,111,83,116,111,99,107,
		0,4,1,0,9,112,5,73,36,17,0,48,5,0,
		95,2,106,7,79,66,74,69,67,84,0,100,95,1,
		121,72,121,72,121,72,106,9,111,65,108,98,80,114,
		118,76,0,4,1,0,9,112,5,73,36,18,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,9,111,70,97,99,
		80,114,118,76,0,4,1,0,9,112,5,73,36,19,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,65,
		108,98,67,108,105,76,0,4,1,0,9,112,5,73,
		36,20,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,9,
		111,70,97,99,67,108,105,76,0,4,1,0,9,112,
		5,73,36,21,0,48,5,0,95,2,106,7,79,66,
		74,69,67,84,0,100,95,1,121,72,121,72,121,72,
		106,9,111,70,97,99,82,101,99,76,0,4,1,0,
		9,112,5,73,36,22,0,48,5,0,95,2,106,7,
		79,66,74,69,67,84,0,100,95,1,121,72,121,72,
		121,72,106,9,111,84,105,107,67,108,105,76,0,4,
		1,0,9,112,5,73,36,23,0,48,5,0,95,2,
		106,7,79,66,74,69,67,84,0,100,95,1,121,72,
		121,72,121,72,106,8,111,80,114,111,76,105,110,0,
		4,1,0,9,112,5,73,36,24,0,48,5,0,95,
		2,106,7,79,66,74,69,67,84,0,100,95,1,121,
		72,121,72,121,72,106,8,111,80,114,111,77,97,116,
		0,4,1,0,9,112,5,73,36,25,0,48,5,0,
		95,2,106,7,79,66,74,69,67,84,0,100,95,1,
		121,72,121,72,121,72,106,8,111,72,105,115,77,111,
		118,0,4,1,0,9,112,5,73,36,27,0,48,6,
		0,95,2,106,7,67,114,101,97,116,101,0,108,7,
		95,1,121,72,121,72,121,72,112,3,73,36,29,0,
		48,6,0,95,2,106,10,79,112,101,110,70,105,108,
		101,115,0,108,8,95,1,121,72,121,72,121,72,112,
		3,73,36,31,0,48,6,0,95,2,106,11,67,108,
		111,115,101,70,105,108,101,115,0,108,9,95,1,121,
		72,121,72,121,72,112,3,73,36,33,0,48,6,0,
		95,2,106,10,108,82,101,115,111,117,114,99,101,0,
		108,10,95,1,121,72,121,72,121,72,112,3,73,36,
		35,0,48,6,0,95,2,106,10,108,71,101,110,101,
		114,97,116,101,0,108,11,95,1,121,72,121,72,121,
		72,112,3,73,36,37,0,48,12,0,95,2,106,11,
		111,68,101,102,68,105,118,73,110,102,0,112,1,73,
		36,38,0,48,12,0,95,2,106,11,111,68,101,102,
		73,110,105,73,110,102,0,112,1,73,36,39,0,48,
		12,0,95,2,106,11,111,68,101,102,70,105,110,73,
		110,102,0,112,1,73,36,41,0,48,13,0,95,2,
		112,0,73,167,14,0,0,176,14,0,104,2,0,95,
		2,20,2,168,48,15,0,95,2,112,0,80,3,176,
		16,0,95,3,106,10,73,110,105,116,67,108,97,115,
		115,0,12,2,28,12,48,17,0,95,3,164,146,1,
		0,73,95,3,110,7,48,15,0,103,2,0,112,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTKMINART_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,45,0,102,80,1,36,47,0,48,18,
		0,95,1,106,8,99,67,111,100,65,108,109,0,106,
		2,67,0,92,3,121,90,8,106,3,64,33,0,6,
		106,5,65,108,109,46,0,9,106,15,67,243,100,105,
		103,111,32,97,108,109,97,99,233,110,0,92,3,112,
		9,73,36,48,0,48,18,0,95,1,106,8,99,67,
		111,100,65,114,116,0,106,2,67,0,92,18,121,90,
		8,106,3,64,33,0,6,106,16,67,243,100,105,103,
		111,32,97,114,116,237,99,117,108,111,0,120,106,16,
		67,243,100,105,103,111,32,97,114,116,237,99,117,108,
		111,0,92,14,112,9,73,36,49,0,48,18,0,95,
		1,106,8,99,78,111,109,65,114,116,0,106,2,67,
		0,92,100,121,90,8,106,3,64,33,0,6,106,9,
		65,114,116,237,99,117,108,111,0,120,106,9,65,114,
		116,237,99,117,108,111,0,92,40,112,9,73,36,50,
		0,48,18,0,95,1,106,8,99,67,111,100,70,97,
		109,0,106,2,67,0,92,16,121,90,8,106,3,64,
		33,0,6,106,5,70,97,109,46,0,120,106,17,70,
		97,109,105,108,105,97,32,97,114,116,237,99,117,108,
		111,0,92,5,112,9,73,36,51,0,48,18,0,95,
		1,106,8,110,78,117,109,85,110,100,0,106,2,78,
		0,92,13,92,6,90,8,176,19,0,12,0,6,176,
		20,0,12,0,120,176,20,0,12,0,92,12,112,9,
		73,36,52,0,48,18,0,95,1,106,8,110,85,110,
		100,77,105,110,0,106,2,78,0,92,13,92,6,90,
		8,176,19,0,12,0,6,106,7,77,105,110,105,109,
		111,0,120,106,16,77,237,110,105,109,111,32,117,110,
		105,100,97,100,101,115,0,92,12,112,9,73,36,53,
		0,48,18,0,95,1,106,8,110,68,105,102,85,110,
		100,0,106,2,78,0,92,13,92,6,90,8,176,19,
		0,12,0,6,106,11,68,105,102,101,114,101,110,99,
		105,97,0,120,106,20,68,105,102,101,114,101,110,99,
		105,97,32,117,110,105,100,97,100,101,115,0,92,12,
		112,9,73,36,55,0,48,21,0,95,1,106,8,67,
		67,79,68,65,76,77,0,106,18,67,67,79,68,65,
		76,77,32,43,32,67,67,79,68,65,82,84,0,112,
		2,73,36,57,0,48,22,0,95,1,89,22,0,0,
		0,1,0,1,0,48,23,0,48,24,0,95,255,112,
		0,112,0,6,89,72,0,0,0,1,0,1,0,106,
		12,65,108,109,97,99,233,110,32,32,58,32,0,176,
		25,0,48,23,0,48,24,0,95,255,112,0,112,0,
		12,1,72,106,2,45,0,72,176,26,0,48,23,0,
		48,24,0,95,255,112,0,112,0,48,27,0,95,255,
		112,0,12,2,72,6,90,22,106,17,84,111,116,97,
		108,32,97,108,109,97,99,233,110,46,46,46,0,6,
		112,3,73,36,59,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTKMINART_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,65,0,120,80,1,36,66,0,176,28,
		0,89,15,0,1,0,0,0,176,29,0,95,1,12,
		1,6,12,1,80,2,36,68,0,113,170,4,0,36,
		70,0,48,30,0,102,48,31,0,176,32,0,106,13,
		65,82,84,73,67,85,76,79,46,68,66,70,0,100,
		12,2,106,13,65,82,84,73,67,85,76,79,46,68,
		66,70,0,100,176,33,0,12,0,100,176,34,0,12,
		0,9,120,9,9,112,9,112,1,73,48,35,0,48,
		36,0,102,112,0,106,13,65,82,84,73,67,85,76,
		79,46,67,68,88,0,112,1,73,48,35,0,48,36,
		0,102,112,0,112,0,73,48,37,0,48,36,0,102,
		112,0,112,0,73,36,72,0,48,38,0,102,48,31,
		0,176,32,0,106,13,65,76,66,80,82,79,86,76,
		46,68,66,70,0,100,12,2,106,13,65,76,66,80,
		82,79,86,76,46,68,66,70,0,100,176,33,0,12,
		0,100,176,39,0,12,0,9,120,9,9,112,9,112,
		1,73,48,35,0,48,40,0,102,112,0,106,13,65,
		76,66,80,82,79,86,76,46,67,68,88,0,112,1,
		73,48,35,0,48,40,0,102,112,0,112,0,73,48,
		37,0,48,40,0,102,112,0,112,0,73,36,74,0,
		48,41,0,102,48,31,0,176,32,0,106,12,70,65,
		67,80,82,86,76,46,68,66,70,0,100,12,2,106,
		12,70,65,67,80,82,86,76,46,68,66,70,0,100,
		176,33,0,12,0,100,176,39,0,12,0,9,120,9,
		9,112,9,112,1,73,48,35,0,48,42,0,102,112,
		0,106,12,70,65,67,80,82,86,76,46,67,68,88,
		0,112,1,73,48,35,0,48,42,0,102,112,0,112,
		0,73,48,37,0,48,42,0,102,112,0,112,0,73,
		36,76,0,48,43,0,102,48,31,0,176,32,0,106,
		12,65,76,66,67,76,73,76,46,68,66,70,0,100,
		12,2,106,12,65,76,66,67,76,73,76,46,68,66,
		70,0,100,176,33,0,12,0,100,176,39,0,12,0,
		9,120,9,9,112,9,112,1,73,48,35,0,48,44,
		0,102,112,0,106,12,65,76,66,67,76,73,76,46,
		67,68,88,0,112,1,73,48,35,0,48,44,0,102,
		112,0,112,0,73,48,37,0,48,44,0,102,112,0,
		112,0,73,36,78,0,48,45,0,102,48,31,0,176,
		32,0,106,12,70,65,67,67,76,73,76,46,68,66,
		70,0,100,12,2,106,12,70,65,67,67,76,73,76,
		46,68,66,70,0,100,176,33,0,12,0,100,176,39,
		0,12,0,9,120,9,9,112,9,112,1,73,48,35,
		0,48,46,0,102,112,0,106,12,70,65,67,67,76,
		73,76,46,67,68,88,0,112,1,73,48,35,0,48,
		46,0,102,112,0,112,0,73,48,37,0,48,46,0,
		102,112,0,112,0,73,36,80,0,48,47,0,102,48,
		31,0,176,32,0,106,12,70,65,67,82,69,67,76,
		46,68,66,70,0,100,12,2,106,12,70,65,67,82,
		69,67,76,46,68,66,70,0,100,176,33,0,12,0,
		100,176,39,0,12,0,9,120,9,9,112,9,112,1,
		73,48,35,0,48,48,0,102,112,0,106,12,70,65,
		67,82,69,67,76,46,67,68,88,0,112,1,73,48,
		35,0,48,48,0,102,112,0,112,0,73,48,37,0,
		48,48,0,102,112,0,112,0,73,36,82,0,48,49,
		0,102,48,31,0,176,32,0,106,10,84,73,75,69,
		76,46,68,66,70,0,100,12,2,106,10,84,73,75,
		69,76,46,68,66,70,0,100,176,33,0,12,0,100,
		176,39,0,12,0,9,120,9,9,112,9,112,1,73,
		48,35,0,48,50,0,102,112,0,106,10,84,73,75,
		69,76,46,67,68,88,0,112,1,73,48,35,0,48,
		50,0,102,112,0,112,0,73,48,37,0,48,50,0,
		102,112,0,112,0,73,36,84,0,48,51,0,102,48,
		31,0,176,32,0,106,11,80,82,79,76,73,78,46,
		68,66,70,0,100,12,2,106,11,80,82,79,76,73,
		78,46,68,66,70,0,100,176,33,0,12,0,100,176,
		39,0,12,0,9,120,9,9,112,9,112,1,73,48,
		35,0,48,52,0,102,112,0,106,11,80,82,79,76,
		73,78,46,67,68,88,0,112,1,73,48,35,0,48,
		52,0,102,112,0,112,0,73,48,37,0,48,52,0,
		102,112,0,112,0,73,36,86,0,48,53,0,102,48,
		31,0,176,32,0,106,11,80,82,79,77,65,84,46,
		68,66,70,0,100,12,2,106,11,80,82,79,77,65,
		84,46,68,66,70,0,100,176,33,0,12,0,100,176,
		39,0,12,0,9,120,9,9,112,9,112,1,73,48,
		35,0,48,54,0,102,112,0,106,11,80,82,79,77,
		65,84,46,67,68,88,0,112,1,73,48,35,0,48,
		54,0,102,112,0,112,0,73,48,37,0,48,54,0,
		102,112,0,112,0,73,36,88,0,48,55,0,102,48,
		31,0,176,32,0,106,11,72,73,83,77,79,86,46,
		68,66,70,0,100,12,2,106,11,72,73,83,77,79,
		86,46,68,66,70,0,100,176,33,0,12,0,100,176,
		39,0,12,0,9,120,9,9,112,9,112,1,73,48,
		35,0,48,56,0,102,112,0,106,11,72,73,83,77,
		79,86,46,67,68,88,0,112,1,73,48,35,0,48,
		56,0,102,112,0,112,0,73,48,37,0,48,56,0,
		102,112,0,112,0,73,36,90,0,48,57,0,102,48,
		2,0,176,58,0,12,0,112,0,112,1,73,36,92,
		0,48,59,0,48,60,0,102,112,0,112,0,31,8,
		36,93,0,9,80,1,36,94,0,114,66,0,0,36,
		96,0,115,73,36,98,0,9,80,1,36,99,0,176,
		61,0,106,41,73,109,112,111,115,105,98,108,101,32,
		97,98,114,105,114,32,116,111,100,97,115,32,108,97,
		115,32,98,97,115,101,115,32,100,101,32,100,97,116,
		111,115,0,20,1,36,103,0,176,28,0,95,2,20,
		1,36,105,0,95,1,31,12,36,106,0,48,62,0,
		102,112,0,73,36,109,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTKMINART_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,115,0,176,63,0,48,36,0,102,112,0,12,1,
		31,30,48,64,0,48,36,0,102,112,0,112,0,28,
		17,36,116,0,48,65,0,48,36,0,102,112,0,112,
		0,73,36,119,0,176,63,0,48,40,0,102,112,0,
		12,1,31,30,48,64,0,48,40,0,102,112,0,112,
		0,28,17,36,120,0,48,65,0,48,40,0,102,112,
		0,112,0,73,36,123,0,176,63,0,48,42,0,102,
		112,0,12,1,31,30,48,64,0,48,42,0,102,112,
		0,112,0,28,17,36,124,0,48,65,0,48,42,0,
		102,112,0,112,0,73,36,127,0,176,63,0,48,44,
		0,102,112,0,12,1,31,30,48,64,0,48,44,0,
		102,112,0,112,0,28,17,36,128,0,48,65,0,48,
		44,0,102,112,0,112,0,73,36,131,0,176,63,0,
		48,46,0,102,112,0,12,1,31,30,48,64,0,48,
		46,0,102,112,0,112,0,28,17,36,132,0,48,65,
		0,48,46,0,102,112,0,112,0,73,36,135,0,176,
		63,0,48,48,0,102,112,0,12,1,31,30,48,64,
		0,48,48,0,102,112,0,112,0,28,17,36,136,0,
		48,65,0,48,48,0,102,112,0,112,0,73,36,139,
		0,176,63,0,48,50,0,102,112,0,12,1,31,30,
		48,64,0,48,50,0,102,112,0,112,0,28,17,36,
		140,0,48,65,0,48,50,0,102,112,0,112,0,73,
		36,143,0,176,63,0,48,52,0,102,112,0,12,1,
		31,30,48,64,0,48,52,0,102,112,0,112,0,28,
		17,36,144,0,48,65,0,48,52,0,102,112,0,112,
		0,73,36,147,0,176,63,0,48,54,0,102,112,0,
		12,1,31,30,48,64,0,48,54,0,102,112,0,112,
		0,28,17,36,148,0,48,65,0,48,54,0,102,112,
		0,112,0,73,36,151,0,176,63,0,48,56,0,102,
		112,0,12,1,31,30,48,64,0,48,56,0,102,112,
		0,112,0,28,17,36,152,0,48,65,0,48,56,0,
		102,112,0,112,0,73,36,155,0,176,63,0,48,60,
		0,102,112,0,12,1,31,17,36,156,0,48,65,0,
		48,60,0,102,112,0,112,0,73,36,159,0,48,30,
		0,102,100,112,1,73,36,160,0,48,57,0,102,100,
		112,1,73,36,161,0,48,38,0,102,100,112,1,73,
		36,162,0,48,41,0,102,100,112,1,73,36,163,0,
		48,43,0,102,100,112,1,73,36,164,0,48,45,0,
		102,100,112,1,73,36,165,0,48,47,0,102,100,112,
		1,73,36,166,0,48,49,0,102,100,112,1,73,36,
		167,0,48,51,0,102,100,112,1,73,36,168,0,48,
		53,0,102,100,112,1,73,36,169,0,48,55,0,102,
		100,112,1,73,36,171,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTKMINART_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,175,0,102,80,2,36,177,0,48,66,
		0,95,2,9,112,1,73,36,179,0,48,67,0,95,
		2,106,11,73,78,70,95,71,69,78,48,55,65,0,
		112,1,31,8,36,180,0,9,110,7,36,187,0,48,
		68,0,95,2,92,70,92,80,92,90,92,100,93,188,
		2,112,5,31,8,36,188,0,9,110,7,36,195,0,
		48,69,0,95,2,93,150,0,93,160,0,93,170,0,
		93,180,0,93,132,3,112,5,31,8,36,196,0,9,
		110,7,36,201,0,48,70,0,176,71,0,12,0,93,
		203,0,89,37,0,1,0,1,0,2,0,176,72,0,
		12,0,121,8,28,11,48,73,0,95,255,112,0,25,
		11,48,74,0,95,255,95,1,112,1,6,48,75,0,
		48,76,0,95,2,112,0,112,0,122,1,100,100,100,
		100,100,100,9,100,9,112,12,73,36,207,0,48,77,
		0,48,78,0,95,2,112,0,48,79,0,48,36,0,
		95,2,112,0,112,0,112,1,73,36,211,0,48,70,
		0,176,80,0,12,0,89,37,0,1,0,1,0,2,
		0,176,72,0,12,0,121,8,28,11,48,81,0,95,
		255,112,0,25,11,48,82,0,95,255,95,1,112,1,
		6,48,75,0,48,76,0,95,2,112,0,112,0,122,
		1,100,93,201,0,93,202,0,4,2,0,100,100,100,
		100,9,100,100,112,11,73,36,213,0,48,83,0,95,
		2,176,84,0,12,0,48,85,0,48,36,0,95,2,
		112,0,112,0,112,2,73,36,215,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTKMINART_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,222,0,102,80,1,36,224,0,106,1,
		0,80,2,36,225,0,121,80,3,36,227,0,48,86,
		0,48,87,0,95,1,112,0,112,0,73,36,228,0,
		48,88,0,48,89,0,95,1,112,0,112,0,73,36,
		229,0,48,90,0,48,24,0,95,1,112,0,112,0,
		73,36,231,0,48,91,0,48,27,0,95,1,112,0,
		112,0,73,36,237,0,48,92,0,95,1,90,31,106,
		15,70,101,99,104,97,32,32,32,32,32,32,32,58,
		32,0,176,93,0,176,94,0,12,0,12,1,72,6,
		89,79,0,0,0,1,0,1,0,106,15,65,108,109,
		97,99,101,110,101,115,32,32,32,58,32,0,48,95,
		0,95,255,112,0,28,12,106,6,84,111,100,111,115,
		0,25,34,176,96,0,48,97,0,95,255,112,0,12,
		1,106,4,32,62,32,0,72,176,96,0,48,98,0,
		95,255,112,0,12,1,72,72,6,89,79,0,0,0,
		1,0,1,0,106,15,70,97,109,105,108,105,97,115,
		32,32,32,32,58,32,0,48,99,0,95,255,112,0,
		28,12,106,6,84,111,100,97,115,0,25,34,176,96,
		0,48,100,0,95,255,112,0,12,1,106,4,32,62,
		32,0,72,176,96,0,48,101,0,95,255,112,0,12,
		1,72,72,6,89,84,0,0,0,1,0,1,0,48,
		81,0,95,255,112,0,122,8,28,43,106,37,83,111,
		108,111,32,97,114,116,237,99,117,108,111,115,32,99,
		111,110,32,115,116,111,99,107,32,98,97,106,111,32,
		109,237,110,105,109,111,0,25,24,106,20,84,111,100,
		111,115,32,108,111,115,32,97,114,116,237,99,117,108,
		111,115,0,6,89,72,0,0,0,1,0,1,0,48,
		73,0,95,255,112,0,28,52,106,46,83,111,108,111,
		32,97,114,116,237,99,117,108,111,115,32,99,111,110,
		32,115,116,111,99,107,32,109,237,110,105,109,111,32,
		100,105,115,116,105,110,116,111,32,100,101,32,48,0,
		25,5,106,1,0,6,4,5,0,112,1,73,36,239,
		0,48,102,0,48,36,0,95,1,112,0,106,7,67,
		79,68,73,71,79,0,112,1,73,36,241,0,106,30,
		110,67,116,108,83,116,111,99,107,32,61,61,32,49,
		32,46,97,110,100,46,32,33,108,75,105,116,65,114,
		116,0,80,2,36,243,0,48,99,0,95,1,112,0,
		31,86,36,244,0,96,2,0,106,20,32,46,97,110,
		100,46,32,70,97,109,105,108,105,97,32,62,61,32,
		34,0,176,25,0,48,100,0,95,1,112,0,12,1,
		72,106,21,34,32,46,97,110,100,46,32,70,97,109,
		105,108,105,97,32,60,61,32,34,0,72,176,25,0,
		48,101,0,95,1,112,0,12,1,72,106,2,34,0,
		72,135,36,247,0,176,63,0,48,103,0,48,104,0,
		95,1,112,0,112,0,12,1,31,32,36,248,0,96,
		2,0,106,8,32,46,97,110,100,46,32,0,48,103,
		0,48,104,0,95,1,112,0,112,0,72,135,36,251,
		0,48,21,0,48,36,0,95,1,112,0,176,105,0,
		12,0,176,106,0,48,107,0,48,36,0,95,1,112,
		0,112,0,12,1,48,108,0,48,36,0,95,1,112,
		0,112,0,95,2,100,100,100,100,100,100,100,120,112,
		12,73,36,253,0,48,109,0,95,1,112,0,32,63,
		2,48,110,0,48,27,0,95,1,112,0,112,0,32,
		48,2,36,255,0,48,95,0,95,1,112,0,31,48,
		48,23,0,48,27,0,95,1,112,0,112,0,48,97,
		0,95,1,112,0,16,29,250,1,48,23,0,48,27,
		0,95,1,112,0,112,0,48,98,0,95,1,112,0,
		34,29,227,1,36,1,1,48,77,0,48,78,0,95,
		1,112,0,48,111,0,48,36,0,95,1,112,0,112,
		0,112,1,73,36,3,1,48,91,0,48,36,0,95,
		1,112,0,112,0,73,36,5,1,48,109,0,95,1,
		112,0,32,142,1,48,110,0,48,36,0,95,1,112,
		0,112,0,32,127,1,36,7,1,48,73,0,95,1,
		112,0,28,19,48,112,0,48,36,0,95,1,112,0,
		112,0,121,69,29,51,1,36,9,1,48,113,0,48,
		60,0,95,1,112,0,48,114,0,48,36,0,95,1,
		112,0,112,0,48,23,0,48,27,0,95,1,112,0,
		112,0,112,2,80,3,36,11,1,48,81,0,95,1,
		112,0,122,8,31,20,95,3,48,112,0,48,36,0,
		95,1,112,0,112,0,35,29,234,0,36,13,1,48,
		115,0,48,24,0,95,1,112,0,112,0,73,36,14,
		1,48,116,0,48,24,0,95,1,112,0,48,23,0,
		48,27,0,95,1,112,0,112,0,112,1,73,36,15,
		1,48,117,0,48,24,0,95,1,112,0,48,118,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,16,
		1,48,119,0,48,24,0,95,1,112,0,48,114,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,17,
		1,48,120,0,48,24,0,95,1,112,0,48,121,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,18,
		1,48,122,0,48,24,0,95,1,112,0,95,3,112,
		1,73,36,19,1,48,123,0,48,24,0,95,1,112,
		0,48,112,0,48,36,0,95,1,112,0,112,0,112,
		1,73,36,20,1,48,124,0,48,24,0,95,1,112,
		0,48,125,0,48,24,0,95,1,112,0,112,0,48,
		126,0,48,24,0,95,1,112,0,112,0,49,112,1,
		73,36,21,1,48,127,0,48,24,0,95,1,112,0,
		112,0,73,36,27,1,48,128,0,48,36,0,95,1,
		112,0,112,0,73,36,29,1,48,129,0,48,78,0,
		95,1,112,0,48,130,0,48,36,0,95,1,112,0,
		112,0,112,1,73,26,107,254,36,33,1,48,129,0,
		48,78,0,95,1,112,0,48,79,0,48,36,0,95,
		1,112,0,112,0,112,1,73,36,37,1,48,128,0,
		48,27,0,95,1,112,0,112,0,73,26,186,253,36,
		41,1,48,131,0,48,36,0,95,1,112,0,176,105,
		0,12,0,176,106,0,48,107,0,48,36,0,95,1,
		112,0,112,0,12,1,112,2,73,36,43,1,48,88,
		0,48,87,0,95,1,112,0,112,0,73,36,45,1,
		48,79,0,48,24,0,95,1,112,0,112,0,121,15,
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

