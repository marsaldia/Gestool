/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Grpcli.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TGRPCLI );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TMASDET );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_STATIC( TGRPCLI_NEW );
HB_FUNC_STATIC( TGRPCLI_CREATE );
HB_FUNC_STATIC( TGRPCLI_OPENFILES );
HB_FUNC_STATIC( TGRPCLI_CLOSEFILES );
HB_FUNC_STATIC( TGRPCLI_DEFINEFILES );
HB_FUNC_STATIC( TGRPCLI_RESOURCE );
HB_FUNC_STATIC( TGRPCLI_LSAVERESOURCE );
HB_FUNC_STATIC( TGRPCLI_STARTRESOURCE );
HB_FUNC_STATIC( TGRPCLI_ACHILD );
HB_FUNC_STATIC( TGRPCLI_ISPADREMAYOR );
HB_FUNC_STATIC( TGRPCLI_ISPADREMENOR );
HB_FUNC_STATIC( TGRPCLI_TREE );
HB_FUNC_STATIC( TGRPCLI_LOADTREE );
HB_FUNC_STATIC( TGRPCLI_CHANGETREESTATE );
HB_FUNC_STATIC( TGRPCLI_GETTREESTATE );
HB_FUNC_STATIC( TGRPCLI_SETTREESTATE );
HB_FUNC_STATIC( TGRPCLI_NOMBREGRUPO );
HB_FUNC_STATIC( TGRPCLI_EDTROTORMENU );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( CPATCLI );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( GETWNDFRAME );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( NLEVELUSR );
HB_FUNC_EXTERN( TATIPICAS );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( D );
HB_FUNC_EXTERN( TFRASESPUBLICITARIAS );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( TDETCAMPOSEXTRA );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( LBLTITLE );
HB_FUNC_EXTERN( TFOLDER );
HB_FUNC_EXTERN( TBITMAP );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( NOTVALID );
HB_FUNC_EXTERN( TTREEVIEW );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( MENUBEGIN );
HB_FUNC_EXTERN( MENUADDITEM );
HB_FUNC_EXTERN( MENUEND );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( CURSORWAIT );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( DBGOTO );
HB_FUNC_EXTERN( CURSORWE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SYSREFRESH );
HB_FUNC_EXTERN( LEN );
HB_FUNC( CGRUCLI );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GRPCLI )
{ "TGRPCLI", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TMASDET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMASDET )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGRPCLI_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_NEW )}, NULL },
{ "TGRPCLI_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_CREATE )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGRPCLI_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_OPENFILES )}, NULL },
{ "TGRPCLI_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_CLOSEFILES )}, NULL },
{ "OPENSERVICE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSESERVICE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGRPCLI_DEFINEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_DEFINEFILES )}, NULL },
{ "TGRPCLI_RESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_RESOURCE )}, NULL },
{ "TGRPCLI_LSAVERESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_LSAVERESOURCE )}, NULL },
{ "TGRPCLI_STARTRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_STARTRESOURCE )}, NULL },
{ "TGRPCLI_ACHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_ACHILD )}, NULL },
{ "TGRPCLI_ISPADREMAYOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_ISPADREMAYOR )}, NULL },
{ "TGRPCLI_ISPADREMENOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_ISPADREMENOR )}, NULL },
{ "TGRPCLI_TREE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_TREE )}, NULL },
{ "TGRPCLI_LOADTREE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_LOADTREE )}, NULL },
{ "TGRPCLI_CHANGETREESTATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_CHANGETREESTATE )}, NULL },
{ "TGRPCLI_GETTREESTATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_GETTREESTATE )}, NULL },
{ "TGRPCLI_SETTREESTATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_SETTREESTATE )}, NULL },
{ "TGRPCLI_NOMBREGRUPO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_NOMBREGRUPO )}, NULL },
{ "TGRPCLI_EDTROTORMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGRPCLI_EDTROTORMENU )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATCLI )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "GETWNDFRAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETWNDFRAME )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLEVELUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NLEVELUSR )}, NULL },
{ "CLOSEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDRIVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OWNDPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LCREATESHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHTMLHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BFIRSTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODGRP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDDETAIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWINSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TATIPICAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TATIPICAS )}, NULL },
{ "CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETINSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_NVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "D", {HB_FS_PUBLIC}, {HB_FUNCNAME( D )}, NULL },
{ "OPENFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OENVASES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TFRASESPUBLICITARIAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFRASESPUBLICITARIAS )}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "OENVASES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODETCAMPOSEXTRA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDETCAMPOSEXTRA", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDETCAMPOSEXTRA )}, NULL },
{ "ODETCAMPOSEXTRA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTIPODOCUMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDINSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DELETEVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTEMPORAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LBLTITLE )}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TFOLDER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFOLDER )}, NULL },
{ "TBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBITMAP )}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OGETCODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_CCODGRP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTVALID", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOTVALID )}, NULL },
{ "OGETCODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OGETNOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMGRP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMGRP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OTREEPADRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TTREEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TTREEVIEW )}, NULL },
{ "_BITEMSELECTCHANGED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTREEPADRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHANGETREESTATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUTTONAPPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUTTONEDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUTTONDEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "LSAVERESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PLAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDTROTORMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENUBEGIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUBEGIN )}, NULL },
{ "MENUADDITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUADDITEM )}, NULL },
{ "MENUEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUEND )}, NULL },
{ "SETMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODPDR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEKINORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGETNOMBRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETTREESTATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODPDR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "SAVEEXTRAFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOADTREE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTREESTATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CURSORWAIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURSORWAIT )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "DBGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTO )}, NULL },
{ "CURSORWE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURSORWE )}, NULL },
{ "ADD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "_CARGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXPAND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITEMS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SYSREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SYSREFRESH )}, NULL },
{ "SETCHECK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "GETCHECK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VARGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTTREE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGRUCLI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CGRUCLI )}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_GRPCLI, ".\\.\\Prg\\Grpcli.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_GRPCLI
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_GRPCLI )
   #include "hbiniseg.h"
#endif

HB_FUNC( TGRPCLI )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,165,0,36,7,0,103,2,0,100,8,
		29,223,4,176,1,0,104,2,0,12,1,29,212,4,
		166,150,4,0,122,80,1,48,2,0,176,3,0,12,
		0,106,8,84,71,114,112,67,108,105,0,108,4,4,
		1,0,108,0,112,3,80,2,36,9,0,48,5,0,
		95,2,100,106,15,71,114,117,112,111,115,67,108,105,
		101,110,116,101,115,0,95,1,121,72,121,72,121,72,
		106,6,99,78,97,109,101,0,4,1,0,9,112,5,
		73,36,11,0,48,5,0,95,2,100,106,13,103,99,
		95,117,115,101,114,115,51,95,49,54,0,95,1,121,
		72,121,72,121,72,106,5,99,77,114,117,0,4,1,
		0,9,112,5,73,36,13,0,48,5,0,95,2,100,
		176,6,0,92,4,12,1,95,1,121,72,121,72,121,
		72,106,14,99,80,97,114,101,110,116,83,101,108,101,
		99,116,0,4,1,0,9,112,5,73,36,15,0,48,
		5,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,11,111,71,101,116,67,111,100,105,103,111,0,4,
		1,0,9,112,5,73,36,16,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,11,111,71,
		101,116,78,111,109,98,114,101,0,4,1,0,9,112,
		5,73,36,18,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,11,111,84,114,101,101,80,
		97,100,114,101,0,4,1,0,9,112,5,73,36,20,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,9,111,69,110,118,97,115,101,115,0,4,
		1,0,9,112,5,73,36,21,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,16,111,68,
		101,116,67,97,109,112,111,115,69,120,116,114,97,0,
		4,1,0,9,112,5,73,36,23,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,6,111,
		77,101,110,117,0,4,1,0,9,112,5,73,36,25,
		0,48,7,0,95,2,106,4,78,101,119,0,108,8,
		95,1,92,8,72,121,72,121,72,112,3,73,36,26,
		0,48,7,0,95,2,106,7,67,114,101,97,116,101,
		0,108,9,95,1,92,8,72,121,72,121,72,112,3,
		73,36,28,0,48,10,0,95,2,106,5,86,105,101,
		119,0,89,15,0,1,0,0,0,48,11,0,95,1,
		112,0,6,95,1,121,72,121,72,121,72,112,3,73,
		36,30,0,48,7,0,95,2,106,10,79,112,101,110,
		70,105,108,101,115,0,108,12,95,1,121,72,121,72,
		121,72,112,3,73,36,31,0,48,7,0,95,2,106,
		11,67,108,111,115,101,70,105,108,101,115,0,108,13,
		95,1,121,72,121,72,121,72,112,3,73,36,33,0,
		48,10,0,95,2,106,12,79,112,101,110,83,101,114,
		118,105,99,101,0,89,20,0,3,0,0,0,48,14,
		0,48,15,0,95,1,112,0,112,0,6,95,1,121,
		72,121,72,121,72,112,3,73,36,34,0,48,10,0,
		95,2,106,13,67,108,111,115,101,83,101,114,118,105,
		99,101,0,89,20,0,1,0,0,0,48,16,0,48,
		15,0,95,1,112,0,112,0,6,95,1,121,72,121,
		72,121,72,112,3,73,36,36,0,48,7,0,95,2,
		106,12,68,101,102,105,110,101,70,105,108,101,115,0,
		108,17,95,1,121,72,121,72,121,72,112,3,73,36,
		38,0,48,7,0,95,2,106,9,82,101,115,111,117,
		114,99,101,0,108,18,95,1,121,72,121,72,121,72,
		112,3,73,36,39,0,48,7,0,95,2,106,14,108,
		83,97,118,101,82,101,115,111,117,114,99,101,0,108,
		19,95,1,121,72,121,72,121,72,112,3,73,36,40,
		0,48,7,0,95,2,106,14,83,116,97,114,116,82,
		101,115,111,117,114,99,101,0,108,20,95,1,121,72,
		121,72,121,72,112,3,73,36,42,0,48,7,0,95,
		2,106,7,97,67,104,105,108,100,0,108,21,95,1,
		121,72,121,72,121,72,112,3,73,36,43,0,48,7,
		0,95,2,106,13,73,115,80,97,100,114,101,77,97,
		121,111,114,0,108,22,95,1,121,72,121,72,121,72,
		112,3,73,36,44,0,48,7,0,95,2,106,13,73,
		115,80,97,100,114,101,77,101,110,111,114,0,108,23,
		95,1,121,72,121,72,121,72,112,3,73,36,46,0,
		48,7,0,95,2,106,5,84,114,101,101,0,108,24,
		95,1,121,72,121,72,121,72,112,3,73,36,48,0,
		48,7,0,95,2,106,9,76,111,97,100,84,114,101,
		101,0,108,25,95,1,121,72,121,72,121,72,112,3,
		73,36,49,0,48,7,0,95,2,106,16,67,104,97,
		110,103,101,84,114,101,101,83,116,97,116,101,0,108,
		26,95,1,121,72,121,72,121,72,112,3,73,36,50,
		0,48,7,0,95,2,106,13,71,101,116,84,114,101,
		101,83,116,97,116,101,0,108,27,95,1,121,72,121,
		72,121,72,112,3,73,36,51,0,48,7,0,95,2,
		106,13,83,101,116,84,114,101,101,83,116,97,116,101,
		0,108,28,95,1,121,72,121,72,121,72,112,3,73,
		36,53,0,48,7,0,95,2,106,12,110,111,109,98,
		114,101,71,114,117,112,111,0,108,29,95,1,121,72,
		121,72,121,72,112,3,73,36,55,0,48,7,0,95,
		2,106,13,69,100,116,82,111,116,111,114,77,101,110,
		117,0,108,30,95,1,121,72,121,72,121,72,112,3,
		73,36,57,0,48,31,0,95,2,112,0,73,167,14,
		0,0,176,32,0,104,2,0,95,2,20,2,168,48,
		33,0,95,2,112,0,80,3,176,34,0,95,3,106,
		10,73,110,105,116,67,108,97,115,115,0,12,2,28,
		12,48,35,0,95,3,164,146,1,0,73,95,3,110,
		7,48,33,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,36,61,0,102,80,5,36,63,0,95,1,
		100,8,28,9,176,36,0,12,0,80,1,36,64,0,
		95,2,100,8,28,9,176,37,0,12,0,80,2,36,
		65,0,95,3,100,8,28,9,176,38,0,12,0,80,
		3,36,66,0,95,4,100,8,28,12,106,6,48,49,
		48,51,48,0,80,4,36,68,0,176,39,0,48,40,
		0,95,5,112,0,12,1,28,20,36,69,0,48,41,
		0,95,5,176,42,0,95,4,12,1,112,1,73,36,
		76,0,95,3,100,69,28,13,36,77,0,48,43,0,
		95,3,112,0,73,36,80,0,48,44,0,95,5,95,
		1,112,1,73,36,81,0,48,45,0,95,5,95,2,
		112,1,73,36,82,0,48,46,0,95,5,95,3,112,
		1,73,36,83,0,48,47,0,95,5,100,112,1,73,
		36,85,0,48,48,0,95,5,9,112,1,73,36,86,
		0,48,49,0,95,5,106,19,71,114,117,112,111,115,
		32,100,101,32,99,108,105,101,110,116,101,115,0,112,
		1,73,36,88,0,48,50,0,95,5,89,22,0,0,
		0,1,0,5,0,48,51,0,48,52,0,95,255,112,
		0,112,0,6,112,1,73,36,90,0,48,53,0,95,
		5,48,54,0,176,55,0,12,0,48,56,0,95,5,
		112,0,100,95,5,112,3,112,1,73,36,92,0,95,
		5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,96,0,102,80,3,36,98,0,95,1,
		100,8,28,9,176,36,0,12,0,80,1,36,99,0,
		95,2,100,8,28,9,176,37,0,12,0,80,2,36,
		101,0,48,44,0,95,3,95,1,112,1,73,36,102,
		0,48,45,0,95,3,95,2,112,1,73,36,103,0,
		48,47,0,95,3,100,112,1,73,36,105,0,48,50,
		0,95,3,89,22,0,0,0,1,0,3,0,48,51,
		0,48,52,0,95,255,112,0,112,0,6,112,1,73,
		36,107,0,48,53,0,95,3,48,57,0,176,55,0,
		12,0,48,56,0,95,3,112,0,100,95,3,112,3,
		112,1,73,36,109,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,115,0,120,80,3,36,119,0,95,1,
		100,8,28,5,9,80,1,36,121,0,176,58,0,89,
		15,0,1,0,0,0,176,59,0,95,1,12,1,6,
		12,1,80,5,36,122,0,113,101,1,0,36,124,0,
		48,60,0,102,48,61,0,176,62,0,12,0,112,0,
		112,1,73,36,126,0,48,63,0,48,15,0,102,112,
		0,112,0,31,8,36,127,0,9,80,3,36,130,0,
		48,63,0,48,57,0,176,55,0,12,0,112,0,112,
		0,31,10,36,131,0,9,80,3,25,36,36,133,0,
		48,64,0,48,52,0,48,57,0,176,55,0,12,0,
		112,0,112,0,106,8,99,67,111,100,71,114,112,0,
		112,1,73,36,136,0,48,65,0,176,62,0,12,0,
		106,9,65,114,116,105,99,117,108,111,0,48,11,0,
		102,112,0,112,2,73,36,138,0,48,65,0,176,62,
		0,12,0,106,9,70,97,109,105,108,105,97,115,0,
		48,11,0,102,112,0,112,2,73,36,140,0,48,65,
		0,176,62,0,12,0,106,7,65,114,116,107,105,116,
		0,48,11,0,102,112,0,112,2,73,36,142,0,48,
		65,0,176,62,0,12,0,106,7,65,114,116,100,105,
		118,0,48,11,0,102,112,0,112,2,73,36,144,0,
		48,66,0,102,48,31,0,176,67,0,12,0,176,68,
		0,12,0,112,1,112,1,73,36,145,0,48,63,0,
		48,69,0,102,112,0,112,0,31,8,36,146,0,9,
		80,3,36,149,0,48,70,0,102,48,2,0,176,71,
		0,12,0,112,0,112,1,73,36,150,0,48,63,0,
		48,72,0,102,112,0,112,0,31,8,36,151,0,9,
		80,3,36,154,0,48,73,0,48,72,0,102,112,0,
		106,19,71,114,117,112,111,115,32,100,101,32,99,108,
		105,101,110,116,101,115,0,112,1,73,114,80,0,0,
		36,157,0,115,80,4,36,159,0,176,74,0,176,75,
		0,95,4,12,1,106,47,73,109,112,111,115,105,98,
		108,101,32,97,98,114,105,114,32,102,105,99,104,101,
		114,111,115,32,100,101,32,103,114,117,112,111,115,32,
		100,101,32,99,108,105,101,110,116,101,115,0,20,2,
		36,161,0,9,80,3,36,165,0,176,58,0,95,5,
		20,1,36,167,0,95,3,31,12,36,168,0,48,76,
		0,102,112,0,73,36,171,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,177,0,48,76,0,48,15,0,102,112,0,112,0,
		73,36,179,0,48,76,0,48,57,0,176,55,0,12,
		0,112,0,112,0,73,36,180,0,48,77,0,176,55,
		0,12,0,112,0,73,36,182,0,176,39,0,48,69,
		0,102,112,0,12,1,31,28,36,183,0,48,78,0,
		48,69,0,102,112,0,112,0,73,36,184,0,48,66,
		0,102,100,112,1,73,36,187,0,176,39,0,48,11,
		0,102,112,0,12,1,31,33,36,189,0,48,79,0,
		176,62,0,12,0,48,11,0,102,112,0,112,1,73,
		36,190,0,48,60,0,102,100,112,1,73,36,194,0,
		120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_DEFINEFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,212,0,95,1,100,8,28,10,48,56,
		0,102,112,0,80,1,36,213,0,95,2,100,8,28,
		9,176,37,0,12,0,80,2,36,215,0,48,2,0,
		176,80,0,106,11,71,82,80,67,76,73,46,68,66,
		70,0,106,7,71,82,80,67,76,73,0,12,2,106,
		11,71,82,80,67,76,73,46,68,66,70,0,106,7,
		71,82,80,67,76,73,0,95,2,106,19,71,114,117,
		112,111,115,32,100,101,32,99,108,105,101,110,116,101,
		115,0,95,1,112,5,80,3,36,217,0,48,81,0,
		95,3,106,8,67,67,79,68,71,82,80,0,106,2,
		67,0,92,4,121,100,100,100,100,106,7,67,243,100,
		105,103,111,0,9,92,80,9,4,0,0,112,13,73,
		36,218,0,48,81,0,95,3,106,8,67,78,79,77,
		71,82,80,0,106,2,67,0,93,200,0,121,100,100,
		100,100,106,7,78,111,109,98,114,101,0,9,93,200,
		0,9,4,0,0,112,13,73,36,219,0,48,81,0,
		95,3,106,8,67,67,79,68,80,68,82,0,106,2,
		67,0,92,4,121,100,100,100,100,106,12,71,114,117,
		112,111,32,112,97,100,114,101,0,9,92,80,9,4,
		0,0,112,13,73,36,221,0,48,82,0,95,3,106,
		8,67,67,79,68,71,82,80,0,106,11,71,82,80,
		67,76,73,46,67,68,88,0,106,8,67,67,79,68,
		71,82,80,0,100,100,9,9,106,7,67,243,100,105,
		103,111,0,100,100,120,9,112,12,73,36,222,0,48,
		82,0,95,3,106,8,67,78,79,77,71,82,80,0,
		106,11,71,82,80,67,76,73,46,67,68,88,0,106,
		8,67,78,79,77,71,82,80,0,100,100,9,9,106,
		7,78,111,109,98,114,101,0,100,100,120,9,112,12,
		73,36,223,0,48,82,0,95,3,106,8,67,67,79,
		68,80,68,82,0,106,11,71,82,80,67,76,73,46,
		67,68,88,0,106,8,67,67,79,68,80,68,82,0,
		100,100,9,9,106,12,71,114,117,112,111,32,112,97,
		100,114,101,0,100,100,120,9,112,12,73,36,227,0,
		95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_RESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,5,1,36,231,0,102,80,2,36,238,0,48,83,
		0,48,72,0,95,2,112,0,48,51,0,48,52,0,
		95,2,112,0,112,0,106,1,0,95,1,112,3,73,
		36,242,0,48,2,0,176,84,0,12,0,100,100,100,
		100,176,85,0,95,1,12,1,106,19,71,114,117,112,
		111,115,32,100,101,32,99,108,105,101,110,116,101,115,
		0,72,106,7,71,82,80,67,76,73,0,100,9,100,
		100,100,100,100,9,100,100,100,100,100,9,100,106,5,
		111,68,108,103,0,100,100,112,24,80,3,36,250,0,
		48,86,0,176,87,0,12,0,93,244,1,106,9,38,
		71,101,110,101,114,97,108,0,47,106,9,38,84,97,
		114,105,102,97,115,0,47,4,2,0,106,10,71,82,
		80,67,76,73,95,48,49,0,106,10,71,82,80,67,
		76,73,95,48,50,0,4,2,0,95,3,100,100,100,
		100,9,100,112,10,80,4,36,0,1,48,86,0,176,
		88,0,12,0,93,88,2,106,13,103,99,95,117,115,
		101,114,115,51,95,52,56,0,100,48,89,0,95,4,
		112,0,122,1,100,100,9,9,100,100,9,100,100,120,
		112,14,80,5,36,8,1,48,90,0,95,2,48,86,
		0,176,91,0,12,0,92,100,89,47,0,1,0,1,
		0,2,0,176,92,0,12,0,121,8,28,16,48,51,
		0,48,52,0,95,255,112,0,112,0,25,16,48,93,
		0,48,52,0,95,255,112,0,95,1,112,1,6,48,
		89,0,95,4,112,0,122,1,100,106,3,64,33,0,
		89,39,0,0,0,1,0,2,0,176,94,0,48,95,
		0,95,255,112,0,48,96,0,48,52,0,95,255,112,
		0,112,0,120,106,2,48,0,12,4,6,100,100,100,
		100,100,9,89,23,0,0,0,1,0,1,0,95,255,
		122,8,21,31,8,73,95,255,92,4,8,6,100,9,
		9,100,100,100,100,100,100,100,100,100,112,25,112,1,
		73,36,14,1,48,97,0,95,2,48,86,0,176,91,
		0,12,0,92,110,89,47,0,1,0,1,0,2,0,
		176,92,0,12,0,121,8,28,16,48,98,0,48,52,
		0,95,255,112,0,112,0,25,16,48,99,0,48,52,
		0,95,255,112,0,95,1,112,1,6,48,89,0,95,
		4,112,0,122,1,100,100,100,100,100,100,100,100,9,
		89,15,0,0,0,1,0,1,0,95,255,92,3,69,
		6,100,9,9,100,100,100,100,100,100,100,100,100,112,
		25,112,1,73,36,16,1,48,100,0,95,2,48,86,
		0,176,101,0,12,0,93,130,0,48,89,0,95,4,
		112,0,122,1,112,2,112,1,73,36,17,1,48,102,
		0,48,103,0,95,2,112,0,89,17,0,0,0,1,
		0,2,0,48,104,0,95,255,112,0,6,112,1,73,
		36,27,1,48,86,0,176,88,0,12,0,93,88,2,
		106,18,103,99,95,115,121,109,98,111,108,95,101,117,
		114,111,95,52,56,0,100,48,89,0,95,4,112,0,
		92,2,1,100,100,9,9,100,100,9,100,100,120,112,
		14,80,6,36,29,1,48,105,0,48,57,0,176,55,
		0,12,0,112,0,92,110,48,89,0,95,4,112,0,
		92,2,1,112,2,73,36,31,1,48,106,0,48,57,
		0,176,55,0,12,0,112,0,92,120,48,89,0,95,
		4,112,0,92,2,1,112,2,73,36,33,1,48,107,
		0,48,57,0,176,55,0,12,0,112,0,93,130,0,
		48,89,0,95,4,112,0,92,2,1,112,2,73,36,
		35,1,48,108,0,48,57,0,176,55,0,12,0,112,
		0,92,100,48,89,0,95,4,112,0,92,2,1,112,
		2,73,36,45,1,48,86,0,176,109,0,12,0,122,
		89,25,0,0,0,3,0,2,0,1,0,3,0,48,
		110,0,95,255,95,254,95,253,112,2,6,95,3,100,
		100,9,89,15,0,0,0,1,0,1,0,95,255,92,
		3,69,6,100,100,9,112,10,73,36,51,1,48,86,
		0,176,109,0,12,0,92,2,89,17,0,0,0,1,
		0,3,0,48,78,0,95,255,112,0,6,95,3,100,
		100,9,100,100,100,120,112,10,73,36,53,1,48,111,
		0,95,3,92,116,89,25,0,0,0,3,0,2,0,
		1,0,3,0,48,110,0,95,255,95,254,95,253,112,
		2,6,112,2,73,36,54,1,48,111,0,95,3,92,
		120,89,28,0,0,0,1,0,2,0,48,112,0,48,
		72,0,95,255,112,0,176,6,0,122,12,1,112,1,
		6,112,2,73,36,56,1,48,113,0,95,3,89,29,
		0,0,0,2,0,2,0,3,0,48,114,0,95,255,
		112,0,73,48,115,0,95,255,95,254,112,1,6,112,
		1,73,36,58,1,48,116,0,95,3,48,117,0,95,
		3,112,0,48,118,0,95,3,112,0,48,119,0,95,
		3,112,0,120,100,100,100,48,120,0,95,3,112,0,
		100,100,100,112,11,73,36,60,1,176,39,0,48,121,
		0,95,2,112,0,12,1,31,18,36,61,1,48,78,
		0,48,121,0,95,2,112,0,112,0,73,36,64,1,
		176,39,0,95,6,12,1,31,13,36,65,1,48,78,
		0,95,6,112,0,73,36,68,1,176,39,0,95,5,
		12,1,31,13,36,69,1,48,78,0,95,5,112,0,
		73,36,72,1,48,122,0,95,3,112,0,122,8,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_EDTROTORMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,76,1,102,80,2,36,78,1,48,123,
		0,95,2,176,124,0,9,100,100,9,9,100,100,100,
		100,100,100,100,100,100,9,100,9,9,9,9,100,100,
		100,100,100,100,100,9,100,9,9,100,100,100,100,100,
		100,12,37,112,1,73,36,80,1,176,125,0,106,10,
		38,49,46,32,82,111,116,111,114,0,100,9,100,100,
		100,100,100,100,100,100,9,100,100,9,100,9,9,100,
		100,100,100,100,100,100,100,100,9,9,100,100,100,100,
		100,100,100,100,9,9,9,100,100,20,42,36,82,1,
		176,124,0,9,100,100,9,9,100,100,100,100,100,100,
		100,100,100,9,100,9,9,9,9,100,100,100,100,100,
		100,100,9,100,9,9,100,100,100,100,100,100,20,37,
		36,87,1,176,125,0,106,22,38,49,46,32,67,97,
		109,112,111,115,32,101,120,116,114,97,32,91,70,57,
		93,0,106,62,77,111,115,116,114,97,109,111,115,32,
		121,32,114,101,108,108,101,110,97,109,111,115,32,108,
		111,115,32,99,97,109,112,111,115,32,101,120,116,114,
		97,32,112,97,114,97,32,101,108,32,103,114,117,112,
		111,32,99,108,105,101,110,116,101,0,9,100,89,28,
		0,1,0,1,0,2,0,48,112,0,48,72,0,95,
		255,112,0,176,6,0,122,12,1,112,1,6,100,106,
		17,103,99,95,102,111,114,109,95,112,108,117,115,50,
		95,49,54,0,100,100,100,100,9,100,100,9,100,9,
		9,100,100,100,100,100,100,100,100,100,9,9,100,100,
		100,100,100,100,100,100,9,9,9,100,100,20,42,36,
		89,1,176,126,0,20,0,36,91,1,176,126,0,20,
		0,36,93,1,48,127,0,95,1,48,121,0,95,2,
		112,0,112,1,73,36,95,1,48,121,0,95,2,112,
		0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_LSAVERESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,103,1,48,128,0,48,52,0,102,112,
		0,176,6,0,92,4,12,1,112,1,73,36,105,1,
		95,1,122,8,31,10,95,1,92,4,8,29,189,0,
		36,107,1,176,39,0,48,51,0,48,52,0,102,112,
		0,112,0,12,1,28,82,36,108,1,176,74,0,106,
		49,67,243,100,105,103,111,32,100,101,32,103,114,117,
		112,111,32,100,101,32,99,108,105,101,110,116,101,115,
		32,110,111,32,112,117,101,100,101,32,101,115,116,97,
		114,32,118,97,99,237,111,0,20,1,36,109,1,48,
		129,0,48,95,0,102,112,0,112,0,73,36,110,1,
		100,110,7,36,113,1,48,130,0,48,52,0,102,112,
		0,48,51,0,48,52,0,102,112,0,112,0,106,8,
		99,67,111,100,71,114,112,0,112,2,28,50,36,114,
		1,176,74,0,106,17,67,243,100,105,103,111,32,101,
		120,105,115,116,101,110,116,101,0,20,1,36,115,1,
		48,129,0,48,95,0,102,112,0,112,0,73,36,116,
		1,100,110,7,36,121,1,176,39,0,48,98,0,48,
		52,0,102,112,0,112,0,12,1,28,82,36,122,1,
		176,74,0,106,49,78,111,109,98,114,101,32,100,101,
		32,103,114,117,112,111,32,100,101,32,99,108,105,101,
		110,116,101,115,32,110,111,32,112,117,101,100,101,32,
		101,115,116,97,114,32,118,97,99,237,111,0,20,1,
		36,123,1,48,129,0,48,131,0,102,112,0,112,0,
		73,36,124,1,100,110,7,36,127,1,48,132,0,102,
		48,103,0,102,112,0,112,1,73,36,129,1,48,51,
		0,48,52,0,102,112,0,112,0,48,133,0,48,52,
		0,102,112,0,112,0,8,28,67,36,130,1,176,74,
		0,106,34,71,114,117,112,111,32,112,97,100,114,101,
		32,110,111,32,112,117,101,100,101,32,115,101,114,32,
		101,108,32,109,105,115,109,111,0,20,1,36,131,1,
		48,129,0,48,103,0,102,112,0,112,0,73,36,132,
		1,100,110,7,36,135,1,48,134,0,102,48,51,0,
		48,52,0,102,112,0,112,0,112,1,80,3,36,136,
		1,176,135,0,95,3,48,133,0,48,52,0,102,112,
		0,112,0,12,2,121,69,28,74,36,137,1,176,74,
		0,106,41,71,114,117,112,111,32,112,97,100,114,101,
		32,99,111,110,116,105,101,110,101,32,114,101,102,101,
		114,101,110,99,105,97,32,99,105,114,99,117,108,97,
		114,0,20,1,36,138,1,48,129,0,48,103,0,102,
		112,0,112,0,73,36,139,1,100,110,7,36,142,1,
		48,136,0,48,72,0,102,112,0,48,51,0,48,52,
		0,102,112,0,112,0,106,1,0,112,2,73,36,144,
		1,48,78,0,95,2,122,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_STARTRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		36,150,1,48,137,0,102,112,0,73,36,152,1,48,
		138,0,102,112,0,73,36,154,1,48,129,0,48,95,
		0,102,112,0,112,0,73,36,156,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_ACHILD )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,165,1,176,39,0,95,2,12,1,28,
		10,36,166,1,4,0,0,80,2,36,169,1,176,139,
		0,20,0,36,171,1,85,48,96,0,48,52,0,102,
		112,0,112,0,74,176,140,0,12,0,119,80,3,36,
		172,1,85,48,96,0,48,52,0,102,112,0,112,0,
		74,176,141,0,106,8,99,67,111,100,80,100,114,0,
		12,1,119,80,4,36,174,1,85,48,96,0,48,52,
		0,102,112,0,112,0,74,176,142,0,95,1,12,1,
		119,28,119,36,176,1,48,96,0,48,52,0,102,112,
		0,112,0,88,133,0,95,1,8,28,97,85,48,96,
		0,48,52,0,102,112,0,112,0,74,176,143,0,12,
		0,119,31,76,36,178,1,176,144,0,95,2,48,96,
		0,48,52,0,102,112,0,112,0,88,51,0,20,2,
		36,180,1,48,134,0,102,48,96,0,48,52,0,102,
		112,0,112,0,88,51,0,95,2,112,2,73,36,182,
		1,85,48,96,0,48,52,0,102,112,0,112,0,74,
		176,145,0,20,0,74,25,141,36,188,1,85,48,96,
		0,48,52,0,102,112,0,112,0,74,176,141,0,95,
		4,20,1,74,36,189,1,85,48,96,0,48,52,0,
		102,112,0,112,0,74,176,146,0,95,3,20,1,74,
		36,191,1,176,147,0,20,0,36,193,1,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_ISPADREMAYOR )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,202,1,95,1,95,2,16,28,8,36,
		203,1,120,110,7,36,206,1,176,39,0,95,1,12,
		1,31,51,36,208,1,48,134,0,102,95,1,112,1,
		80,4,36,210,1,95,4,96,3,0,129,1,1,28,
		24,36,211,1,95,3,95,2,16,28,8,36,212,1,
		120,110,7,36,214,1,130,31,236,132,36,218,1,9,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_ISPADREMENOR )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,227,1,95,1,95,2,34,28,8,36,
		228,1,120,110,7,36,231,1,176,39,0,95,1,12,
		1,31,51,36,233,1,48,134,0,102,95,1,112,1,
		80,4,36,235,1,95,4,96,3,0,129,1,1,28,
		24,36,236,1,95,3,95,2,34,28,8,36,237,1,
		120,110,7,36,239,1,130,31,236,132,36,243,1,9,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_LOADTREE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,253,1,95,1,100,8,28,10,48,103,
		0,102,112,0,80,1,36,255,1,176,39,0,95,2,
		12,1,28,14,36,0,2,176,6,0,92,4,12,1,
		80,2,36,3,2,176,139,0,20,0,36,5,2,85,
		48,96,0,48,52,0,102,112,0,112,0,74,176,140,
		0,12,0,119,80,3,36,6,2,85,48,96,0,48,
		52,0,102,112,0,112,0,74,176,141,0,106,8,99,
		67,111,100,80,100,114,0,12,1,119,80,4,36,8,
		2,85,48,96,0,48,52,0,102,112,0,112,0,74,
		176,142,0,95,2,12,1,119,29,154,0,36,10,2,
		48,96,0,48,52,0,102,112,0,112,0,88,133,0,
		95,2,8,29,131,0,85,48,96,0,48,52,0,102,
		112,0,112,0,74,176,143,0,12,0,119,31,109,36,
		12,2,48,148,0,95,1,176,149,0,48,96,0,48,
		52,0,102,112,0,112,0,88,98,0,12,1,112,1,
		80,5,36,13,2,48,150,0,95,5,48,96,0,48,
		52,0,102,112,0,112,0,88,51,0,112,1,73,36,
		15,2,48,137,0,102,95,5,48,96,0,48,52,0,
		102,112,0,112,0,88,51,0,112,2,73,36,17,2,
		85,48,96,0,48,52,0,102,112,0,112,0,74,176,
		145,0,20,0,74,26,108,255,36,23,2,85,48,96,
		0,48,52,0,102,112,0,112,0,74,176,141,0,95,
		4,20,1,74,36,24,2,85,48,96,0,48,52,0,
		102,112,0,112,0,74,176,146,0,95,3,20,1,74,
		36,26,2,176,147,0,20,0,36,28,2,48,151,0,
		95,1,112,0,73,36,30,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_CHANGETREESTATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,38,2,95,1,100,8,28,10,48,103,
		0,102,112,0,80,1,36,40,2,176,39,0,95,2,
		12,1,28,14,36,41,2,48,152,0,95,1,112,0,
		80,2,36,44,2,95,2,96,3,0,129,1,1,28,
		68,36,46,2,176,153,0,20,0,36,50,2,48,154,
		0,95,1,95,3,9,112,2,73,36,52,2,176,155,
		0,48,152,0,95,3,112,0,12,1,121,15,28,21,
		36,53,2,48,104,0,102,95,1,48,152,0,95,3,
		112,0,112,2,73,36,56,2,130,31,192,132,36,58,
		2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_GETTREESTATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,66,2,95,1,100,8,28,10,48,103,
		0,102,112,0,80,1,36,68,2,176,39,0,95,2,
		12,1,28,14,36,69,2,48,152,0,95,1,112,0,
		80,2,36,72,2,95,2,96,3,0,129,1,1,28,
		82,36,75,2,48,156,0,95,1,95,3,112,1,28,
		24,36,76,2,48,128,0,48,52,0,102,112,0,48,
		157,0,95,3,112,0,112,1,73,36,79,2,176,155,
		0,48,152,0,95,3,112,0,12,1,121,15,28,21,
		36,80,2,48,132,0,102,95,1,48,152,0,95,3,
		112,0,112,2,73,36,83,2,130,31,178,132,36,85,
		2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_SETTREESTATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,93,2,95,1,100,8,28,10,48,103,
		0,102,112,0,80,1,36,95,2,176,39,0,95,2,
		12,1,28,14,36,96,2,48,152,0,95,1,112,0,
		80,2,36,99,2,95,2,96,3,0,129,1,1,28,
		97,36,101,2,48,133,0,48,52,0,102,112,0,112,
		0,48,157,0,95,3,112,0,8,28,29,36,105,2,
		48,158,0,95,1,95,3,112,1,73,36,109,2,48,
		154,0,95,1,95,3,120,112,2,73,36,113,2,176,
		155,0,48,152,0,95,3,112,0,12,1,121,15,28,
		21,36,114,2,48,138,0,102,95,1,48,152,0,95,
		3,112,0,112,2,73,36,117,2,130,31,163,132,36,
		119,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_TREE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,123,2,102,80,2,36,129,2,48,159,
		0,95,1,112,0,80,4,36,135,2,48,2,0,176,
		84,0,12,0,100,100,100,100,106,9,99,68,108,103,
		78,97,109,101,0,106,18,84,114,101,101,71,114,117,
		112,111,115,67,108,105,101,110,116,101,0,112,6,80,
		3,36,137,2,48,86,0,176,101,0,12,0,92,100,
		95,3,112,2,80,5,36,139,2,48,86,0,176,109,
		0,12,0,122,89,18,0,0,0,1,0,3,0,48,
		78,0,95,255,122,112,1,6,95,3,100,100,9,112,
		6,73,36,141,2,48,86,0,176,109,0,12,0,92,
		2,89,17,0,0,0,1,0,3,0,48,78,0,95,
		255,112,0,6,95,3,100,100,9,112,6,73,36,143,
		2,48,113,0,95,3,89,22,0,0,0,2,0,2,
		0,5,0,48,160,0,95,255,100,95,254,112,2,6,
		112,1,73,36,145,2,48,111,0,95,3,92,116,89,
		18,0,0,0,1,0,3,0,48,78,0,95,255,122,
		112,1,6,112,2,73,36,147,2,48,116,0,95,3,
		100,100,100,120,112,4,73,36,153,2,48,122,0,95,
		3,112,0,122,8,28,18,36,154,2,176,74,0,106,
		6,118,97,108,111,114,0,20,1,36,157,2,95,4,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGRPCLI_NOMBREGRUPO )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,163,2,106,1,0,80,2,36,165,2,
		48,130,0,48,52,0,102,112,0,95,1,106,8,99,
		67,111,100,71,114,112,0,112,2,28,18,36,166,2,
		48,98,0,48,52,0,102,112,0,112,0,80,2,36,
		169,2,176,149,0,95,2,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CGRUCLI )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,175,2,106,1,0,80,3,36,177,2,
		48,162,0,95,2,95,1,112,1,28,14,36,178,2,
		48,51,0,95,2,112,0,80,3,36,181,2,95,3,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,165,0,2,0,116,165,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

