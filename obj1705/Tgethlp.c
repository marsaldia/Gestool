/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tgethlp.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TGETHLP );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TGET );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_STATIC( TGETHLP_NEW );
HB_FUNC_STATIC( TGETHLP_REDEFINE );
HB_FUNC_STATIC( TGETHLP_DISPLAY );
HB_FUNC_STATIC( TGETHLP_DESTROY );
HB_FUNC_STATIC( TGETHLP_EVALHELP );
HB_FUNC_STATIC( TGETHLP_KEYCHAR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_STATIC( TGETHLP_HARDENABLE );
HB_FUNC_STATIC( TGETHLP_HARDDISABLE );
HB_FUNC_STATIC( TGETHLP_GOTFOCUS );
HB_FUNC_STATIC( TGETHLP_GETDLGCODE );
HB_FUNC_STATIC( TGETHLP_LOSTFOCUS );
HB_FUNC_STATIC( TGETHLP_LVALID );
HB_FUNC_STATIC( TGETHLP_SETERROR );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TSAY );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_EXTERN( TBITMAP );
HB_FUNC_EXTERN( SENDMESSAGE );
HB_FUNC_EXTERN( NOR );
HB_FUNC_EXTERN( NMAKELONG );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( CHR );
HB_FUNC_EXTERN( LAND );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( GETKEYSTATE );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( MSGBEEP );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( CALLWINDOWPROC );
HB_FUNC_EXTERN( DESTROYCARET );
HB_FUNC_EXTERN( CREATECARET );
HB_FUNC_EXTERN( SHOWCARET );
HB_FUNC_EXTERN( HIDECARET );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( GETWINDOWTEXT );
HB_FUNC_EXTERN( ISBLOCK );
HB_FUNC_EXTERN( ISLOGIC );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TGETHLP )
{ "TGETHLP", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGET )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_NEW )}, NULL },
{ "TGETHLP_REDEFINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_REDEFINE )}, NULL },
{ "TGETHLP_DISPLAY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_DISPLAY )}, NULL },
{ "TGETHLP_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_DESTROY )}, NULL },
{ "TGETHLP_EVALHELP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_EVALHELP )}, NULL },
{ "TGETHLP_KEYCHAR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_KEYCHAR )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "BKEYUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "KEYUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPICTURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PICTURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HIDE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OHELPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPREVALIDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPOSTVALIDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP_HARDENABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_HARDENABLE )}, NULL },
{ "TGETHLP_HARDDISABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_HARDDISABLE )}, NULL },
{ "TGETHLP_GOTFOCUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_GOTFOCUS )}, NULL },
{ "TGETHLP_GETDLGCODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_GETDLGCODE )}, NULL },
{ "TGETHLP_LOSTFOCUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_LOSTFOCUS )}, NULL },
{ "TGETHLP_LVALID", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_LVALID )}, NULL },
{ "TGETHLP_SETERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGETHLP_SETERROR )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BMULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LNEEDGETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LGOTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSAY )}, NULL },
{ "_OHELPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "CHELPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHELPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "CBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBITMAP )}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMARGIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVALHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LTRANSPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SENDMESSAGE )}, NULL },
{ "HWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOR )}, NULL },
{ "NMAKELONG", {HB_FS_PUBLIC}, {HB_FUNCNAME( NMAKELONG )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "KEYCHAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPICTURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "CHR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHR )}, NULL },
{ "LAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( LAND )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "LREADONLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVALMULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETKEYSTATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETKEYSTATE )}, NULL },
{ "BCHANGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOPREVCTRL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHANGED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UNTRANSFORM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORIGINAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GONEXTCTRL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSELPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETDELSEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDITUPDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TODECPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "INSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OVERSTRIKE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REJECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGBEEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGBEEP )}, NULL },
{ "TYPEOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASSIGN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPOSTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLOSTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BOLDLOSTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BLOSTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BOLDVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOLDLOSTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOLDVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BWHEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOLDWHEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BOLDWHEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BWHEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LFOCUSED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "LDRAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "KILLFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_POS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALLWINDOWPROC", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLWINDOWPROC )}, NULL },
{ "NOLDPROC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROYCARET", {HB_FS_PUBLIC}, {HB_FUNCNAME( DESTROYCARET )}, NULL },
{ "CREATECARET", {HB_FS_PUBLIC}, {HB_FUNCNAME( CREATECARET )}, NULL },
{ "NGETCHRHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOWCARET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SHOWCARET )}, NULL },
{ "HIDECARET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HIDECARET )}, NULL },
{ "SETSEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "VARGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECTALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACONTROLS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOSTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LPASSWORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETWINDOWTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETWINDOWTEXT )}, NULL },
{ "UPDATEBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BADDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_TYPEOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LNEEDGETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVALPREVALIDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISBLOCK )}, NULL },
{ "ISLOGIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISLOGIC )}, NULL },
{ "EVALPOSTVALIDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TGETHLP, ".\\.\\Prg\\Tgethlp.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TGETHLP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TGETHLP )
   #include "hbiniseg.h"
#endif

HB_FUNC( TGETHLP )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,169,0,36,14,0,103,2,0,100,8,
		29,55,7,176,1,0,104,2,0,12,1,29,44,7,
		166,238,6,0,122,80,1,48,2,0,176,3,0,12,
		0,106,8,84,71,101,116,72,108,112,0,108,4,4,
		1,0,108,0,112,3,80,2,36,16,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,6,
		98,72,101,108,112,0,4,1,0,9,112,5,73,36,
		17,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,6,98,77,117,108,116,0,4,1,0,
		9,112,5,73,36,18,0,48,5,0,95,2,100,100,
		95,1,121,72,121,72,121,72,106,5,99,66,109,112,
		0,4,1,0,9,112,5,73,36,19,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,5,
		111,66,109,112,0,4,1,0,9,112,5,73,36,20,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,5,111,83,97,121,0,4,1,0,9,112,
		5,73,36,21,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,10,111,72,101,108,112,84,
		101,120,116,0,4,1,0,9,112,5,73,36,22,0,
		48,5,0,95,2,100,176,6,0,92,50,12,1,95,
		1,121,72,121,72,121,72,106,10,99,72,101,108,112,
		84,101,120,116,0,4,1,0,9,112,5,73,36,24,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,7,98,75,101,121,85,112,0,4,1,0,
		9,112,5,73,36,26,0,48,5,0,95,2,100,100,
		95,1,121,72,121,72,121,72,106,10,108,71,111,116,
		70,111,99,117,115,0,4,1,0,9,112,5,73,36,
		27,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,14,108,78,101,101,100,71,101,116,70,
		111,99,117,115,0,4,1,0,9,112,5,73,36,29,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,9,98,79,108,100,87,104,101,110,0,4,
		1,0,9,112,5,73,36,30,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,10,98,79,
		108,100,86,97,108,105,100,0,4,1,0,9,112,5,
		73,36,31,0,48,5,0,95,2,100,100,95,1,121,
		72,121,72,121,72,106,14,98,79,108,100,76,111,115,
		116,70,111,99,117,115,0,4,1,0,9,112,5,73,
		36,33,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,13,98,80,114,101,86,97,108,105,
		100,97,116,101,0,4,1,0,9,112,5,73,36,34,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,14,98,80,111,115,116,86,97,108,105,100,
		97,116,101,0,4,1,0,9,112,5,73,36,36,0,
		48,5,0,95,2,100,92,16,95,1,121,72,121,72,
		121,72,106,8,110,77,97,114,103,105,110,0,4,1,
		0,9,112,5,73,36,38,0,48,5,0,95,2,100,
		106,1,0,95,1,121,72,121,72,121,72,106,7,99,
		69,114,114,111,114,0,4,1,0,9,112,5,73,36,
		40,0,48,7,0,95,2,106,4,78,101,119,0,108,
		8,95,1,92,8,72,121,72,121,72,112,3,73,36,
		41,0,48,7,0,95,2,106,9,82,101,68,101,102,
		105,110,101,0,108,9,95,1,92,8,72,121,72,121,
		72,112,3,73,36,43,0,48,7,0,95,2,106,8,
		68,105,115,112,108,97,121,0,108,10,95,1,121,72,
		121,72,121,72,112,3,73,36,45,0,48,7,0,95,
		2,106,8,68,101,115,116,114,111,121,0,108,11,95,
		1,121,72,121,72,121,72,112,3,73,36,47,0,48,
		7,0,95,2,106,9,69,118,97,108,72,101,108,112,
		0,108,12,95,1,121,72,121,72,121,72,112,3,73,
		36,49,0,48,7,0,95,2,106,8,75,101,121,67,
		104,97,114,0,108,13,95,1,121,72,121,72,121,72,
		112,3,73,36,50,0,48,14,0,95,2,106,6,75,
		101,121,85,112,0,89,51,0,3,0,0,0,176,15,
		0,48,16,0,95,1,112,0,12,1,31,15,48,17,
		0,48,16,0,95,1,112,0,112,0,73,48,18,0,
		48,19,0,95,1,112,0,95,2,95,3,112,2,6,
		95,1,121,72,121,72,121,72,112,3,73,36,52,0,
		48,14,0,95,2,106,11,83,101,116,80,105,99,116,
		117,114,101,0,89,40,0,2,0,0,0,48,20,0,
		95,1,95,2,112,1,73,48,21,0,48,22,0,95,
		1,112,0,95,2,112,1,73,48,23,0,95,1,112,
		0,6,95,1,121,72,121,72,121,72,112,3,73,36,
		54,0,48,14,0,95,2,106,5,72,111,109,101,0,
		89,40,0,1,0,0,0,48,24,0,48,22,0,95,
		1,112,0,112,0,73,48,25,0,95,1,48,26,0,
		48,22,0,95,1,112,0,112,0,112,1,6,95,1,
		121,72,121,72,121,72,112,3,73,36,56,0,48,14,
		0,95,2,106,9,69,118,97,108,77,117,108,116,0,
		89,36,0,1,0,0,0,48,27,0,95,1,112,0,
		100,69,28,18,48,17,0,48,27,0,95,1,112,0,
		95,1,112,1,25,3,100,6,95,1,121,72,121,72,
		121,72,112,3,73,36,58,0,48,14,0,95,2,106,
		5,72,105,100,101,0,89,68,0,1,0,0,0,48,
		28,0,95,1,112,0,100,69,28,15,48,29,0,48,
		28,0,95,1,112,0,112,0,73,48,30,0,95,1,
		112,0,100,69,28,15,48,29,0,48,30,0,95,1,
		112,0,112,0,73,48,29,0,48,19,0,95,1,112,
		0,112,0,6,95,1,121,72,121,72,121,72,112,3,
		73,36,62,0,48,14,0,95,2,106,5,83,104,111,
		119,0,89,68,0,1,0,0,0,48,28,0,95,1,
		112,0,100,69,28,15,48,31,0,48,28,0,95,1,
		112,0,112,0,73,48,30,0,95,1,112,0,100,69,
		28,15,48,31,0,48,30,0,95,1,112,0,112,0,
		73,48,31,0,48,19,0,95,1,112,0,112,0,6,
		95,1,121,72,121,72,121,72,112,3,73,36,64,0,
		48,14,0,95,2,106,8,83,101,116,84,101,120,116,
		0,89,44,0,2,0,0,0,48,28,0,95,1,112,
		0,100,69,28,18,48,32,0,48,28,0,95,1,112,
		0,95,2,112,1,25,11,48,33,0,95,1,95,2,
		112,1,6,95,1,121,72,121,72,121,72,112,3,73,
		36,66,0,48,14,0,95,2,106,16,101,118,97,108,
		80,114,101,86,97,108,105,100,97,116,101,0,89,36,
		0,1,0,0,0,48,34,0,95,1,112,0,100,69,
		28,18,48,17,0,48,34,0,95,1,112,0,95,1,
		112,1,25,3,100,6,95,1,121,72,121,72,121,72,
		112,3,73,36,67,0,48,14,0,95,2,106,17,101,
		118,97,108,80,111,115,116,86,97,108,105,100,97,116,
		101,0,89,36,0,1,0,0,0,48,35,0,95,1,
		112,0,100,69,28,18,48,17,0,48,35,0,95,1,
		112,0,95,1,112,1,25,3,100,6,95,1,121,72,
		121,72,121,72,112,3,73,36,69,0,48,7,0,95,
		2,106,11,72,97,114,100,69,110,97,98,108,101,0,
		108,36,95,1,121,72,121,72,121,72,112,3,73,36,
		71,0,48,7,0,95,2,106,12,72,97,114,100,68,
		105,115,97,98,108,101,0,108,37,95,1,121,72,121,
		72,121,72,112,3,73,36,73,0,48,7,0,95,2,
		106,9,71,111,116,70,111,99,117,115,0,108,38,95,
		1,121,72,121,72,121,72,112,3,73,36,75,0,48,
		7,0,95,2,106,11,71,101,116,68,108,103,67,111,
		100,101,0,108,39,95,1,121,72,121,72,121,72,112,
		3,73,36,77,0,48,7,0,95,2,106,10,76,111,
		115,116,70,111,99,117,115,0,108,40,95,1,121,72,
		121,72,121,72,112,3,73,36,79,0,48,7,0,95,
		2,106,7,108,86,97,108,105,100,0,108,41,95,1,
		121,72,121,72,121,72,112,3,73,36,81,0,48,7,
		0,95,2,106,9,115,101,116,69,114,114,111,114,0,
		108,42,95,1,121,72,121,72,121,72,112,3,73,36,
		83,0,48,43,0,95,2,112,0,73,167,14,0,0,
		176,44,0,104,2,0,95,2,20,2,168,48,45,0,
		95,2,112,0,80,3,176,46,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		47,0,95,3,164,146,1,0,73,95,3,110,7,48,
		45,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,32,36,93,0,95,32,100,8,28,7,106,1,
		0,80,32,36,99,0,48,2,0,48,19,0,102,112,
		0,95,1,95,2,95,3,95,4,95,5,95,6,95,
		7,95,8,95,9,95,10,95,11,95,12,95,13,95,
		14,95,15,95,16,95,17,95,18,95,19,95,20,95,
		21,95,22,95,23,95,24,95,25,95,26,95,27,95,
		28,95,29,112,29,73,36,101,0,48,48,0,102,95,
		30,112,1,73,36,102,0,48,49,0,102,95,31,112,
		1,73,36,103,0,48,50,0,102,95,32,112,1,73,
		36,105,0,48,51,0,102,9,112,1,73,36,106,0,
		48,52,0,102,9,112,1,73,36,108,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_REDEFINE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,25,36,115,0,102,80,26,36,120,0,176,53,
		0,89,15,0,1,0,0,0,176,54,0,95,1,12,
		1,6,12,1,80,28,36,121,0,113,14,1,0,36,
		123,0,95,23,100,8,28,7,106,1,0,80,23,36,
		127,0,48,55,0,48,19,0,95,26,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,95,7,95,8,
		95,9,95,10,95,11,95,12,95,13,95,14,95,15,
		95,16,95,17,95,18,95,19,95,20,112,20,73,36,
		129,0,48,48,0,95,26,95,21,112,1,73,36,130,
		0,48,49,0,95,26,95,22,112,1,73,36,131,0,
		48,50,0,95,26,95,23,112,1,73,36,133,0,48,
		51,0,95,26,9,112,1,73,36,134,0,48,52,0,
		95,26,9,112,1,73,36,136,0,176,15,0,95,24,
		12,1,31,28,36,137,0,48,56,0,95,26,48,55,
		0,176,57,0,12,0,95,24,100,95,3,112,3,112,
		1,73,36,140,0,176,15,0,95,25,12,1,31,78,
		36,141,0,48,58,0,95,26,48,55,0,176,4,0,
		12,0,95,25,89,37,0,1,0,1,0,26,0,176,
		59,0,12,0,121,8,28,11,48,60,0,95,255,112,
		0,25,11,48,61,0,95,255,95,1,112,1,6,95,
		3,100,100,100,100,100,95,9,100,100,9,90,4,9,
		6,112,13,112,1,73,36,142,0,114,66,0,0,36,
		144,0,115,80,27,36,146,0,176,62,0,106,38,73,
		109,112,111,115,105,98,108,101,32,99,114,101,97,114,
		32,101,108,32,99,111,110,116,114,111,108,32,84,71,
		101,116,72,108,112,46,13,10,0,176,63,0,95,27,
		12,1,72,20,1,36,149,0,176,53,0,95,28,20,
		1,36,151,0,95,26,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_DISPLAY )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,155,0,102,80,1,36,157,0,176,15,
		0,48,64,0,95,1,112,0,12,1,32,152,0,176,
		15,0,48,65,0,95,1,112,0,12,1,29,137,0,
		36,159,0,48,66,0,95,1,48,2,0,176,67,0,
		12,0,121,48,68,0,95,1,112,0,48,69,0,95,
		1,112,0,92,4,72,49,100,100,48,64,0,95,1,
		112,0,100,120,95,1,89,17,0,0,0,1,0,1,
		0,48,70,0,95,255,112,0,6,100,100,100,100,100,
		100,100,120,112,17,112,1,73,36,160,0,48,71,0,
		48,65,0,95,1,112,0,120,112,1,73,36,162,0,
		176,72,0,48,73,0,95,1,112,0,93,211,0,176,
		74,0,122,92,2,12,2,176,75,0,121,48,69,0,
		95,1,112,0,12,2,20,4,36,166,0,48,76,0,
		48,19,0,95,1,112,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		36,172,0,48,65,0,102,112,0,100,69,28,17,36,
		173,0,48,77,0,48,65,0,102,112,0,112,0,73,
		36,176,0,48,28,0,102,112,0,100,69,28,17,36,
		177,0,48,77,0,48,28,0,102,112,0,112,0,73,
		36,180,0,48,30,0,102,112,0,100,69,28,17,36,
		181,0,48,77,0,48,30,0,102,112,0,112,0,73,
		36,184,0,48,78,0,48,19,0,102,112,0,112,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_KEYCHAR )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,36,192,0,176,79,0,95,1,12,1,80,
		6,36,194,0,95,1,92,27,8,28,27,36,195,0,
		48,80,0,48,81,0,102,112,0,95,1,95,2,112,
		2,73,36,196,0,122,110,7,36,199,0,176,15,0,
		48,82,0,102,112,0,12,1,31,38,106,3,64,33,
		0,48,82,0,102,112,0,24,28,24,36,200,0,176,
		83,0,176,84,0,176,85,0,95,1,12,1,12,1,
		12,1,80,1,36,203,0,95,6,100,69,28,48,176,
		86,0,95,2,97,0,0,0,1,12,2,28,34,36,
		204,0,48,17,0,95,6,176,87,0,92,4,12,1,
		176,88,0,92,4,12,1,102,112,3,73,36,205,0,
		121,110,7,36,208,0,48,89,0,102,112,0,28,33,
		36,209,0,95,1,92,27,8,28,17,36,210,0,48,
		77,0,48,81,0,102,112,0,112,0,73,36,212,0,
		121,110,7,36,216,0,95,1,92,43,8,28,25,48,
		90,0,102,112,0,100,69,28,15,36,217,0,48,70,
		0,102,112,0,73,26,219,3,36,219,0,95,1,92,
		42,8,28,25,48,27,0,102,112,0,100,69,28,15,
		36,220,0,48,91,0,102,112,0,73,26,186,3,36,
		222,0,95,1,92,8,8,28,8,36,223,0,121,110,
		7,36,225,0,95,1,92,9,8,29,245,0,176,92,
		0,92,16,12,1,29,235,0,36,226,0,48,93,0,
		102,112,0,100,69,29,132,0,36,227,0,48,17,0,
		48,93,0,102,112,0,95,1,95,2,102,112,3,80,
		5,36,228,0,176,94,0,95,5,12,1,106,2,76,
		0,8,29,176,0,95,5,29,171,0,36,229,0,176,
		84,0,48,95,0,48,81,0,102,112,0,112,0,12,
		1,106,10,84,67,79,77,66,79,66,79,88,0,8,
		28,30,36,230,0,48,96,0,48,81,0,48,81,0,
		102,112,0,112,0,48,73,0,102,112,0,112,1,73,
		25,108,36,232,0,48,96,0,48,81,0,102,112,0,
		48,73,0,102,112,0,112,1,73,25,85,36,236,0,
		176,84,0,48,95,0,48,81,0,102,112,0,112,0,
		12,1,106,10,84,67,79,77,66,79,66,79,88,0,
		8,28,30,36,237,0,48,96,0,48,81,0,48,81,
		0,102,112,0,112,0,48,73,0,102,112,0,112,1,
		73,25,23,36,239,0,48,96,0,48,81,0,102,112,
		0,48,73,0,102,112,0,112,1,73,36,242,0,121,
		110,7,36,244,0,95,1,92,9,8,31,10,95,1,
		92,13,8,29,190,0,36,245,0,48,93,0,102,112,
		0,100,69,28,120,48,97,0,48,22,0,102,112,0,
		112,0,31,42,48,98,0,48,22,0,102,112,0,112,
		0,100,69,28,92,48,99,0,48,22,0,102,112,0,
		112,0,48,100,0,48,22,0,102,112,0,112,0,69,
		28,67,36,246,0,48,17,0,48,93,0,102,112,0,
		95,1,95,2,102,112,3,80,5,36,247,0,176,94,
		0,95,5,12,1,106,2,76,0,8,28,50,95,5,
		28,46,36,248,0,48,101,0,48,81,0,102,112,0,
		48,73,0,102,112,0,112,1,73,25,23,36,251,0,
		48,101,0,48,81,0,102,112,0,48,73,0,102,112,
		0,112,1,73,36,255,0,95,1,92,13,8,28,21,
		36,0,1,48,80,0,48,19,0,102,112,0,95,1,
		95,2,112,2,73,36,4,1,121,110,7,36,6,1,
		95,1,92,32,16,29,193,1,95,1,93,0,1,35,
		29,184,1,36,10,1,48,98,0,48,22,0,102,112,
		0,112,0,100,8,28,8,36,11,1,121,110,7,36,
		15,1,48,102,0,102,96,4,0,96,3,0,112,2,
		73,36,19,1,95,3,95,4,69,28,26,36,20,1,
		48,103,0,102,95,4,95,3,112,2,73,36,21,1,
		48,104,0,102,112,0,73,36,25,1,48,105,0,48,
		22,0,102,112,0,112,0,106,2,78,0,8,28,47,
		176,85,0,95,1,12,1,106,2,46,0,8,31,16,
		176,85,0,95,1,12,1,106,2,44,0,8,28,19,
		36,26,1,48,106,0,48,22,0,102,112,0,112,0,
		73,25,60,36,28,1,176,107,0,92,29,12,1,28,
		26,36,29,1,48,108,0,48,22,0,102,112,0,176,
		85,0,95,1,12,1,112,1,73,25,24,36,31,1,
		48,109,0,48,22,0,102,112,0,176,85,0,95,1,
		12,1,112,1,73,36,35,1,48,110,0,48,22,0,
		102,112,0,112,0,28,22,36,36,1,176,107,0,92,
		26,12,1,28,10,36,37,1,176,111,0,20,0,36,
		41,1,48,104,0,102,112,0,73,36,43,1,48,112,
		0,48,22,0,102,112,0,112,0,28,74,36,44,1,
		176,107,0,92,27,12,1,31,42,36,45,1,48,113,
		0,48,81,0,102,112,0,92,13,112,1,73,36,46,
		1,48,101,0,48,81,0,102,112,0,48,73,0,102,
		112,0,112,1,73,25,22,36,48,1,176,107,0,92,
		26,12,1,28,10,36,49,1,176,111,0,20,0,36,
		54,1,48,114,0,48,22,0,102,112,0,112,0,73,
		36,56,1,48,93,0,102,112,0,100,69,28,50,36,
		57,1,48,17,0,48,93,0,102,112,0,95,1,95,
		2,102,112,3,80,5,36,58,1,176,94,0,95,5,
		12,1,106,2,76,0,8,28,12,95,5,31,8,36,
		59,1,121,110,7,36,63,1,48,17,0,48,115,0,
		102,112,0,102,48,98,0,48,22,0,102,112,0,112,
		0,112,2,73,25,22,36,66,1,48,80,0,48,19,
		0,102,112,0,95,1,95,2,112,2,110,7,36,70,
		1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_EVALHELP )
{
	static const HB_BYTE pcode[] =
	{
		36,76,1,176,94,0,48,116,0,102,112,0,12,1,
		106,2,66,0,8,28,29,36,77,1,48,117,0,102,
		48,116,0,102,112,0,112,1,73,36,78,1,48,118,
		0,102,100,112,1,73,36,81,1,176,94,0,48,119,
		0,102,112,0,12,1,106,2,66,0,8,28,29,36,
		82,1,48,120,0,102,48,119,0,102,112,0,112,1,
		73,36,83,1,48,121,0,102,100,112,1,73,36,86,
		1,176,94,0,48,90,0,102,112,0,12,1,106,2,
		66,0,8,28,18,36,87,1,48,17,0,48,90,0,
		102,112,0,102,112,1,73,36,90,1,176,94,0,48,
		122,0,102,112,0,12,1,106,2,66,0,8,28,29,
		36,91,1,48,118,0,102,48,122,0,102,112,0,112,
		1,73,36,92,1,48,117,0,102,100,112,1,73,36,
		95,1,176,94,0,48,123,0,102,112,0,12,1,106,
		2,66,0,8,28,29,36,96,1,48,121,0,102,48,
		123,0,102,112,0,112,1,73,36,97,1,48,120,0,
		102,100,112,1,73,36,100,1,176,94,0,48,116,0,
		102,112,0,12,1,106,2,66,0,8,28,17,36,101,
		1,48,17,0,48,116,0,102,112,0,112,0,73,36,
		104,1,176,94,0,48,119,0,102,112,0,12,1,106,
		2,66,0,8,28,17,36,105,1,48,17,0,48,119,
		0,102,112,0,112,0,73,36,108,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_HARDENABLE )
{
	static const HB_BYTE pcode[] =
	{
		36,114,1,48,124,0,102,48,125,0,102,112,0,112,
		1,73,36,116,1,48,126,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_HARDDISABLE )
{
	static const HB_BYTE pcode[] =
	{
		36,122,1,48,127,0,102,48,128,0,102,112,0,112,
		1,73,36,123,1,48,124,0,102,90,4,9,6,112,
		1,73,36,125,1,48,129,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_GOTFOCUS )
{
	static const HB_BYTE pcode[] =
	{
		36,131,1,48,130,0,102,120,112,1,73,36,137,1,
		176,15,0,48,82,0,102,112,0,12,1,31,53,48,
		105,0,48,22,0,102,112,0,112,0,106,2,78,0,
		8,28,35,36,138,1,48,21,0,48,22,0,102,112,
		0,176,131,0,48,82,0,102,112,0,106,2,44,0,
		106,1,0,12,3,112,1,73,36,141,1,48,132,0,
		102,112,0,32,254,0,36,142,1,48,133,0,48,22,
		0,102,112,0,112,0,73,36,143,1,48,134,0,48,
		22,0,102,112,0,112,0,73,36,144,1,176,84,0,
		48,95,0,48,81,0,102,112,0,112,0,12,1,106,
		10,84,67,79,77,66,79,66,79,88,0,8,28,28,
		36,145,1,48,135,0,48,22,0,102,112,0,48,100,
		0,48,22,0,102,112,0,112,0,112,1,73,36,147,
		1,48,136,0,102,112,0,73,36,148,1,48,105,0,
		48,22,0,102,112,0,112,0,106,3,68,78,0,24,
		28,13,36,149,1,48,137,0,102,122,112,1,73,36,
		151,1,48,138,0,48,22,0,102,112,0,48,139,0,
		102,112,0,112,1,73,36,152,1,48,25,0,102,48,
		139,0,102,112,0,112,1,73,36,153,1,176,140,0,
		48,141,0,102,112,0,48,73,0,102,112,0,92,7,
		20,3,36,154,1,176,107,0,92,29,12,1,28,63,
		36,155,1,176,142,0,20,0,36,156,1,176,143,0,
		48,73,0,102,112,0,121,92,6,48,144,0,102,112,
		0,20,4,36,157,1,176,145,0,48,73,0,102,112,
		0,20,1,25,16,36,160,1,176,146,0,48,73,0,
		102,112,0,20,1,36,167,1,48,105,0,48,22,0,
		102,112,0,112,0,106,2,67,0,8,28,36,36,168,
		1,48,147,0,102,121,176,148,0,176,149,0,48,150,
		0,48,22,0,102,112,0,112,0,12,1,12,1,112,
		2,73,25,12,36,170,1,48,151,0,102,112,0,73,
		36,175,1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_GETDLGCODE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,181,1,176,148,0,48,152,0,48,81,
		0,102,112,0,112,0,12,1,122,8,28,9,36,182,
		1,92,4,110,7,36,185,1,48,113,0,48,81,0,
		102,112,0,95,1,112,1,73,36,187,1,92,4,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_LOSTFOCUS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,193,1,48,153,0,48,19,0,102,112,
		0,95,1,112,1,73,36,195,1,48,154,0,102,112,
		0,31,71,36,196,1,48,98,0,48,22,0,102,112,
		0,112,0,176,155,0,48,73,0,102,112,0,12,1,
		69,28,43,36,197,1,48,135,0,48,22,0,102,112,
		0,176,155,0,48,73,0,102,112,0,12,1,112,1,
		73,36,198,1,48,114,0,48,22,0,102,112,0,112,
		0,73,36,202,1,176,15,0,48,82,0,102,112,0,
		12,1,31,86,48,105,0,48,22,0,102,112,0,112,
		0,106,2,78,0,8,28,68,36,203,1,48,114,0,
		48,22,0,102,112,0,112,0,73,36,204,1,48,21,
		0,48,22,0,102,112,0,48,82,0,102,112,0,112,
		1,73,36,205,1,48,156,0,48,22,0,102,112,0,
		112,0,73,36,206,1,48,133,0,48,22,0,102,112,
		0,112,0,73,36,209,1,48,134,0,48,22,0,102,
		112,0,112,0,73,36,211,1,48,157,0,48,22,0,
		102,112,0,112,0,31,78,48,89,0,102,112,0,31,
		70,48,97,0,48,22,0,102,112,0,112,0,31,27,
		48,99,0,48,22,0,102,112,0,112,0,48,100,0,
		48,22,0,102,112,0,112,0,69,28,32,36,212,1,
		48,114,0,48,22,0,102,112,0,112,0,73,36,213,
		1,48,156,0,48,22,0,102,112,0,112,0,73,36,
		216,1,48,136,0,102,112,0,73,36,218,1,48,157,
		0,48,22,0,102,112,0,112,0,31,19,36,219,1,
		48,133,0,48,22,0,102,112,0,112,0,73,25,45,
		36,221,1,48,138,0,48,22,0,102,112,0,122,112,
		1,73,36,222,1,48,137,0,102,122,112,1,73,36,
		224,1,48,158,0,48,22,0,102,112,0,9,112,1,
		73,36,228,1,48,159,0,102,112,0,28,13,36,229,
		1,48,52,0,102,120,112,1,73,36,232,1,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_LVALID )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,238,1,120,80,1,36,240,1,48,160,
		0,102,112,0,73,36,242,1,48,157,0,48,22,0,
		102,112,0,112,0,28,46,36,243,1,48,133,0,48,
		22,0,102,112,0,112,0,73,36,244,1,48,134,0,
		48,22,0,102,112,0,112,0,73,36,245,1,176,111,
		0,20,0,36,246,1,9,110,7,36,249,1,48,114,
		0,48,22,0,102,112,0,112,0,73,36,251,1,176,
		161,0,48,119,0,102,112,0,12,1,28,59,36,253,
		1,48,17,0,48,119,0,102,112,0,102,112,1,80,
		1,36,254,1,176,162,0,95,1,12,1,28,24,95,
		1,31,20,36,255,1,48,113,0,48,81,0,102,112,
		0,121,112,1,73,25,8,36,1,2,120,80,1,36,
		6,2,48,163,0,102,112,0,73,36,8,2,95,1,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGETHLP_SETERROR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,14,2,48,164,0,102,95,1,112,1,
		73,36,16,2,176,15,0,48,165,0,102,112,0,12,
		1,31,24,36,17,2,48,166,0,102,97,255,255,255,
		0,97,255,102,102,0,112,2,73,25,18,36,19,2,
		48,166,0,102,121,97,255,255,255,0,112,2,73,36,
		22,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,169,0,2,0,116,169,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

