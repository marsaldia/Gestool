/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\tablet\view\documentos\ventas\liquidateReceiptView.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( LIQUIDATERECEIPTVIEW );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( VIEWBASE );
HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_NEW );
HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_INSERTCONTROLS );
HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_DEFINEACEPTARCANCELAR );
HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_CALDIFERENCIA );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TGRIDSAY );
HB_FUNC_EXTERN( GRIDWIDTH );
HB_FUNC_EXTERN( OGRIDFONTBOLD );
HB_FUNC_EXTERN( TGRIDGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( MASUND );
HB_FUNC_EXTERN( TGRIDIMAGE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LIQUIDATERECEIPTVIEW )
{ "LIQUIDATERECEIPTVIEW", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( LIQUIDATERECEIPTVIEW )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "VIEWBASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VIEWBASE )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIQUIDATERECEIPTVIEW_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LIQUIDATERECEIPTVIEW_NEW )}, NULL },
{ "LIQUIDATERECEIPTVIEW_INSERTCONTROLS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LIQUIDATERECEIPTVIEW_INSERTCONTROLS )}, NULL },
{ "LIQUIDATERECEIPTVIEW_DEFINEACEPTARCANCELAR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LIQUIDATERECEIPTVIEW_DEFINEACEPTARCANCELAR )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETTEXTOTIPODOCUMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIQUIDATERECEIPTVIEW_CALDIFERENCIA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LIQUIDATERECEIPTVIEW_CALDIFERENCIA )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSENDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NENTREGA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPENDIENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTALPENDIENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSENDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDIFERENCIA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGRIDSAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGRIDSAY )}, NULL },
{ "GRIDWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( GRIDWIDTH )}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGRIDFONTBOLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( OGRIDFONTBOLD )}, NULL },
{ "TGRIDGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGRIDGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "NPENDIENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MASUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MASUND )}, NULL },
{ "_OENTREGA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NENTREGA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALDIFERENCIA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODIFERENCIA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDIFERENCIA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BUTTONCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGRIDIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGRIDIMAGE )}, NULL },
{ "CANCELVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BUTTONOK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OENTREGA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROCESSLIQUIDATERECEIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "ODIFERENCIA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LIQUIDATERECEIPTVIEW, ".\\Prg\\tablet\\view\\documentos\\ventas\\liquidateReceiptView.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LIQUIDATERECEIPTVIEW
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LIQUIDATERECEIPTVIEW )
   #include "hbiniseg.h"
#endif

HB_FUNC( LIQUIDATERECEIPTVIEW )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,51,0,36,5,0,103,2,0,100,8,
		29,14,2,176,1,0,104,2,0,12,1,29,3,2,
		166,197,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,21,76,105,113,117,105,100,97,116,101,82,101,
		99,101,105,112,116,86,105,101,119,0,108,4,4,1,
		0,108,0,112,3,80,2,36,7,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,9,110,
		69,110,116,114,101,103,97,0,4,1,0,9,112,5,
		73,36,8,0,48,5,0,95,2,100,100,95,1,121,
		72,121,72,121,72,106,11,110,80,101,110,100,105,101,
		110,116,101,0,4,1,0,9,112,5,73,36,9,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,12,110,68,105,102,101,114,101,110,99,105,97,
		0,4,1,0,9,112,5,73,36,10,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,9,
		111,69,110,116,114,101,103,97,0,4,1,0,9,112,
		5,73,36,12,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,12,111,68,105,102,101,114,
		101,110,99,105,97,0,4,1,0,9,112,5,73,36,
		14,0,48,6,0,95,2,106,4,78,101,119,0,108,
		7,95,1,121,72,121,72,121,72,112,3,73,36,16,
		0,48,6,0,95,2,106,15,105,110,115,101,114,116,
		67,111,110,116,114,111,108,115,0,108,8,95,1,121,
		72,121,72,121,72,112,3,73,36,18,0,48,6,0,
		95,2,106,22,100,101,102,105,110,101,65,99,101,112,
		116,97,114,67,97,110,99,101,108,97,114,0,108,9,
		95,1,121,72,121,72,121,72,112,3,73,36,20,0,
		48,10,0,95,2,106,22,103,101,116,84,105,116,108,
		101,84,105,112,111,68,111,99,117,109,101,110,116,111,
		0,89,15,0,1,0,0,0,48,11,0,95,1,112,
		0,6,95,1,121,72,121,72,121,72,112,3,73,36,
		22,0,48,6,0,95,2,106,14,67,97,108,68,105,
		102,101,114,101,110,99,105,97,0,108,12,95,1,121,
		72,121,72,121,72,112,3,73,36,24,0,48,13,0,
		95,2,112,0,73,167,14,0,0,176,14,0,104,2,
		0,95,2,20,2,168,48,15,0,95,2,112,0,80,
		3,176,16,0,95,3,106,10,73,110,105,116,67,108,
		97,115,115,0,12,2,28,12,48,17,0,95,3,164,
		146,1,0,73,95,3,110,7,48,15,0,103,2,0,
		112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,30,0,48,18,0,102,95,1,112,1,
		73,36,32,0,48,19,0,102,121,112,1,73,36,33,
		0,48,20,0,102,48,21,0,48,22,0,102,112,0,
		112,0,112,1,73,36,34,0,48,23,0,102,48,21,
		0,48,22,0,102,112,0,112,0,112,1,73,36,36,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_INSERTCONTROLS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,40,0,102,80,1,36,52,0,48,24,
		0,176,25,0,12,0,106,5,110,82,111,119,0,92,
		50,106,5,110,67,111,108,0,89,33,0,0,0,1,
		0,1,0,176,26,0,101,0,0,0,0,0,0,224,
		63,10,1,48,27,0,95,255,112,0,12,2,6,106,
		6,98,84,101,120,116,0,90,21,106,16,84,111,116,
		97,108,32,112,101,110,100,105,101,110,116,101,0,6,
		106,5,111,87,110,100,0,48,27,0,95,1,112,0,
		106,6,111,70,111,110,116,0,176,28,0,12,0,106,
		8,108,80,105,120,101,108,115,0,120,106,9,110,67,
		108,114,84,101,120,116,0,121,106,9,110,67,108,114,
		66,97,99,107,0,97,255,255,255,0,106,7,110,87,
		105,100,116,104,0,89,24,0,0,0,1,0,1,0,
		176,26,0,92,2,48,27,0,95,255,112,0,12,2,
		6,106,8,110,72,101,105,103,104,116,0,92,23,106,
		8,108,68,101,115,105,103,110,0,9,177,11,0,112,
		1,73,36,63,0,48,24,0,176,29,0,12,0,106,
		5,110,82,111,119,0,92,50,106,5,110,67,111,108,
		0,89,24,0,0,0,1,0,1,0,176,26,0,92,
		3,48,27,0,95,255,112,0,12,2,6,106,8,98,
		83,101,116,71,101,116,0,89,37,0,1,0,1,0,
		1,0,176,30,0,12,0,121,8,28,11,48,31,0,
		95,255,112,0,25,11,48,20,0,95,255,95,1,112,
		1,6,106,5,111,87,110,100,0,48,27,0,95,1,
		112,0,106,8,108,80,105,120,101,108,115,0,120,106,
		7,110,87,105,100,116,104,0,89,24,0,0,0,1,
		0,1,0,176,26,0,92,3,48,27,0,95,255,112,
		0,12,2,6,106,6,99,80,105,99,116,0,176,32,
		0,12,0,106,7,108,82,105,103,104,116,0,120,106,
		6,98,87,104,101,110,0,90,4,9,6,106,8,110,
		72,101,105,103,104,116,0,92,23,177,10,0,112,1,
		73,36,75,0,48,24,0,176,25,0,12,0,106,5,
		110,82,111,119,0,92,80,106,5,110,67,111,108,0,
		89,33,0,0,0,1,0,1,0,176,26,0,101,0,
		0,0,0,0,0,224,63,10,1,48,27,0,95,255,
		112,0,12,2,6,106,6,98,84,101,120,116,0,90,
		13,106,8,69,110,116,114,101,103,97,0,6,106,5,
		111,87,110,100,0,48,27,0,95,1,112,0,106,6,
		111,70,111,110,116,0,176,28,0,12,0,106,8,108,
		80,105,120,101,108,115,0,120,106,9,110,67,108,114,
		84,101,120,116,0,121,106,9,110,67,108,114,66,97,
		99,107,0,97,255,255,255,0,106,7,110,87,105,100,
		116,104,0,89,24,0,0,0,1,0,1,0,176,26,
		0,92,2,48,27,0,95,255,112,0,12,2,6,106,
		8,110,72,101,105,103,104,116,0,92,23,106,8,108,
		68,101,115,105,103,110,0,9,177,11,0,112,1,73,
		36,86,0,48,33,0,95,1,48,24,0,176,29,0,
		12,0,106,5,110,82,111,119,0,92,80,106,5,110,
		67,111,108,0,89,24,0,0,0,1,0,1,0,176,
		26,0,92,3,48,27,0,95,255,112,0,12,2,6,
		106,8,98,83,101,116,71,101,116,0,89,37,0,1,
		0,1,0,1,0,176,30,0,12,0,121,8,28,11,
		48,34,0,95,255,112,0,25,11,48,19,0,95,255,
		95,1,112,1,6,106,5,111,87,110,100,0,48,27,
		0,95,1,112,0,106,7,110,87,105,100,116,104,0,
		89,24,0,0,0,1,0,1,0,176,26,0,92,3,
		48,27,0,95,255,112,0,12,2,6,106,8,110,72,
		101,105,103,104,116,0,92,23,106,7,108,82,105,103,
		104,116,0,120,106,6,99,80,105,99,116,0,176,32,
		0,12,0,106,8,108,80,105,120,101,108,115,0,120,
		106,7,98,86,97,108,105,100,0,89,17,0,0,0,
		1,0,1,0,48,35,0,95,255,112,0,6,177,10,
		0,112,1,112,1,73,36,98,0,48,24,0,176,25,
		0,12,0,106,5,110,82,111,119,0,92,110,106,5,
		110,67,111,108,0,89,33,0,0,0,1,0,1,0,
		176,26,0,101,0,0,0,0,0,0,224,63,10,1,
		48,27,0,95,255,112,0,12,2,6,106,6,98,84,
		101,120,116,0,90,16,106,11,68,105,102,101,114,101,
		110,99,105,97,0,6,106,5,111,87,110,100,0,48,
		27,0,95,1,112,0,106,6,111,70,111,110,116,0,
		176,28,0,12,0,106,8,108,80,105,120,101,108,115,
		0,120,106,9,110,67,108,114,84,101,120,116,0,121,
		106,9,110,67,108,114,66,97,99,107,0,97,255,255,
		255,0,106,7,110,87,105,100,116,104,0,89,24,0,
		0,0,1,0,1,0,176,26,0,92,2,48,27,0,
		95,255,112,0,12,2,6,106,8,110,72,101,105,103,
		104,116,0,92,23,106,8,108,68,101,115,105,103,110,
		0,9,177,11,0,112,1,73,36,108,0,48,36,0,
		95,1,48,24,0,176,29,0,12,0,106,5,110,82,
		111,119,0,92,110,106,5,110,67,111,108,0,89,24,
		0,0,0,1,0,1,0,176,26,0,92,3,48,27,
		0,95,255,112,0,12,2,6,106,8,98,83,101,116,
		71,101,116,0,89,37,0,1,0,1,0,1,0,176,
		30,0,12,0,121,8,28,11,48,37,0,95,255,112,
		0,25,11,48,23,0,95,255,95,1,112,1,6,106,
		5,111,87,110,100,0,48,27,0,95,1,112,0,106,
		8,108,80,105,120,101,108,115,0,120,106,7,110,87,
		105,100,116,104,0,89,24,0,0,0,1,0,1,0,
		176,26,0,92,3,48,27,0,95,255,112,0,12,2,
		6,106,6,99,80,105,99,116,0,176,32,0,12,0,
		106,7,108,82,105,103,104,116,0,120,106,8,110,72,
		101,105,103,104,116,0,92,23,177,9,0,112,1,112,
		1,73,36,110,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_DEFINEACEPTARCANCELAR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,114,0,102,80,1,36,122,0,48,38,
		0,95,1,48,24,0,176,39,0,12,0,106,5,110,
		84,111,112,0,92,5,106,6,110,76,101,102,116,0,
		89,33,0,0,0,1,0,1,0,176,26,0,101,0,
		0,0,0,0,0,34,64,10,1,48,27,0,95,255,
		112,0,12,2,6,106,7,110,87,105,100,116,104,0,
		92,64,106,8,110,72,101,105,103,104,116,0,92,64,
		106,9,99,82,101,115,78,97,109,101,0,106,12,103,
		99,95,101,114,114,111,114,95,54,52,0,106,10,98,
		76,67,108,105,99,107,101,100,0,89,17,0,0,0,
		1,0,1,0,48,40,0,95,255,112,0,6,106,5,
		111,87,110,100,0,48,27,0,95,1,112,0,177,7,
		0,112,1,112,1,73,36,130,0,48,41,0,95,1,
		48,24,0,176,39,0,12,0,106,5,110,84,111,112,
		0,92,5,106,6,110,76,101,102,116,0,89,33,0,
		0,0,1,0,1,0,176,26,0,101,0,0,0,0,
		0,0,37,64,10,1,48,27,0,95,255,112,0,12,
		2,6,106,7,110,87,105,100,116,104,0,92,64,106,
		8,110,72,101,105,103,104,116,0,92,64,106,9,99,
		82,101,115,78,97,109,101,0,106,9,103,99,95,111,
		107,95,54,52,0,106,10,98,76,67,108,105,99,107,
		101,100,0,89,50,0,0,0,1,0,1,0,48,42,
		0,48,43,0,95,255,112,0,112,0,73,48,44,0,
		48,22,0,95,255,112,0,48,34,0,95,255,112,0,
		112,1,73,48,45,0,95,255,112,0,6,106,5,111,
		87,110,100,0,48,27,0,95,1,112,0,177,7,0,
		112,1,112,1,73,36,132,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LIQUIDATERECEIPTVIEW_CALDIFERENCIA )
{
	static const HB_BYTE pcode[] =
	{
		36,138,0,48,23,0,102,48,31,0,102,112,0,48,
		34,0,102,112,0,49,112,1,73,36,140,0,176,46,
		0,48,47,0,102,112,0,12,1,31,17,36,141,0,
		48,48,0,48,47,0,102,112,0,112,0,73,36,144,
		0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,51,0,2,0,116,51,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

