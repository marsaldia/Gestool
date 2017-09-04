/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\SQLNavigatorView.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SQLNAVIGATORVIEW );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_NEW );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ACTIVATE );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_END );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATETOPWEBBAR );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATETREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDIMAGETREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDSEARCHBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDAPPENDBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDDUPLICATEBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDEDITBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDZOOMBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDDELETEBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDSALIRBUTTONTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCLICKTREEMENU );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATEBROWSE );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_GENERATECOLUMNSBROWSE );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDCOLUMNBROWSE );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATESPLITTERS );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ENABLEWINDOWSBAR );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCHANGECOMBO );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCLICKHEADERBROWSE );
HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCHANGESEARCH );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TIMAGELIST );
HB_FUNC_EXTERN( GETWNDRECT );
HB_FUNC_EXTERN( GETDESKTOPWINDOW );
HB_FUNC_EXTERN( OWNDBAR );
HB_FUNC_EXTERN( TMDICHILD );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( TWEBBAR );
HB_FUNC_EXTERN( SQLXBROWSE );
HB_FUNC_EXTERN( NOR );
HB_FUNC_EXTERN( HEVAL );
HB_FUNC_EXTERN( TSPLITTER );
HB_FUNC_EXTERN( TTREEVIEW );
HB_FUNC_EXTERN( NAND );
HB_FUNC_EXTERN( HB_ISCHAR );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( TBITMAP );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( CVALTOCHAR );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( MSGALERT );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SQLNAVIGATORVIEW )
{ "SQLNAVIGATORVIEW", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLNAVIGATORVIEW_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_NEW )}, NULL },
{ "SQLNAVIGATORVIEW_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ACTIVATE )}, NULL },
{ "SQLNAVIGATORVIEW_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_END )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HEXTRACOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETCOLUMNSFORNAVIGATOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETHEADERSFORNAVIGATOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLNAVIGATORVIEW_CREATETOPWEBBAR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_CREATETOPWEBBAR )}, NULL },
{ "SQLNAVIGATORVIEW_CREATETREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_CREATETREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDIMAGETREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDIMAGETREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDBUTTONTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDSEARCHBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDSEARCHBUTTONTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDAPPENDBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDAPPENDBUTTONTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDDUPLICATEBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDDUPLICATEBUTTONTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDEDITBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDEDITBUTTONTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDZOOMBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDZOOMBUTTONTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDDELETEBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDDELETEBUTTONTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_ADDSALIRBUTTONTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDSALIRBUTTONTREEMENU )}, NULL },
{ "ADDSEARCHBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDAPPENDBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDDUPLICATEBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDEDITBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDZOOMBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDDELETEBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGENERALBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDSALIRBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXPAND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBUTTONMAINTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLNAVIGATORVIEW_ONCLICKTREEMENU", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ONCLICKTREEMENU )}, NULL },
{ "SQLNAVIGATORVIEW_CREATEBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_CREATEBROWSE )}, NULL },
{ "SQLNAVIGATORVIEW_GENERATECOLUMNSBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_GENERATECOLUMNSBROWSE )}, NULL },
{ "SQLNAVIGATORVIEW_ADDCOLUMNBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ADDCOLUMNBROWSE )}, NULL },
{ "CREATEFROMCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLNAVIGATORVIEW_CREATESPLITTERS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_CREATESPLITTERS )}, NULL },
{ "SQLNAVIGATORVIEW_ENABLEWINDOWSBAR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ENABLEWINDOWSBAR )}, NULL },
{ "SQLNAVIGATORVIEW_ONCHANGECOMBO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ONCHANGECOMBO )}, NULL },
{ "SQLNAVIGATORVIEW_ONCLICKHEADERBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ONCLICKHEADERBROWSE )}, NULL },
{ "SQLNAVIGATORVIEW_ONCHANGESEARCH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLNAVIGATORVIEW_ONCHANGESEARCH )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OIMAGELISTTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIMAGELIST", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIMAGELIST )}, NULL },
{ "_ARECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETWNDRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETWNDRECT )}, NULL },
{ "GETDESKTOPWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETDESKTOPWINDOW )}, NULL },
{ "_OWINDOWSBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWNDBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWNDBAR )}, NULL },
{ "_OMDICHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TMDICHILD", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMDICHILD )}, NULL },
{ "ARECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "CREATETOPWEBBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATETREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDAUTOBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GENERATECOLUMNSBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFROMCODEBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATESPLITTERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMDICHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOMBOBOXCHANGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWINDOWSBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONCHANGECOMBO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETGETCHANGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONCHANGESEARCH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLEWINDOWSBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OIMAGELISTTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTOPWEBBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OTOPWEBBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TWEBBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TWEBBAR )}, NULL },
{ "SAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLXBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLXBROWSE )}, NULL },
{ "_NSTYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOR )}, NULL },
{ "_L2007", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LRECORDSELECTOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LAUTOSORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LSORTDESCEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NMARQUEESTYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BCLRSTD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BCLRSEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BCLRSELFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RBUTTONDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BKEYCHAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONBROWSEKEYCHAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLEFT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NRIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLEFT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NBOTTOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBOTTOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETMODELCOLUMNSFORNAVIGATOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HEVAL )}, NULL },
{ "ADDCOLUMNBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSORTORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BLCLICKHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONCLICKHEADERBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BEDITVALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETEDITVALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OHORIZONTALSPLITTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSPLITTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSPLITTER )}, NULL },
{ "_LSTATIC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OHORIZONTALSPLITTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OVERTICALSPLITTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TTREEVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TTREEVIEW )}, NULL },
{ "SETIMAGELIST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETITEMHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ONCLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONCLICKTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBUTTONMAINTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDIMAGETREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( NAND )}, NULL },
{ "NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CARGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISCHAR )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "AFASTKEYTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBITMAP )}, NULL },
{ "_CRESNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMASKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ABITMAPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDBUTTONTREEMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEARCH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPLICATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZOOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSELECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "BACTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLEGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLECOMBOBOX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETMODELHEADERSFORNAVIGATOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCOMBOBOX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETCOLUMNHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VARGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLICKONHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECTCOLUMNORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESHCURRENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AITEMS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "CVALTOCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CVALTOCHAR )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "MSGALERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGALERT )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SQLNAVIGATORVIEW, ".\\.\\Prg\\SQLNavigatorView.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SQLNAVIGATORVIEW
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SQLNAVIGATORVIEW )
   #include "hbiniseg.h"
#endif

HB_FUNC( SQLNAVIGATORVIEW )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,192,0,36,11,0,103,2,0,100,8,
		29,114,8,176,1,0,104,2,0,12,1,29,103,8,
		166,41,8,0,122,80,1,48,2,0,176,3,0,12,
		0,106,17,83,81,76,78,97,118,105,103,97,116,111,
		114,86,105,101,119,0,108,4,4,1,0,108,0,112,
		3,80,2,36,13,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,12,111,67,111,110,116,
		114,111,108,108,101,114,0,4,1,0,9,112,5,73,
		36,15,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,10,111,77,100,105,67,104,105,108,
		100,0,4,1,0,9,112,5,73,36,17,0,48,5,
		0,95,2,100,100,95,1,121,72,121,72,121,72,106,
		6,97,82,101,99,116,0,4,1,0,9,112,5,73,
		36,19,0,48,6,0,95,2,106,4,78,101,119,0,
		108,7,95,1,121,72,121,72,121,72,112,3,73,36,
		21,0,48,6,0,95,2,106,9,65,99,116,105,118,
		97,116,101,0,108,8,95,1,121,72,121,72,121,72,
		112,3,73,36,23,0,48,6,0,95,2,106,4,69,
		110,100,0,108,9,95,1,121,72,121,72,121,72,112,
		3,73,36,27,0,48,10,0,95,2,106,9,103,101,
		116,77,111,100,101,108,0,89,20,0,1,0,0,0,
		48,11,0,48,12,0,95,1,112,0,112,0,6,95,
		1,121,72,121,72,121,72,112,3,73,36,28,0,48,
		10,0,95,2,106,16,103,101,116,77,111,100,101,108,
		67,111,108,117,109,110,115,0,89,37,0,1,0,0,
		0,176,13,0,48,11,0,95,1,112,0,12,1,31,
		16,48,14,0,48,11,0,95,1,112,0,112,0,25,
		3,100,6,95,1,121,72,121,72,121,72,112,3,73,
		36,29,0,48,10,0,95,2,106,21,103,101,116,77,
		111,100,101,108,69,120,116,114,97,67,111,108,117,109,
		110,115,0,89,37,0,1,0,0,0,176,13,0,48,
		11,0,95,1,112,0,12,1,31,16,48,15,0,48,
		11,0,95,1,112,0,112,0,25,3,100,6,95,1,
		121,72,121,72,121,72,112,3,73,36,31,0,48,10,
		0,95,2,106,28,103,101,116,77,111,100,101,108,67,
		111,108,117,109,110,115,70,111,114,78,97,118,105,103,
		97,116,111,114,0,89,37,0,1,0,0,0,176,13,
		0,48,11,0,95,1,112,0,12,1,31,16,48,16,
		0,48,11,0,95,1,112,0,112,0,25,3,100,6,
		95,1,121,72,121,72,121,72,112,3,73,36,32,0,
		48,10,0,95,2,106,28,103,101,116,77,111,100,101,
		108,72,101,97,100,101,114,115,70,111,114,78,97,118,
		105,103,97,116,111,114,0,89,37,0,1,0,0,0,
		176,13,0,48,11,0,95,1,112,0,12,1,31,16,
		48,17,0,48,11,0,95,1,112,0,112,0,25,3,
		100,6,95,1,121,72,121,72,121,72,112,3,73,36,
		36,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,11,111,84,111,112,87,101,98,66,97,
		114,0,4,1,0,9,112,5,73,36,38,0,48,6,
		0,95,2,106,16,67,114,101,97,116,101,84,111,112,
		87,101,98,66,97,114,0,108,18,95,1,121,72,121,
		72,121,72,112,3,73,36,42,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,10,111,84,
		114,101,101,77,101,110,117,0,4,1,0,9,112,5,
		73,36,43,0,48,5,0,95,2,100,100,95,1,121,
		72,121,72,121,72,106,19,111,73,109,97,103,101,76,
		105,115,116,84,114,101,101,77,101,110,117,0,4,1,
		0,9,112,5,73,36,44,0,48,5,0,95,2,100,
		100,95,1,121,72,121,72,121,72,106,20,111,66,117,
		116,116,111,110,77,97,105,110,84,114,101,101,77,101,
		110,117,0,4,1,0,9,112,5,73,36,45,0,48,
		5,0,95,2,100,4,0,0,95,1,121,72,121,72,
		121,72,106,17,97,70,97,115,116,75,101,121,84,114,
		101,101,77,101,110,117,0,4,1,0,9,112,5,73,
		36,47,0,48,6,0,95,2,106,15,67,114,101,97,
		116,101,84,114,101,101,77,101,110,117,0,108,19,95,
		1,121,72,121,72,121,72,112,3,73,36,49,0,48,
		6,0,95,2,106,17,65,100,100,73,109,97,103,101,
		84,114,101,101,77,101,110,117,0,108,20,95,1,121,
		72,121,72,121,72,112,3,73,36,51,0,48,6,0,
		95,2,106,18,65,100,100,66,117,116,116,111,110,84,
		114,101,101,77,101,110,117,0,108,21,95,1,121,72,
		121,72,121,72,112,3,73,36,53,0,48,6,0,95,
		2,106,24,65,100,100,83,101,97,114,99,104,66,117,
		116,116,111,110,84,114,101,101,77,101,110,117,0,108,
		22,95,1,121,72,121,72,121,72,112,3,73,36,54,
		0,48,6,0,95,2,106,24,65,100,100,65,112,112,
		101,110,100,66,117,116,116,111,110,84,114,101,101,77,
		101,110,117,0,108,23,95,1,121,72,121,72,121,72,
		112,3,73,36,55,0,48,6,0,95,2,106,27,65,
		100,100,68,117,112,108,105,99,97,116,101,66,117,116,
		116,111,110,84,114,101,101,77,101,110,117,0,108,24,
		95,1,121,72,121,72,121,72,112,3,73,36,56,0,
		48,6,0,95,2,106,22,65,100,100,69,100,105,116,
		66,117,116,116,111,110,84,114,101,101,77,101,110,117,
		0,108,25,95,1,121,72,121,72,121,72,112,3,73,
		36,57,0,48,6,0,95,2,106,22,65,100,100,90,
		111,111,109,66,117,116,116,111,110,84,114,101,101,77,
		101,110,117,0,108,26,95,1,121,72,121,72,121,72,
		112,3,73,36,58,0,48,6,0,95,2,106,24,65,
		100,100,68,101,108,101,116,101,66,117,116,116,111,110,
		84,114,101,101,77,101,110,117,0,108,27,95,1,121,
		72,121,72,121,72,112,3,73,36,59,0,48,6,0,
		95,2,106,23,65,100,100,83,97,108,105,114,66,117,
		116,116,111,110,84,114,101,101,77,101,110,117,0,108,
		28,95,1,121,72,121,72,121,72,112,3,73,36,66,
		0,48,10,0,95,2,106,25,65,100,100,71,101,110,
		101,114,97,108,66,117,116,116,111,110,84,114,101,101,
		77,101,110,117,0,89,55,0,1,0,0,0,48,29,
		0,95,1,112,0,73,48,30,0,95,1,112,0,73,
		48,31,0,95,1,112,0,73,48,32,0,95,1,112,
		0,73,48,33,0,95,1,112,0,73,48,34,0,95,
		1,112,0,6,95,1,121,72,121,72,121,72,112,3,
		73,36,70,0,48,10,0,95,2,106,22,65,100,100,
		65,117,116,111,66,117,116,116,111,110,84,114,101,101,
		77,101,110,117,0,89,36,0,1,0,0,0,48,35,
		0,95,1,112,0,73,48,36,0,95,1,112,0,73,
		48,37,0,48,38,0,95,1,112,0,112,0,6,95,
		1,121,72,121,72,121,72,112,3,73,36,72,0,48,
		6,0,95,2,106,16,111,110,67,108,105,99,107,84,
		114,101,101,77,101,110,117,0,108,39,95,1,121,72,
		121,72,121,72,112,3,73,36,76,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,8,111,
		66,114,111,119,115,101,0,4,1,0,9,112,5,73,
		36,78,0,48,6,0,95,2,106,13,67,114,101,97,
		116,101,66,114,111,119,115,101,0,108,40,95,1,121,
		72,121,72,121,72,112,3,73,36,80,0,48,6,0,
		95,2,106,22,71,101,110,101,114,97,116,101,67,111,
		108,117,109,110,115,66,114,111,119,115,101,0,108,41,
		95,1,121,72,121,72,121,72,112,3,73,36,82,0,
		48,6,0,95,2,106,16,65,100,100,67,111,108,117,
		109,110,66,114,111,119,115,101,0,108,42,95,1,121,
		72,121,72,121,72,112,3,73,36,84,0,48,10,0,
		95,2,106,21,67,114,101,97,116,101,70,114,111,109,
		67,111,100,101,66,114,111,119,115,101,0,89,20,0,
		1,0,0,0,48,43,0,48,44,0,95,1,112,0,
		112,0,6,95,1,121,72,121,72,121,72,112,3,73,
		36,88,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,18,111,86,101,114,116,105,99,97,
		108,83,112,108,105,116,116,101,114,0,4,1,0,9,
		112,5,73,36,89,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,20,111,72,111,114,105,
		122,111,110,116,97,108,83,112,108,105,116,116,101,114,
		0,4,1,0,9,112,5,73,36,91,0,48,6,0,
		95,2,106,16,67,114,101,97,116,101,83,112,108,105,
		116,116,101,114,115,0,108,45,95,1,121,72,121,72,
		121,72,112,3,73,36,95,0,48,5,0,95,2,100,
		100,95,1,121,72,121,72,121,72,106,12,111,87,105,
		110,100,111,119,115,66,97,114,0,4,1,0,9,112,
		5,73,36,97,0,48,6,0,95,2,106,17,69,110,
		97,98,108,101,87,105,110,100,111,119,115,66,97,114,
		0,108,46,95,1,121,72,121,72,121,72,112,3,73,
		36,101,0,48,6,0,95,2,106,14,111,110,67,104,
		97,110,103,101,67,111,109,98,111,0,108,47,95,1,
		121,72,121,72,121,72,112,3,73,36,103,0,48,6,
		0,95,2,106,20,111,110,67,108,105,99,107,72,101,
		97,100,101,114,66,114,111,119,115,101,0,108,48,95,
		1,121,72,121,72,121,72,112,3,73,36,105,0,48,
		6,0,95,2,106,15,111,110,67,104,97,110,103,101,
		83,101,97,114,99,104,0,108,49,95,1,121,72,121,
		72,121,72,112,3,73,36,107,0,48,50,0,95,2,
		112,0,73,167,14,0,0,176,51,0,104,2,0,95,
		2,20,2,168,48,52,0,95,2,112,0,80,3,176,
		53,0,95,3,106,10,73,110,105,116,67,108,97,115,
		115,0,12,2,28,12,48,54,0,95,3,164,146,1,
		0,73,95,3,110,7,48,52,0,103,2,0,112,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,113,0,48,55,0,102,95,1,112,1,
		73,36,115,0,48,56,0,102,48,2,0,176,57,0,
		12,0,92,16,92,16,112,2,112,1,73,36,117,0,
		48,58,0,102,176,59,0,176,60,0,12,0,12,1,
		112,1,73,36,119,0,48,61,0,102,176,62,0,12,
		0,112,1,73,36,121,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ACTIVATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,125,0,102,80,1,36,129,0,48,63,
		0,95,1,48,2,0,176,64,0,12,0,48,65,0,
		95,1,112,0,122,1,48,65,0,95,1,112,0,92,
		2,1,48,65,0,95,1,112,0,92,3,1,48,65,
		0,95,1,112,0,92,4,1,100,100,100,176,66,0,
		12,0,100,100,100,100,100,100,120,100,100,106,5,78,
		79,78,69,0,100,9,100,100,100,112,23,112,1,73,
		36,131,0,48,67,0,95,1,112,0,73,36,133,0,
		48,68,0,95,1,112,0,73,36,135,0,48,69,0,
		95,1,112,0,73,36,137,0,48,70,0,95,1,112,
		0,73,36,139,0,48,71,0,95,1,112,0,73,36,
		141,0,48,72,0,95,1,112,0,73,36,143,0,48,
		73,0,95,1,112,0,73,36,145,0,48,74,0,48,
		75,0,95,1,112,0,112,0,73,36,149,0,48,76,
		0,48,77,0,95,1,112,0,89,17,0,0,0,1,
		0,1,0,48,78,0,95,255,112,0,6,112,1,73,
		36,151,0,48,79,0,48,77,0,95,1,112,0,89,
		17,0,0,0,1,0,1,0,48,80,0,95,255,112,
		0,6,112,1,73,36,153,0,48,81,0,95,1,112,
		0,73,36,155,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_END )
{
	static const HB_BYTE pcode[] =
	{
		36,161,0,176,13,0,48,82,0,102,112,0,12,1,
		31,17,36,162,0,48,83,0,48,82,0,102,112,0,
		112,0,73,36,165,0,176,13,0,48,84,0,102,112,
		0,12,1,31,17,36,166,0,48,83,0,48,84,0,
		102,112,0,112,0,73,36,169,0,176,13,0,48,44,
		0,102,112,0,12,1,31,17,36,170,0,48,83,0,
		48,44,0,102,112,0,112,0,73,36,173,0,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATETOPWEBBAR )
{
	static const HB_BYTE pcode[] =
	{
		36,179,0,48,85,0,102,48,2,0,176,86,0,12,
		0,121,93,250,0,48,65,0,102,112,0,92,4,1,
		93,250,0,49,92,76,100,100,100,97,255,255,255,0,
		97,238,110,115,0,100,100,100,100,100,48,75,0,102,
		112,0,112,15,112,1,73,36,181,0,48,87,0,48,
		84,0,102,112,0,121,92,11,48,88,0,48,12,0,
		102,112,0,112,0,112,3,73,36,183,0,48,84,0,
		102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATEBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,187,0,102,80,1,36,189,0,48,89,
		0,95,1,48,2,0,176,90,0,12,0,48,75,0,
		95,1,112,0,112,1,112,1,73,36,190,0,48,91,
		0,48,44,0,95,1,112,0,176,92,0,97,0,0,
		0,64,97,0,0,0,16,97,0,0,1,0,12,3,
		112,1,73,36,191,0,48,93,0,48,44,0,95,1,
		112,0,9,112,1,73,36,193,0,48,94,0,48,44,
		0,95,1,112,0,9,112,1,73,36,194,0,48,95,
		0,48,44,0,95,1,112,0,120,112,1,73,36,195,
		0,48,96,0,48,44,0,95,1,112,0,9,112,1,
		73,36,199,0,48,97,0,48,44,0,95,1,112,0,
		92,6,112,1,73,36,201,0,48,98,0,48,44,0,
		95,1,112,0,90,12,121,97,255,255,255,0,4,2,
		0,6,112,1,73,36,202,0,48,99,0,48,44,0,
		95,1,112,0,90,12,121,97,229,229,229,0,4,2,
		0,6,112,1,73,36,203,0,48,100,0,48,44,0,
		95,1,112,0,90,12,121,97,167,205,240,0,4,2,
		0,6,112,1,73,36,205,0,48,101,0,48,44,0,
		95,1,112,0,89,23,0,3,0,1,0,1,0,48,
		102,0,95,255,95,1,95,2,95,3,112,3,6,112,
		1,73,36,207,0,48,103,0,48,44,0,95,1,112,
		0,48,104,0,48,12,0,95,1,112,0,112,0,112,
		1,73,36,209,0,48,105,0,48,44,0,95,1,112,
		0,89,19,0,1,0,1,0,1,0,48,106,0,95,
		255,95,1,112,1,6,112,1,73,36,213,0,48,107,
		0,48,44,0,95,1,112,0,92,77,112,1,73,36,
		215,0,48,108,0,48,44,0,95,1,112,0,93,251,
		0,112,1,73,36,216,0,48,109,0,48,44,0,95,
		1,112,0,48,110,0,48,75,0,95,1,112,0,112,
		0,48,111,0,48,75,0,95,1,112,0,112,0,49,
		112,1,73,36,217,0,48,112,0,48,44,0,95,1,
		112,0,48,113,0,48,75,0,95,1,112,0,112,0,
		48,114,0,48,75,0,95,1,112,0,112,0,49,112,
		1,73,36,219,0,48,44,0,95,1,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_GENERATECOLUMNSBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,223,0,102,80,1,36,225,0,48,115,
		0,95,1,112,0,80,2,36,227,0,176,13,0,95,
		2,12,1,28,9,36,228,0,95,1,110,7,36,231,
		0,176,116,0,95,2,89,21,0,2,0,1,0,1,
		0,48,117,0,95,255,95,1,95,2,112,2,6,20,
		2,36,233,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDCOLUMNBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,237,0,102,80,3,36,239,0,48,118,
		0,48,44,0,95,3,112,0,112,0,143,36,240,0,
		144,119,0,95,1,112,1,73,36,241,0,144,120,0,
		95,2,106,7,104,101,97,100,101,114,0,1,112,1,
		73,36,242,0,144,121,0,95,2,106,6,119,105,100,
		116,104,0,1,112,1,73,36,243,0,144,122,0,89,
		19,0,4,0,1,0,3,0,48,123,0,95,255,95,
		4,112,1,6,112,1,73,36,244,0,144,124,0,48,
		125,0,48,11,0,95,3,112,0,95,1,112,1,112,
		1,73,145,36,247,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATESPLITTERS )
{
	static const HB_BYTE pcode[] =
	{
		36,3,1,48,126,0,102,48,2,0,176,127,0,12,
		0,92,76,93,250,0,9,48,84,0,102,112,0,4,
		1,0,120,48,44,0,102,112,0,4,1,0,120,90,
		4,121,6,90,4,121,6,48,75,0,102,112,0,100,
		48,65,0,102,112,0,92,4,1,122,120,120,97,255,
		255,255,0,9,9,9,100,100,112,21,112,1,73,36,
		4,1,48,128,0,48,129,0,102,112,0,120,112,1,
		73,36,10,1,48,130,0,102,48,2,0,176,127,0,
		12,0,121,93,250,0,120,48,131,0,102,112,0,4,
		1,0,120,48,84,0,102,112,0,48,129,0,102,112,
		0,48,44,0,102,112,0,4,3,0,120,90,4,121,
		6,90,4,121,6,48,75,0,102,112,0,100,122,48,
		65,0,102,112,0,92,3,1,92,76,49,120,120,100,
		9,120,120,112,19,112,1,73,36,13,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_CREATETREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,17,1,102,80,1,36,19,1,48,132,
		0,95,1,48,2,0,176,133,0,12,0,121,121,48,
		75,0,95,1,112,0,100,100,120,9,93,250,0,48,
		65,0,95,1,112,0,92,3,1,92,76,49,112,9,
		112,1,73,36,21,1,48,134,0,48,131,0,95,1,
		112,0,48,82,0,95,1,112,0,112,1,73,36,23,
		1,48,135,0,48,131,0,95,1,112,0,92,20,112,
		1,73,36,25,1,48,136,0,48,131,0,95,1,112,
		0,89,17,0,0,0,1,0,1,0,48,137,0,95,
		255,112,0,6,112,1,73,36,27,1,176,13,0,48,
		138,0,48,12,0,95,1,112,0,112,0,12,1,31,
		56,36,28,1,48,139,0,95,1,48,140,0,48,131,
		0,95,1,112,0,48,88,0,48,12,0,95,1,112,
		0,112,0,48,141,0,95,1,48,138,0,48,12,0,
		95,1,112,0,112,0,112,1,112,2,112,1,73,36,
		31,1,48,131,0,95,1,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,7,36,39,1,95,6,100,8,28,10,48,38,
		0,102,112,0,80,6,36,40,1,95,7,100,8,28,
		5,9,80,7,36,44,1,176,13,0,95,1,12,1,
		28,8,36,45,1,100,110,7,36,50,1,95,5,100,
		69,28,30,176,142,0,48,143,0,48,12,0,102,112,
		0,112,0,95,5,12,2,121,8,28,8,36,51,1,
		100,110,7,36,54,1,48,140,0,95,6,95,1,48,
		141,0,102,95,2,112,1,95,3,112,3,80,8,36,
		55,1,48,144,0,95,8,95,7,112,1,73,36,57,
		1,176,145,0,95,4,12,1,28,23,36,58,1,176,
		146,0,48,147,0,102,112,0,95,4,95,3,4,2,
		0,20,2,36,61,1,95,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDIMAGETREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,68,1,121,80,3,36,70,1,176,13,
		0,95,1,12,1,28,9,36,71,1,95,3,110,7,
		36,74,1,48,148,0,176,149,0,12,0,95,1,112,
		1,80,2,36,75,1,48,150,0,95,2,95,1,112,
		1,73,36,77,1,48,151,0,48,82,0,102,112,0,
		95,2,97,255,0,255,0,112,2,73,36,79,1,176,
		152,0,48,153,0,48,82,0,102,112,0,112,0,12,
		1,122,49,80,3,36,81,1,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDSEARCHBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,85,1,102,80,1,36,87,1,48,154,
		0,95,1,106,7,66,117,115,99,97,114,0,106,6,
		66,117,115,49,54,0,89,22,0,0,0,1,0,1,
		0,48,155,0,48,12,0,95,255,112,0,112,0,6,
		106,2,66,0,112,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDAPPENDBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,89,1,102,80,1,36,91,1,48,154,
		0,95,1,106,7,65,241,97,100,105,114,0,106,6,
		78,101,119,49,54,0,89,22,0,0,0,1,0,1,
		0,48,156,0,48,12,0,95,255,112,0,112,0,6,
		106,2,65,0,92,2,112,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDDUPLICATEBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,93,1,102,80,1,36,95,1,48,154,
		0,95,1,106,9,68,117,112,108,105,99,97,114,0,
		106,6,68,117,112,49,54,0,89,22,0,0,0,1,
		0,1,0,48,157,0,48,12,0,95,255,112,0,112,
		0,6,106,2,68,0,92,2,112,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDEDITBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,97,1,102,80,1,36,99,1,48,154,
		0,95,1,106,10,77,111,100,105,102,105,99,97,114,
		0,106,7,69,100,105,116,49,54,0,89,22,0,0,
		0,1,0,1,0,48,158,0,48,12,0,95,255,112,
		0,112,0,6,106,2,77,0,92,4,112,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDZOOMBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,101,1,102,80,1,36,103,1,48,154,
		0,95,1,106,5,90,111,111,109,0,106,7,90,111,
		111,109,49,54,0,89,22,0,0,0,1,0,1,0,
		48,159,0,48,12,0,95,255,112,0,112,0,6,106,
		2,90,0,92,8,112,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDDELETEBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,105,1,102,80,1,36,107,1,48,154,
		0,95,1,106,9,69,108,105,109,105,110,97,114,0,
		106,6,68,101,108,49,54,0,89,22,0,0,0,1,
		0,1,0,48,160,0,48,12,0,95,255,112,0,112,
		0,6,106,2,69,0,92,16,112,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ADDSALIRBUTTONTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,109,1,102,80,1,36,111,1,48,154,
		0,95,1,106,6,83,97,108,105,114,0,106,6,69,
		110,100,49,54,0,89,22,0,0,0,1,0,1,0,
		48,161,0,48,12,0,95,255,112,0,112,0,6,106,
		2,83,0,112,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCLICKTREEMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,117,1,48,162,0,48,131,0,102,112,
		0,112,0,80,1,36,119,1,176,13,0,95,1,12,
		1,28,8,36,120,1,100,110,7,36,123,1,48,163,
		0,95,1,112,0,106,8,84,84,86,73,84,69,77,
		0,69,28,8,36,124,1,100,110,7,36,127,1,176,
		164,0,48,165,0,95,1,112,0,12,1,31,8,36,
		128,1,100,110,7,36,131,1,48,166,0,48,165,0,
		95,1,112,0,112,0,73,36,133,1,48,167,0,48,
		131,0,102,112,0,48,38,0,102,112,0,112,1,73,
		36,135,1,48,168,0,48,44,0,102,112,0,112,0,
		73,36,137,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ENABLEWINDOWSBAR )
{
	static const HB_BYTE pcode[] =
	{
		36,143,1,176,13,0,48,77,0,102,112,0,12,1,
		28,8,36,144,1,102,110,7,36,147,1,48,169,0,
		48,77,0,102,112,0,112,0,73,36,149,1,48,170,
		0,48,77,0,102,112,0,48,171,0,102,112,0,112,
		1,73,36,151,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCHANGECOMBO )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,158,1,48,172,0,48,77,0,102,112,
		0,112,0,80,2,36,160,1,176,13,0,95,2,12,
		1,28,8,36,161,1,102,110,7,36,164,1,48,173,
		0,48,44,0,102,112,0,48,174,0,95,2,112,0,
		112,1,80,1,36,166,1,176,13,0,95,1,12,1,
		28,8,36,167,1,102,110,7,36,170,1,48,175,0,
		95,2,48,176,0,95,1,112,0,112,1,73,36,172,
		1,48,177,0,48,12,0,102,112,0,95,1,95,2,
		112,2,73,36,174,1,48,178,0,48,44,0,102,112,
		0,95,1,112,1,73,36,176,1,48,179,0,48,44,
		0,102,112,0,112,0,73,36,178,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCLICKHEADERBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,184,1,48,172,0,48,77,0,102,112,
		0,112,0,80,2,36,186,1,176,13,0,95,2,12,
		1,28,8,36,187,1,102,110,7,36,190,1,176,13,
		0,95,1,12,1,28,8,36,191,1,102,110,7,36,
		194,1,176,180,0,48,181,0,95,2,112,0,48,176,
		0,95,1,112,0,12,2,121,8,28,8,36,195,1,
		102,110,7,36,198,1,48,175,0,95,2,48,176,0,
		95,1,112,0,112,1,73,36,200,1,48,78,0,102,
		112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLNAVIGATORVIEW_ONCHANGESEARCH )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,207,1,120,80,2,36,208,1,48,182,
		0,48,77,0,102,112,0,112,0,80,3,36,210,1,
		176,13,0,95,3,12,1,28,8,36,211,1,102,110,
		7,36,214,1,48,183,0,48,182,0,95,3,112,0,
		112,0,80,1,36,215,1,176,184,0,176,185,0,176,
		186,0,95,1,12,1,12,1,12,1,80,1,36,216,
		1,176,187,0,95,1,106,2,8,0,106,1,0,12,
		3,80,1,36,218,1,176,188,0,95,1,106,7,117,
		86,97,108,117,101,0,20,2,36,220,1,95,2,28,
		21,36,221,1,48,189,0,95,3,121,97,255,255,255,
		0,112,2,73,25,23,36,223,1,48,189,0,95,3,
		97,255,255,255,0,97,255,102,102,0,112,2,73,36,
		226,1,48,179,0,48,44,0,102,112,0,112,0,73,
		36,228,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,192,0,2,0,116,192,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

