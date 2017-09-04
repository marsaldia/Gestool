/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Ruta.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_STATIC( EDTREC );
HB_FUNC_STATIC( OPENFILES );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATCLI );
HB_FUNC_EXTERN( CCHECKAREA );
HB_FUNC_EXTERN( LAIS );
HB_FUNC_EXTERN( ORDLISTADD );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_STATIC( CLOSEFILES );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC( RUTA );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( NLEVELUSR );
HB_FUNC_EXTERN( NAND );
HB_FUNC_EXTERN( SYSREFRESH );
HB_FUNC_EXTERN( ADDMNUNEXT );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( TSHELL );
HB_FUNC_EXTERN( WINAPPREC );
HB_FUNC_EXTERN( WINEDTREC );
HB_FUNC_EXTERN( DBDELREC );
HB_FUNC_EXTERN( WINDUPREC );
HB_FUNC_EXTERN( WINZOOREC );
HB_FUNC_EXTERN( INFRUT );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( LBLTITLE );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( NOTVALID );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_STATIC( LPRESAVE );
HB_FUNC_EXTERN( CHMHELP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSEEKINORD );
HB_FUNC_EXTERN( WINGATHER );
HB_FUNC( RETRUTA );
HB_FUNC_EXTERN( ALIAS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC( PDARUTASENDERRECIVER );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( PDARUTASENDERRECIVER_CREATEDATA );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( CPATPC );
HB_FUNC_EXTERN( ORDKEYCOUNT );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBPASS );
HB_FUNC_EXTERN( DBLOCK );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( ORDKEYNO );
HB_FUNC( ISRUTA );
HB_FUNC_EXTERN( LEXISTTABLE );
HB_FUNC( MKRUTA );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC_EXTERN( ASQLSTRUCT );
HB_FUNC( AITMRUT );
HB_FUNC_EXTERN( LISDIR );
HB_FUNC_EXTERN( __DBAPP );
HB_FUNC( RXRUTA );
HB_FUNC_EXTERN( FERASEINDEX );
HB_FUNC_EXTERN( NETERR );
HB_FUNC_EXTERN( __DBPACK );
HB_FUNC_EXTERN( ORDCONDSET );
HB_FUNC_EXTERN( DELETED );
HB_FUNC_EXTERN( ORDCREATE );
HB_FUNC_EXTERN( PADL );
HB_FUNC( BRWRUTA );
HB_FUNC_EXTERN( GETBRWOPT );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ORDCLEARSCOPE );
HB_FUNC_EXTERN( AUTOSEEK );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( IXBROWSE );
HB_FUNC_EXTERN( APPPARAMSMAIN );
HB_FUNC_EXTERN( TSAY );
HB_FUNC_EXTERN( ISREPORT );
HB_FUNC_EXTERN( ISOBJECT );
HB_FUNC_EXTERN( DESTROYFASTFILTER );
HB_FUNC_EXTERN( SETBRWOPT );
HB_FUNC_EXTERN( ORDNUMBER );
HB_FUNC( CRUTA );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_RUTA )
{ "EDTREC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EDTREC )}, NULL },
{ "OPENFILES", {HB_FS_STATIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OPENFILES )}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATCLI )}, NULL },
{ "CCHECKAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCHECKAREA )}, NULL },
{ "LAIS", {HB_FS_PUBLIC}, {HB_FUNCNAME( LAIS )}, NULL },
{ "ORDLISTADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDLISTADD )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLOSEFILES )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "RUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RUTA )}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "NLEVELUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NLEVELUSR )}, NULL },
{ "NAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( NAND )}, NULL },
{ "SYSREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SYSREFRESH )}, NULL },
{ "CLOSEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMNUNEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADDMNUNEXT )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSHELL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSHELL )}, NULL },
{ "WINAPPREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINAPPREC )}, NULL },
{ "OBRW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WINEDTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINEDTREC )}, NULL },
{ "DBDELREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELREC )}, NULL },
{ "WINDUPREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINDUPREC )}, NULL },
{ "ADDXCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSORTORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BEDITVALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODRUT", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BLCLICKHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLICKONHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDESRUT", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CREATEXFROMCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEARCHSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDSEABAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECADD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECDUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECEDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WINZOOREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINZOOREC )}, NULL },
{ "RECDEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PLAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INFRUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INFRUT )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRESIZED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BKEYDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BINIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLBUTTONUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LBLTITLE )}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "NOTVALID", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOTVALID )}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "LPRESAVE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( LPRESAVE )}, NULL },
{ "CHMHELP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHMHELP )}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DBSEEKINORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEKINORD )}, NULL },
{ "WINGATHER", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINGATHER )}, NULL },
{ "RETRUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RETRUTA )}, NULL },
{ "ALIAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALIAS )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "PDARUTASENDERRECIVER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PDARUTASENDERRECIVER )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PDARUTASENDERRECIVER_CREATEDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PDARUTASENDERRECIVER_CREATEDATA )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATPC", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATPC )}, NULL },
{ "SETRANGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDKEYCOUNT )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DBPASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBPASS )}, NULL },
{ "DBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBLOCK )}, NULL },
{ "LSELRUT", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "SETTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDKEYNO )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISRUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISRUTA )}, NULL },
{ "LEXISTTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEXISTTABLE )}, NULL },
{ "MKRUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MKRUTA )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "_CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCREATE )}, NULL },
{ "ASQLSTRUCT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASQLSTRUCT )}, NULL },
{ "AITMRUT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( AITMRUT )}, NULL },
{ "LISDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISDIR )}, NULL },
{ "__DBAPP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBAPP )}, NULL },
{ "RXRUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RXRUTA )}, NULL },
{ "FERASEINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASEINDEX )}, NULL },
{ "NETERR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETERR )}, NULL },
{ "__DBPACK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBPACK )}, NULL },
{ "ORDCONDSET", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCONDSET )}, NULL },
{ "DELETED", {HB_FS_PUBLIC}, {HB_FUNCNAME( DELETED )}, NULL },
{ "ORDCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCREATE )}, NULL },
{ "PADL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADL )}, NULL },
{ "BRWRUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BRWRUTA )}, NULL },
{ "GETBRWOPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETBRWOPT )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ORDCLEARSCOPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCLEARSCOPE )}, NULL },
{ "AUTOSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( AUTOSEEK )}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IXBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( IXBROWSE )}, NULL },
{ "_BCLRSEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BCLRSELFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NMARQUEESTYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BLDBLCLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RBUTTONDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFROMRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPPARAMSMAIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( APPPARAMSMAIN )}, NULL },
{ "TSAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSAY )}, NULL },
{ "ISREPORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISREPORT )}, NULL },
{ "ISOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISOBJECT )}, NULL },
{ "CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROYFASTFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DESTROYFASTFILTER )}, NULL },
{ "SETBRWOPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETBRWOPT )}, NULL },
{ "ORDNUMBER", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDNUMBER )}, NULL },
{ "CRUTA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRUTA )}, NULL },
{ "VARGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00005)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_RUTA, ".\\.\\Prg\\Ruta.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_RUTA
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_RUTA )
   #include "hbiniseg.h"
#endif

HB_FUNC_STATIC( OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,161,0,36,32,0,120,80,2,36,33,
		0,176,2,0,89,15,0,1,0,0,0,176,3,0,
		95,1,12,1,6,12,1,80,3,36,35,0,95,1,
		100,8,28,9,176,4,0,12,0,80,1,36,37,0,
		113,96,0,0,36,39,0,176,5,0,120,176,6,0,
		12,0,176,7,0,12,0,106,9,82,85,84,65,46,
		68,66,70,0,72,176,8,0,106,5,82,85,84,65,
		0,104,4,0,12,2,120,9,20,6,36,40,0,176,
		9,0,12,0,31,26,176,10,0,176,7,0,12,0,
		106,9,82,85,84,65,46,67,68,88,0,72,20,1,
		25,8,176,11,0,122,20,1,114,80,0,0,36,42,
		0,115,73,36,44,0,176,12,0,106,47,73,109,112,
		111,115,105,98,108,101,32,97,98,114,105,114,32,116,
		111,100,97,115,32,108,97,115,32,98,97,115,101,115,
		32,100,101,32,100,97,116,111,115,32,114,117,116,97,
		115,0,20,1,36,46,0,176,13,0,20,0,36,48,
		0,9,80,2,36,52,0,176,2,0,95,3,20,1,
		36,54,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		116,161,0,36,60,0,100,82,2,0,36,62,0,85,
		103,4,0,74,176,14,0,20,0,74,36,64,0,100,
		82,4,0,36,66,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RUTA )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,116,161,0,36,74,0,95,1,100,8,28,
		12,106,6,48,49,48,51,49,0,80,1,36,75,0,
		95,2,100,8,28,9,176,16,0,12,0,80,2,36,
		77,0,103,2,0,100,8,29,80,4,36,79,0,176,
		17,0,95,1,12,1,80,3,36,81,0,176,18,0,
		95,3,122,12,2,121,69,28,39,36,82,0,176,12,
		0,106,21,65,99,99,101,115,111,32,110,111,32,112,
		101,114,109,105,116,105,100,111,46,0,20,1,36,83,
		0,100,110,7,36,90,0,95,2,100,69,28,23,36,
		91,0,176,19,0,20,0,48,20,0,95,2,112,0,
		73,176,19,0,20,0,36,98,0,176,21,0,106,6,
		82,117,116,97,115,0,176,22,0,12,0,20,2,36,
		100,0,176,1,0,12,0,31,8,36,101,0,100,110,
		7,36,116,0,48,23,0,176,24,0,12,0,92,2,
		92,10,92,18,92,70,106,6,82,117,116,97,115,0,
		100,95,2,100,100,9,100,100,103,4,0,100,100,100,
		100,106,7,67,243,100,105,103,111,0,106,7,78,111,
		109,98,114,101,0,4,2,0,90,22,176,25,0,48,
		26,0,103,2,0,112,0,103,3,0,103,4,0,12,
		3,6,90,22,176,27,0,48,26,0,103,2,0,112,
		0,103,3,0,103,4,0,12,3,6,90,19,176,28,
		0,48,26,0,103,2,0,112,0,103,4,0,12,2,
		6,90,22,176,29,0,48,26,0,103,2,0,112,0,
		103,3,0,103,4,0,12,3,6,100,95,3,106,16,
		103,99,95,115,105,103,110,112,111,115,116,50,95,49,
		54,0,100,100,100,120,112,29,82,2,0,36,118,0,
		48,30,0,103,2,0,112,0,143,36,119,0,144,31,
		0,106,7,67,243,100,105,103,111,0,112,1,73,36,
		120,0,144,32,0,106,8,99,67,111,100,82,117,116,
		0,112,1,73,36,121,0,144,33,0,90,9,103,4,
		0,88,34,0,6,112,1,73,36,122,0,144,35,0,
		92,60,112,1,73,36,123,0,144,36,0,89,18,0,
		4,0,0,0,48,37,0,103,2,0,95,4,112,1,
		6,112,1,73,145,36,126,0,48,30,0,103,2,0,
		112,0,143,36,127,0,144,31,0,106,7,78,111,109,
		98,114,101,0,112,1,73,36,128,0,144,32,0,106,
		8,99,68,101,115,82,117,116,0,112,1,73,36,129,
		0,144,33,0,90,9,103,4,0,88,38,0,6,112,
		1,73,36,130,0,144,35,0,93,4,1,112,1,73,
		36,131,0,144,36,0,89,18,0,4,0,0,0,48,
		37,0,103,2,0,95,4,112,1,6,112,1,73,145,
		36,134,0,48,39,0,103,2,0,112,0,73,36,140,
		0,48,40,0,103,2,0,106,4,66,85,83,0,100,
		100,90,11,48,41,0,103,2,0,112,0,6,106,9,
		40,66,41,117,115,99,97,114,0,106,2,66,0,100,
		100,100,100,9,112,11,73,36,142,0,48,42,0,103,
		2,0,112,0,73,36,151,0,48,40,0,103,2,0,
		106,4,78,69,87,0,100,100,90,11,48,43,0,103,
		2,0,112,0,6,106,9,40,65,41,241,97,100,105,
		114,0,106,2,65,0,100,100,92,2,100,9,112,11,
		73,36,159,0,48,40,0,103,2,0,106,4,68,85,
		80,0,100,100,90,11,48,44,0,103,2,0,112,0,
		6,106,11,40,68,41,117,112,108,105,99,97,114,0,
		106,2,68,0,100,100,92,2,100,9,112,11,73,36,
		167,0,48,40,0,103,2,0,106,5,69,68,73,84,
		0,100,100,90,11,48,45,0,103,2,0,112,0,6,
		106,12,40,77,41,111,100,105,102,105,99,97,114,0,
		106,2,77,0,100,100,92,4,100,9,112,11,73,36,
		175,0,48,40,0,103,2,0,106,5,90,79,79,77,
		0,100,100,90,22,176,46,0,48,26,0,103,2,0,
		112,0,103,3,0,103,4,0,12,3,6,106,7,40,
		90,41,111,111,109,0,106,2,90,0,100,100,92,8,
		100,9,112,11,73,36,183,0,48,40,0,103,2,0,
		106,4,68,69,76,0,100,100,90,11,48,47,0,103,
		2,0,112,0,6,106,11,40,69,41,108,105,109,105,
		110,97,114,0,106,2,69,0,100,100,92,16,100,9,
		112,11,73,36,192,0,48,40,0,103,2,0,106,4,
		73,77,80,0,100,100,90,37,48,48,0,48,23,0,
		176,49,0,12,0,106,17,76,105,115,116,97,100,111,
		32,100,101,32,114,117,116,97,115,0,112,1,112,0,
		6,106,10,40,76,41,105,115,116,97,100,111,0,106,
		2,76,0,100,100,92,8,100,9,112,11,73,36,200,
		0,48,40,0,103,2,0,106,4,69,78,68,0,100,
		100,90,11,48,50,0,103,2,0,112,0,6,106,8,
		40,83,41,97,108,105,114,0,106,2,83,0,100,100,
		100,100,9,112,11,73,36,202,0,48,51,0,103,2,
		0,100,48,52,0,103,2,0,112,0,48,53,0,103,
		2,0,112,0,48,54,0,103,2,0,112,0,48,55,
		0,103,2,0,112,0,48,56,0,103,2,0,112,0,
		48,57,0,103,2,0,112,0,48,58,0,103,2,0,
		112,0,100,100,100,100,100,100,100,100,90,8,176,13,
		0,12,0,6,100,48,59,0,103,2,0,112,0,9,
		112,20,73,25,14,36,206,0,48,60,0,103,2,0,
		112,0,73,36,210,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EDTREC )
{
	static const HB_BYTE pcode[] =
	{
		13,2,7,36,219,0,48,23,0,176,61,0,12,0,
		100,100,100,100,176,62,0,95,7,12,1,106,6,82,
		117,116,97,115,0,72,106,5,82,85,84,65,0,100,
		9,100,100,100,100,100,9,100,100,100,100,100,9,100,
		106,5,111,68,108,103,0,100,100,112,24,80,8,36,
		225,0,48,63,0,176,64,0,12,0,92,101,89,32,
		0,1,0,1,0,1,0,176,65,0,12,0,121,8,
		28,8,95,255,122,1,25,9,95,1,165,95,255,122,
		2,6,95,8,100,100,89,21,0,0,0,2,0,9,
		0,3,0,176,66,0,95,255,95,254,12,2,6,100,
		100,100,100,100,9,89,23,0,0,0,1,0,7,0,
		95,255,122,8,21,31,8,73,95,255,92,4,8,6,
		100,9,9,100,100,100,100,100,100,100,100,100,112,25,
		80,9,36,232,0,48,63,0,176,64,0,12,0,92,
		102,89,34,0,1,0,1,0,1,0,176,65,0,12,
		0,121,8,28,9,95,255,92,2,1,25,10,95,1,
		165,95,255,92,2,2,6,95,8,100,106,3,64,33,
		0,100,100,100,100,100,100,9,89,15,0,0,0,1,
		0,7,0,95,255,92,3,69,6,100,9,9,100,100,
		100,100,100,100,100,100,100,112,25,95,2,92,2,2,
		36,238,0,48,63,0,176,67,0,12,0,122,89,41,
		0,0,0,7,0,1,0,2,0,3,0,4,0,7,
		0,8,0,9,0,176,68,0,95,255,95,254,95,253,
		95,252,95,251,95,250,95,249,12,7,6,95,8,100,
		100,9,89,15,0,0,0,1,0,7,0,95,255,92,
		3,69,6,100,100,9,112,10,73,36,243,0,48,63,
		0,176,67,0,12,0,92,2,89,17,0,0,0,1,
		0,8,0,48,50,0,95,255,112,0,6,95,8,100,
		100,9,100,100,100,9,112,10,73,36,248,0,48,63,
		0,176,67,0,12,0,93,47,2,90,15,176,69,0,
		106,5,82,117,116,97,0,12,1,6,95,8,100,100,
		9,100,100,100,9,112,10,73,36,250,0,95,7,92,
		3,69,28,96,36,251,0,48,70,0,95,8,92,116,
		89,81,0,0,0,7,0,7,0,9,0,1,0,2,
		0,3,0,4,0,8,0,95,255,92,4,8,28,35,
		48,71,0,95,254,112,0,28,23,176,68,0,95,253,
		95,252,95,251,95,250,95,255,95,249,95,254,12,7,
		25,24,100,25,21,176,68,0,95,253,95,252,95,251,
		95,250,95,255,95,249,95,254,12,7,6,112,2,73,
		36,254,0,48,70,0,95,8,92,112,90,15,176,69,
		0,106,5,82,117,116,97,0,12,1,6,112,2,73,
		36,0,1,48,72,0,95,8,89,17,0,0,0,1,
		0,9,0,48,60,0,95,255,112,0,6,112,1,73,
		36,2,1,48,51,0,95,8,48,52,0,95,8,112,
		0,48,54,0,95,8,112,0,48,56,0,95,8,112,
		0,120,100,100,100,48,53,0,95,8,112,0,100,100,
		100,112,11,73,36,4,1,48,73,0,95,8,112,0,
		122,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( LPRESAVE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,7,36,10,1,95,5,122,8,31,10,95,5,
		92,4,8,29,146,0,36,12,1,176,74,0,95,1,
		122,1,12,1,28,72,36,13,1,176,12,0,106,43,
		69,108,32,99,243,100,105,103,111,32,100,101,32,108,
		97,32,114,117,116,97,32,110,111,32,112,117,101,100,
		101,32,101,115,116,97,114,32,118,97,99,237,111,46,
		0,20,1,36,14,1,48,60,0,95,7,112,0,73,
		36,15,1,9,110,7,36,18,1,176,75,0,95,1,
		122,1,106,8,67,67,79,68,82,85,84,0,95,3,
		12,3,28,35,36,19,1,176,12,0,106,17,67,243,
		100,105,103,111,32,101,120,105,115,116,101,110,116,101,
		0,20,1,36,20,1,100,110,7,36,25,1,176,74,
		0,95,1,92,2,1,12,1,28,80,36,26,1,176,
		12,0,106,48,76,97,32,100,101,115,99,114,105,112,
		99,105,243,110,32,100,101,32,108,97,32,114,117,116,
		97,32,110,111,32,112,117,101,100,101,32,101,115,116,
		97,114,32,118,97,99,237,97,46,0,20,1,36,27,
		1,48,60,0,95,2,92,2,1,112,0,73,36,28,
		1,9,110,7,36,31,1,176,76,0,95,1,95,2,
		95,3,95,4,95,5,20,5,36,33,1,48,50,0,
		95,6,122,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RETRUTA )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,39,1,176,78,0,12,0,80,3,36,
		40,1,106,1,0,80,4,36,41,1,9,80,5,36,
		43,1,95,2,100,8,28,96,36,44,1,176,5,0,
		120,176,6,0,12,0,176,7,0,12,0,106,9,82,
		85,84,65,46,68,66,70,0,72,176,8,0,106,5,
		82,85,84,65,0,96,2,0,12,2,120,9,20,6,
		36,45,1,176,9,0,12,0,31,26,176,10,0,176,
		7,0,12,0,106,9,82,85,84,65,46,67,68,88,
		0,72,20,1,25,8,176,11,0,122,20,1,36,46,
		1,120,80,5,36,49,1,85,95,2,74,176,79,0,
		95,1,12,1,119,28,12,36,50,1,95,2,88,38,
		0,80,4,36,53,1,95,5,28,15,36,54,1,85,
		95,2,74,176,14,0,20,0,74,36,57,1,95,3,
		106,1,0,69,28,12,36,58,1,176,80,0,95,3,
		20,1,36,61,1,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( PDARUTASENDERRECIVER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,161,0,36,150,2,103,5,0,100,8,
		29,167,0,176,82,0,104,5,0,12,1,29,156,0,
		166,94,0,0,122,80,1,48,23,0,176,83,0,12,
		0,106,21,112,100,97,82,117,116,97,83,101,110,100,
		101,114,82,101,99,105,118,101,114,0,108,84,4,1,
		0,108,81,112,3,80,2,36,152,2,48,85,0,95,
		2,106,11,67,114,101,97,116,101,68,97,116,97,0,
		108,86,95,1,121,72,121,72,121,72,112,3,73,36,
		154,2,48,87,0,95,2,112,0,73,167,14,0,0,
		176,88,0,104,5,0,95,2,20,2,168,48,89,0,
		95,2,112,0,80,3,176,90,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		91,0,95,3,164,146,1,0,73,95,3,110,7,48,
		89,0,103,5,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PDARUTASENDERRECIVER_CREATEDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,4,3,36,162,2,9,80,6,36,164,2,176,74,
		0,95,3,12,1,28,9,176,92,0,12,0,25,4,
		95,3,80,7,36,166,2,176,5,0,120,176,6,0,
		12,0,176,7,0,12,0,106,9,82,117,116,97,46,
		68,98,102,0,72,176,8,0,106,5,82,85,84,65,
		0,96,4,0,12,2,120,9,20,6,36,167,2,176,
		9,0,12,0,31,26,176,10,0,176,7,0,12,0,
		106,9,82,117,116,97,46,67,100,120,0,72,20,1,
		25,8,176,11,0,122,20,1,36,169,2,176,5,0,
		120,176,6,0,12,0,95,7,106,9,82,117,116,97,
		46,68,98,102,0,72,176,8,0,106,5,82,85,84,
		65,0,96,5,0,12,2,120,20,5,36,170,2,85,
		95,5,74,176,10,0,95,7,106,9,82,117,116,97,
		46,67,100,120,0,72,20,1,74,36,172,2,176,74,
		0,95,1,12,1,31,24,36,173,2,48,93,0,95,
		1,121,85,95,5,74,176,94,0,12,0,119,112,2,
		73,36,176,2,85,95,5,74,176,95,0,20,0,74,
		36,177,2,85,95,5,74,176,96,0,12,0,119,32,
		246,0,36,179,2,85,95,4,74,176,79,0,95,5,
		88,34,0,12,1,119,28,17,36,180,2,176,97,0,
		95,5,95,4,9,20,3,25,15,36,182,2,176,97,
		0,95,5,95,4,120,20,3,36,185,2,176,98,0,
		95,5,12,1,28,24,36,186,2,9,95,5,77,99,
		0,36,187,2,85,95,5,74,176,100,0,20,0,74,
		36,190,2,85,95,5,74,176,101,0,20,0,74,36,
		192,2,176,74,0,95,2,12,1,31,86,36,193,2,
		48,102,0,95,2,106,21,83,105,110,99,114,111,110,
		105,122,97,110,100,111,32,82,117,116,97,115,32,0,
		176,103,0,176,104,0,85,95,5,74,176,105,0,12,
		0,119,12,1,12,1,72,106,5,32,100,101,32,0,
		72,176,103,0,176,104,0,85,95,5,74,176,94,0,
		12,0,119,12,1,12,1,72,112,1,73,36,196,2,
		176,19,0,20,0,36,198,2,176,74,0,95,1,12,
		1,31,23,36,199,2,48,106,0,95,1,85,95,5,
		74,176,105,0,12,0,119,112,1,73,36,202,2,176,
		19,0,20,0,26,0,255,36,206,2,85,95,5,74,
		176,14,0,20,0,74,36,207,2,85,95,4,74,176,
		14,0,20,0,74,36,209,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISRUTA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,116,161,0,36,220,2,176,108,0,176,7,
		0,12,0,106,9,82,117,116,97,46,68,98,102,0,
		72,12,1,31,15,36,221,2,176,109,0,176,7,0,
		12,0,20,1,36,224,2,176,2,0,89,15,0,1,
		0,0,0,176,3,0,95,1,12,1,6,12,1,80,
		2,36,225,2,113,99,0,0,36,227,2,176,5,0,
		120,176,6,0,12,0,176,7,0,12,0,106,9,82,
		117,116,97,46,68,98,102,0,72,176,8,0,106,8,
		67,67,79,68,82,85,84,0,104,4,0,12,2,120,
		9,20,6,36,228,2,176,9,0,12,0,31,26,176,
		10,0,176,7,0,12,0,106,9,82,117,116,97,46,
		67,100,120,0,72,20,1,25,8,176,11,0,122,20,
		1,114,72,0,0,36,230,2,115,80,1,36,232,2,
		176,12,0,106,44,73,109,112,111,115,105,98,108,101,
		32,97,98,114,105,114,32,116,111,100,97,115,32,108,
		97,115,32,98,97,115,101,115,32,100,101,32,100,97,
		116,111,115,32,13,10,0,176,110,0,95,1,12,1,
		72,20,1,36,236,2,176,2,0,95,2,20,1,36,
		238,2,85,103,4,0,74,176,14,0,20,0,74,36,
		240,2,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( MKRUTA )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,36,248,2,95,2,100,8,28,5,9,80,
		2,36,249,2,95,1,100,8,28,9,176,7,0,12,
		0,80,1,36,251,2,95,4,100,69,28,39,36,252,
		2,48,111,0,95,4,106,16,71,101,110,101,114,97,
		110,100,111,32,66,97,115,101,115,0,112,1,73,36,
		253,2,176,19,0,20,0,36,0,3,176,112,0,95,
		1,106,9,82,117,116,97,46,68,98,102,0,72,176,
		113,0,176,114,0,12,0,12,1,176,6,0,12,0,
		20,3,36,2,3,95,2,28,116,176,115,0,95,3,
		12,1,28,107,176,108,0,95,3,106,9,82,117,116,
		97,46,68,98,102,0,72,12,1,28,86,36,4,3,
		176,5,0,120,176,6,0,12,0,95,1,106,9,82,
		117,116,97,46,68,98,102,0,72,176,8,0,106,5,
		82,85,84,65,0,96,5,0,12,2,9,20,5,36,
		5,3,85,95,5,74,176,116,0,95,3,106,9,82,
		117,116,97,46,68,98,102,0,72,20,1,74,36,6,
		3,85,95,5,74,176,14,0,20,0,74,36,10,3,
		176,117,0,95,1,95,4,20,2,36,12,3,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RXRUTA )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,20,3,95,1,100,8,28,9,176,7,
		0,12,0,80,1,36,22,3,176,108,0,95,1,106,
		9,82,85,84,65,46,68,66,70,0,72,12,1,31,
		39,36,23,3,176,112,0,95,1,106,9,82,85,84,
		65,46,68,66,70,0,72,176,113,0,176,114,0,12,
		0,12,1,176,6,0,12,0,20,3,36,26,3,176,
		118,0,95,1,106,9,82,85,84,65,46,67,68,88,
		0,72,20,1,36,28,3,176,5,0,120,176,6,0,
		12,0,95,1,106,9,82,85,84,65,46,68,66,70,
		0,72,176,8,0,106,5,82,85,84,65,0,96,3,
		0,12,2,9,20,5,36,29,3,85,95,3,74,176,
		119,0,12,0,119,32,73,1,36,30,3,85,95,3,
		74,176,120,0,20,0,74,36,32,3,85,95,3,74,
		176,121,0,106,11,33,68,101,108,101,116,101,100,40,
		41,0,90,9,176,122,0,12,0,68,6,20,2,74,
		36,33,3,85,95,3,74,176,123,0,95,1,106,9,
		82,85,84,65,46,67,68,88,0,72,106,8,67,67,
		79,68,82,85,84,0,106,8,67,67,79,68,82,85,
		84,0,90,6,91,34,0,6,20,4,74,36,35,3,
		85,95,3,74,176,121,0,106,11,33,68,101,108,101,
		116,101,100,40,41,0,90,9,176,122,0,12,0,68,
		6,20,2,74,36,36,3,85,95,3,74,176,123,0,
		95,1,106,9,82,85,84,65,46,67,68,88,0,72,
		106,8,67,68,69,83,82,85,84,0,106,8,67,68,
		69,83,82,85,84,0,90,6,91,38,0,6,100,20,
		5,74,36,38,3,85,95,3,74,176,121,0,106,11,
		33,68,101,108,101,116,101,100,40,41,0,90,9,176,
		122,0,12,0,68,6,20,2,74,36,39,3,85,95,
		3,74,176,123,0,95,1,106,9,82,85,84,65,46,
		67,68,88,0,72,106,7,84,82,77,67,79,68,0,
		106,30,80,97,100,76,40,32,65,108,108,84,114,105,
		109,40,32,67,67,79,68,82,85,84,32,41,44,32,
		52,32,41,0,90,18,176,124,0,176,103,0,91,34,
		0,12,1,92,4,12,2,6,20,4,74,36,41,3,
		85,95,3,74,176,14,0,20,0,74,25,64,36,44,
		3,176,12,0,106,52,73,109,112,111,115,105,98,108,
		101,32,97,98,114,105,114,32,101,110,32,109,111,100,
		111,32,101,120,99,108,117,115,105,118,111,32,108,97,
		32,116,97,98,108,97,32,100,101,32,114,117,116,97,
		115,0,20,1,36,47,3,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( AITMRUT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,55,3,106,8,67,67,79,68,82,85,
		84,0,106,2,67,0,92,4,121,106,18,67,243,100,
		105,103,111,32,100,101,32,108,97,32,114,117,116,97,
		0,106,1,0,106,1,0,106,12,40,32,99,68,98,
		102,82,117,116,32,41,0,4,8,0,106,8,67,68,
		69,83,82,85,84,0,106,2,67,0,92,30,121,106,
		18,78,111,109,98,114,101,32,100,101,32,108,97,32,
		114,117,116,97,0,106,5,39,64,33,39,0,106,1,
		0,106,12,40,32,99,68,98,102,82,117,116,32,41,
		0,4,8,0,106,8,76,83,69,76,82,85,84,0,
		106,2,76,0,122,121,106,1,0,106,1,0,106,1,
		0,106,12,40,32,99,68,98,102,82,117,116,32,41,
		0,4,8,0,4,3,0,80,1,36,57,3,95,1,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BRWRUTA )
{
	static const HB_BYTE pcode[] =
	{
		13,13,3,116,161,0,36,70,3,176,126,0,106,8,
		66,114,119,82,117,116,97,0,12,1,80,8,36,72,
		3,106,7,67,243,100,105,103,111,0,106,7,78,111,
		109,98,114,101,0,4,2,0,80,10,36,73,3,106,
		7,67,243,100,105,103,111,0,80,11,36,74,3,9,
		80,12,36,75,3,176,17,0,106,6,48,49,48,51,
		49,0,12,1,80,13,36,77,3,106,17,76,105,115,
		116,97,100,111,32,100,101,32,114,117,116,97,115,0,
		80,15,36,78,3,106,1,0,80,16,36,80,3,176,
		127,0,176,128,0,95,8,122,12,2,176,129,0,95,
		10,12,1,12,2,80,8,36,81,3,95,10,95,8,
		1,80,11,36,83,3,95,2,100,8,28,96,36,84,
		3,176,5,0,120,176,6,0,12,0,176,7,0,12,
		0,106,9,82,85,84,65,46,68,66,70,0,72,176,
		8,0,106,5,82,85,84,65,0,96,2,0,12,2,
		120,9,20,6,36,85,3,176,9,0,12,0,31,26,
		176,10,0,176,7,0,12,0,106,9,82,85,84,65,
		46,67,68,88,0,72,20,1,25,8,176,11,0,122,
		20,1,36,86,3,120,80,12,36,89,3,85,95,2,
		74,176,11,0,95,8,12,1,119,80,8,36,90,3,
		85,95,2,74,176,95,0,20,0,74,36,92,3,48,
		23,0,176,61,0,12,0,100,100,100,100,106,18,83,
		101,108,101,99,99,105,111,110,97,114,32,114,117,116,
		97,115,0,106,10,72,69,76,80,69,78,84,82,89,
		0,100,9,100,100,100,100,100,9,100,100,100,100,100,
		9,100,106,5,111,68,108,103,0,100,100,112,24,80,
		4,36,99,3,48,63,0,176,64,0,12,0,92,104,
		89,28,0,1,0,1,0,7,0,176,65,0,12,0,
		121,8,28,6,95,255,25,7,95,1,165,80,255,6,
		95,4,100,100,89,21,0,0,0,2,0,5,0,2,
		0,176,130,0,95,255,95,254,12,2,6,100,100,100,
		100,100,9,100,89,27,0,3,0,2,0,5,0,2,
		0,176,131,0,95,1,95,2,95,3,95,255,95,254,
		12,5,6,9,9,100,100,100,100,100,100,106,5,70,
		73,78,68,0,100,100,112,25,80,6,36,106,3,48,
		63,0,176,132,0,12,0,92,102,89,28,0,1,0,
		1,0,11,0,176,65,0,12,0,121,8,28,6,95,
		255,25,7,95,1,165,80,255,6,95,10,95,4,100,
		100,89,56,0,1,0,4,0,2,0,9,0,5,0,
		6,0,85,95,255,74,176,11,0,48,133,0,95,254,
		112,0,20,1,74,48,134,0,95,253,112,0,73,48,
		60,0,95,252,112,0,73,48,134,0,95,254,112,0,
		6,100,100,100,9,100,100,100,100,100,100,112,17,80,
		9,36,108,3,48,23,0,176,135,0,12,0,95,4,
		112,1,80,5,36,110,3,48,136,0,95,5,90,12,
		121,97,229,229,229,0,4,2,0,6,112,1,73,36,
		111,3,48,137,0,95,5,90,12,121,97,167,205,240,
		0,4,2,0,6,112,1,73,36,113,3,48,138,0,
		95,5,95,2,112,1,73,36,114,3,48,139,0,95,
		5,92,5,112,1,73,36,115,3,48,140,0,95,5,
		106,12,66,114,111,119,115,101,46,82,117,116,97,0,
		112,1,73,36,117,3,48,141,0,95,5,112,0,143,
		36,118,3,144,31,0,106,7,67,243,100,105,103,111,
		0,112,1,73,36,119,3,144,32,0,106,8,99,67,
		111,100,82,117,116,0,112,1,73,36,120,3,144,33,
		0,89,15,0,0,0,1,0,2,0,95,255,88,34,
		0,6,112,1,73,36,121,3,144,35,0,92,60,112,
		1,73,36,122,3,144,36,0,89,24,0,4,0,1,
		0,9,0,48,142,0,95,255,48,143,0,95,4,112,
		0,112,1,6,112,1,73,145,36,125,3,48,141,0,
		95,5,112,0,143,36,126,3,144,31,0,106,7,78,
		111,109,98,114,101,0,112,1,73,36,127,3,144,32,
		0,106,8,99,68,101,115,82,117,116,0,112,1,73,
		36,128,3,144,33,0,89,15,0,0,0,1,0,2,
		0,95,255,88,38,0,6,112,1,73,36,129,3,144,
		35,0,93,4,1,112,1,73,36,130,3,144,36,0,
		89,24,0,4,0,1,0,9,0,48,142,0,95,255,
		48,143,0,95,4,112,0,112,1,6,112,1,73,145,
		36,133,3,48,144,0,95,5,89,18,0,0,0,1,
		0,4,0,48,50,0,95,255,122,112,1,6,112,1,
		73,36,134,3,48,145,0,95,5,89,23,0,3,0,
		1,0,5,0,48,146,0,95,255,95,1,95,2,95,
		3,112,3,6,112,1,73,36,136,3,48,147,0,95,
		5,92,105,112,1,73,36,138,3,106,4,80,68,65,
		0,176,148,0,12,0,24,28,41,36,142,3,48,63,
		0,176,149,0,12,0,92,100,89,12,0,0,0,1,
		0,15,0,95,255,6,95,4,100,100,100,9,100,9,
		9,100,112,11,80,14,36,149,3,48,63,0,176,67,
		0,12,0,122,89,18,0,0,0,1,0,4,0,48,
		50,0,95,255,122,112,1,6,95,4,100,100,9,100,
		100,100,9,112,10,73,36,154,3,48,63,0,176,67,
		0,12,0,92,2,89,17,0,0,0,1,0,4,0,
		48,50,0,95,255,112,0,6,95,4,100,100,9,100,
		100,100,9,112,10,73,36,156,3,106,4,80,68,65,
		0,176,148,0,12,0,24,32,27,1,36,162,3,48,
		63,0,176,67,0,12,0,93,244,1,89,24,0,0,
		0,2,0,5,0,2,0,176,25,0,95,255,103,3,
		0,95,254,12,3,6,95,4,100,100,9,89,31,0,
		0,0,1,0,13,0,176,18,0,95,255,92,2,12,
		2,121,69,21,28,9,73,176,150,0,12,0,68,6,
		100,100,9,112,10,73,36,168,3,48,63,0,176,67,
		0,12,0,93,245,1,89,24,0,0,0,2,0,5,
		0,2,0,176,27,0,95,255,103,3,0,95,254,12,
		3,6,95,4,100,100,9,89,31,0,0,0,1,0,
		13,0,176,18,0,95,255,92,4,12,2,121,69,21,
		28,9,73,176,150,0,12,0,68,6,100,100,9,112,
		10,73,36,170,3,176,18,0,95,13,92,2,12,2,
		121,69,28,46,176,150,0,12,0,31,39,36,171,3,
		48,70,0,95,4,92,113,89,24,0,0,0,2,0,
		5,0,2,0,176,25,0,95,255,103,3,0,95,254,
		12,3,6,112,2,73,36,174,3,176,18,0,95,13,
		92,4,12,2,121,69,28,46,176,150,0,12,0,31,
		39,36,175,3,48,70,0,95,4,92,114,89,24,0,
		0,0,2,0,5,0,2,0,176,27,0,95,255,103,
		3,0,95,254,12,3,6,112,2,73,36,180,3,48,
		70,0,95,4,92,116,89,18,0,0,0,1,0,4,
		0,48,50,0,95,255,122,112,1,6,112,2,73,36,
		181,3,48,70,0,95,4,92,13,89,18,0,0,0,
		1,0,4,0,48,50,0,95,255,122,112,1,6,112,
		2,73,36,183,3,48,51,0,95,4,48,52,0,95,
		4,112,0,48,54,0,95,4,112,0,48,56,0,95,
		4,112,0,9,100,100,100,48,53,0,95,4,112,0,
		100,100,100,112,11,73,36,185,3,48,73,0,95,4,
		112,0,122,8,28,68,36,187,3,95,2,88,34,0,
		80,16,36,189,3,176,151,0,95,1,12,1,28,18,
		36,190,3,48,152,0,95,1,95,2,88,34,0,112,
		1,73,36,193,3,176,151,0,95,3,12,1,28,18,
		36,194,3,48,152,0,95,3,95,2,88,38,0,112,
		1,73,36,199,3,176,153,0,95,2,20,1,36,201,
		3,176,154,0,106,8,66,114,119,82,117,116,97,0,
		85,95,2,74,176,155,0,12,0,119,20,2,36,203,
		3,95,12,28,17,36,204,3,85,95,2,74,176,14,
		0,20,0,74,25,17,36,206,3,85,95,2,74,176,
		11,0,95,8,20,1,74,36,209,3,176,151,0,95,
		1,12,1,28,13,36,210,3,48,60,0,95,1,112,
		0,73,36,213,3,95,16,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CRUTA )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,36,219,3,9,80,4,36,220,3,9,80,
		5,36,221,3,48,157,0,95,1,112,0,80,6,36,
		223,3,176,74,0,95,6,12,1,31,18,95,6,176,
		158,0,106,2,90,0,92,4,12,2,8,28,34,36,
		224,3,176,151,0,95,3,12,1,28,16,36,225,3,
		48,152,0,95,3,106,1,0,112,1,73,36,227,3,
		120,110,7,36,230,3,176,74,0,95,2,12,1,28,
		96,36,231,3,176,5,0,120,176,6,0,12,0,176,
		7,0,12,0,106,9,82,85,84,65,46,68,66,70,
		0,72,176,8,0,106,5,82,85,84,65,0,96,2,
		0,12,2,120,9,20,6,36,232,3,176,9,0,12,
		0,31,26,176,10,0,176,7,0,12,0,106,9,82,
		85,84,65,46,67,68,88,0,72,20,1,25,8,176,
		11,0,122,20,1,36,233,3,120,80,4,36,236,3,
		85,95,2,74,176,79,0,95,6,12,1,119,28,66,
		36,238,3,176,151,0,95,1,12,1,28,18,36,239,
		3,48,152,0,95,1,95,2,88,34,0,112,1,73,
		36,242,3,176,151,0,95,3,12,1,28,18,36,243,
		3,48,152,0,95,3,95,2,88,38,0,112,1,73,
		36,246,3,120,80,5,25,31,36,250,3,176,12,0,
		106,19,82,117,116,97,32,110,111,32,101,110,99,111,
		110,116,114,97,100,97,0,20,1,36,254,3,95,4,
		28,15,36,255,3,85,95,2,74,176,14,0,20,0,
		74,36,2,4,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,161,0,5,0,116,161,0,4,0,0,82,1,0,
		89,27,0,7,0,0,0,176,0,0,95,1,95,2,
		95,3,95,4,95,5,95,6,95,7,12,7,6,82,
		3,0,7
	};

	hb_vmExecute( pcode, symbols );
}

