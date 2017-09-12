/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Controllers\SQLBaseController.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SQLBASECONTROLLER );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( SQLBASECONTROLLER_NEW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_STATIC( SQLBASECONTROLLER_END );
HB_FUNC_EXTERN( HGET );
HB_FUNC_EXTERN( MSGALERT );
HB_FUNC_STATIC( SQLBASECONTROLLER_ACTIVATENAVIGATORVIEW );
HB_FUNC_STATIC( SQLBASECONTROLLER_ACTIVATEBROWSE );
HB_FUNC_EXTERN( NAND );
HB_FUNC_STATIC( SQLBASECONTROLLER_APPEND );
HB_FUNC_STATIC( SQLBASECONTROLLER_DUPLICATE );
HB_FUNC_STATIC( SQLBASECONTROLLER_EDIT );
HB_FUNC_STATIC( SQLBASECONTROLLER_ZOOM );
HB_FUNC_STATIC( SQLBASECONTROLLER_DELETE );
HB_FUNC_STATIC( SQLBASECONTROLLER_CHANGEMODELORDERANDORIENTATION );
HB_FUNC_STATIC( SQLBASECONTROLLER_ISVALIDGET );
HB_FUNC_STATIC( SQLBASECONTROLLER_ISVALIDCODIGO );
HB_FUNC_STATIC( SQLBASECONTROLLER_ASSIGNBROWSE );
HB_FUNC_STATIC( SQLBASECONTROLLER_STARTBROWSE );
HB_FUNC_STATIC( SQLBASECONTROLLER_RESTOREBROWSESTATE );
HB_FUNC_STATIC( SQLBASECONTROLLER_GETROWSET );
HB_FUNC_STATIC( SQLBASECONTROLLER_SETFASTREPORT );
HB_FUNC_STATIC( SQLBASECONTROLLER_EVALONEVENT );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( CONTROLLERCONTAINER );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( SYSREFRESH );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( OUSER );
HB_FUNC_EXTERN( MSGNOYES );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SQLBASECONTROLLER )
{ "SQLBASECONTROLLER", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_NEW )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OINSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OINSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_END )}, NULL },
{ "OMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOLUMNKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HEXTRACOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HGET )}, NULL },
{ "MSGALERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGALERT )}, NULL },
{ "GETMODELBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OVALIDATOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALIDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_ACTIVATENAVIGATORVIEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_ACTIVATENAVIGATORVIEW )}, NULL },
{ "SQLBASECONTROLLER_ACTIVATEBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_ACTIVATEBROWSE )}, NULL },
{ "NAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( NAND )}, NULL },
{ "NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISUSERACCESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISUSERAPPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISUSERDUPLICATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISUSEREDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISUSERDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISUSERZOOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_APPEND", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_APPEND )}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_DUPLICATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_DUPLICATE )}, NULL },
{ "SQLBASECONTROLLER_EDIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_EDIT )}, NULL },
{ "SQLBASECONTROLLER_ZOOM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_ZOOM )}, NULL },
{ "SQLBASECONTROLLER_DELETE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_DELETE )}, NULL },
{ "GETROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_CHANGEMODELORDERANDORIENTATION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_CHANGEMODELORDERANDORIENTATION )}, NULL },
{ "FIND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_ISVALIDGET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_ISVALIDGET )}, NULL },
{ "SQLBASECONTROLLER_ISVALIDCODIGO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_ISVALIDCODIGO )}, NULL },
{ "GETIDFROMCODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_ASSIGNBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_ASSIGNBROWSE )}, NULL },
{ "SQLBASECONTROLLER_STARTBROWSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_STARTBROWSE )}, NULL },
{ "SQLBASECONTROLLER_RESTOREBROWSESTATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_RESTOREBROWSESTATE )}, NULL },
{ "SQLBASECONTROLLER_GETROWSET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_GETROWSET )}, NULL },
{ "SQLBASECONTROLLER_SETFASTREPORT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_SETFASTREPORT )}, NULL },
{ "GET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONTROLLERCONTAINER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASECONTROLLER_EVALONEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASECONTROLLER_EVALONEVENT )}, NULL },
{ "EVALONEVENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BONPREAPPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BONPOSTAPPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CONTROLLERCONTAINER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONTROLLERCONTAINER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONTROLLERCONTAINER )}, NULL },
{ "ENDMODEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONAVIGATORVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTUSERACCESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "SYSREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SYSREFRESH )}, NULL },
{ "CLOSEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILDROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETHISTORYBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILDROWSETANDFIND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILDSQLBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODIALOGVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETFIELDFROMBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETOBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETITEMS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETCOLUMNHEADERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RESTOREBROWSESTATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETCOLUMNORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOLUMNORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECTCOLUMNORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CORIENTATION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETBROWSESTATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RESTORESTATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETIDTOFIND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VARGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATEBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVEIDTOFIND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOLUMNORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOLUMNORIENTATION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "NOTUSERAPPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVALONPREAPPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETAPPENDMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETROWSETRECNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOADBLANKBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INITAPPENDMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DIALOG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDAPPENDMODEPREINSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERTBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDAPPENDMODEPOSTINSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVALONPOSTAPPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CANCELAPPENDMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETROWSETRECNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTUSERDUPLICATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETDUPLICATEMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOADCURRENTBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INITDUPLICATEMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDDUPLICATEMODEPREINSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDDUPLICATEMODEPOSINSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CANCELDUPLICATEMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTUSEREDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETEDITMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETIDFROMROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INITEDITMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDEDITMODEPREUPDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPDATECURRENTBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDEDITMODEPOSUPDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CANCELEDITMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTUSERZOOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETZOOMMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INITZOOMMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTUSERDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "INITDELETEMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "LNOTCONFIRMDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OUSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( OUSER )}, NULL },
{ "MSGNOYES", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGNOYES )}, NULL },
{ "ENDDELETEMODEPREDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DELETESELECTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDDELETEMODEPOSDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXISTID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETTITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OHELPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETNAMEFROMID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXISTCODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETNAMEFROMCODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SERIALIZECOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETUSERDATASET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SQLBASECONTROLLER, ".\\Prg\\Controllers\\SQLBaseController.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SQLBASECONTROLLER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SQLBASECONTROLLER )
   #include "hbiniseg.h"
#endif

HB_FUNC( SQLBASECONTROLLER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,164,0,36,7,0,103,2,0,100,8,
		29,143,16,176,1,0,104,2,0,12,1,29,132,16,
		166,70,16,0,122,80,1,48,2,0,176,3,0,12,
		0,106,18,83,81,76,66,97,115,101,67,111,110,116,
		114,111,108,108,101,114,0,108,4,4,1,0,108,0,
		112,3,80,2,36,9,0,48,5,0,95,2,100,100,
		95,1,121,72,92,32,72,121,72,121,72,106,10,111,
		73,110,115,116,97,110,99,101,0,4,1,0,9,112,
		5,73,36,11,0,48,6,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,20,67,111,110,116,114,111,
		108,108,101,114,67,111,110,116,97,105,110,101,114,0,
		4,1,0,9,112,5,73,36,13,0,48,6,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,7,111,
		77,111,100,101,108,0,4,1,0,9,112,5,73,36,
		15,0,48,6,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,12,111,68,105,97,108,111,103,86,105,
		101,119,0,4,1,0,9,112,5,73,36,17,0,48,
		6,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,15,111,78,97,118,105,103,97,116,111,114,86,105,
		101,119,0,4,1,0,9,112,5,73,36,19,0,48,
		6,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,11,111,86,97,108,105,100,97,116,111,114,0,4,
		1,0,9,112,5,73,36,21,0,48,6,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,7,110,76,
		101,118,101,108,0,4,1,0,9,112,5,73,36,23,
		0,48,6,0,95,2,106,8,78,85,77,69,82,73,
		67,0,100,95,1,121,72,121,72,121,72,106,6,110,
		77,111,100,101,0,4,1,0,9,112,5,73,36,25,
		0,48,6,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,13,98,79,110,80,114,101,65,112,112,101,
		110,100,0,4,1,0,9,112,5,73,36,26,0,48,
		6,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,14,98,79,110,80,111,115,116,65,112,112,101,110,
		100,0,4,1,0,9,112,5,73,36,28,0,48,6,
		0,95,2,100,106,1,0,95,1,121,72,121,72,121,
		72,106,7,99,84,105,116,108,101,0,4,1,0,9,
		112,5,73,36,30,0,48,6,0,95,2,100,106,1,
		0,95,1,121,72,121,72,121,72,106,7,99,73,109,
		97,103,101,0,4,1,0,9,112,5,73,36,32,0,
		48,7,0,95,2,106,4,78,101,119,0,108,8,95,
		1,121,72,121,72,121,72,112,3,73,36,33,0,48,
		9,0,95,2,106,9,73,110,115,116,97,110,99,101,
		0,89,44,0,1,0,0,0,176,10,0,48,11,0,
		95,1,112,0,12,1,28,17,48,12,0,95,1,48,
		2,0,95,1,112,0,112,1,73,48,11,0,95,1,
		112,0,6,95,1,121,72,121,72,121,72,112,3,73,
		36,34,0,48,7,0,95,2,106,4,69,110,100,0,
		108,13,95,1,121,72,121,72,121,72,112,3,73,36,
		38,0,48,9,0,95,2,106,9,103,101,116,77,111,
		100,101,108,0,89,15,0,1,0,0,0,48,14,0,
		95,1,112,0,6,95,1,121,72,121,72,121,72,112,
		3,73,36,39,0,48,9,0,95,2,106,18,103,101,
		116,77,111,100,101,108,67,111,108,117,109,110,75,101,
		121,0,89,37,0,1,0,0,0,176,10,0,48,14,
		0,95,1,112,0,12,1,31,16,48,15,0,48,14,
		0,95,1,112,0,112,0,25,3,100,6,95,1,121,
		72,121,72,121,72,112,3,73,36,40,0,48,9,0,
		95,2,106,16,103,101,116,77,111,100,101,108,67,111,
		108,117,109,110,115,0,89,56,0,1,0,0,0,176,
		10,0,48,14,0,95,1,112,0,12,1,31,35,176,
		10,0,48,16,0,48,14,0,95,1,112,0,112,0,
		12,1,31,16,48,16,0,48,14,0,95,1,112,0,
		112,0,25,3,100,6,95,1,121,72,121,72,121,72,
		112,3,73,36,41,0,48,9,0,95,2,106,21,103,
		101,116,77,111,100,101,108,69,120,116,114,97,67,111,
		108,117,109,110,115,0,89,56,0,1,0,0,0,176,
		10,0,48,14,0,95,1,112,0,12,1,31,35,176,
		10,0,48,17,0,48,14,0,95,1,112,0,112,0,
		12,1,31,16,48,17,0,48,14,0,95,1,112,0,
		112,0,25,3,100,6,95,1,121,72,121,72,121,72,
		112,3,73,36,43,0,48,9,0,95,2,106,15,103,
		101,116,77,111,100,101,108,66,117,102,102,101,114,0,
		89,63,0,2,0,0,0,176,10,0,48,14,0,95,
		1,112,0,12,1,31,42,176,10,0,48,18,0,48,
		14,0,95,1,112,0,112,0,12,1,31,23,176,19,
		0,48,18,0,48,14,0,95,1,112,0,112,0,95,
		2,12,2,25,3,100,6,95,1,121,72,121,72,121,
		72,112,3,73,36,44,0,48,9,0,95,2,106,24,
		103,101,116,77,111,100,101,108,66,117,102,102,101,114,
		67,111,108,117,109,110,75,101,121,0,89,56,0,1,
		0,0,0,176,20,0,48,15,0,48,14,0,95,1,
		112,0,112,0,106,10,112,97,114,97,109,101,116,114,
		111,0,20,2,48,21,0,95,1,48,15,0,48,14,
		0,95,1,112,0,112,0,112,1,6,95,1,121,72,
		121,72,121,72,112,3,73,36,46,0,48,9,0,95,
		2,106,9,101,110,100,77,111,100,101,108,0,89,37,
		0,1,0,0,0,176,10,0,48,14,0,95,1,112,
		0,12,1,31,16,48,22,0,48,14,0,95,1,112,
		0,112,0,25,3,100,6,95,1,121,72,121,72,121,
		72,112,3,73,36,48,0,48,9,0,95,2,106,9,
		118,97,108,105,100,97,116,101,0,89,39,0,2,0,
		0,0,176,10,0,48,23,0,95,1,112,0,12,1,
		31,18,48,24,0,48,23,0,95,1,112,0,95,2,
		112,1,25,3,100,6,95,1,121,72,121,72,121,72,
		112,3,73,36,52,0,48,7,0,95,2,106,22,65,
		99,116,105,118,97,116,101,78,97,118,105,103,97,116,
		111,114,86,105,101,119,0,108,25,95,1,121,72,121,
		72,121,72,112,3,73,36,53,0,48,7,0,95,2,
		106,15,65,99,116,105,118,97,116,101,66,114,111,119,
		115,101,0,108,26,95,1,121,72,121,72,121,72,112,
		3,73,36,55,0,48,9,0,95,2,106,13,105,115,
		85,115,101,114,65,99,99,101,115,115,0,89,23,0,
		1,0,0,0,176,27,0,48,28,0,95,1,112,0,
		122,12,2,121,8,6,95,1,121,72,121,72,121,72,
		112,3,73,36,56,0,48,9,0,95,2,106,14,110,
		111,116,85,115,101,114,65,99,99,101,115,115,0,89,
		16,0,1,0,0,0,48,29,0,95,1,112,0,68,
		6,95,1,121,72,121,72,121,72,112,3,73,36,57,
		0,48,9,0,95,2,106,13,105,115,85,115,101,114,
		65,112,112,101,110,100,0,89,24,0,1,0,0,0,
		176,27,0,48,28,0,95,1,112,0,92,2,12,2,
		121,69,6,95,1,121,72,121,72,121,72,112,3,73,
		36,58,0,48,9,0,95,2,106,14,110,111,116,85,
		115,101,114,65,112,112,101,110,100,0,89,16,0,1,
		0,0,0,48,30,0,95,1,112,0,68,6,95,1,
		121,72,121,72,121,72,112,3,73,36,59,0,48,9,
		0,95,2,106,16,105,115,85,115,101,114,68,117,112,
		108,105,99,97,116,101,0,89,24,0,1,0,0,0,
		176,27,0,48,28,0,95,1,112,0,92,2,12,2,
		121,69,6,95,1,121,72,121,72,121,72,112,3,73,
		36,60,0,48,9,0,95,2,106,17,110,111,116,85,
		115,101,114,68,117,112,108,105,99,97,116,101,0,89,
		16,0,1,0,0,0,48,31,0,95,1,112,0,68,
		6,95,1,121,72,121,72,121,72,112,3,73,36,61,
		0,48,9,0,95,2,106,11,105,115,85,115,101,114,
		69,100,105,116,0,89,24,0,1,0,0,0,176,27,
		0,48,28,0,95,1,112,0,92,4,12,2,121,69,
		6,95,1,121,72,121,72,121,72,112,3,73,36,62,
		0,48,9,0,95,2,106,12,110,111,116,85,115,101,
		114,69,100,105,116,0,89,16,0,1,0,0,0,48,
		32,0,95,1,112,0,68,6,95,1,121,72,121,72,
		121,72,112,3,73,36,63,0,48,9,0,95,2,106,
		13,105,115,85,115,101,114,68,101,108,101,116,101,0,
		89,24,0,1,0,0,0,176,27,0,48,28,0,95,
		1,112,0,92,16,12,2,121,69,6,95,1,121,72,
		121,72,121,72,112,3,73,36,64,0,48,9,0,95,
		2,106,14,110,111,116,85,115,101,114,68,101,108,101,
		116,101,0,89,16,0,1,0,0,0,48,33,0,95,
		1,112,0,68,6,95,1,121,72,121,72,121,72,112,
		3,73,36,65,0,48,9,0,95,2,106,11,105,115,
		85,115,101,114,90,111,111,109,0,89,24,0,1,0,
		0,0,176,27,0,48,28,0,95,1,112,0,92,8,
		12,2,121,69,6,95,1,121,72,121,72,121,72,112,
		3,73,36,66,0,48,9,0,95,2,106,12,110,111,
		116,85,115,101,114,90,111,111,109,0,89,16,0,1,
		0,0,0,48,34,0,95,1,112,0,68,6,95,1,
		121,72,121,72,121,72,112,3,73,36,68,0,48,9,
		0,95,2,106,8,115,101,116,77,111,100,101,0,89,
		17,0,2,0,0,0,48,35,0,95,1,95,2,112,
		1,6,95,1,121,72,121,72,121,72,112,3,73,36,
		69,0,48,9,0,95,2,106,8,103,101,116,77,111,
		100,101,0,89,15,0,1,0,0,0,48,36,0,95,
		1,112,0,6,95,1,121,72,121,72,121,72,112,3,
		73,36,71,0,48,9,0,95,2,106,9,115,101,116,
		84,105,116,108,101,0,89,17,0,2,0,0,0,48,
		37,0,95,1,95,2,112,1,6,95,1,121,72,121,
		72,121,72,112,3,73,36,72,0,48,9,0,95,2,
		106,9,103,101,116,84,105,116,108,101,0,89,15,0,
		1,0,0,0,48,38,0,95,1,112,0,6,95,1,
		121,72,121,72,121,72,112,3,73,36,74,0,48,7,
		0,95,2,106,7,65,112,112,101,110,100,0,108,39,
		95,1,121,72,121,72,121,72,112,3,73,36,75,0,
		48,40,0,95,2,106,15,105,110,105,116,65,112,112,
		101,110,100,77,111,100,101,0,112,1,73,36,76,0,
		48,40,0,95,2,106,23,101,110,100,65,112,112,101,
		110,100,77,111,100,101,80,114,101,73,110,115,101,114,
		116,0,112,1,73,36,77,0,48,40,0,95,2,106,
		24,101,110,100,65,112,112,101,110,100,77,111,100,101,
		80,111,115,116,73,110,115,101,114,116,0,112,1,73,
		36,78,0,48,40,0,95,2,106,17,99,97,110,99,
		101,108,65,112,112,101,110,100,77,111,100,101,0,112,
		1,73,36,79,0,48,9,0,95,2,106,14,115,101,
		116,65,112,112,101,110,100,77,111,100,101,0,89,16,
		0,1,0,0,0,48,41,0,95,1,122,112,1,6,
		95,1,121,72,121,72,121,72,112,3,73,36,80,0,
		48,9,0,95,2,106,13,105,115,65,112,112,101,110,
		100,77,111,100,101,0,89,17,0,1,0,0,0,48,
		36,0,95,1,112,0,122,8,6,95,1,121,72,121,
		72,121,72,112,3,73,36,82,0,48,7,0,95,2,
		106,10,68,117,112,108,105,99,97,116,101,0,108,42,
		95,1,121,72,121,72,121,72,112,3,73,36,83,0,
		48,40,0,95,2,106,18,105,110,105,116,68,117,112,
		108,105,99,97,116,101,77,111,100,101,0,112,1,73,
		36,84,0,48,40,0,95,2,106,26,101,110,100,68,
		117,112,108,105,99,97,116,101,77,111,100,101,80,114,
		101,73,110,115,101,114,116,0,112,1,73,36,85,0,
		48,40,0,95,2,106,26,101,110,100,68,117,112,108,
		105,99,97,116,101,77,111,100,101,80,111,115,73,110,
		115,101,114,116,0,112,1,73,36,86,0,48,40,0,
		95,2,106,20,99,97,110,99,101,108,68,117,112,108,
		105,99,97,116,101,77,111,100,101,0,112,1,73,36,
		87,0,48,9,0,95,2,106,17,115,101,116,68,117,
		112,108,105,99,97,116,101,77,111,100,101,0,89,17,
		0,1,0,0,0,48,41,0,95,1,92,4,112,1,
		6,95,1,121,72,121,72,121,72,112,3,73,36,88,
		0,48,9,0,95,2,106,16,105,115,68,117,112,108,
		105,99,97,116,101,77,111,100,101,0,89,18,0,1,
		0,0,0,48,36,0,95,1,112,0,92,4,8,6,
		95,1,121,72,121,72,121,72,112,3,73,36,90,0,
		48,7,0,95,2,106,5,69,100,105,116,0,108,43,
		95,1,121,72,121,72,121,72,112,3,73,36,91,0,
		48,40,0,95,2,106,13,105,110,105,116,69,100,105,
		116,77,111,100,101,0,112,1,73,36,92,0,48,40,
		0,95,2,106,21,101,110,100,69,100,105,116,77,111,
		100,101,80,114,101,85,112,100,97,116,101,0,112,1,
		73,36,93,0,48,40,0,95,2,106,21,101,110,100,
		69,100,105,116,77,111,100,101,80,111,115,85,112,100,
		97,116,101,0,112,1,73,36,94,0,48,40,0,95,
		2,106,15,99,97,110,99,101,108,69,100,105,116,77,
		111,100,101,0,112,1,73,36,95,0,48,9,0,95,
		2,106,12,115,101,116,69,100,105,116,77,111,100,101,
		0,89,17,0,1,0,0,0,48,41,0,95,1,92,
		2,112,1,6,95,1,121,72,121,72,121,72,112,3,
		73,36,96,0,48,9,0,95,2,106,11,105,115,69,
		100,105,116,77,111,100,101,0,89,18,0,1,0,0,
		0,48,36,0,95,1,112,0,92,2,8,6,95,1,
		121,72,121,72,121,72,112,3,73,36,98,0,48,7,
		0,95,2,106,5,90,111,111,109,0,108,44,95,1,
		121,72,121,72,121,72,112,3,73,36,99,0,48,9,
		0,95,2,106,12,115,101,116,90,111,111,109,77,111,
		100,101,0,89,17,0,1,0,0,0,48,41,0,95,
		1,92,3,112,1,6,95,1,121,72,121,72,121,72,
		112,3,73,36,100,0,48,9,0,95,2,106,11,105,
		115,90,111,111,109,77,111,100,101,0,89,18,0,1,
		0,0,0,48,36,0,95,1,112,0,92,3,8,6,
		95,1,121,72,121,72,121,72,112,3,73,36,101,0,
		48,9,0,95,2,106,14,105,115,78,111,116,90,111,
		111,109,77,111,100,101,0,89,18,0,1,0,0,0,
		48,36,0,95,1,112,0,92,3,69,6,95,1,121,
		72,121,72,121,72,112,3,73,36,102,0,48,40,0,
		95,2,106,13,105,110,105,116,90,111,111,109,77,111,
		100,101,0,112,1,73,36,104,0,48,7,0,95,2,
		106,7,68,101,108,101,116,101,0,108,45,95,1,121,
		72,121,72,121,72,112,3,73,36,105,0,48,40,0,
		95,2,106,15,105,110,105,116,68,101,108,101,116,101,
		77,111,100,101,0,112,1,73,36,106,0,48,40,0,
		95,2,106,23,101,110,100,68,101,108,101,116,101,77,
		111,100,101,80,114,101,68,101,108,101,116,101,0,112,
		1,73,36,107,0,48,40,0,95,2,106,23,101,110,
		100,68,101,108,101,116,101,77,111,100,101,80,111,115,
		68,101,108,101,116,101,0,112,1,73,36,109,0,48,
		9,0,95,2,106,16,103,101,116,73,100,70,114,111,
		109,82,111,119,83,101,116,0,89,49,0,1,0,0,
		0,176,10,0,48,46,0,95,1,112,0,12,1,31,
		28,48,47,0,48,46,0,95,1,112,0,48,15,0,
		48,14,0,95,1,112,0,112,0,112,1,25,3,100,
		6,95,1,121,72,121,72,121,72,112,3,73,36,111,
		0,48,7,0,95,2,106,31,99,104,97,110,103,101,
		77,111,100,101,108,79,114,100,101,114,65,110,100,79,
		114,105,101,110,116,97,116,105,111,110,0,108,48,95,
		1,121,72,121,72,121,72,112,3,73,36,113,0,48,
		9,0,95,2,106,5,102,105,110,100,0,89,24,0,
		3,0,0,0,48,49,0,48,14,0,95,1,112,0,
		95,2,95,3,112,2,6,95,1,121,72,121,72,121,
		72,112,3,73,36,115,0,48,9,0,95,2,106,17,
		102,105,110,100,66,121,73,100,73,110,82,111,119,83,
		101,116,0,89,45,0,2,0,0,0,176,10,0,48,
		46,0,95,1,112,0,12,1,31,24,48,49,0,48,
		46,0,95,1,112,0,95,2,106,3,105,100,0,120,
		112,3,25,3,100,6,95,1,121,72,121,72,121,72,
		112,3,73,36,117,0,48,7,0,95,2,106,11,105,
		115,86,97,108,105,100,71,101,116,0,108,50,95,1,
		121,72,121,72,121,72,112,3,73,36,118,0,48,7,
		0,95,2,106,14,105,115,86,97,108,105,100,67,111,
		100,105,103,111,0,108,51,95,1,121,72,121,72,121,
		72,112,3,73,36,120,0,48,9,0,95,2,106,16,
		103,101,116,73,100,70,114,111,109,67,111,100,105,103,
		111,0,89,39,0,2,0,0,0,176,10,0,48,14,
		0,95,1,112,0,12,1,31,18,48,52,0,48,14,
		0,95,1,112,0,95,2,112,1,25,3,100,6,95,
		1,121,72,121,72,121,72,112,3,73,36,122,0,48,
		7,0,95,2,106,13,97,115,115,105,103,110,66,114,
		111,119,115,101,0,108,53,95,1,121,72,121,72,121,
		72,112,3,73,36,123,0,48,7,0,95,2,106,12,
		115,116,97,114,116,66,114,111,119,115,101,0,108,54,
		95,1,121,72,121,72,121,72,112,3,73,36,124,0,
		48,7,0,95,2,106,19,114,101,115,116,111,114,101,
		66,114,111,119,115,101,83,116,97,116,101,0,108,55,
		95,1,121,72,121,72,121,72,112,3,73,36,126,0,
		48,7,0,95,2,106,10,103,101,116,82,111,119,83,
		101,116,0,108,56,95,1,121,72,121,72,121,72,112,
		3,73,36,128,0,48,7,0,95,2,106,14,115,101,
		116,70,97,115,116,82,101,112,111,114,116,0,108,57,
		95,1,121,72,121,72,121,72,112,3,73,36,130,0,
		48,9,0,95,2,106,13,103,101,116,67,111,110,116,
		97,105,110,101,114,0,89,22,0,2,0,0,0,48,
		58,0,48,59,0,95,1,112,0,95,2,112,1,6,
		95,1,121,72,121,72,121,72,112,3,73,36,132,0,
		48,7,0,95,2,106,12,101,118,97,108,79,110,69,
		118,101,110,116,0,108,60,95,1,121,72,121,72,121,
		72,112,3,73,36,133,0,48,9,0,95,2,106,16,
		101,118,97,108,79,110,80,114,101,65,112,112,101,110,
		100,0,89,22,0,1,0,0,0,48,61,0,95,1,
		48,62,0,95,1,112,0,112,1,6,95,1,121,72,
		121,72,121,72,112,3,73,36,134,0,48,9,0,95,
		2,106,17,101,118,97,108,79,110,80,111,115,116,65,
		112,112,101,110,100,0,89,22,0,1,0,0,0,48,
		61,0,95,1,48,63,0,95,1,112,0,112,1,6,
		95,1,121,72,121,72,121,72,112,3,73,36,136,0,
		48,64,0,95,2,112,0,73,167,14,0,0,176,65,
		0,104,2,0,95,2,20,2,168,48,66,0,95,2,
		112,0,80,3,176,67,0,95,3,106,10,73,110,105,
		116,67,108,97,115,115,0,12,2,28,12,48,68,0,
		95,3,164,146,1,0,73,95,3,110,7,48,66,0,
		103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		36,142,0,48,69,0,102,48,2,0,176,70,0,12,
		0,112,0,112,1,73,36,144,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_END )
{
	static const HB_BYTE pcode[] =
	{
		36,150,0,48,71,0,102,112,0,73,36,152,0,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_ACTIVATENAVIGATORVIEW )
{
	static const HB_BYTE pcode[] =
	{
		36,158,0,176,10,0,48,72,0,102,112,0,12,1,
		28,8,36,159,0,102,110,7,36,162,0,48,73,0,
		102,112,0,28,39,36,163,0,176,74,0,106,21,65,
		99,99,101,115,111,32,110,111,32,112,101,114,109,105,
		116,105,100,111,46,0,20,1,36,164,0,102,110,7,
		36,167,0,176,75,0,12,0,100,69,28,26,36,168,
		0,176,76,0,20,0,48,77,0,176,75,0,12,0,
		112,0,73,176,76,0,20,0,36,171,0,48,78,0,
		48,14,0,102,112,0,112,0,73,36,173,0,48,79,
		0,48,72,0,102,112,0,112,0,73,36,175,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_ACTIVATEBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,183,0,48,80,0,102,112,0,73,36,
		185,0,48,81,0,48,14,0,102,112,0,112,0,73,
		36,187,0,48,82,0,48,83,0,102,112,0,48,38,
		0,102,112,0,95,1,112,2,28,13,36,188,0,48,
		84,0,102,112,0,80,2,36,191,0,48,71,0,102,
		112,0,73,36,193,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_STARTBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,201,0,176,10,0,48,85,0,48,83,
		0,102,112,0,112,0,12,1,28,8,36,202,0,102,
		110,7,36,205,0,176,10,0,95,1,12,1,31,29,
		36,206,0,48,86,0,95,1,48,87,0,48,85,0,
		48,83,0,102,112,0,112,0,112,0,112,1,73,36,
		209,0,48,88,0,102,112,0,73,36,211,0,48,89,
		0,48,85,0,48,83,0,102,112,0,112,0,48,90,
		0,48,14,0,102,112,0,112,0,112,1,80,2,36,
		212,0,176,10,0,95,2,12,1,28,8,36,213,0,
		102,110,7,36,216,0,176,10,0,95,1,12,1,31,
		20,36,217,0,48,91,0,95,1,48,92,0,95,2,
		112,0,112,1,73,36,220,0,48,93,0,48,85,0,
		48,83,0,102,112,0,112,0,95,2,48,94,0,48,
		14,0,102,112,0,112,0,112,2,73,36,222,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_RESTOREBROWSESTATE )
{
	static const HB_BYTE pcode[] =
	{
		36,228,0,176,10,0,48,85,0,48,83,0,102,112,
		0,112,0,12,1,28,8,36,229,0,102,110,7,36,
		232,0,176,10,0,48,95,0,48,83,0,102,112,0,
		112,0,12,1,28,8,36,233,0,102,110,7,36,236,
		0,48,96,0,48,85,0,48,83,0,102,112,0,112,
		0,48,95,0,48,83,0,102,112,0,112,0,112,1,
		73,36,238,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_ASSIGNBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,246,0,176,10,0,95,1,12,1,28,
		9,36,247,0,95,3,110,7,36,250,0,48,97,0,
		48,14,0,102,112,0,48,98,0,95,1,112,0,112,
		1,73,36,252,0,48,99,0,102,48,38,0,102,112,
		0,95,2,112,2,80,3,36,254,0,176,10,0,95,
		3,12,1,31,15,36,255,0,48,100,0,95,1,95,
		3,112,1,73,36,2,1,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_CHANGEMODELORDERANDORIENTATION )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,8,1,48,101,0,48,14,0,102,112,
		0,112,0,73,36,10,1,48,102,0,48,14,0,102,
		112,0,95,1,112,1,73,36,12,1,48,103,0,48,
		14,0,102,112,0,95,2,112,1,73,36,14,1,48,
		81,0,48,14,0,102,112,0,112,0,73,36,16,1,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_EVALONEVENT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,24,1,95,1,100,69,28,41,36,25,
		1,48,104,0,95,1,112,0,80,2,36,26,1,176,
		105,0,95,2,12,1,106,2,76,0,8,28,12,95,
		2,31,8,36,27,1,9,110,7,36,31,1,120,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_APPEND )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,39,1,48,106,0,102,112,0,28,39,
		36,40,1,176,74,0,106,21,65,99,99,101,115,111,
		32,110,111,32,112,101,114,109,105,116,105,100,111,46,
		0,20,1,36,41,1,9,110,7,36,44,1,48,107,
		0,102,112,0,31,8,36,45,1,9,110,7,36,48,
		1,48,108,0,102,112,0,73,36,50,1,48,109,0,
		48,14,0,102,112,0,112,0,80,1,36,52,1,48,
		110,0,48,14,0,102,112,0,112,0,73,36,54,1,
		48,111,0,102,112,0,73,36,56,1,48,112,0,48,
		83,0,102,112,0,112,0,28,49,36,58,1,48,113,
		0,102,112,0,73,36,60,1,48,114,0,48,14,0,
		102,112,0,112,0,73,36,62,1,48,115,0,102,112,
		0,73,36,64,1,48,116,0,102,112,0,73,25,35,
		36,68,1,48,117,0,102,112,0,73,36,70,1,48,
		118,0,48,14,0,102,112,0,95,1,112,1,73,36,
		72,1,9,110,7,36,76,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_DUPLICATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,84,1,48,119,0,102,112,0,28,39,
		36,85,1,176,74,0,106,21,65,99,99,101,115,111,
		32,110,111,32,112,101,114,109,105,116,105,100,111,46,
		0,20,1,36,86,1,102,110,7,36,89,1,48,120,
		0,102,112,0,73,36,91,1,48,109,0,48,14,0,
		102,112,0,112,0,80,1,36,93,1,48,121,0,48,
		14,0,102,112,0,112,0,73,36,95,1,48,122,0,
		102,112,0,73,36,97,1,48,112,0,48,83,0,102,
		112,0,112,0,28,39,36,99,1,48,123,0,102,112,
		0,73,36,101,1,48,114,0,48,14,0,102,112,0,
		112,0,73,36,103,1,48,124,0,102,112,0,73,25,
		29,36,107,1,48,118,0,48,14,0,102,112,0,95,
		1,112,1,73,36,109,1,48,125,0,102,112,0,73,
		36,113,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_EDIT )
{
	static const HB_BYTE pcode[] =
	{
		36,119,1,48,126,0,102,112,0,28,39,36,120,1,
		176,74,0,106,21,65,99,99,101,115,111,32,110,111,
		32,112,101,114,109,105,116,105,100,111,46,0,20,1,
		36,121,1,102,110,7,36,124,1,48,127,0,102,112,
		0,73,36,126,1,48,97,0,48,14,0,102,112,0,
		48,128,0,102,112,0,112,1,73,36,128,1,48,121,
		0,48,14,0,102,112,0,112,0,73,36,130,1,48,
		129,0,102,112,0,73,36,132,1,48,112,0,48,83,
		0,102,112,0,112,0,28,39,36,134,1,48,130,0,
		102,112,0,73,36,136,1,48,131,0,48,14,0,102,
		112,0,112,0,73,36,138,1,48,132,0,102,112,0,
		73,25,12,36,141,1,48,133,0,102,112,0,73,36,
		145,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_ZOOM )
{
	static const HB_BYTE pcode[] =
	{
		36,151,1,48,134,0,102,112,0,28,39,36,152,1,
		176,74,0,106,21,65,99,99,101,115,111,32,110,111,
		32,112,101,114,109,105,116,105,100,111,46,0,20,1,
		36,153,1,102,110,7,36,156,1,48,135,0,102,112,
		0,73,36,158,1,48,121,0,48,14,0,102,112,0,
		112,0,73,36,160,1,48,136,0,102,112,0,73,36,
		162,1,48,112,0,48,83,0,102,112,0,112,0,73,
		36,164,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_DELETE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,173,1,48,137,0,102,112,0,28,38,
		36,174,1,176,74,0,106,20,65,99,99,101,115,111,
		32,110,111,32,112,101,114,109,105,116,105,100,111,0,
		20,1,36,175,1,102,110,7,36,178,1,176,138,0,
		95,1,12,1,31,63,36,179,1,176,74,0,106,45,
		78,111,32,115,101,32,101,115,112,101,99,105,102,105,
		99,97,114,111,110,32,108,111,115,32,114,101,103,105,
		115,116,114,111,115,32,97,32,101,108,105,109,105,110,
		97,114,0,20,1,36,180,1,102,110,7,36,183,1,
		48,139,0,102,112,0,73,36,185,1,176,140,0,95,
		1,12,1,80,2,36,187,1,95,2,122,15,28,38,
		36,188,1,176,141,0,176,142,0,95,2,92,3,12,
		2,12,1,106,12,32,114,101,103,105,115,116,114,111,
		115,63,0,72,80,3,25,31,36,190,1,106,22,101,
		108,32,114,101,103,105,115,116,114,111,32,101,110,32,
		99,117,114,115,111,63,0,80,3,36,193,1,48,143,
		0,176,144,0,12,0,112,0,31,54,176,145,0,106,
		17,191,68,101,115,101,97,32,101,108,105,109,105,110,
		97,114,32,0,95,3,72,106,21,67,111,110,102,105,
		114,109,101,32,101,108,105,109,105,110,97,99,105,243,
		110,0,12,2,28,39,36,195,1,48,146,0,102,112,
		0,73,36,197,1,48,147,0,48,14,0,102,112,0,
		95,1,112,1,73,36,199,1,48,148,0,102,112,0,
		73,36,203,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_GETROWSET )
{
	static const HB_BYTE pcode[] =
	{
		36,209,1,176,10,0,48,149,0,48,14,0,102,112,
		0,112,0,12,1,28,17,36,210,1,48,78,0,48,
		14,0,102,112,0,112,0,73,36,213,1,48,149,0,
		48,14,0,102,112,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_ISVALIDGET )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,221,1,176,10,0,95,1,12,1,28,
		8,36,222,1,120,110,7,36,225,1,48,98,0,95,
		1,112,0,80,2,36,227,1,48,150,0,48,14,0,
		102,112,0,95,2,112,1,31,74,36,228,1,176,74,
		0,106,39,69,108,32,105,100,101,110,116,105,102,105,
		99,97,100,111,114,32,105,110,116,114,111,100,117,99,
		105,100,111,32,110,111,32,101,120,105,115,116,101,0,
		48,151,0,102,112,0,20,2,36,229,1,48,152,0,
		95,1,112,0,73,36,230,1,9,110,7,36,233,1,
		176,10,0,48,153,0,95,1,112,0,12,1,31,31,
		36,234,1,48,100,0,48,153,0,95,1,112,0,48,
		154,0,48,14,0,102,112,0,95,2,112,1,112,1,
		73,36,237,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_ISVALIDCODIGO )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,245,1,176,10,0,95,1,12,1,28,
		8,36,246,1,120,110,7,36,249,1,48,98,0,95,
		1,112,0,80,2,36,251,1,176,10,0,95,2,12,
		1,28,8,36,252,1,120,110,7,36,255,1,48,155,
		0,48,14,0,102,112,0,95,2,112,1,31,67,36,
		0,2,176,74,0,106,32,69,108,32,99,243,100,105,
		103,111,32,105,110,116,114,111,100,117,99,105,100,111,
		32,110,111,32,101,120,105,115,116,101,0,48,151,0,
		102,112,0,20,2,36,1,2,48,152,0,95,1,112,
		0,73,36,2,2,9,110,7,36,5,2,176,10,0,
		48,153,0,95,1,112,0,12,1,31,31,36,6,2,
		48,100,0,48,153,0,95,1,112,0,48,156,0,48,
		14,0,102,112,0,95,2,112,1,112,1,73,36,9,
		2,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASECONTROLLER_SETFASTREPORT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,36,13,2,102,80,4,36,15,2,95,3,
		100,8,28,16,48,157,0,48,14,0,95,4,112,0,
		112,0,80,3,36,17,2,176,10,0,95,1,12,1,
		28,9,36,18,2,95,4,110,7,36,21,2,48,78,
		0,48,14,0,95,4,112,0,95,2,112,1,73,36,
		23,2,176,10,0,48,149,0,48,14,0,95,4,112,
		0,112,0,12,1,28,9,36,24,2,95,4,110,7,
		36,33,2,48,158,0,95,1,48,151,0,95,4,112,
		0,95,3,89,27,0,0,0,1,0,4,0,48,159,
		0,48,149,0,48,14,0,95,255,112,0,112,0,112,
		0,6,89,28,0,0,0,1,0,4,0,48,160,0,
		48,149,0,48,14,0,95,255,112,0,112,0,122,112,
		1,6,89,29,0,0,0,1,0,4,0,48,160,0,
		48,149,0,48,14,0,95,255,112,0,112,0,92,255,
		112,1,6,89,27,0,0,0,1,0,4,0,48,161,
		0,48,149,0,48,14,0,95,255,112,0,112,0,112,
		0,6,89,29,0,1,0,1,0,4,0,48,47,0,
		48,149,0,48,14,0,95,255,112,0,112,0,95,1,
		112,1,6,112,7,73,36,35,2,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,164,0,2,0,116,164,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
