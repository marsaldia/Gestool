/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\OInfBRap.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( OINFBRAP );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TPRVINF );
HB_FUNC_STATIC( OINFBRAP_CREATE );
HB_FUNC_STATIC( OINFBRAP_OPENFILES );
HB_FUNC_STATIC( OINFBRAP_CLOSEFILES );
HB_FUNC_STATIC( OINFBRAP_LRESOURCE );
HB_FUNC_STATIC( OINFBRAP_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( AITMCOMPRAS );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NTOTLALBPRV );
HB_FUNC_EXTERN( NTOTLFACPRV );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OINFBRAP )
{ "OINFBRAP", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OINFBRAP )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TPRVINF", {HB_FS_PUBLIC}, {HB_FUNCNAME( TPRVINF )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OINFBRAP_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OINFBRAP_CREATE )}, NULL },
{ "OINFBRAP_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OINFBRAP_OPENFILES )}, NULL },
{ "OINFBRAP_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OINFBRAP_CLOSEFILES )}, NULL },
{ "OINFBRAP_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OINFBRAP_LRESOURCE )}, NULL },
{ "OINFBRAP_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( OINFBRAP_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPICOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CNOMPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "_OFACPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFACPRVP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFACPRVP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMCOMPRAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMCOMPRAS )}, NULL },
{ "ODEFPRVINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLPRV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CPRVORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPRVDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTIPDOC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDOCMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DFECMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDETALLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALMLIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCOMRAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDTORAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NIMPTOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTLALBPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTLALBPRV )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTRAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPTOT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOMRAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDPROVEEDOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NNUMFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFFAC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTLFACPRV", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTLFACPRV )}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OINFBRAP, ".\\.\\Prg\\OInfBRap.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OINFBRAP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OINFBRAP )
   #include "hbiniseg.h"
#endif

HB_FUNC( OINFBRAP )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,127,0,36,8,0,103,2,0,100,8,
		29,248,1,176,1,0,104,2,0,12,1,29,237,1,
		166,175,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,79,73,110,102,66,82,97,112,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,7,79,66,74,69,67,84,0,100,95,
		1,121,72,121,72,121,72,106,9,111,65,108,98,80,
		114,118,84,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,9,111,65,108,
		98,80,114,118,76,0,4,1,0,9,112,5,73,36,
		12,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,9,111,
		70,97,99,80,114,118,84,0,4,1,0,9,112,5,
		73,36,13,0,48,5,0,95,2,106,7,79,66,74,
		69,67,84,0,100,95,1,121,72,121,72,121,72,106,
		9,111,70,97,99,80,114,118,76,0,4,1,0,9,
		112,5,73,36,14,0,48,5,0,95,2,106,7,79,
		66,74,69,67,84,0,100,95,1,121,72,121,72,121,
		72,106,9,111,70,97,99,80,114,118,80,0,4,1,
		0,9,112,5,73,36,16,0,48,6,0,95,2,106,
		7,67,114,101,97,116,101,0,108,7,95,1,121,72,
		121,72,121,72,112,3,73,36,18,0,48,6,0,95,
		2,106,10,79,112,101,110,70,105,108,101,115,0,108,
		8,95,1,121,72,121,72,121,72,112,3,73,36,20,
		0,48,6,0,95,2,106,11,67,108,111,115,101,70,
		105,108,101,115,0,108,9,95,1,121,72,121,72,121,
		72,112,3,73,36,22,0,48,6,0,95,2,106,10,
		108,82,101,115,111,117,114,99,101,0,108,10,95,1,
		121,72,121,72,121,72,112,3,73,36,24,0,48,6,
		0,95,2,106,10,108,71,101,110,101,114,97,116,101,
		0,108,11,95,1,121,72,121,72,121,72,112,3,73,
		36,26,0,48,12,0,95,2,112,0,73,167,14,0,
		0,176,13,0,104,2,0,95,2,20,2,168,48,14,
		0,95,2,112,0,80,3,176,15,0,95,3,106,10,
		73,110,105,116,67,108,97,115,115,0,12,2,28,12,
		48,16,0,95,3,164,146,1,0,73,95,3,110,7,
		48,14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OINFBRAP_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,30,0,102,80,1,36,32,0,48,17,
		0,95,1,106,8,99,84,105,112,68,111,99,0,106,
		2,67,0,92,10,121,90,8,106,3,64,33,0,6,
		106,15,84,105,112,111,32,100,111,99,117,109,101,110,
		116,111,0,120,106,15,84,105,112,111,32,100,111,99,
		117,109,101,110,116,111,0,92,12,9,112,10,73,36,
		33,0,48,17,0,95,1,106,8,99,68,111,99,77,
		111,118,0,106,2,67,0,92,14,121,90,8,106,3,
		64,33,0,6,106,5,68,111,99,46,0,120,106,10,
		68,111,99,117,109,101,110,116,111,0,92,8,9,112,
		10,73,36,34,0,48,17,0,95,1,106,8,100,70,
		101,99,77,111,118,0,106,2,68,0,92,8,121,90,
		8,106,3,64,33,0,6,106,6,70,101,99,104,97,
		0,120,106,6,70,101,99,104,97,0,92,10,9,112,
		10,73,36,35,0,48,17,0,95,1,106,8,99,67,
		111,100,80,114,118,0,106,2,67,0,92,12,121,90,
		8,106,3,64,33,0,6,106,5,80,114,118,46,0,
		9,106,15,67,111,100,46,32,80,114,111,118,101,101,
		100,111,114,0,92,9,112,9,73,36,36,0,48,17,
		0,95,1,106,8,99,78,111,109,80,114,118,0,106,
		2,67,0,92,50,121,90,8,106,3,64,33,0,6,
		106,10,80,114,111,118,101,101,100,111,114,0,9,106,
		17,78,111,109,98,114,101,32,80,114,111,118,101,101,
		100,111,114,0,92,35,112,9,73,36,37,0,48,17,
		0,95,1,106,8,99,78,105,102,80,114,118,0,106,
		2,67,0,92,15,121,90,8,106,3,64,33,0,6,
		106,4,78,105,102,0,9,106,4,78,105,102,0,92,
		15,112,9,73,36,38,0,48,17,0,95,1,106,8,
		99,68,111,109,80,114,118,0,106,2,67,0,92,35,
		121,90,8,106,3,64,33,0,6,106,10,68,111,109,
		105,99,105,108,105,111,0,9,106,10,68,111,109,105,
		99,105,108,105,111,0,92,35,112,9,73,36,39,0,
		48,17,0,95,1,106,8,99,80,111,98,80,114,118,
		0,106,2,67,0,92,25,121,90,8,106,3,64,33,
		0,6,106,10,80,111,98,108,97,99,105,243,110,0,
		9,106,10,80,111,98,108,97,99,105,243,110,0,92,
		25,112,9,73,36,40,0,48,17,0,95,1,106,8,
		99,80,114,111,80,114,118,0,106,2,67,0,92,20,
		121,90,8,106,3,64,33,0,6,106,10,80,114,111,
		118,105,110,99,105,97,0,9,106,10,80,114,111,118,
		105,110,99,105,97,0,92,20,112,9,73,36,41,0,
		48,17,0,95,1,106,8,99,67,100,112,80,114,118,
		0,106,2,67,0,92,7,121,90,8,106,3,64,33,
		0,6,106,3,67,80,0,9,106,12,67,111,100,46,
		32,80,111,115,116,97,108,0,92,7,112,9,73,36,
		42,0,48,17,0,95,1,106,8,99,84,108,102,80,
		114,118,0,106,2,67,0,92,12,121,90,8,106,3,
		64,33,0,6,106,4,84,108,102,0,9,106,9,84,
		101,108,233,102,111,110,111,0,92,12,112,9,73,36,
		43,0,48,17,0,95,1,106,8,99,67,111,100,65,
		114,116,0,106,2,67,0,92,18,121,90,8,106,3,
		64,33,0,6,106,5,65,114,116,46,0,120,106,14,
		67,111,100,46,32,97,114,116,237,99,117,108,111,0,
		92,14,9,112,10,73,36,44,0,48,17,0,95,1,
		106,8,99,78,111,109,65,114,116,0,106,2,67,0,
		92,100,121,90,8,106,3,64,33,0,6,106,9,65,
		114,116,237,99,117,108,111,0,120,106,9,65,114,116,
		237,99,117,108,111,0,92,40,9,112,10,73,36,45,
		0,48,17,0,95,1,106,8,99,67,111,100,65,108,
		109,0,106,2,67,0,92,3,121,90,8,106,3,64,
		33,0,6,106,4,65,108,109,0,120,106,13,67,111,
		100,46,32,97,108,109,97,99,233,110,0,92,3,9,
		112,10,73,36,46,0,48,17,0,95,1,106,8,110,
		67,111,109,82,97,112,0,106,2,78,0,92,16,92,
		6,89,17,0,0,0,1,0,1,0,48,18,0,95,
		255,112,0,6,106,7,37,32,82,97,112,46,0,120,
		106,17,67,111,109,105,115,105,243,110,32,114,97,112,
		112,101,108,115,0,92,12,9,112,10,73,36,47,0,
		48,17,0,95,1,106,8,110,73,109,112,84,111,116,
		0,106,2,78,0,92,16,92,6,89,17,0,0,0,
		1,0,1,0,48,18,0,95,255,112,0,6,106,8,
		73,109,112,111,114,116,101,0,120,106,8,73,109,112,
		111,114,116,101,0,92,12,120,112,10,73,36,48,0,
		48,17,0,95,1,106,8,110,84,111,116,82,97,112,
		0,106,2,78,0,92,16,92,6,89,17,0,0,0,
		1,0,1,0,48,18,0,95,255,112,0,6,106,11,
		84,111,116,97,108,32,82,97,112,46,0,120,106,14,
		84,111,116,97,108,32,114,97,112,112,101,108,115,0,
		92,12,120,112,10,73,36,50,0,48,19,0,95,1,
		106,8,99,67,111,100,80,114,118,0,106,18,99,67,
		111,100,80,114,118,32,43,32,99,67,111,100,65,114,
		116,0,112,2,73,36,51,0,48,20,0,95,1,89,
		22,0,0,0,1,0,1,0,48,21,0,48,22,0,
		95,255,112,0,112,0,6,89,66,0,0,0,1,0,
		1,0,106,13,80,114,111,118,101,101,100,111,114,32,
		58,32,0,176,23,0,48,21,0,48,22,0,95,255,
		112,0,112,0,12,1,72,106,2,45,0,72,176,23,
		0,48,24,0,48,22,0,95,255,112,0,112,0,12,
		1,72,6,90,24,106,19,84,111,116,97,108,32,112,
		114,111,118,101,101,100,111,114,46,46,46,0,6,112,
		3,73,36,53,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OINFBRAP_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,59,0,120,80,1,36,60,0,176,25,
		0,89,15,0,1,0,0,0,176,26,0,95,1,12,
		1,6,12,1,80,2,36,62,0,113,77,2,0,36,
		64,0,48,27,0,102,48,28,0,176,29,0,106,13,
		65,76,66,80,82,79,86,84,46,68,66,70,0,100,
		12,2,106,13,65,76,66,80,82,79,86,84,46,68,
		66,70,0,100,176,30,0,12,0,100,176,31,0,12,
		0,9,120,9,9,112,9,112,1,73,48,32,0,48,
		33,0,102,112,0,106,13,65,76,66,80,82,79,86,
		84,46,67,68,88,0,112,1,73,48,32,0,48,33,
		0,102,112,0,112,0,73,48,34,0,48,33,0,102,
		112,0,112,0,73,36,66,0,48,35,0,102,48,28,
		0,176,29,0,106,13,65,76,66,80,82,79,86,76,
		46,68,66,70,0,100,12,2,106,13,65,76,66,80,
		82,79,86,76,46,68,66,70,0,100,176,30,0,12,
		0,100,176,31,0,12,0,9,120,9,9,112,9,112,
		1,73,48,32,0,48,36,0,102,112,0,106,13,65,
		76,66,80,82,79,86,76,46,67,68,88,0,112,1,
		73,48,32,0,48,36,0,102,112,0,112,0,73,48,
		34,0,48,36,0,102,112,0,112,0,73,36,68,0,
		48,37,0,102,48,28,0,176,29,0,106,12,70,65,
		67,80,82,86,84,46,68,66,70,0,100,12,2,106,
		12,70,65,67,80,82,86,84,46,68,66,70,0,100,
		176,30,0,12,0,100,176,31,0,12,0,9,120,9,
		9,112,9,112,1,73,48,32,0,48,38,0,102,112,
		0,106,12,70,65,67,80,82,86,84,46,67,68,88,
		0,112,1,73,48,32,0,48,38,0,102,112,0,112,
		0,73,48,34,0,48,38,0,102,112,0,112,0,73,
		36,70,0,48,39,0,102,48,28,0,176,29,0,106,
		12,70,65,67,80,82,86,76,46,68,66,70,0,100,
		12,2,106,12,70,65,67,80,82,86,76,46,68,66,
		70,0,100,176,30,0,12,0,100,176,31,0,12,0,
		9,120,9,9,112,9,112,1,73,48,32,0,48,40,
		0,102,112,0,106,12,70,65,67,80,82,86,76,46,
		67,68,88,0,112,1,73,48,32,0,48,40,0,102,
		112,0,112,0,73,48,34,0,48,40,0,102,112,0,
		112,0,73,36,72,0,48,41,0,102,48,28,0,176,
		29,0,106,12,70,65,67,80,82,86,80,46,68,66,
		70,0,100,12,2,106,12,70,65,67,80,82,86,80,
		46,68,66,70,0,100,176,30,0,12,0,100,176,31,
		0,12,0,9,120,9,9,112,9,112,1,73,48,32,
		0,48,42,0,102,112,0,106,12,70,65,67,80,82,
		86,80,46,67,68,88,0,112,1,73,48,32,0,48,
		42,0,102,112,0,112,0,73,48,34,0,48,42,0,
		102,112,0,112,0,73,114,76,0,0,36,74,0,115,
		73,36,76,0,176,43,0,106,41,73,109,112,111,115,
		105,98,108,101,32,97,98,114,105,114,32,116,111,100,
		97,115,32,108,97,115,32,98,97,115,101,115,32,100,
		101,32,100,97,116,111,115,0,20,1,36,77,0,48,
		44,0,102,112,0,73,36,78,0,9,80,1,36,82,
		0,176,25,0,95,2,20,1,36,84,0,95,1,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OINFBRAP_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,90,0,176,45,0,48,33,0,102,112,0,12,1,
		31,30,48,46,0,48,33,0,102,112,0,112,0,28,
		17,36,91,0,48,47,0,48,33,0,102,112,0,112,
		0,73,36,93,0,176,45,0,48,36,0,102,112,0,
		12,1,31,30,48,46,0,48,36,0,102,112,0,112,
		0,28,17,36,94,0,48,47,0,48,36,0,102,112,
		0,112,0,73,36,96,0,176,45,0,48,38,0,102,
		112,0,12,1,31,30,48,46,0,48,38,0,102,112,
		0,112,0,28,17,36,97,0,48,47,0,48,38,0,
		102,112,0,112,0,73,36,99,0,176,45,0,48,40,
		0,102,112,0,12,1,31,30,48,46,0,48,40,0,
		102,112,0,112,0,28,17,36,100,0,48,47,0,48,
		40,0,102,112,0,112,0,73,36,102,0,176,45,0,
		48,42,0,102,112,0,12,1,31,30,48,46,0,48,
		42,0,102,112,0,112,0,28,17,36,103,0,48,47,
		0,48,42,0,102,112,0,112,0,73,36,106,0,48,
		27,0,102,100,112,1,73,36,107,0,48,35,0,102,
		100,112,1,73,36,108,0,48,37,0,102,100,112,1,
		73,36,109,0,48,39,0,102,100,112,1,73,36,110,
		0,48,41,0,102,100,112,1,73,36,112,0,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OINFBRAP_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,118,0,48,48,0,102,106,8,73,78,
		70,82,65,80,80,0,112,1,31,8,36,119,0,9,
		110,7,36,122,0,48,49,0,102,176,50,0,12,0,
		48,33,0,102,112,0,48,38,0,102,112,0,4,2,
		0,120,112,3,73,36,128,0,48,51,0,102,92,70,
		92,80,92,90,92,100,93,88,2,112,5,31,8,36,
		129,0,9,110,7,36,136,0,48,52,0,102,92,110,
		92,120,93,130,0,93,140,0,93,32,3,112,5,31,
		8,36,137,0,9,110,7,36,140,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( OINFBRAP_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,147,0,102,80,1,36,149,0,106,1,
		0,80,2,36,151,0,48,53,0,48,54,0,95,1,
		112,0,112,0,73,36,152,0,48,55,0,48,56,0,
		95,1,112,0,112,0,73,36,153,0,48,57,0,48,
		22,0,95,1,112,0,112,0,73,36,158,0,48,58,
		0,95,1,90,29,106,13,70,101,99,104,97,32,32,
		32,32,32,58,32,0,176,59,0,176,60,0,12,0,
		12,1,72,6,89,58,0,0,0,1,0,1,0,106,
		13,80,101,114,105,111,100,111,32,32,32,58,32,0,
		176,59,0,48,61,0,95,255,112,0,12,1,72,106,
		4,32,62,32,0,72,176,59,0,48,62,0,95,255,
		112,0,12,1,72,6,89,77,0,0,0,1,0,1,
		0,106,13,80,114,111,118,101,101,100,111,114,32,58,
		32,0,48,63,0,95,255,112,0,28,12,106,6,84,
		111,100,111,115,0,25,34,176,64,0,48,65,0,95,
		255,112,0,12,1,106,4,32,62,32,0,72,176,64,
		0,48,66,0,95,255,112,0,12,1,72,72,6,89,
		77,0,0,0,1,0,1,0,106,13,65,114,116,237,
		99,117,108,111,115,32,58,32,0,48,67,0,95,255,
		112,0,28,12,106,6,84,111,100,111,115,0,25,34,
		176,64,0,48,68,0,95,255,112,0,12,1,106,4,
		32,62,32,0,72,176,64,0,48,69,0,95,255,112,
		0,12,1,72,72,6,4,4,0,112,1,73,36,161,
		0,48,70,0,48,33,0,95,1,112,0,106,8,100,
		70,101,99,65,108,98,0,112,1,73,36,163,0,106,
		37,33,108,70,97,99,116,117,114,97,100,111,32,46,
		97,110,100,46,32,100,70,101,99,65,108,98,32,62,
		61,32,67,116,111,100,40,32,34,0,176,59,0,48,
		61,0,95,1,112,0,12,1,72,106,29,34,32,41,
		32,46,97,110,100,46,32,100,70,101,99,65,108,98,
		32,60,61,32,67,116,111,100,40,32,34,0,72,176,
		59,0,48,62,0,95,1,112,0,12,1,72,106,4,
		34,32,41,0,72,80,2,36,165,0,48,63,0,95,
		1,112,0,31,76,36,166,0,96,2,0,106,20,32,
		46,97,110,100,46,32,99,67,111,100,80,114,118,32,
		62,61,32,34,0,48,65,0,95,1,112,0,72,106,
		21,34,32,46,97,110,100,46,32,99,67,111,100,80,
		114,118,32,60,61,32,34,0,72,48,66,0,95,1,
		112,0,72,106,2,34,0,72,135,36,169,0,176,45,
		0,48,71,0,48,72,0,95,1,112,0,112,0,12,
		1,31,32,36,170,0,96,2,0,106,8,32,46,97,
		110,100,46,32,0,48,71,0,48,72,0,95,1,112,
		0,112,0,72,135,36,173,0,48,19,0,48,33,0,
		95,1,112,0,176,73,0,12,0,176,74,0,48,75,
		0,48,33,0,95,1,112,0,112,0,12,1,48,76,
		0,48,33,0,95,1,112,0,112,0,95,2,100,100,
		100,100,100,100,100,120,112,12,73,36,175,0,48,77,
		0,48,78,0,95,1,112,0,106,21,80,114,111,99,
		101,115,97,110,100,111,32,97,108,98,97,114,97,110,
		101,115,0,112,1,73,36,176,0,48,79,0,48,78,
		0,95,1,112,0,48,80,0,48,33,0,95,1,112,
		0,112,0,112,1,73,36,178,0,48,81,0,48,33,
		0,95,1,112,0,112,0,73,36,180,0,48,82,0,
		95,1,112,0,32,174,2,48,83,0,48,33,0,95,
		1,112,0,112,0,32,159,2,36,182,0,176,84,0,
		48,85,0,48,33,0,95,1,112,0,112,0,48,86,
		0,95,1,112,0,12,2,29,82,2,36,184,0,48,
		87,0,48,36,0,95,1,112,0,48,85,0,48,33,
		0,95,1,112,0,112,0,176,88,0,48,89,0,48,
		33,0,95,1,112,0,112,0,12,1,72,48,90,0,
		48,33,0,95,1,112,0,112,0,72,112,1,29,21,
		2,36,186,0,48,85,0,48,33,0,95,1,112,0,
		112,0,176,88,0,48,89,0,48,33,0,95,1,112,
		0,112,0,12,1,72,48,90,0,48,33,0,95,1,
		112,0,112,0,72,48,85,0,48,36,0,95,1,112,
		0,112,0,176,88,0,48,89,0,48,36,0,95,1,
		112,0,112,0,12,1,72,48,90,0,48,36,0,95,
		1,112,0,112,0,72,8,29,184,1,48,83,0,48,
		36,0,95,1,112,0,112,0,32,169,1,36,188,0,
		48,91,0,48,22,0,95,1,112,0,112,0,73,36,
		190,0,48,92,0,48,22,0,95,1,112,0,106,8,
		65,108,98,97,114,225,110,0,112,1,73,36,191,0,
		48,93,0,48,22,0,95,1,112,0,176,64,0,48,
		85,0,48,33,0,95,1,112,0,112,0,12,1,106,
		2,47,0,72,176,64,0,176,88,0,48,89,0,48,
		33,0,95,1,112,0,112,0,12,1,12,1,72,106,
		2,47,0,72,176,64,0,48,90,0,48,33,0,95,
		1,112,0,112,0,12,1,72,112,1,73,36,192,0,
		48,94,0,48,22,0,95,1,112,0,48,95,0,48,
		33,0,95,1,112,0,112,0,112,1,73,36,193,0,
		48,96,0,48,22,0,95,1,112,0,48,97,0,48,
		36,0,95,1,112,0,112,0,112,1,73,36,194,0,
		48,98,0,48,22,0,95,1,112,0,48,99,0,48,
		36,0,95,1,112,0,112,0,112,1,73,36,195,0,
		48,100,0,48,22,0,95,1,112,0,48,101,0,48,
		36,0,95,1,112,0,112,0,112,1,73,36,196,0,
		48,102,0,48,22,0,95,1,112,0,48,103,0,48,
		36,0,95,1,112,0,112,0,112,1,73,36,197,0,
		48,104,0,48,22,0,95,1,112,0,176,105,0,48,
		106,0,48,36,0,95,1,112,0,112,0,48,107,0,
		95,1,112,0,48,108,0,95,1,112,0,48,109,0,
		95,1,112,0,12,4,112,1,73,36,198,0,48,110,
		0,48,22,0,95,1,112,0,48,111,0,48,22,0,
		95,1,112,0,112,0,48,112,0,48,22,0,95,1,
		112,0,112,0,65,92,100,18,112,1,73,36,199,0,
		48,113,0,95,1,48,21,0,48,33,0,95,1,112,
		0,112,0,112,1,73,36,201,0,48,114,0,48,22,
		0,95,1,112,0,112,0,73,36,203,0,48,115,0,
		48,36,0,95,1,112,0,112,0,73,26,241,253,36,
		211,0,48,115,0,48,33,0,95,1,112,0,112,0,
		73,36,213,0,48,116,0,48,78,0,95,1,112,0,
		48,117,0,48,33,0,95,1,112,0,112,0,112,1,
		73,26,75,253,36,217,0,48,118,0,48,33,0,95,
		1,112,0,176,73,0,12,0,176,74,0,48,75,0,
		48,33,0,95,1,112,0,112,0,12,1,112,2,73,
		36,221,0,48,70,0,48,38,0,95,1,112,0,106,
		8,100,70,101,99,70,97,99,0,112,1,73,36,223,
		0,106,19,100,70,101,99,70,97,99,32,62,61,32,
		67,116,111,100,40,32,34,0,176,59,0,48,61,0,
		95,1,112,0,12,1,72,106,29,34,32,41,32,46,
		97,110,100,46,32,100,70,101,99,70,97,99,32,60,
		61,32,67,116,111,100,40,32,34,0,72,176,59,0,
		48,62,0,95,1,112,0,12,1,72,106,4,34,32,
		41,0,72,80,2,36,225,0,48,63,0,95,1,112,
		0,31,76,36,226,0,96,2,0,106,20,32,46,97,
		110,100,46,32,99,67,111,100,80,114,118,32,62,61,
		32,34,0,48,65,0,95,1,112,0,72,106,21,34,
		32,46,97,110,100,46,32,99,67,111,100,80,114,118,
		32,60,61,32,34,0,72,48,66,0,95,1,112,0,
		72,106,2,34,0,72,135,36,229,0,176,45,0,48,
		71,0,48,72,0,95,1,112,0,112,0,12,1,31,
		32,36,230,0,96,2,0,106,8,32,46,97,110,100,
		46,32,0,48,71,0,48,72,0,95,1,112,0,112,
		0,72,135,36,233,0,48,19,0,48,38,0,95,1,
		112,0,176,73,0,12,0,176,74,0,48,75,0,48,
		38,0,95,1,112,0,112,0,12,1,48,76,0,48,
		38,0,95,1,112,0,112,0,95,2,100,100,100,100,
		100,100,100,120,112,12,73,36,235,0,48,77,0,48,
		78,0,95,1,112,0,106,20,80,114,111,99,101,115,
		97,110,100,111,32,102,97,99,116,117,114,97,115,0,
		112,1,73,36,236,0,48,79,0,48,78,0,95,1,
		112,0,48,80,0,48,38,0,95,1,112,0,112,0,
		112,1,73,36,238,0,48,81,0,48,38,0,95,1,
		112,0,112,0,73,36,240,0,48,119,0,48,38,0,
		95,1,112,0,112,0,48,62,0,95,1,112,0,34,
		29,31,3,48,83,0,48,38,0,95,1,112,0,112,
		0,32,16,3,36,243,0,48,63,0,95,1,112,0,
		31,48,48,21,0,48,38,0,95,1,112,0,112,0,
		48,65,0,95,1,112,0,16,29,190,2,48,21,0,
		48,38,0,95,1,112,0,112,0,48,66,0,95,1,
		112,0,34,29,167,2,176,84,0,48,120,0,48,38,
		0,95,1,112,0,112,0,48,86,0,95,1,112,0,
		12,2,29,140,2,36,245,0,48,87,0,48,40,0,
		95,1,112,0,48,120,0,48,38,0,95,1,112,0,
		112,0,176,88,0,48,121,0,48,38,0,95,1,112,
		0,112,0,12,1,72,48,122,0,48,38,0,95,1,
		112,0,112,0,72,112,1,29,79,2,36,247,0,48,
		120,0,48,38,0,95,1,112,0,112,0,176,88,0,
		48,121,0,48,38,0,95,1,112,0,112,0,12,1,
		72,48,122,0,48,38,0,95,1,112,0,112,0,72,
		48,120,0,48,40,0,95,1,112,0,112,0,176,88,
		0,48,121,0,48,40,0,95,1,112,0,112,0,12,
		1,72,48,122,0,48,40,0,95,1,112,0,112,0,
		72,8,29,242,1,48,83,0,48,40,0,95,1,112,
		0,112,0,32,227,1,36,249,0,48,63,0,95,1,
		112,0,31,48,48,97,0,48,40,0,95,1,112,0,
		112,0,48,68,0,95,1,112,0,16,29,173,1,48,
		97,0,48,40,0,95,1,112,0,112,0,48,69,0,
		95,1,112,0,34,29,150,1,36,251,0,48,91,0,
		48,22,0,95,1,112,0,112,0,73,36,253,0,48,
		92,0,48,22,0,95,1,112,0,106,8,70,97,99,
		116,117,114,97,0,112,1,73,36,254,0,48,93,0,
		48,22,0,95,1,112,0,176,64,0,48,120,0,48,
		38,0,95,1,112,0,112,0,12,1,106,2,47,0,
		72,176,64,0,176,88,0,48,121,0,48,38,0,95,
		1,112,0,112,0,12,1,12,1,72,106,2,47,0,
		72,176,64,0,48,122,0,48,38,0,95,1,112,0,
		112,0,12,1,72,112,1,73,36,255,0,48,94,0,
		48,22,0,95,1,112,0,48,119,0,48,38,0,95,
		1,112,0,112,0,112,1,73,36,0,1,48,96,0,
		48,22,0,95,1,112,0,48,97,0,48,40,0,95,
		1,112,0,112,0,112,1,73,36,1,1,48,98,0,
		48,22,0,95,1,112,0,48,99,0,48,40,0,95,
		1,112,0,112,0,112,1,73,36,2,1,48,100,0,
		48,22,0,95,1,112,0,48,101,0,48,40,0,95,
		1,112,0,112,0,112,1,73,36,3,1,48,102,0,
		48,22,0,95,1,112,0,48,103,0,48,40,0,95,
		1,112,0,112,0,112,1,73,36,4,1,48,104,0,
		48,22,0,95,1,112,0,176,123,0,48,106,0,48,
		40,0,95,1,112,0,112,0,48,107,0,95,1,112,
		0,48,108,0,95,1,112,0,48,109,0,95,1,112,
		0,12,4,112,1,73,36,5,1,48,110,0,48,22,
		0,95,1,112,0,48,111,0,48,22,0,95,1,112,
		0,112,0,48,112,0,48,22,0,95,1,112,0,112,
		0,65,92,100,18,112,1,73,36,6,1,48,113,0,
		95,1,48,21,0,48,38,0,95,1,112,0,112,0,
		112,1,73,36,8,1,48,114,0,48,22,0,95,1,
		112,0,112,0,73,36,12,1,48,115,0,48,40,0,
		95,1,112,0,112,0,73,26,183,253,36,20,1,48,
		115,0,48,38,0,95,1,112,0,112,0,73,36,22,
		1,48,116,0,48,78,0,95,1,112,0,48,117,0,
		48,38,0,95,1,112,0,112,0,112,1,73,26,205,
		252,36,26,1,48,116,0,48,78,0,95,1,112,0,
		48,124,0,48,33,0,95,1,112,0,112,0,112,1,
		73,36,28,1,48,118,0,48,38,0,95,1,112,0,
		176,73,0,12,0,176,74,0,48,75,0,48,38,0,
		95,1,112,0,112,0,12,1,112,2,73,36,30,1,
		48,55,0,48,54,0,95,1,112,0,112,0,73,36,
		32,1,48,124,0,48,22,0,95,1,112,0,112,0,
		121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,127,0,2,0,116,127,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

