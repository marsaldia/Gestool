/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Etiquetas.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( ETIQUETAS );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASEVIEW );
HB_FUNC_STATIC( ETIQUETAS_NEW );
<<<<<<< HEAD
HB_FUNC_STATIC( ETIQUETAS_BUILDSQLSHELL );
=======
>>>>>>> SQLite
HB_FUNC_STATIC( ETIQUETAS_BUILDSQLBROWSE );
HB_FUNC_STATIC( ETIQUETAS_DIALOG );
HB_FUNC_STATIC( ETIQUETAS_INSERTAFTERAPPENDBUTTON );
HB_FUNC_STATIC( ETIQUETAS_LBLTITLE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
<<<<<<< HEAD
HB_FUNC_EXTERN( DISABLEACCESO );
HB_FUNC_EXTERN( SQLTSHELL );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( ENABLEACCESO );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TBITMAP );
HB_FUNC_EXTERN( TMULTIGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TTREEVIEW );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( TGETHLP );
=======
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TBITMAP );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TTREEVIEW );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( VALIDATEDIALOG );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( LOWER );
>>>>>>> SQLite
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ETIQUETAS )
{ "ETIQUETAS", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASEVIEW )}, NULL },
<<<<<<< HEAD
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ETIQUETAS_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS_NEW )}, NULL },
{ "ETIQUETAS_BUILDSQLSHELL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS_BUILDSQLSHELL )}, NULL },
=======
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ETIQUETAS_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS_NEW )}, NULL },
>>>>>>> SQLite
{ "ETIQUETAS_BUILDSQLBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS_BUILDSQLBROWSE )}, NULL },
{ "ETIQUETAS_DIALOG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS_DIALOG )}, NULL },
{ "ETIQUETAS_INSERTAFTERAPPENDBUTTON", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS_INSERTAFTERAPPENDBUTTON )}, NULL },
{ "ETIQUETAS_LBLTITLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ETIQUETAS_LBLTITLE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
<<<<<<< HEAD
=======
{ "_CIMAGENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
>>>>>>> SQLite
{ "NEWAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPENDCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
<<<<<<< HEAD
{ "DISABLEACCESO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISABLEACCESO )}, NULL },
{ "_OSHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLTSHELL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLTSHELL )}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSORTORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTRDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
=======
>>>>>>> SQLite
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBITMAP )}, NULL },
<<<<<<< HEAD
{ "TMULTIGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMULTIGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
=======
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDNOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
>>>>>>> SQLite
{ "ISZOOMMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TTREEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TTREEVIEW )}, NULL },
{ "_BITEMSELECTCHANGED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHANGETREE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BWHEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISSPECIALMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
<<<<<<< HEAD
{ "VALIDDIALOG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTDIALOG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
=======
{ "VALIDATEDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALIDATEDIALOG )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTDIALOG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
>>>>>>> SQLite
{ "_BCHANGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHANGEFINDTREE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETALLSELECTEDNODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPENDONBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDITONBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOADTREE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTREESELECTEDITEMS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ETIQUETAS, ".\\.\\Prg\\Etiquetas.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ETIQUETAS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ETIQUETAS )
   #include "hbiniseg.h"
#endif

HB_FUNC( ETIQUETAS )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		149,3,0,116,95,0,36,7,0,103,2,0,100,8,
		29,116,1,176,1,0,104,2,0,12,1,29,105,1,
		166,43,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,10,69,116,105,113,117,101,116,97,115,0,108,
		4,4,1,0,108,0,112,3,80,2,36,9,0,48,
		5,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,12,111,67,111,110,116,114,111,108,108,101,114,0,
		4,1,0,9,112,5,73,36,11,0,48,6,0,95,
		2,106,4,78,101,119,0,108,7,95,1,121,72,121,
		72,121,72,112,3,73,36,13,0,48,6,0,95,2,
		106,14,98,117,105,108,100,83,81,76,83,104,101,108,
		108,0,108,8,95,1,121,72,121,72,121,72,112,3,
		73,36,15,0,48,6,0,95,2,106,15,98,117,105,
		108,100,83,81,76,66,114,111,119,115,101,0,108,9,
		95,1,121,72,121,72,121,72,112,3,73,36,17,0,
		48,6,0,95,2,106,7,68,105,97,108,111,103,0,
		108,10,95,1,121,72,121,72,121,72,112,3,73,36,
		19,0,48,6,0,95,2,106,24,105,110,115,101,114,
		116,65,102,116,101,114,65,112,112,101,110,100,66,117,
		116,116,111,110,0,108,11,95,1,121,72,121,72,121,
		72,112,3,73,36,21,0,48,6,0,95,2,106,9,
		76,98,108,84,105,116,108,101,0,108,12,95,1,121,
		72,121,72,121,72,112,3,73,36,23,0,48,13,0,
		95,2,112,0,73,167,14,0,0,176,14,0,104,2,
		0,95,2,20,2,168,48,15,0,95,2,112,0,80,
		3,176,16,0,95,3,106,10,73,110,105,116,67,108,
		97,115,115,0,12,2,28,12,48,17,0,95,3,164,
		146,1,0,73,95,3,110,7,48,15,0,103,2,0,
		112,0,110,7
=======
		149,3,0,116,65,0,36,7,0,103,2,0,100,8,
		29,40,1,176,1,0,104,2,0,12,1,29,29,1,
		166,223,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,10,69,116,105,113,117,101,116,97,115,0,108,
		4,4,1,0,108,0,112,3,80,2,36,9,0,48,
		5,0,95,2,106,4,78,101,119,0,108,6,95,1,
		121,72,121,72,121,72,112,3,73,36,11,0,48,5,
		0,95,2,106,15,98,117,105,108,100,83,81,76,66,
		114,111,119,115,101,0,108,7,95,1,121,72,121,72,
		121,72,112,3,73,36,13,0,48,5,0,95,2,106,
		7,68,105,97,108,111,103,0,108,8,95,1,121,72,
		121,72,121,72,112,3,73,36,15,0,48,5,0,95,
		2,106,24,105,110,115,101,114,116,65,102,116,101,114,
		65,112,112,101,110,100,66,117,116,116,111,110,0,108,
		9,95,1,121,72,121,72,121,72,112,3,73,36,17,
		0,48,5,0,95,2,106,9,76,98,108,84,105,116,
		108,101,0,108,10,95,1,121,72,121,72,121,72,112,
		3,73,36,19,0,48,11,0,95,2,112,0,73,167,
		14,0,0,176,12,0,104,2,0,95,2,20,2,168,
		48,13,0,95,2,112,0,80,3,176,14,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,15,0,95,3,164,146,1,0,73,95,3,
		110,7,48,13,0,103,2,0,112,0,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ETIQUETAS_NEW )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,0,1,36,29,0,48,18,0,102,95,1,112,1,
		73,36,31,0,102,110,7
=======
		13,0,1,36,25,0,48,16,0,102,95,1,112,1,
		73,36,27,0,48,17,0,102,106,16,103,99,95,98,
		111,111,107,109,97,114,107,115,95,49,54,0,112,1,
		73,36,29,0,102,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ETIQUETAS_INSERTAFTERAPPENDBUTTON )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,1,0,36,35,0,102,80,1,36,43,0,48,19,
		0,48,20,0,95,1,112,0,106,4,78,69,87,0,
		100,100,89,34,0,0,0,1,0,1,0,48,21,0,
		48,22,0,95,255,112,0,48,23,0,48,20,0,95,
		255,112,0,112,0,112,1,6,106,15,40,65,41,241,
		97,100,105,114,32,72,105,106,111,115,0,106,2,72,
		0,100,100,92,2,100,9,112,11,73,36,45,0,95,
=======
		13,1,0,36,33,0,102,80,1,36,41,0,48,18,
		0,48,19,0,95,1,112,0,106,4,78,69,87,0,
		100,100,89,34,0,0,0,1,0,1,0,48,20,0,
		48,21,0,95,255,112,0,48,22,0,48,19,0,95,
		255,112,0,112,0,112,1,6,106,15,40,65,41,241,
		97,100,105,114,32,72,105,106,111,115,0,106,2,72,
		0,100,100,92,2,100,9,112,11,73,36,43,0,95,
>>>>>>> SQLite
		1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

<<<<<<< HEAD
HB_FUNC_STATIC( ETIQUETAS_BUILDSQLSHELL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,49,0,102,80,1,36,51,0,176,24,
		0,20,0,36,53,0,48,25,0,95,1,48,2,0,
		176,26,0,12,0,92,2,92,10,92,18,92,70,106,
		10,69,116,105,113,117,101,116,97,115,0,100,176,27,
		0,12,0,100,100,9,100,100,48,28,0,48,22,0,
		95,1,112,0,112,0,100,100,100,100,4,0,0,89,
		34,0,0,0,1,0,1,0,48,29,0,48,22,0,
		95,255,112,0,48,23,0,48,20,0,95,255,112,0,
		112,0,112,1,6,100,89,34,0,0,0,1,0,1,
		0,48,30,0,48,22,0,95,255,112,0,48,23,0,
		48,20,0,95,255,112,0,112,0,112,1,6,100,100,
		48,31,0,48,22,0,95,1,112,0,112,0,106,16,
		103,99,95,98,111,111,107,109,97,114,107,115,95,49,
		54,0,97,104,0,63,0,100,100,120,112,29,112,1,
		73,36,55,0,48,32,0,48,20,0,95,1,112,0,
		112,0,143,36,56,0,144,33,0,106,15,73,68,32,
		100,101,32,101,116,105,113,117,101,116,97,0,112,1,
		73,36,57,0,144,34,0,106,3,105,100,0,112,1,
		73,36,58,0,144,35,0,89,32,0,0,0,1,0,
		1,0,48,36,0,48,37,0,48,22,0,95,255,112,
		0,112,0,106,3,105,100,0,112,1,6,112,1,73,
		36,59,0,144,38,0,92,100,112,1,73,36,60,0,
		144,39,0,89,48,0,4,0,1,0,1,0,48,40,
		0,48,22,0,95,255,112,0,95,4,48,23,0,48,
		20,0,95,255,112,0,112,0,48,41,0,48,20,0,
		95,255,112,0,112,0,112,3,6,112,1,73,145,36,
		63,0,48,32,0,48,20,0,95,1,112,0,112,0,
		143,36,64,0,144,33,0,106,22,78,111,109,98,114,
		101,32,100,101,32,108,97,32,101,116,105,113,117,101,
		116,97,0,112,1,73,36,65,0,144,34,0,106,7,
		110,111,109,98,114,101,0,112,1,73,36,66,0,144,
		35,0,89,36,0,0,0,1,0,1,0,48,36,0,
		48,37,0,48,22,0,95,255,112,0,112,0,106,7,
		110,111,109,98,114,101,0,112,1,6,112,1,73,36,
		67,0,144,38,0,93,144,1,112,1,73,36,68,0,
		144,39,0,89,48,0,4,0,1,0,1,0,48,40,
		0,48,22,0,95,255,112,0,95,4,48,23,0,48,
		20,0,95,255,112,0,112,0,48,41,0,48,20,0,
		95,255,112,0,112,0,112,3,6,112,1,73,145,36,
		71,0,48,32,0,48,20,0,95,1,112,0,112,0,
		143,36,72,0,144,33,0,106,17,78,111,109,98,114,
		101,32,100,101,108,32,80,97,100,114,101,0,112,1,
		73,36,73,0,144,34,0,106,13,110,111,109,98,114,
		101,95,112,97,100,114,101,0,112,1,73,36,74,0,
		144,35,0,89,42,0,0,0,1,0,1,0,48,36,
		0,48,37,0,48,22,0,95,255,112,0,112,0,106,
		13,110,111,109,98,114,101,95,112,97,100,114,101,0,
		112,1,6,112,1,73,36,75,0,144,38,0,92,100,
		112,1,73,36,76,0,144,39,0,89,48,0,4,0,
		1,0,1,0,48,40,0,48,22,0,95,255,112,0,
		95,4,48,23,0,48,20,0,95,255,112,0,112,0,
		48,41,0,48,20,0,95,255,112,0,112,0,112,3,
		6,112,1,73,145,36,79,0,48,42,0,48,20,0,
		95,1,112,0,112,0,73,36,81,0,48,43,0,48,
		20,0,95,1,112,0,89,34,0,0,0,1,0,1,
		0,48,29,0,48,22,0,95,255,112,0,48,23,0,
		48,20,0,95,255,112,0,112,0,112,1,6,112,1,
		73,36,83,0,48,44,0,95,1,112,0,73,36,85,
		0,48,45,0,48,20,0,95,1,112,0,100,48,46,
		0,48,20,0,95,1,112,0,112,0,48,47,0,48,
		20,0,95,1,112,0,112,0,48,48,0,48,20,0,
		95,1,112,0,112,0,48,49,0,48,20,0,95,1,
		112,0,112,0,48,50,0,48,20,0,95,1,112,0,
		112,0,48,51,0,48,20,0,95,1,112,0,112,0,
		48,52,0,48,20,0,95,1,112,0,112,0,100,100,
		100,100,100,100,100,100,100,100,48,53,0,48,20,0,
		95,1,112,0,112,0,9,112,20,73,36,87,0,48,
		54,0,48,20,0,95,1,112,0,89,31,0,0,0,
		1,0,1,0,48,55,0,95,255,48,23,0,48,20,
		0,95,255,112,0,112,0,112,1,73,120,6,112,1,
		73,36,88,0,48,56,0,48,20,0,95,1,112,0,
		89,22,0,0,0,1,0,1,0,48,57,0,48,22,
		0,95,255,112,0,112,0,6,112,1,73,36,90,0,
		48,58,0,48,20,0,95,1,112,0,89,41,0,0,
		0,1,0,1,0,48,59,0,95,255,48,23,0,48,
		20,0,95,255,112,0,112,0,48,41,0,48,20,0,
		95,255,112,0,112,0,112,2,6,112,1,73,36,92,
		0,176,60,0,20,0,36,94,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

=======
>>>>>>> SQLite
HB_FUNC_STATIC( ETIQUETAS_DIALOG )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,5,1,36,98,0,102,80,2,36,105,0,48,2,
		0,176,61,0,12,0,100,100,100,100,48,62,0,95,
		2,112,0,106,9,101,116,105,113,117,101,116,97,0,
		72,106,9,69,84,73,81,85,69,84,65,0,100,9,
		100,100,100,100,100,9,100,100,100,100,100,9,100,106,
		5,111,68,108,103,0,100,100,112,24,80,3,36,111,
		0,48,63,0,176,64,0,12,0,93,244,1,106,16,
		103,99,95,98,111,111,107,109,97,114,107,115,95,52,
		56,0,100,95,3,100,100,9,9,100,100,9,100,100,
		120,112,14,80,6,36,118,0,48,63,0,176,65,0,
		12,0,92,100,89,78,0,1,0,1,0,2,0,176,
		66,0,12,0,121,8,28,31,48,67,0,48,28,0,
		48,22,0,95,255,112,0,112,0,112,0,106,7,110,
		111,109,98,114,101,0,1,25,32,95,1,165,48,67,
		0,48,28,0,48,22,0,95,255,112,0,112,0,112,
		0,106,7,110,111,109,98,114,101,0,2,6,95,3,
		100,100,100,100,100,100,9,89,23,0,0,0,1,0,
		2,0,48,68,0,48,22,0,95,255,112,0,112,0,
		68,6,9,100,100,112,14,80,5,36,120,0,48,63,
		0,176,69,0,12,0,92,110,95,3,112,2,80,4,
		36,121,0,48,70,0,95,4,89,26,0,0,0,2,
		0,2,0,4,0,48,71,0,48,22,0,95,255,112,
		0,95,254,112,1,6,112,1,73,36,122,0,48,72,
		0,95,4,89,40,0,0,0,1,0,2,0,48,73,
		0,48,22,0,95,255,112,0,112,0,68,21,28,16,
		73,48,68,0,48,22,0,95,255,112,0,112,0,68,
		6,112,1,73,36,128,0,48,63,0,176,74,0,12,
		0,122,89,34,0,0,0,4,0,2,0,3,0,4,
		0,5,0,48,75,0,48,22,0,95,255,112,0,95,
		254,95,253,95,252,112,3,6,95,3,100,100,9,89,
		23,0,0,0,1,0,2,0,48,68,0,48,22,0,
		95,255,112,0,112,0,68,6,100,100,9,112,10,73,
		36,134,0,48,63,0,176,74,0,12,0,92,2,89,
		17,0,0,0,1,0,3,0,48,76,0,95,255,112,
		0,6,95,3,100,100,9,100,100,100,120,112,10,73,
		36,138,0,48,77,0,95,3,92,116,89,34,0,0,
		0,4,0,2,0,3,0,4,0,5,0,48,75,0,
		48,22,0,95,255,112,0,95,254,95,253,95,252,112,
		3,6,112,2,73,36,142,0,48,78,0,95,3,89,
		36,0,0,0,3,0,2,0,4,0,5,0,48,79,
		0,48,22,0,95,255,112,0,95,254,112,1,73,48,
		80,0,95,253,112,0,6,112,1,73,36,144,0,48,
		45,0,95,3,48,46,0,95,3,112,0,48,48,0,
		95,3,112,0,48,50,0,95,3,112,0,120,100,100,
		100,48,47,0,95,3,112,0,100,100,100,112,11,73,
		36,146,0,48,81,0,95,3,112,0,122,8,110,7
=======
		13,6,0,36,47,0,102,80,1,36,55,0,48,2,
		0,176,23,0,12,0,100,100,100,100,48,24,0,95,
		1,112,0,106,9,101,116,105,113,117,101,116,97,0,
		72,106,9,69,84,73,81,85,69,84,65,0,100,9,
		100,100,100,100,100,9,100,100,100,100,100,9,100,106,
		5,111,68,108,103,0,100,100,112,24,80,2,36,61,
		0,48,25,0,176,26,0,12,0,93,244,1,106,16,
		103,99,95,98,111,111,107,109,97,114,107,115,95,52,
		56,0,100,95,2,100,100,9,9,100,100,9,100,100,
		120,112,14,80,6,36,68,0,48,25,0,176,27,0,
		12,0,92,100,89,78,0,1,0,1,0,1,0,176,
		28,0,12,0,121,8,28,31,48,29,0,48,30,0,
		48,21,0,95,255,112,0,112,0,112,0,106,7,110,
		111,109,98,114,101,0,1,25,32,95,1,165,48,29,
		0,48,30,0,48,21,0,95,255,112,0,112,0,112,
		0,106,7,110,111,109,98,114,101,0,2,6,95,2,
		100,100,89,26,0,0,0,2,0,1,0,5,0,48,
		31,0,48,21,0,95,255,112,0,95,254,112,1,6,
		100,100,100,100,100,9,89,23,0,0,0,1,0,1,
		0,48,32,0,48,21,0,95,255,112,0,112,0,68,
		6,100,9,9,100,100,100,100,100,100,100,100,100,112,
		25,80,5,36,70,0,48,25,0,176,33,0,12,0,
		92,110,95,2,112,2,80,4,36,71,0,48,34,0,
		95,4,89,26,0,0,0,2,0,1,0,4,0,48,
		35,0,48,21,0,95,255,112,0,95,254,112,1,6,
		112,1,73,36,72,0,48,36,0,95,4,89,40,0,
		0,0,1,0,1,0,48,37,0,48,21,0,95,255,
		112,0,112,0,68,21,28,16,73,48,32,0,48,21,
		0,95,255,112,0,112,0,68,6,112,1,73,36,78,
		0,48,25,0,176,38,0,12,0,122,89,30,0,0,
		0,1,0,2,0,176,39,0,95,255,12,1,28,12,
		48,40,0,95,255,122,112,1,25,3,100,6,95,2,
		100,100,9,89,23,0,0,0,1,0,1,0,48,32,
		0,48,21,0,95,255,112,0,112,0,68,6,100,100,
		9,112,10,80,3,36,84,0,48,25,0,176,38,0,
		12,0,92,2,89,17,0,0,0,1,0,2,0,48,
		40,0,95,255,112,0,6,95,2,100,100,9,100,100,
		100,120,112,10,73,36,88,0,48,41,0,95,2,92,
		116,89,17,0,0,0,1,0,3,0,48,42,0,95,
		255,112,0,6,112,2,73,36,92,0,48,43,0,95,
		2,89,36,0,0,0,3,0,1,0,4,0,5,0,
		48,44,0,48,21,0,95,255,112,0,95,254,112,1,
		73,48,45,0,95,253,112,0,6,112,1,73,36,94,
		0,48,46,0,95,2,48,47,0,95,2,112,0,48,
		48,0,95,2,112,0,48,49,0,95,2,112,0,120,
		100,100,100,48,50,0,95,2,112,0,100,100,100,112,
		11,73,36,96,0,48,51,0,95,2,112,0,122,8,
		110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ETIQUETAS_LBLTITLE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		36,152,0,48,73,0,48,22,0,102,112,0,112,0,
		28,27,36,153,0,106,18,65,241,97,100,105,101,110,
		100,111,32,104,105,106,111,32,97,32,0,110,7,36,
		156,0,48,62,0,48,82,0,102,112,0,112,0,110,
=======
		36,102,0,48,37,0,48,21,0,102,112,0,112,0,
		28,27,36,103,0,106,18,65,241,97,100,105,101,110,
		100,111,32,104,105,106,111,32,97,32,0,110,7,36,
		106,0,48,24,0,48,52,0,102,112,0,112,0,110,
>>>>>>> SQLite
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ETIQUETAS_BUILDSQLBROWSE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,5,1,36,160,0,102,80,2,36,165,0,176,83,
		0,93,200,0,12,1,80,6,36,167,0,48,2,0,
		176,61,0,12,0,100,100,100,100,106,22,83,101,108,
		101,99,99,105,111,110,97,114,32,101,116,105,113,117,
		101,116,97,115,0,106,15,72,69,76,80,95,69,84,
		73,81,85,69,84,65,83,0,100,9,100,100,100,100,
		100,9,100,100,100,100,100,9,100,106,5,111,68,108,
		103,0,100,100,112,24,80,3,36,173,0,48,63,0,
		176,84,0,12,0,92,104,89,28,0,1,0,1,0,
		6,0,176,66,0,12,0,121,8,28,6,95,255,25,
		7,95,1,165,80,255,6,95,3,100,100,100,100,100,
		100,100,100,9,100,100,9,9,100,100,100,100,100,100,
		106,5,70,73,78,68,0,100,100,112,25,80,5,36,
		175,0,48,85,0,95,5,89,30,0,0,0,3,0,
		2,0,5,0,4,0,48,86,0,48,22,0,95,255,
		112,0,95,254,95,253,112,2,6,112,1,73,36,177,
		0,48,63,0,176,69,0,12,0,92,110,95,3,112,
		2,80,4,36,179,0,48,87,0,48,22,0,95,2,
		112,0,95,1,112,1,73,36,183,0,48,63,0,176,
		74,0,12,0,122,89,30,0,0,0,3,0,2,0,
		3,0,4,0,48,88,0,48,22,0,95,255,112,0,
		95,254,95,253,112,2,6,95,3,100,100,9,100,100,
		100,9,112,10,73,36,189,0,48,63,0,176,74,0,
		12,0,92,2,89,17,0,0,0,1,0,3,0,48,
		76,0,95,255,112,0,6,95,3,100,100,9,100,100,
		100,120,112,10,73,36,194,0,48,63,0,176,74,0,
		12,0,93,244,1,89,30,0,0,0,3,0,2,0,
		4,0,1,0,48,89,0,48,22,0,95,255,112,0,
		95,254,95,253,112,2,6,95,3,100,100,9,100,100,
		100,9,112,10,73,36,199,0,48,63,0,176,74,0,
		12,0,93,245,1,89,30,0,0,0,3,0,2,0,
		4,0,1,0,48,90,0,48,22,0,95,255,112,0,
		95,254,95,253,112,2,6,95,3,100,100,9,100,100,
		100,9,112,10,73,36,201,0,48,77,0,95,3,92,
		13,89,30,0,0,0,3,0,2,0,3,0,4,0,
		48,88,0,48,22,0,95,255,112,0,95,254,95,253,
		112,2,6,112,2,73,36,202,0,48,77,0,95,3,
		92,116,89,30,0,0,0,3,0,2,0,3,0,4,
		0,48,88,0,48,22,0,95,255,112,0,95,254,95,
		253,112,2,6,112,2,73,36,203,0,48,77,0,95,
		3,92,113,89,30,0,0,0,3,0,2,0,4,0,
		1,0,48,89,0,48,22,0,95,255,112,0,95,254,
		95,253,112,2,6,112,2,73,36,204,0,48,77,0,
		95,3,92,114,89,30,0,0,0,3,0,2,0,4,
		0,1,0,48,90,0,48,22,0,95,255,112,0,95,
		254,95,253,112,2,6,112,2,73,36,206,0,48,78,
		0,95,3,89,41,0,0,0,2,0,2,0,4,0,
		48,91,0,48,22,0,95,255,112,0,95,254,112,1,
		73,48,92,0,48,22,0,95,255,112,0,95,254,112,
		1,6,112,1,73,36,208,0,48,45,0,95,3,100,
		100,100,120,100,112,5,73,36,210,0,48,81,0,95,
		3,112,0,122,8,110,7
=======
		13,5,2,36,110,0,102,80,3,36,115,0,176,53,
		0,93,200,0,12,1,80,7,36,117,0,48,2,0,
		176,23,0,12,0,100,100,100,100,106,13,83,101,108,
		101,99,99,105,111,110,97,114,32,0,176,54,0,95,
		1,12,1,72,106,15,72,69,76,80,95,69,84,73,
		81,85,69,84,65,83,0,100,9,100,100,100,100,100,
		9,100,100,100,100,100,9,100,106,5,111,68,108,103,
		0,100,100,112,24,80,4,36,123,0,48,25,0,176,
		27,0,12,0,92,104,89,28,0,1,0,1,0,7,
		0,176,28,0,12,0,121,8,28,6,95,255,25,7,
		95,1,165,80,255,6,95,4,100,100,100,100,100,100,
		100,100,9,100,100,9,9,100,100,100,100,100,100,106,
		5,70,73,78,68,0,100,100,112,25,80,6,36,125,
		0,48,55,0,95,6,89,30,0,0,0,3,0,3,
		0,6,0,5,0,48,56,0,48,21,0,95,255,112,
		0,95,254,95,253,112,2,6,112,1,73,36,127,0,
		48,25,0,176,33,0,12,0,92,110,95,4,112,2,
		80,5,36,129,0,48,57,0,48,21,0,95,3,112,
		0,95,2,112,1,73,36,134,0,48,25,0,176,38,
		0,12,0,122,89,30,0,0,0,3,0,3,0,4,
		0,5,0,48,58,0,48,21,0,95,255,112,0,95,
		254,95,253,112,2,6,95,4,100,100,9,100,100,100,
		9,112,10,73,36,140,0,48,25,0,176,38,0,12,
		0,92,2,89,17,0,0,0,1,0,4,0,48,40,
		0,95,255,112,0,6,95,4,100,100,9,100,100,100,
		120,112,10,73,36,145,0,48,25,0,176,38,0,12,
		0,93,244,1,89,30,0,0,0,3,0,3,0,5,
		0,2,0,48,59,0,48,21,0,95,255,112,0,95,
		254,95,253,112,2,6,95,4,100,100,9,100,100,100,
		9,112,10,73,36,150,0,48,25,0,176,38,0,12,
		0,93,245,1,89,30,0,0,0,3,0,3,0,5,
		0,2,0,48,60,0,48,21,0,95,255,112,0,95,
		254,95,253,112,2,6,95,4,100,100,9,100,100,100,
		9,112,10,73,36,152,0,48,41,0,95,4,92,13,
		89,30,0,0,0,3,0,3,0,4,0,5,0,48,
		58,0,48,21,0,95,255,112,0,95,254,95,253,112,
		2,6,112,2,73,36,153,0,48,41,0,95,4,92,
		116,89,30,0,0,0,3,0,3,0,4,0,5,0,
		48,58,0,48,21,0,95,255,112,0,95,254,95,253,
		112,2,6,112,2,73,36,154,0,48,41,0,95,4,
		92,113,89,30,0,0,0,3,0,3,0,5,0,2,
		0,48,59,0,48,21,0,95,255,112,0,95,254,95,
		253,112,2,6,112,2,73,36,155,0,48,41,0,95,
		4,92,114,89,30,0,0,0,3,0,3,0,5,0,
		2,0,48,60,0,48,21,0,95,255,112,0,95,254,
		95,253,112,2,6,112,2,73,36,157,0,48,43,0,
		95,4,89,41,0,0,0,2,0,3,0,5,0,48,
		61,0,48,21,0,95,255,112,0,95,254,112,1,73,
		48,62,0,48,21,0,95,255,112,0,95,254,112,1,
		6,112,1,73,36,159,0,48,46,0,95,4,100,100,
		100,120,100,112,5,73,36,161,0,48,51,0,95,4,
		112,0,122,8,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		117,95,0,2,0,116,95,0,4,0,0,82,1,0,
=======
		117,65,0,2,0,116,65,0,4,0,0,82,1,0,
>>>>>>> SQLite
		7
	};

	hb_vmExecute( pcode, symbols );
}

