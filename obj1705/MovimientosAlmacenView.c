/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Views\MovimientosAlmacenView.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MOVIMIENTOSALMACENVIEW );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASEVIEW );
HB_FUNC_STATIC( MOVIMIENTOSALMACENVIEW_NEW );
HB_FUNC_STATIC( MOVIMIENTOSALMACENVIEW_DIALOG );
HB_FUNC_STATIC( MOVIMIENTOSALMACENVIEW_STARTDIALOG );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TBITMAP );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TRADMENU );
HB_FUNC_EXTERN( BRWALMACEN );
HB_FUNC_EXTERN( BROWSEGRUPOSMOVIMIENTOS );
HB_FUNC_EXTERN( BRWAGENTES );
HB_FUNC_EXTERN( DIVISASVIEW );
HB_FUNC_EXTERN( TMULTIGET );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( SQLBROWSEVIEWDIALOG );
HB_FUNC_EXTERN( VALIDATEDIALOG );
HB_FUNC_EXTERN( MSGALERT );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MOVIMIENTOSALMACENVIEW )
{ "MOVIMIENTOSALMACENVIEW", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MOVIMIENTOSALMACENVIEW )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASEVIEW )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOVIMIENTOSALMACENVIEW_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MOVIMIENTOSALMACENVIEW_NEW )}, NULL },
{ "MOVIMIENTOSALMACENVIEW_DIALOG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MOVIMIENTOSALMACENVIEW_DIALOG )}, NULL },
{ "MOVIMIENTOSALMACENVIEW_STARTDIALOG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MOVIMIENTOSALMACENVIEW_STARTDIALOG )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOPTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORADIOTIPOMOVIMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGETALMACENORIGEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HIDE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CIMAGENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBITMAP )}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISNOTZOOMMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ORADIOTIPOMOVIMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRADMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRADMENU )}, NULL },
{ "CHANGETIPOMOVIMIENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OGETALMACENORIGEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDATEALMACENORIGEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRWALMACEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( BRWALMACEN )}, NULL },
{ "OHELPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OGETALMACENDESTINO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGETALMACENDESTINO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDATEALMACENDESTINO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OGETGRUPOMOVIMIENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGETGRUPOMOVIMIENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDATEGRUPOMOVIMIENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BROWSEGRUPOSMOVIMIENTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( BROWSEGRUPOSMOVIMIENTOS )}, NULL },
{ "_OGETAGENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGETAGENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDATEAGENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRWAGENTES", {HB_FS_PUBLIC}, {HB_FUNCNAME( BRWAGENTES )}, NULL },
{ "CREATEEDITCONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DIVISASVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIVISASVIEW )}, NULL },
{ "TMULTIGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMULTIGET )}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OLINEASCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSQLBROWSEVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETBROWSESELECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSQLBROWSEVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBROWSEVIEWDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBROWSEVIEWDIALOG )}, NULL },
{ "SETCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDATEDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALIDATEDIALOG )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGALERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGALERT )}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTDIALOG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STAMPALMACENNOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STAMPGRUPOMOVIMIENTONOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STAMPAGENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MOVIMIENTOSALMACENVIEW, ".\\Prg\\Views\\MovimientosAlmacenView.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MOVIMIENTOSALMACENVIEW
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MOVIMIENTOSALMACENVIEW )
   #include "hbiniseg.h"
#endif

HB_FUNC( MOVIMIENTOSALMACENVIEW )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,83,0,36,7,0,103,2,0,100,8,
		29,142,2,176,1,0,104,2,0,12,1,29,131,2,
		166,69,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,23,77,111,118,105,109,105,101,110,116,111,115,
		65,108,109,97,99,101,110,86,105,101,119,0,108,4,
		4,1,0,108,0,112,3,80,2,36,9,0,48,5,
		0,95,2,100,100,95,1,121,72,121,72,121,72,106,
		15,111,83,81,76,66,114,111,119,115,101,86,105,101,
		119,0,4,1,0,9,112,5,73,36,11,0,48,5,
		0,95,2,100,100,95,1,121,72,121,72,121,72,106,
		5,111,68,108,103,0,4,1,0,9,112,5,73,36,
		12,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,11,111,71,101,116,68,105,118,105,115,
		97,0,4,1,0,9,112,5,73,36,13,0,48,5,
		0,95,2,100,100,95,1,121,72,121,72,121,72,106,
		11,111,71,101,116,65,103,101,110,116,101,0,4,1,
		0,9,112,5,73,36,14,0,48,5,0,95,2,100,
		100,95,1,121,72,121,72,121,72,106,18,111,71,101,
		116,65,108,109,97,99,101,110,79,114,105,103,101,110,
		0,4,1,0,9,112,5,73,36,15,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,19,
		111,71,101,116,65,108,109,97,99,101,110,68,101,115,
		116,105,110,111,0,4,1,0,9,112,5,73,36,16,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,20,111,71,101,116,71,114,117,112,111,77,
		111,118,105,109,105,101,110,116,111,0,4,1,0,9,
		112,5,73,36,17,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,20,111,82,97,100,105,
		111,84,105,112,111,77,111,118,105,109,101,110,116,111,
		0,4,1,0,9,112,5,73,36,19,0,48,6,0,
		95,2,106,4,78,101,119,0,108,7,95,1,121,72,
		121,72,121,72,112,3,73,36,21,0,48,6,0,95,
		2,106,7,68,105,97,108,111,103,0,108,8,95,1,
		121,72,121,72,121,72,112,3,73,36,22,0,48,6,
		0,95,2,106,12,115,116,97,114,116,68,105,97,108,
		111,103,0,108,9,95,1,121,72,121,72,121,72,112,
		3,73,36,26,0,48,10,0,95,2,106,21,99,104,
		97,110,103,101,84,105,112,111,77,111,118,105,109,105,
		101,110,116,111,0,89,50,0,1,0,0,0,48,11,
		0,48,12,0,95,1,112,0,112,0,122,8,28,16,
		48,13,0,48,14,0,95,1,112,0,112,0,25,14,
		48,15,0,48,14,0,95,1,112,0,112,0,6,95,
		1,121,72,121,72,121,72,112,3,73,36,28,0,48,
		16,0,95,2,112,0,73,167,14,0,0,176,17,0,
		104,2,0,95,2,20,2,168,48,18,0,95,2,112,
		0,80,3,176,19,0,95,3,106,10,73,110,105,116,
		67,108,97,115,115,0,12,2,28,12,48,20,0,95,
		3,164,146,1,0,73,95,3,110,7,48,18,0,103,
		2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( MOVIMIENTOSALMACENVIEW_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,34,0,48,21,0,102,95,1,112,1,
		73,36,36,0,48,22,0,102,106,16,103,99,95,98,
		111,111,107,109,97,114,107,115,95,49,54,0,112,1,
		73,36,38,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( MOVIMIENTOSALMACENVIEW_DIALOG )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,42,0,102,80,1,36,47,0,48,23,
		0,95,1,48,2,0,176,24,0,12,0,100,100,100,
		100,48,25,0,95,1,112,0,106,23,109,111,118,105,
		109,105,101,110,116,111,115,32,100,101,32,97,108,109,
		97,99,233,110,0,72,106,7,82,101,109,77,111,118,
		0,100,9,100,100,100,100,100,9,100,100,100,100,100,
		9,100,106,7,58,58,111,68,108,103,0,100,100,112,
		24,112,1,73,36,53,0,48,26,0,176,27,0,12,
		0,93,222,3,106,21,103,99,95,112,97,99,107,97,
		103,101,95,112,101,110,99,105,108,95,52,56,0,100,
		48,28,0,95,1,112,0,100,100,9,9,100,100,9,
		100,100,120,112,14,80,3,36,58,0,48,26,0,176,
		29,0,12,0,92,100,89,78,0,1,0,1,0,1,
		0,176,30,0,12,0,121,8,28,31,48,31,0,48,
		32,0,48,33,0,95,255,112,0,112,0,112,0,106,
		7,110,117,109,101,114,111,0,1,25,32,95,1,165,
		48,31,0,48,32,0,48,33,0,95,255,112,0,112,
		0,112,0,106,7,110,117,109,101,114,111,0,2,6,
		48,28,0,95,1,112,0,100,100,100,100,100,100,100,
		100,9,90,4,9,6,100,9,9,100,100,100,100,100,
		100,100,100,100,112,25,73,36,63,0,48,26,0,176,
		29,0,12,0,92,110,89,86,0,1,0,1,0,1,
		0,176,30,0,12,0,121,8,28,35,48,31,0,48,
		32,0,48,33,0,95,255,112,0,112,0,112,0,106,
		11,100,101,108,101,103,97,99,105,111,110,0,1,25,
		36,95,1,165,48,31,0,48,32,0,48,33,0,95,
		255,112,0,112,0,112,0,106,11,100,101,108,101,103,
		97,99,105,111,110,0,2,6,48,28,0,95,1,112,
		0,100,100,100,100,100,100,100,100,9,90,4,9,6,
		100,9,9,100,100,100,100,100,100,100,100,100,112,25,
		73,36,69,0,48,26,0,176,29,0,12,0,92,120,
		89,86,0,1,0,1,0,1,0,176,30,0,12,0,
		121,8,28,35,48,31,0,48,32,0,48,33,0,95,
		255,112,0,112,0,112,0,106,11,102,101,99,104,97,
		95,104,111,114,97,0,1,25,36,95,1,165,48,31,
		0,48,32,0,48,33,0,95,255,112,0,112,0,112,
		0,106,11,102,101,99,104,97,95,104,111,114,97,0,
		2,6,48,28,0,95,1,112,0,100,106,4,64,68,
		84,0,100,100,100,100,100,100,9,89,22,0,0,0,
		1,0,1,0,48,34,0,48,33,0,95,255,112,0,
		112,0,6,100,9,9,100,100,100,100,100,100,100,100,
		100,112,25,73,36,75,0,48,26,0,176,29,0,12,
		0,93,220,0,89,80,0,1,0,1,0,1,0,176,
		30,0,12,0,121,8,28,32,48,31,0,48,32,0,
		48,33,0,95,255,112,0,112,0,112,0,106,8,117,
		115,117,97,114,105,111,0,1,25,33,95,1,165,48,
		31,0,48,32,0,48,33,0,95,255,112,0,112,0,
		112,0,106,8,117,115,117,97,114,105,111,0,2,6,
		48,28,0,95,1,112,0,100,106,4,88,88,88,0,
		100,100,100,100,100,100,9,90,4,9,6,100,9,9,
		100,100,100,100,100,100,100,100,100,112,25,73,36,82,
		0,48,35,0,95,1,48,26,0,176,36,0,12,0,
		89,96,0,1,0,1,0,1,0,176,30,0,12,0,
		121,8,28,40,48,31,0,48,32,0,48,33,0,95,
		255,112,0,112,0,112,0,106,16,116,105,112,111,95,
		109,111,118,105,109,105,101,110,116,111,0,1,25,41,
		95,1,165,48,31,0,48,32,0,48,33,0,95,255,
		112,0,112,0,112,0,106,16,116,105,112,111,95,109,
		111,118,105,109,105,101,110,116,111,0,2,6,48,28,
		0,95,1,112,0,100,93,130,0,93,131,0,93,132,
		0,93,133,0,4,4,0,89,17,0,0,0,1,0,
		1,0,48,37,0,95,255,112,0,6,100,100,100,9,
		89,22,0,0,0,1,0,1,0,48,34,0,48,33,
		0,95,255,112,0,112,0,6,100,112,11,112,1,73,
		36,92,0,48,38,0,95,1,48,26,0,176,29,0,
		12,0,93,150,0,89,94,0,1,0,1,0,1,0,
		176,30,0,12,0,121,8,28,39,48,31,0,48,32,
		0,48,33,0,95,255,112,0,112,0,112,0,106,15,
		97,108,109,97,99,101,110,95,111,114,105,103,101,110,
		0,1,25,40,95,1,165,48,31,0,48,32,0,48,
		33,0,95,255,112,0,112,0,112,0,106,15,97,108,
		109,97,99,101,110,95,111,114,105,103,101,110,0,2,
		6,48,28,0,95,1,112,0,100,106,3,64,33,0,
		100,100,100,100,100,100,9,89,22,0,0,0,1,0,
		1,0,48,34,0,48,33,0,95,255,112,0,112,0,
		6,100,9,9,100,100,100,100,100,100,106,5,76,117,
		112,97,0,93,152,0,93,151,0,112,25,112,1,73,
		36,94,0,48,39,0,48,14,0,95,1,112,0,89,
		22,0,0,0,1,0,1,0,48,40,0,48,33,0,
		95,255,112,0,112,0,6,112,1,73,36,95,0,48,
		41,0,48,14,0,95,1,112,0,89,34,0,0,0,
		1,0,1,0,176,42,0,48,14,0,95,255,112,0,
		48,43,0,48,14,0,95,255,112,0,112,0,12,2,
		6,112,1,73,36,105,0,48,44,0,95,1,48,26,
		0,176,29,0,12,0,93,160,0,89,96,0,1,0,
		1,0,1,0,176,30,0,12,0,121,8,28,40,48,
		31,0,48,32,0,48,33,0,95,255,112,0,112,0,
		112,0,106,16,97,108,109,97,99,101,110,95,100,101,
		115,116,105,110,111,0,1,25,41,95,1,165,48,31,
		0,48,32,0,48,33,0,95,255,112,0,112,0,112,
		0,106,16,97,108,109,97,99,101,110,95,100,101,115,
		116,105,110,111,0,2,6,48,28,0,95,1,112,0,
		100,106,3,64,33,0,100,100,100,100,100,100,9,89,
		22,0,0,0,1,0,1,0,48,34,0,48,33,0,
		95,255,112,0,112,0,6,100,9,9,100,100,100,100,
		100,100,106,5,76,117,112,97,0,93,162,0,93,161,
		0,112,25,112,1,73,36,107,0,48,39,0,48,45,
		0,95,1,112,0,89,22,0,0,0,1,0,1,0,
		48,46,0,48,33,0,95,255,112,0,112,0,6,112,
		1,73,36,108,0,48,41,0,48,45,0,95,1,112,
		0,89,34,0,0,0,1,0,1,0,176,42,0,48,
		45,0,95,255,112,0,48,43,0,48,45,0,95,255,
		112,0,112,0,12,2,6,112,1,73,36,117,0,48,
		47,0,95,1,48,26,0,176,29,0,12,0,93,140,
		0,89,98,0,1,0,1,0,1,0,176,30,0,12,
		0,121,8,28,41,48,31,0,48,32,0,48,33,0,
		95,255,112,0,112,0,112,0,106,17,103,114,117,112,
		111,95,109,111,118,105,109,105,101,110,116,111,0,1,
		25,42,95,1,165,48,31,0,48,32,0,48,33,0,
		95,255,112,0,112,0,112,0,106,17,103,114,117,112,
		111,95,109,111,118,105,109,105,101,110,116,111,0,2,
		6,48,28,0,95,1,112,0,100,106,3,64,33,0,
		100,100,100,100,100,100,9,89,22,0,0,0,1,0,
		1,0,48,34,0,48,33,0,95,255,112,0,112,0,
		6,100,9,9,100,100,100,100,100,100,106,5,76,117,
		112,97,0,100,93,141,0,112,25,112,1,73,36,119,
		0,48,39,0,48,48,0,95,1,112,0,89,22,0,
		0,0,1,0,1,0,48,49,0,48,33,0,95,255,
		112,0,112,0,6,112,1,73,36,120,0,48,41,0,
		48,48,0,95,1,112,0,89,34,0,0,0,1,0,
		1,0,176,50,0,48,48,0,95,255,112,0,48,43,
		0,48,48,0,95,255,112,0,112,0,12,2,6,112,
		1,73,36,129,0,48,51,0,95,1,48,26,0,176,
		29,0,12,0,93,210,0,89,78,0,1,0,1,0,
		1,0,176,30,0,12,0,121,8,28,31,48,31,0,
		48,32,0,48,33,0,95,255,112,0,112,0,112,0,
		106,7,97,103,101,110,116,101,0,1,25,32,95,1,
		165,48,31,0,48,32,0,48,33,0,95,255,112,0,
		112,0,112,0,106,7,97,103,101,110,116,101,0,2,
		6,48,28,0,95,1,112,0,100,106,3,64,33,0,
		100,100,100,100,100,100,9,89,22,0,0,0,1,0,
		1,0,48,34,0,48,33,0,95,255,112,0,112,0,
		6,100,9,9,100,100,100,100,100,100,106,5,76,117,
		112,97,0,100,93,211,0,112,25,112,1,73,36,131,
		0,48,39,0,48,52,0,95,1,112,0,89,22,0,
		0,0,1,0,1,0,48,53,0,48,33,0,95,255,
		112,0,112,0,6,112,1,73,36,132,0,48,41,0,
		48,52,0,95,1,112,0,89,34,0,0,0,1,0,
		1,0,176,54,0,48,52,0,95,255,112,0,48,43,
		0,48,52,0,95,255,112,0,112,0,12,2,6,112,
		1,73,36,138,0,48,55,0,48,2,0,176,56,0,
		12,0,48,33,0,95,1,112,0,112,1,106,6,105,
		100,71,101,116,0,93,190,0,106,6,105,100,66,109,
		112,0,93,191,0,106,8,105,100,86,97,108,117,101,
		0,93,192,0,106,7,100,105,97,108,111,103,0,48,
		28,0,95,1,112,0,177,4,0,112,1,73,36,146,
		0,48,26,0,176,57,0,12,0,93,170,0,89,88,
		0,1,0,1,0,1,0,176,30,0,12,0,121,8,
		28,36,48,31,0,48,32,0,48,33,0,95,255,112,
		0,112,0,112,0,106,12,99,111,109,101,110,116,97,
		114,105,111,115,0,1,25,37,95,1,165,48,31,0,
		48,32,0,48,33,0,95,255,112,0,112,0,112,0,
		106,12,99,111,109,101,110,116,97,114,105,111,115,0,
		2,6,48,28,0,95,1,112,0,100,100,100,100,100,
		100,9,89,22,0,0,0,1,0,1,0,48,34,0,
		48,33,0,95,255,112,0,112,0,6,9,100,100,112,
		14,73,36,154,0,48,26,0,176,58,0,12,0,93,
		244,1,89,40,0,0,0,1,0,1,0,48,59,0,
		48,60,0,48,33,0,95,255,112,0,112,0,112,0,
		73,48,61,0,48,62,0,95,255,112,0,112,0,6,
		48,28,0,95,1,112,0,100,100,9,89,22,0,0,
		0,1,0,1,0,48,34,0,48,33,0,95,255,112,
		0,112,0,6,100,100,9,112,10,73,36,160,0,48,
		26,0,176,58,0,12,0,93,245,1,89,40,0,0,
		0,1,0,1,0,48,63,0,48,60,0,48,33,0,
		95,255,112,0,112,0,112,0,73,48,61,0,48,62,
		0,95,255,112,0,112,0,6,48,28,0,95,1,112,
		0,100,100,9,89,22,0,0,0,1,0,1,0,48,
		34,0,48,33,0,95,255,112,0,112,0,6,100,100,
		9,112,10,73,36,166,0,48,26,0,176,58,0,12,
		0,93,246,1,89,52,0,0,0,1,0,1,0,48,
		64,0,48,60,0,48,33,0,95,255,112,0,112,0,
		48,65,0,48,62,0,95,255,112,0,112,0,112,1,
		73,48,61,0,48,62,0,95,255,112,0,112,0,6,
		48,28,0,95,1,112,0,100,100,9,89,22,0,0,
		0,1,0,1,0,48,34,0,48,33,0,95,255,112,
		0,112,0,6,100,100,9,112,10,73,36,170,0,48,
		66,0,95,1,48,2,0,176,67,0,12,0,95,1,
		112,1,112,1,73,36,172,0,48,68,0,48,62,0,
		95,1,112,0,48,60,0,48,33,0,95,1,112,0,
		112,0,112,1,73,36,174,0,48,69,0,48,62,0,
		95,1,112,0,93,180,0,48,28,0,95,1,112,0,
		112,2,73,36,182,0,48,26,0,176,58,0,12,0,
		122,89,40,0,0,0,1,0,1,0,176,70,0,48,
		28,0,95,255,112,0,12,1,28,17,48,71,0,48,
		28,0,95,255,112,0,122,112,1,25,3,100,6,48,
		28,0,95,1,112,0,100,100,9,89,22,0,0,0,
		1,0,1,0,48,34,0,48,33,0,95,255,112,0,
		112,0,6,100,100,9,112,10,80,2,36,188,0,48,
		26,0,176,58,0,12,0,92,2,89,22,0,0,0,
		1,0,1,0,48,71,0,48,28,0,95,255,112,0,
		112,0,6,48,28,0,95,1,112,0,100,100,9,100,
		100,100,120,112,10,73,36,193,0,48,26,0,176,58,
		0,12,0,92,3,90,26,176,72,0,106,16,82,101,
		99,97,108,99,117,108,97,80,114,101,99,105,111,0,
		12,1,6,48,28,0,95,1,112,0,100,100,9,100,
		100,100,9,112,10,73,36,195,0,48,34,0,48,33,
		0,95,1,112,0,112,0,28,37,36,196,0,48,73,
		0,48,28,0,95,1,112,0,92,116,89,17,0,0,
		0,1,0,2,0,48,74,0,95,255,112,0,6,112,
		2,73,36,199,0,48,75,0,48,28,0,95,1,112,
		0,89,17,0,0,0,1,0,1,0,48,76,0,95,
		255,112,0,6,112,1,73,36,201,0,48,69,0,48,
		28,0,95,1,112,0,100,100,100,120,112,4,73,36,
		203,0,48,71,0,95,3,112,0,73,36,205,0,48,
		77,0,48,28,0,95,1,112,0,112,0,122,8,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( MOVIMIENTOSALMACENVIEW_STARTDIALOG )
{
	static const HB_BYTE pcode[] =
	{
		36,211,0,48,37,0,102,112,0,73,36,213,0,48,
		78,0,48,33,0,102,112,0,48,14,0,102,112,0,
		112,1,73,36,215,0,48,78,0,48,33,0,102,112,
		0,48,45,0,102,112,0,112,1,73,36,217,0,48,
		79,0,48,33,0,102,112,0,48,48,0,102,112,0,
		112,1,73,36,219,0,48,80,0,48,33,0,102,112,
		0,48,52,0,102,112,0,112,1,73,36,221,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,83,0,2,0,116,83,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

