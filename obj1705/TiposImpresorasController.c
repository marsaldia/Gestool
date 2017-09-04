/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Controllers\TiposImpresorasController.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TIPOSIMPRESORASCONTROLLER );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASECONTROLLER );
HB_FUNC_STATIC( TIPOSIMPRESORASCONTROLLER_NEW );
HB_FUNC_STATIC( TIPOSIMPRESORASCONTROLLER_VALIDNOMBRE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( NLEVELUSR );
HB_FUNC_EXTERN( TIPOSIMPRESORASMODEL );
HB_FUNC_EXTERN( TIPOSIMPRESORASVIEW );
HB_FUNC_EXTERN( SQLNAVIGATORVIEW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TIPOSIMPRESORASCONTROLLER )
{ "TIPOSIMPRESORASCONTROLLER", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TIPOSIMPRESORASCONTROLLER )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASECONTROLLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASECONTROLLER )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPOSIMPRESORASCONTROLLER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPOSIMPRESORASCONTROLLER_NEW )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPOSIMPRESORASCONTROLLER_VALIDNOMBRE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPOSIMPRESORASCONTROLLER_VALIDNOMBRE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CIMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLEVELUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NLEVELUSR )}, NULL },
{ "_OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPOSIMPRESORASMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPOSIMPRESORASMODEL )}, NULL },
{ "_ODIALOGVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPOSIMPRESORASVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPOSIMPRESORASVIEW )}, NULL },
{ "_ONAVIGATORVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLNAVIGATORVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLNAVIGATORVIEW )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHECKSFORVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISDUPLICATEMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TIPOSIMPRESORASCONTROLLER, ".\\Prg\\Controllers\\TiposImpresorasController.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TIPOSIMPRESORASCONTROLLER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TIPOSIMPRESORASCONTROLLER )
   #include "hbiniseg.h"
#endif

HB_FUNC( TIPOSIMPRESORASCONTROLLER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,36,0,36,7,0,103,2,0,100,8,
		29,13,1,176,1,0,104,2,0,12,1,29,2,1,
		166,196,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,26,84,105,112,111,115,73,109,112,114,101,115,
		111,114,97,115,67,111,110,116,114,111,108,108,101,114,
		0,108,4,4,1,0,108,0,112,3,80,2,36,9,
		0,48,5,0,95,2,106,4,78,101,119,0,108,6,
		95,1,121,72,121,72,121,72,112,3,73,36,11,0,
		48,7,0,95,2,106,19,103,101,116,70,105,101,108,
		100,70,114,111,109,66,114,111,119,115,101,0,89,29,
		0,1,0,0,0,48,8,0,48,9,0,95,1,112,
		0,106,7,110,111,109,98,114,101,0,112,1,6,95,
		1,121,72,121,72,121,72,112,3,73,36,13,0,48,
		5,0,95,2,106,12,118,97,108,105,100,78,111,109,
		98,114,101,0,108,10,95,1,121,72,121,72,121,72,
		112,3,73,36,15,0,48,11,0,95,2,112,0,73,
		167,14,0,0,176,12,0,104,2,0,95,2,20,2,
		168,48,13,0,95,2,112,0,80,3,176,14,0,95,
		3,106,10,73,110,105,116,67,108,97,115,115,0,12,
		2,28,12,48,15,0,95,3,164,146,1,0,73,95,
		3,110,7,48,13,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPOSIMPRESORASCONTROLLER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		36,21,0,48,16,0,102,106,20,84,105,112,111,115,
		32,100,101,32,105,109,112,114,101,115,111,114,97,115,
		0,112,1,73,36,23,0,48,17,0,102,106,15,103,
		99,95,112,114,105,110,116,101,114,50,95,49,54,0,
		112,1,73,36,25,0,48,18,0,102,176,19,0,106,
		6,48,49,49,49,53,0,12,1,112,1,73,36,27,
		0,48,20,0,102,48,2,0,176,21,0,12,0,102,
		112,1,112,1,73,36,29,0,48,22,0,102,48,2,
		0,176,23,0,12,0,102,112,1,112,1,73,36,31,
		0,48,24,0,102,48,2,0,176,25,0,12,0,102,
		112,1,112,1,73,36,33,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPOSIMPRESORASCONTROLLER_VALIDNOMBRE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,40,0,106,1,0,80,3,36,42,0,
		48,26,0,95,1,121,97,255,255,255,0,112,2,73,
		36,44,0,176,27,0,48,28,0,48,29,0,102,112,
		0,112,0,106,7,110,111,109,98,114,101,0,1,12,
		1,28,59,36,45,0,96,3,0,106,48,69,108,32,
		110,111,109,98,114,101,32,100,101,32,108,97,32,105,
		109,112,114,101,115,111,114,97,32,110,111,32,112,117,
		101,100,101,32,101,115,116,97,114,32,118,97,99,237,
		111,46,0,135,36,48,0,48,30,0,48,29,0,102,
		112,0,106,7,110,111,109,98,114,101,0,112,1,80,
		2,36,50,0,176,27,0,95,2,12,1,32,161,0,
		36,52,0,95,2,48,28,0,48,29,0,102,112,0,
		112,0,106,3,105,100,0,1,69,28,56,48,31,0,
		102,112,0,31,48,36,53,0,96,3,0,106,37,69,
		108,32,110,111,109,98,114,101,32,100,101,32,108,97,
		32,105,109,112,114,101,115,111,114,97,32,121,97,32,
		101,120,105,115,116,101,46,0,135,36,56,0,95,2,
		48,28,0,48,29,0,102,112,0,112,0,106,3,105,
		100,0,1,8,28,56,48,31,0,102,112,0,28,48,
		36,57,0,96,3,0,106,37,69,108,32,110,111,109,
		98,114,101,32,100,101,32,108,97,32,105,109,112,114,
		101,115,111,114,97,32,121,97,32,101,120,105,115,116,
		101,46,0,135,36,62,0,176,27,0,95,3,12,1,
		31,50,36,63,0,176,32,0,95,3,20,1,36,64,
		0,48,26,0,95,1,97,255,255,255,0,97,255,102,
		102,0,112,2,73,36,65,0,48,33,0,95,1,112,
		0,73,36,66,0,9,110,7,36,69,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,36,0,2,0,116,36,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

