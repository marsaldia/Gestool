/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Situaciones.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SITUACIONES );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASEVIEW );
HB_FUNC_STATIC( SITUACIONES_NEW );
<<<<<<< HEAD
HB_FUNC_STATIC( SITUACIONES_BUILDSQLSHELL );
HB_FUNC_STATIC( SITUACIONES_DIALOG );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( DISABLEACCESO );
HB_FUNC_EXTERN( SQLTSHELL );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( ENABLEACCESO );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TMULTIGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TBUTTON );
=======
HB_FUNC_STATIC( SITUACIONES_DIALOG );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( VALIDATEDIALOG );
>>>>>>> SQLite
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SITUACIONES )
{ "SITUACIONES", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SITUACIONES )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASEVIEW )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SITUACIONES_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SITUACIONES_NEW )}, NULL },
<<<<<<< HEAD
{ "SITUACIONES_BUILDSQLSHELL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SITUACIONES_BUILDSQLSHELL )}, NULL },
=======
>>>>>>> SQLite
{ "SITUACIONES_DIALOG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SITUACIONES_DIALOG )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
<<<<<<< HEAD
{ "DISABLEACCESO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISABLEACCESO )}, NULL },
{ "_OSHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLTSHELL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLTSHELL )}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSORTORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BEDITVALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BLCLICKHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLICKONHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETCOMBOBOX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEXFROMCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETDCLICKDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOBUTTONS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRESIZED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BKEYDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BINIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLBUTTONUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVEHISTORYOFSHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROYSQLMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOMBOBOXCHANGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHANGECOMBO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLEACCESO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ENABLEACCESO )}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TMULTIGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMULTIGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISZOOMMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "VALIDDIALOG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
=======
{ "_CIMAGENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDNOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISZOOMMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "VALIDATEDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALIDATEDIALOG )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
>>>>>>> SQLite
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SITUACIONES, ".\\.\\Prg\\Situaciones.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SITUACIONES
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SITUACIONES )
   #include "hbiniseg.h"
#endif

HB_FUNC( SITUACIONES )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		149,3,0,116,71,0,36,7,0,103,2,0,100,8,
		29,218,0,176,1,0,104,2,0,12,1,29,207,0,
		166,145,0,0,122,80,1,48,2,0,176,3,0,12,
=======
		149,3,0,116,40,0,36,7,0,103,2,0,100,8,
		29,181,0,176,1,0,104,2,0,12,1,29,170,0,
		166,108,0,0,122,80,1,48,2,0,176,3,0,12,
>>>>>>> SQLite
		0,106,12,83,105,116,117,97,99,105,111,110,101,115,
		0,108,4,4,1,0,108,0,112,3,80,2,36,9,
		0,48,5,0,95,2,106,4,78,101,119,0,108,6,
		95,1,121,72,121,72,121,72,112,3,73,36,11,0,
<<<<<<< HEAD
		48,5,0,95,2,106,14,98,117,105,108,100,83,81,
		76,83,104,101,108,108,0,108,7,95,1,121,72,121,
		72,121,72,112,3,73,36,13,0,48,5,0,95,2,
		106,7,68,105,97,108,111,103,0,108,8,95,1,121,
		72,121,72,121,72,112,3,73,36,15,0,48,9,0,
		95,2,112,0,73,167,14,0,0,176,10,0,104,2,
		0,95,2,20,2,168,48,11,0,95,2,112,0,80,
		3,176,12,0,95,3,106,10,73,110,105,116,67,108,
		97,115,115,0,12,2,28,12,48,13,0,95,3,164,
		146,1,0,73,95,3,110,7,48,11,0,103,2,0,
		112,0,110,7
=======
		48,5,0,95,2,106,7,68,105,97,108,111,103,0,
		108,7,95,1,121,72,121,72,121,72,112,3,73,36,
		13,0,48,8,0,95,2,112,0,73,167,14,0,0,
		176,9,0,104,2,0,95,2,20,2,168,48,10,0,
		95,2,112,0,80,3,176,11,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		12,0,95,3,164,146,1,0,73,95,3,110,7,48,
		10,0,103,2,0,112,0,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SITUACIONES_NEW )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,0,1,36,21,0,48,14,0,102,95,1,112,1,
		73,36,23,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SITUACIONES_BUILDSQLSHELL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,27,0,102,80,1,36,29,0,176,15,
		0,20,0,36,31,0,48,16,0,95,1,48,2,0,
		176,17,0,12,0,92,2,92,10,92,18,92,70,106,
		12,83,105,116,117,97,99,105,111,110,101,115,0,100,
		176,18,0,12,0,100,100,9,100,100,48,19,0,48,
		20,0,95,1,112,0,112,0,100,100,100,100,4,0,
		0,89,34,0,0,0,1,0,1,0,48,21,0,48,
		20,0,95,255,112,0,48,22,0,48,23,0,95,255,
		112,0,112,0,112,1,6,100,89,34,0,0,0,1,
		0,1,0,48,24,0,48,20,0,95,255,112,0,48,
		22,0,48,23,0,95,255,112,0,112,0,112,1,6,
		100,100,48,25,0,48,20,0,95,1,112,0,112,0,
		106,26,103,99,95,100,111,99,117,109,101,110,116,95,
		97,116,116,97,99,104,109,101,110,116,95,49,54,0,
		97,104,0,63,0,100,100,120,112,29,112,1,73,36,
		33,0,48,26,0,48,23,0,95,1,112,0,112,0,
		143,36,34,0,144,27,0,106,3,73,100,0,112,1,
		73,36,35,0,144,28,0,106,3,105,100,0,112,1,
		73,36,36,0,144,29,0,89,32,0,0,0,1,0,
		1,0,48,30,0,48,31,0,48,20,0,95,255,112,
		0,112,0,106,3,105,100,0,112,1,6,112,1,73,
		36,37,0,144,32,0,92,40,112,1,73,36,38,0,
		144,33,0,89,48,0,4,0,1,0,1,0,48,34,
		0,48,20,0,95,255,112,0,95,4,48,22,0,48,
		23,0,95,255,112,0,112,0,48,35,0,48,23,0,
		95,255,112,0,112,0,112,3,6,112,1,73,145,36,
		41,0,48,26,0,48,23,0,95,1,112,0,112,0,
		143,36,42,0,144,27,0,106,10,83,105,116,117,97,
		99,105,243,110,0,112,1,73,36,43,0,144,28,0,
		106,10,115,105,116,117,97,99,105,111,110,0,112,1,
		73,36,44,0,144,29,0,89,39,0,0,0,1,0,
		1,0,48,30,0,48,31,0,48,20,0,95,255,112,
		0,112,0,106,10,115,105,116,117,97,99,105,111,110,
		0,112,1,6,112,1,73,36,45,0,144,32,0,93,
		32,3,112,1,73,36,46,0,144,33,0,89,48,0,
		4,0,1,0,1,0,48,34,0,48,20,0,95,255,
		112,0,95,4,48,22,0,48,23,0,95,255,112,0,
		112,0,48,35,0,48,23,0,95,255,112,0,112,0,
		112,3,6,112,1,73,145,36,49,0,48,36,0,48,
		23,0,95,1,112,0,112,0,73,36,51,0,48,37,
		0,48,23,0,95,1,112,0,89,34,0,0,0,1,
		0,1,0,48,21,0,48,20,0,95,255,112,0,48,
		22,0,48,23,0,95,255,112,0,112,0,112,1,6,
		112,1,73,36,53,0,48,38,0,95,1,112,0,73,
		36,55,0,48,39,0,48,23,0,95,1,112,0,100,
		48,40,0,48,23,0,95,1,112,0,112,0,48,41,
		0,48,23,0,95,1,112,0,112,0,48,42,0,48,
		23,0,95,1,112,0,112,0,48,43,0,48,23,0,
		95,1,112,0,112,0,48,44,0,48,23,0,95,1,
		112,0,112,0,48,45,0,48,23,0,95,1,112,0,
		112,0,48,46,0,48,23,0,95,1,112,0,112,0,
		100,100,100,100,100,100,100,100,100,100,48,47,0,48,
		23,0,95,1,112,0,112,0,9,112,20,73,36,57,
		0,48,48,0,48,23,0,95,1,112,0,89,31,0,
		0,0,1,0,1,0,48,49,0,95,255,48,22,0,
		48,23,0,95,255,112,0,112,0,112,1,73,120,6,
		112,1,73,36,58,0,48,50,0,48,23,0,95,1,
		112,0,89,22,0,0,0,1,0,1,0,48,51,0,
		48,20,0,95,255,112,0,112,0,6,112,1,73,36,
		60,0,48,52,0,48,23,0,95,1,112,0,89,41,
		0,0,0,1,0,1,0,48,53,0,95,255,48,22,
		0,48,23,0,95,255,112,0,112,0,48,35,0,48,
		23,0,95,255,112,0,112,0,112,2,6,112,1,73,
		36,62,0,176,54,0,20,0,36,64,0,95,1,110,
		7
=======
		13,0,1,36,19,0,48,13,0,102,95,1,112,1,
		73,36,21,0,48,14,0,102,106,26,103,99,95,100,
		111,99,117,109,101,110,116,95,97,116,116,97,99,104,
		109,101,110,116,95,49,54,0,112,1,73,36,23,0,
		102,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SITUACIONES_DIALOG )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,3,1,36,68,0,102,80,2,36,73,0,48,2,
		0,176,55,0,12,0,100,100,100,100,48,56,0,95,
		2,112,0,106,10,115,105,116,117,97,99,105,243,110,
		0,72,106,10,83,73,84,85,65,67,73,79,78,0,
		100,9,100,100,100,100,100,9,100,100,100,100,100,9,
		100,106,5,111,68,108,103,0,100,100,112,24,80,3,
		36,80,0,48,57,0,176,58,0,12,0,92,100,89,
		84,0,1,0,1,0,2,0,176,59,0,12,0,121,
		8,28,34,48,60,0,48,19,0,48,20,0,95,255,
		112,0,112,0,112,0,106,10,115,105,116,117,97,99,
		105,111,110,0,1,25,35,95,1,165,48,60,0,48,
		19,0,48,20,0,95,255,112,0,112,0,112,0,106,
		10,115,105,116,117,97,99,105,111,110,0,2,6,95,
		3,100,100,100,100,100,100,9,89,23,0,0,0,1,
		0,2,0,48,61,0,48,20,0,95,255,112,0,112,
		0,68,6,9,100,100,112,14,80,4,36,86,0,48,
		57,0,176,62,0,12,0,122,89,30,0,0,0,3,
		0,2,0,3,0,4,0,48,63,0,48,20,0,95,
		255,112,0,95,254,95,253,112,2,6,95,3,100,100,
		9,89,23,0,0,0,1,0,2,0,48,61,0,48,
		20,0,95,255,112,0,112,0,68,6,100,100,9,112,
		10,73,36,92,0,48,57,0,176,62,0,12,0,92,
		2,89,17,0,0,0,1,0,3,0,48,64,0,95,
		255,112,0,6,95,3,100,100,9,100,100,100,120,112,
		10,73,36,96,0,48,65,0,95,3,92,116,89,18,
		0,0,0,1,0,3,0,48,64,0,95,255,122,112,
		1,6,112,2,73,36,100,0,48,66,0,95,3,89,
		17,0,0,0,1,0,4,0,48,67,0,95,255,112,
		0,6,112,1,73,36,102,0,48,39,0,95,3,48,
		40,0,95,3,112,0,48,42,0,95,3,112,0,48,
		44,0,95,3,112,0,120,100,100,100,48,41,0,95,
		3,112,0,100,100,100,112,11,73,36,104,0,48,68,
		0,95,3,112,0,122,8,110,7
=======
		13,4,0,36,27,0,102,80,1,36,33,0,48,2,
		0,176,15,0,12,0,100,100,100,100,48,16,0,95,
		1,112,0,106,10,115,105,116,117,97,99,105,243,110,
		0,72,106,10,83,73,84,85,65,67,73,79,78,0,
		100,9,100,100,100,100,100,9,100,100,100,100,100,9,
		100,106,5,111,68,108,103,0,100,100,112,24,80,2,
		36,40,0,48,17,0,176,18,0,12,0,92,100,89,
		78,0,1,0,1,0,1,0,176,19,0,12,0,121,
		8,28,31,48,20,0,48,21,0,48,22,0,95,255,
		112,0,112,0,112,0,106,7,110,111,109,98,114,101,
		0,1,25,32,95,1,165,48,20,0,48,21,0,48,
		22,0,95,255,112,0,112,0,112,0,106,7,110,111,
		109,98,114,101,0,2,6,95,2,100,100,89,26,0,
		0,0,2,0,1,0,4,0,48,23,0,48,22,0,
		95,255,112,0,95,254,112,1,6,100,100,100,100,100,
		9,89,23,0,0,0,1,0,1,0,48,24,0,48,
		22,0,95,255,112,0,112,0,68,6,100,9,9,100,
		100,100,100,100,100,100,100,100,112,25,80,4,36,46,
		0,48,17,0,176,25,0,12,0,122,89,30,0,0,
		0,1,0,2,0,176,26,0,95,255,12,1,28,12,
		48,27,0,95,255,122,112,1,25,3,100,6,95,2,
		100,100,9,89,23,0,0,0,1,0,1,0,48,24,
		0,48,22,0,95,255,112,0,112,0,68,6,100,100,
		9,112,10,80,3,36,52,0,48,17,0,176,25,0,
		12,0,92,2,89,17,0,0,0,1,0,2,0,48,
		27,0,95,255,112,0,6,95,2,100,100,9,100,100,
		100,120,112,10,73,36,56,0,48,28,0,95,2,92,
		116,89,17,0,0,0,1,0,3,0,48,29,0,95,
		255,112,0,6,112,2,73,36,60,0,48,30,0,95,
		2,89,17,0,0,0,1,0,4,0,48,31,0,95,
		255,112,0,6,112,1,73,36,62,0,48,32,0,95,
		2,48,33,0,95,2,112,0,48,34,0,95,2,112,
		0,48,35,0,95,2,112,0,120,100,100,100,48,36,
		0,95,2,112,0,100,100,100,112,11,73,36,64,0,
		48,37,0,95,2,112,0,122,8,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		117,71,0,2,0,116,71,0,4,0,0,82,1,0,
=======
		117,40,0,2,0,116,40,0,4,0,0,82,1,0,
>>>>>>> SQLite
		7
	};

	hb_vmExecute( pcode, symbols );
}

