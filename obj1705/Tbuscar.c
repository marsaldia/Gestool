/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tbuscar.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TBUSCAR );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_STATIC( TBUSCAR_NEW );
HB_FUNC_STATIC( TBUSCAR_CREATE );
HB_FUNC_STATIC( TBUSCAR_RESOURCES );
HB_FUNC_STATIC( TBUSCAR_AFIELDS );
HB_FUNC_STATIC( TBUSCAR_SETFILTER );
HB_FUNC_STATIC( TBUSCAR_CHANGEGET );
HB_FUNC_STATIC( TBUSCAR_APPEND );
HB_FUNC_STATIC( TBUSCAR_EDIT );
HB_FUNC_STATIC( TBUSCAR_ZOOM );
HB_FUNC_STATIC( TBUSCAR_GETFIELD );
HB_FUNC_STATIC( TBUSCAR_ACTIVATE );
HB_FUNC_STATIC( TBUSCAR_END );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ALIAS );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( FIELDNAME );
HB_FUNC_EXTERN( ORDNAME );
HB_FUNC_EXTERN( FIELDGET );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( GETRESOURCES );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( GETBRWOPT );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( TGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( AUTOSEEK );
HB_FUNC_EXTERN( ORDCLEARSCOPE );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( TWBROWSE );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( ISREPORT );
HB_FUNC_EXTERN( ARRAY );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( FIELDPOS );
HB_FUNC_EXTERN( CVALTOCHAR );
HB_FUNC_EXTERN( ORDKEYVAL );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( IXBROWSE );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TBUSCAR )
{ "TBUSCAR", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUSCAR_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_NEW )}, NULL },
{ "TBUSCAR_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_CREATE )}, NULL },
{ "TBUSCAR_RESOURCES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_RESOURCES )}, NULL },
{ "TBUSCAR_AFIELDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_AFIELDS )}, NULL },
{ "TBUSCAR_SETFILTER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_SETFILTER )}, NULL },
{ "TBUSCAR_CHANGEGET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_CHANGEGET )}, NULL },
{ "TBUSCAR_APPEND", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_APPEND )}, NULL },
{ "TBUSCAR_EDIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_EDIT )}, NULL },
{ "TBUSCAR_ZOOM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_ZOOM )}, NULL },
{ "TBUSCAR_GETFIELD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_GETFIELD )}, NULL },
{ "TBUSCAR_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_ACTIVATE )}, NULL },
{ "TBUSCAR_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TBUSCAR_END )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALIAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALIAS )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "FIELDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDNAME )}, NULL },
{ "ORDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDNAME )}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDGET )}, NULL },
{ "_CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_UORDEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACAMPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ATITULOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ASIZES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BALTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BEDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BZOOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AJUSTIFY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NORDENANT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NRECNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETRESOURCES", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETRESOURCES )}, NULL },
{ "RESOURCES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "GETBRWOPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETBRWOPT )}, NULL },
{ "CCAPTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_BCHANGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( AUTOSEEK )}, NULL },
{ "OBRW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDCLEARSCOPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCLEARSCOPE )}, NULL },
{ "REFRESH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBRW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TWBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TWBROWSE )}, NULL },
{ "AFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATITULOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASIZES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BLDBLCLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AJUSTIFY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BALTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISREPORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISREPORT )}, NULL },
{ "EDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BEDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ARRAY )}, NULL },
{ "ACAMPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "FIELDPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDPOS )}, NULL },
{ "CVALTOCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CVALTOCHAR )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCAMPO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_UVAL1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_UVAL2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCAMPO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UVAL1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UVAL2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDKEYVAL )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "BZOOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_UVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "CCOMMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASSIGN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "VARGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IXBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( IXBROWSE )}, NULL },
{ "_BCLRSEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BCLRSELFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NMARQUEESTYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RBUTTONDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETBROWSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LHIDE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOLSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCALCULATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BEDITVALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BSETGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BDIRECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABITMAPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTRDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCHECK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCOLALIGN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDATASTRALIGN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NHEADSTRALIGN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "CHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSORTORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BLCLICKHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFROMRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIELDGETBYNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TBUSCAR, ".\\.\\Prg\\Tbuscar.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TBUSCAR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TBUSCAR )
   #include "hbiniseg.h"
#endif

HB_FUNC( TBUSCAR )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,156,0,36,12,0,103,2,0,100,8,
		29,203,4,176,1,0,104,2,0,12,1,29,192,4,
		166,130,4,0,122,80,1,48,2,0,176,3,0,12,
		0,106,8,84,66,117,115,99,97,114,0,108,4,4,
		1,0,108,0,112,3,80,2,36,14,0,48,5,0,
		95,2,106,6,65,82,82,65,89,0,4,0,0,95,
		1,121,72,121,72,121,72,106,8,97,67,97,109,112,
		111,115,0,4,1,0,9,112,5,73,36,15,0,48,
		5,0,95,2,106,6,65,82,82,65,89,0,4,0,
		0,95,1,121,72,121,72,121,72,106,9,97,84,105,
		116,117,108,111,115,0,4,1,0,9,112,5,73,36,
		16,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,7,97,83,105,122,101,115,0,4,1,
		0,9,112,5,73,36,17,0,48,5,0,95,2,100,
		100,95,1,121,72,121,72,121,72,106,7,99,65,108,
		105,97,115,0,4,1,0,9,112,5,73,36,18,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,7,99,70,105,101,108,100,0,4,1,0,9,
		112,5,73,36,19,0,48,5,0,95,2,106,6,65,
		82,82,65,89,0,4,0,0,95,1,121,72,121,72,
		121,72,106,9,97,74,117,115,116,105,102,121,0,4,
		1,0,9,112,5,73,36,20,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,10,110,79,
		114,100,101,110,65,110,116,0,4,1,0,9,112,5,
		73,36,21,0,48,5,0,95,2,100,100,95,1,121,
		72,121,72,121,72,106,7,117,79,114,100,101,110,0,
		4,1,0,9,112,5,73,36,22,0,48,5,0,95,
		2,106,6,65,82,82,65,89,0,4,0,0,95,1,
		121,72,121,72,121,72,106,5,97,79,114,100,0,4,
		1,0,9,112,5,73,36,23,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,6,98,65,
		108,116,97,0,4,1,0,9,112,5,73,36,24,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,6,98,69,100,105,116,0,4,1,0,9,112,
		5,73,36,25,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,6,98,90,111,111,109,0,
		4,1,0,9,112,5,73,36,27,0,48,5,0,95,
		2,106,7,79,66,74,69,67,84,0,100,95,1,121,
		72,121,72,121,72,106,5,111,66,109,112,0,4,1,
		0,9,112,5,73,36,28,0,48,5,0,95,2,106,
		7,79,66,74,69,67,84,0,100,95,1,121,72,121,
		72,121,72,106,5,111,82,100,111,0,4,1,0,9,
		112,5,73,36,29,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,5,117,86,97,108,0,
		4,1,0,9,112,5,73,36,31,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,7,99,
		67,97,109,112,111,0,4,1,0,9,112,5,73,36,
		32,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,6,117,86,97,108,49,0,4,1,0,
		9,112,5,73,36,33,0,48,5,0,95,2,100,100,
		95,1,121,72,121,72,121,72,106,6,117,86,97,108,
		50,0,4,1,0,9,112,5,73,36,34,0,48,5,
		0,95,2,106,8,78,85,77,69,82,73,67,0,100,
		95,1,121,72,121,72,121,72,106,7,110,82,101,99,
		110,111,0,4,1,0,9,112,5,73,36,36,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,5,111,66,114,119,
		0,4,1,0,9,112,5,73,36,38,0,48,6,0,
		95,2,106,4,78,101,119,0,108,7,95,1,92,8,
		72,121,72,121,72,112,3,73,36,39,0,48,6,0,
		95,2,106,7,67,114,101,97,116,101,0,108,8,95,
		1,121,72,121,72,121,72,112,3,73,36,41,0,48,
		6,0,95,2,106,10,82,101,115,111,117,114,99,101,
		115,0,108,9,95,1,121,72,121,72,121,72,112,3,
		73,36,42,0,48,6,0,95,2,106,8,97,70,105,
		101,108,100,115,0,108,10,95,1,121,72,121,72,121,
		72,112,3,73,36,44,0,48,6,0,95,2,106,10,
		83,101,116,70,105,108,116,101,114,0,108,11,95,1,
		121,72,121,72,121,72,112,3,73,36,45,0,48,6,
		0,95,2,106,10,67,104,97,110,103,101,71,101,116,
		0,108,12,95,1,121,72,121,72,121,72,112,3,73,
		36,46,0,48,6,0,95,2,106,7,65,112,112,101,
		110,100,0,108,13,95,1,121,72,121,72,121,72,112,
		3,73,36,47,0,48,6,0,95,2,106,5,69,100,
		105,116,0,108,14,95,1,121,72,121,72,121,72,112,
		3,73,36,48,0,48,6,0,95,2,106,5,90,111,
		111,109,0,108,15,95,1,121,72,121,72,121,72,112,
		3,73,36,50,0,48,6,0,95,2,106,9,71,101,
		116,102,105,101,108,100,0,108,16,95,1,121,72,121,
		72,121,72,112,3,73,36,51,0,48,6,0,95,2,
		106,9,65,99,116,105,118,97,116,101,0,108,17,95,
		1,121,72,121,72,121,72,112,3,73,36,52,0,48,
		6,0,95,2,106,4,69,110,100,0,108,18,95,1,
		121,72,121,72,121,72,112,3,73,36,54,0,48,19,
		0,95,2,112,0,73,167,14,0,0,176,20,0,104,
		2,0,95,2,20,2,168,48,21,0,95,2,112,0,
		80,3,176,22,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,23,0,95,3,
		164,146,1,0,73,95,3,110,7,48,21,0,103,2,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,12,36,61,0,95,2,100,8,28,9,176,24,
		0,12,0,80,2,36,62,0,95,1,100,8,28,34,
		106,25,66,117,115,113,117,101,100,97,32,105,110,99,
		114,101,109,101,110,116,97,108,32,100,101,32,0,95,
		2,72,80,1,36,63,0,95,3,100,8,28,14,85,
		95,2,74,176,25,0,12,0,119,80,3,36,64,0,
		95,4,100,8,28,15,85,95,2,74,176,26,0,122,
		12,1,119,80,4,36,65,0,95,5,100,8,28,18,
		85,95,2,74,176,27,0,121,12,1,119,4,1,0,
		80,5,36,66,0,95,6,100,8,28,30,85,95,2,
		74,176,28,0,122,12,1,119,85,95,2,74,176,28,
		0,92,2,12,1,119,4,2,0,80,6,36,67,0,
		95,7,100,8,28,30,85,95,2,74,176,26,0,122,
		12,1,119,85,95,2,74,176,26,0,92,2,12,1,
		119,4,2,0,80,7,36,69,0,48,29,0,102,95,
		2,112,1,73,36,70,0,48,30,0,102,95,4,112,
		1,73,36,71,0,48,31,0,102,95,5,112,1,73,
		36,72,0,48,32,0,102,95,3,112,1,73,36,73,
		0,48,33,0,102,95,6,112,1,73,36,74,0,48,
		34,0,102,95,7,112,1,73,36,75,0,48,35,0,
		102,95,8,112,1,73,36,76,0,48,36,0,102,95,
		9,112,1,73,36,77,0,48,37,0,102,95,10,112,
		1,73,36,78,0,48,38,0,102,95,11,112,1,73,
		36,79,0,95,12,100,69,28,14,36,80,0,48,39,
		0,102,95,12,112,1,73,36,83,0,48,40,0,102,
		85,48,41,0,102,112,0,74,176,25,0,95,3,12,
		1,119,112,1,73,36,84,0,48,42,0,102,85,48,
		41,0,102,112,0,74,176,43,0,12,0,119,112,1,
		73,36,86,0,85,48,41,0,102,112,0,74,176,44,
		0,20,0,74,36,88,0,48,2,0,48,45,0,102,
		112,0,100,100,100,100,95,1,106,10,72,69,76,80,
		69,78,84,82,89,0,176,46,0,12,0,112,7,73,
		36,90,0,48,47,0,102,112,0,73,36,92,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_RESOURCES )
{
	static const HB_BYTE pcode[] =
	{
		13,6,0,36,96,0,102,80,1,36,99,0,176,48,
		0,92,100,12,1,80,3,36,102,0,176,49,0,48,
		50,0,95,1,112,0,12,1,80,6,36,104,0,176,
		51,0,176,52,0,95,6,122,12,2,176,53,0,48,
		54,0,95,1,112,0,12,1,12,2,80,6,36,105,
		0,48,54,0,95,1,112,0,95,6,1,80,5,36,
		107,0,85,48,41,0,95,1,112,0,74,176,25,0,
		95,6,20,1,74,36,109,0,85,48,41,0,95,1,
		112,0,74,176,44,0,20,0,74,36,115,0,48,55,
		0,176,56,0,12,0,92,104,89,28,0,1,0,1,
		0,3,0,176,57,0,12,0,121,8,28,6,95,255,
		25,7,95,1,165,80,255,6,95,1,100,106,3,64,
		33,0,100,100,100,100,100,100,9,100,100,9,9,100,
		100,100,100,100,106,5,70,73,78,68,0,106,5,99,
		71,101,116,0,100,100,100,100,112,27,80,2,36,117,
		0,48,58,0,95,2,89,38,0,2,0,2,0,2,
		0,1,0,176,59,0,95,1,95,2,95,255,48,60,
		0,95,254,112,0,48,41,0,95,254,112,0,120,12,
		6,6,112,1,73,36,118,0,48,61,0,95,2,89,
		43,0,0,0,1,0,1,0,176,62,0,48,60,0,
		95,255,112,0,48,41,0,95,255,112,0,20,2,48,
		63,0,48,60,0,95,255,112,0,112,0,73,120,6,
		112,1,73,36,123,0,48,55,0,176,64,0,12,0,
		92,102,89,28,0,1,0,1,0,5,0,176,57,0,
		12,0,121,8,28,6,95,255,25,7,95,1,165,80,
		255,6,48,54,0,95,1,112,0,95,1,100,100,100,
		100,100,100,9,100,100,100,100,100,100,112,17,80,4,
		36,124,0,48,58,0,95,4,89,56,0,0,0,3,
		0,1,0,4,0,2,0,85,48,41,0,95,255,112,
		0,74,176,25,0,48,65,0,95,254,112,0,20,1,
		74,48,63,0,48,60,0,95,255,112,0,112,0,73,
		48,66,0,95,253,112,0,6,112,1,73,36,131,0,
		48,67,0,95,1,48,55,0,176,68,0,12,0,92,
		105,89,17,0,0,0,1,0,1,0,48,69,0,95,
		255,112,0,6,95,1,48,70,0,95,1,112,0,48,
		71,0,95,1,112,0,100,100,100,100,100,100,100,100,
		100,100,100,100,48,41,0,95,1,112,0,112,18,112,
		1,73,36,132,0,48,72,0,48,60,0,95,1,112,
		0,89,18,0,0,0,1,0,1,0,48,73,0,95,
		255,122,112,1,6,112,1,73,36,133,0,48,39,0,
		48,60,0,95,1,112,0,48,74,0,95,1,112,0,
		112,1,73,36,139,0,48,55,0,176,75,0,12,0,
		93,244,1,89,17,0,0,0,1,0,1,0,48,76,
		0,95,255,112,0,6,95,1,100,100,9,89,29,0,
		0,0,1,0,1,0,48,77,0,95,255,112,0,100,
		69,21,28,9,73,176,78,0,12,0,68,6,100,100,
		9,112,10,73,36,145,0,48,55,0,176,75,0,12,
		0,93,245,1,89,17,0,0,0,1,0,1,0,48,
		79,0,95,255,112,0,6,95,1,100,100,9,89,29,
		0,0,0,1,0,1,0,48,80,0,95,255,112,0,
		100,69,21,28,9,73,176,78,0,12,0,68,6,100,
		100,9,112,10,73,36,150,0,48,55,0,176,75,0,
		12,0,122,89,18,0,0,0,1,0,1,0,48,73,
		0,95,255,122,112,1,6,95,1,100,100,9,100,100,
		100,9,112,10,73,36,155,0,48,55,0,176,75,0,
		12,0,92,2,89,17,0,0,0,1,0,1,0,48,
		73,0,95,255,112,0,6,95,1,100,100,9,100,100,
		100,9,112,10,73,36,157,0,48,81,0,95,1,89,
		17,0,0,0,1,0,2,0,48,66,0,95,255,112,
		0,6,112,1,73,36,159,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_AFIELDS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,167,0,176,82,0,176,53,0,48,83,
		0,102,112,0,12,1,12,1,80,3,36,169,0,122,
		165,80,1,26,132,0,36,170,0,176,84,0,48,83,
		0,102,112,0,95,1,1,12,1,106,2,67,0,8,
		28,74,36,171,0,85,48,41,0,102,112,0,74,176,
		85,0,48,83,0,102,112,0,95,1,1,12,1,119,
		80,2,36,172,0,85,48,41,0,102,112,0,74,176,
		28,0,95,2,12,1,119,95,3,95,1,2,36,173,
		0,176,86,0,95,3,95,1,1,12,1,95,3,95,
		1,2,25,29,36,175,0,176,86,0,48,87,0,48,
		83,0,102,112,0,95,1,1,112,0,12,1,95,3,
		95,1,2,36,169,0,175,1,0,176,53,0,48,83,
		0,102,112,0,12,1,15,29,115,255,36,179,0,95,
		3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_SETFILTER )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,185,0,48,88,0,102,95,1,112,1,
		73,36,186,0,48,89,0,102,95,2,112,1,73,36,
		187,0,48,90,0,102,95,3,112,1,73,36,188,0,
		48,91,0,48,60,0,102,112,0,48,92,0,102,112,
		0,48,93,0,102,112,0,48,94,0,102,112,0,112,
		3,73,36,189,0,48,63,0,48,60,0,102,112,0,
		112,0,73,36,191,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_CHANGEGET )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,199,0,48,92,0,102,112,0,100,69,
		28,16,36,200,0,48,93,0,102,112,0,95,1,72,
		80,1,36,203,0,85,48,41,0,102,112,0,74,176,
		95,0,12,0,119,80,2,36,205,0,176,84,0,95,
		2,12,1,106,2,78,0,8,28,14,36,206,0,176,
		96,0,95,1,12,1,80,1,36,209,0,176,97,0,
		95,1,120,20,2,36,210,0,48,63,0,48,60,0,
		102,112,0,112,0,73,36,212,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_APPEND )
{
	static const HB_BYTE pcode[] =
	{
		36,218,0,48,77,0,102,112,0,100,69,28,33,36,
		219,0,48,87,0,48,77,0,102,112,0,102,112,1,
		73,36,220,0,48,63,0,48,60,0,102,112,0,112,
		0,73,36,223,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_EDIT )
{
	static const HB_BYTE pcode[] =
	{
		36,229,0,48,80,0,102,112,0,100,69,28,33,36,
		230,0,48,87,0,48,80,0,102,112,0,102,112,1,
		73,36,231,0,48,63,0,48,60,0,102,112,0,112,
		0,73,36,234,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_ZOOM )
{
	static const HB_BYTE pcode[] =
	{
		36,240,0,48,98,0,102,112,0,100,69,28,33,36,
		241,0,48,87,0,48,98,0,102,112,0,102,112,1,
		73,36,242,0,48,63,0,48,60,0,102,112,0,112,
		0,73,36,245,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_GETFIELD )
{
	static const HB_BYTE pcode[] =
	{
		36,251,0,48,99,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_ACTIVATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,255,0,102,80,1,36,1,1,176,78,
		0,12,0,31,62,36,2,1,48,100,0,95,1,92,
		113,89,17,0,0,0,1,0,1,0,48,76,0,95,
		255,112,0,6,112,2,73,36,3,1,48,100,0,95,
		1,92,114,89,17,0,0,0,1,0,1,0,48,79,
		0,95,255,112,0,6,112,2,73,36,6,1,48,100,
		0,95,1,92,116,89,18,0,0,0,1,0,1,0,
		48,73,0,95,255,122,112,1,6,112,2,73,36,8,
		1,48,101,0,48,45,0,95,1,112,0,100,100,100,
		120,112,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_END )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,14,1,95,1,100,8,28,6,92,2,
		80,1,36,16,1,48,73,0,48,45,0,102,112,0,
		95,1,112,1,73,36,18,1,95,1,122,8,28,37,
		36,19,1,48,102,0,102,85,48,41,0,102,112,0,
		74,176,28,0,176,85,0,48,103,0,102,112,0,12,
		1,12,1,119,112,1,73,36,22,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TBUSCAR_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,12,2,36,26,1,102,80,3,36,29,1,176,48,
		0,92,100,12,1,80,5,36,36,1,4,0,0,80,
		12,36,37,1,92,2,80,13,36,40,1,176,104,0,
		95,1,12,1,28,72,36,41,1,176,105,0,106,53,
		78,111,32,115,101,32,104,97,32,100,101,102,105,110,
		105,100,111,32,111,98,106,101,116,111,32,112,97,100,
		114,101,32,101,110,32,108,97,32,99,108,97,115,101,
		32,98,117,115,113,117,101,100,97,46,0,20,1,36,
		42,1,95,3,110,7,36,45,1,48,106,0,95,1,
		112,0,80,7,36,46,1,48,30,0,95,3,95,2,
		112,1,73,36,48,1,106,10,66,117,115,99,97,110,
		100,111,32,0,176,107,0,176,108,0,48,109,0,95,
		7,112,0,12,1,12,1,72,80,14,36,54,1,48,
		110,0,95,7,112,0,96,8,0,129,1,1,28,42,
		36,55,1,176,104,0,48,109,0,95,8,112,0,12,
		1,31,19,36,56,1,176,111,0,95,12,48,109,0,
		95,8,112,0,20,2,36,58,1,130,31,218,132,36,
		64,1,176,51,0,176,52,0,95,13,122,12,2,176,
		53,0,95,12,12,1,12,2,80,13,36,65,1,95,
		12,95,13,1,80,11,36,71,1,48,112,0,95,7,
		95,13,112,1,73,36,73,1,48,113,0,95,7,112,
		0,73,36,79,1,48,2,0,48,45,0,95,3,112,
		0,100,100,100,100,95,14,106,10,72,69,76,80,69,
		78,84,82,89,0,176,46,0,12,0,112,7,73,36,
		84,1,48,55,0,176,56,0,12,0,92,104,89,28,
		0,1,0,1,0,5,0,176,57,0,12,0,121,8,
		28,6,95,255,25,7,95,1,165,80,255,6,95,3,
		100,106,3,64,33,0,100,100,100,100,100,100,9,100,
		100,9,9,100,100,100,100,100,100,106,5,99,71,101,
		116,0,100,100,100,100,112,27,80,4,36,85,1,48,
		58,0,95,4,89,39,0,0,0,2,0,4,0,6,
		0,48,114,0,95,255,112,0,73,48,115,0,95,254,
		176,116,0,48,117,0,95,255,112,0,12,1,112,1,
		6,112,1,73,36,90,1,48,55,0,176,64,0,12,
		0,92,102,89,28,0,1,0,1,0,11,0,176,57,
		0,12,0,121,8,28,6,95,255,25,7,95,1,165,
		80,255,6,95,12,95,3,100,100,100,100,100,100,9,
		100,100,100,100,100,100,112,17,80,10,36,91,1,48,
		58,0,95,10,89,46,0,0,0,4,0,7,0,10,
		0,6,0,4,0,48,112,0,95,255,48,65,0,95,
		254,112,0,112,1,73,48,63,0,95,253,112,0,73,
		48,66,0,95,252,112,0,6,112,1,73,36,98,1,
		48,2,0,176,118,0,12,0,95,3,112,1,80,6,
		36,101,1,48,119,0,95,6,90,12,121,97,229,229,
		229,0,4,2,0,6,112,1,73,36,102,1,48,120,
		0,95,6,90,12,121,97,167,205,240,0,4,2,0,
		6,112,1,73,36,104,1,48,121,0,95,6,92,5,
		112,1,73,36,106,1,48,122,0,95,6,95,14,112,
		1,73,36,108,1,48,123,0,95,6,89,19,0,1,
		0,1,0,7,0,48,115,0,95,255,95,1,112,1,
		6,112,1,73,36,109,1,48,124,0,95,6,95,4,
		112,1,73,36,111,1,48,72,0,95,6,89,18,0,
		0,0,1,0,3,0,48,73,0,95,255,122,112,1,
		6,112,1,73,36,112,1,48,125,0,95,6,89,23,
		0,3,0,1,0,6,0,48,126,0,95,255,95,1,
		95,2,95,3,112,3,6,112,1,73,36,114,1,48,
		127,0,95,7,95,6,112,1,73,36,120,1,48,128,
		0,95,7,112,0,96,9,0,129,1,1,29,29,1,
		36,122,1,48,129,0,95,9,112,0,32,9,1,36,
		124,1,48,130,0,95,6,112,0,143,36,126,1,144,
		131,0,48,109,0,95,9,112,0,112,1,73,36,127,
		1,144,132,0,48,133,0,95,9,112,0,112,1,73,
		36,129,1,48,134,0,95,9,112,0,28,20,36,130,
		1,144,135,0,48,136,0,95,9,112,0,112,1,73,
		25,18,36,132,1,144,135,0,48,137,0,95,9,112,
		0,112,1,73,36,135,1,176,104,0,48,138,0,95,
		9,112,0,12,1,31,33,36,136,1,144,139,0,90,
		6,106,1,0,6,112,1,73,36,137,1,144,140,0,
		48,138,0,95,9,112,0,112,1,73,36,140,1,48,
		141,0,95,9,112,0,28,22,36,141,1,144,142,0,
		122,112,1,73,36,142,1,144,143,0,122,112,1,73,
		36,145,1,176,144,0,95,12,89,16,0,1,0,0,
		0,95,1,144,145,0,112,0,8,6,12,2,121,69,
		28,61,36,146,1,144,146,0,48,147,0,95,9,112,
		0,112,1,73,36,147,1,144,148,0,89,34,0,4,
		0,2,0,10,0,6,0,48,149,0,95,255,48,145,
		0,95,4,112,0,112,1,73,48,113,0,95,254,112,
		0,6,112,1,73,36,148,1,145,36,154,1,130,32,
		233,254,132,36,156,1,48,150,0,95,6,92,105,112,
		1,73,36,166,1,48,55,0,176,75,0,12,0,93,
		244,1,89,21,0,0,0,2,0,1,0,6,0,48,
		76,0,95,255,95,254,112,1,6,95,3,100,100,9,
		90,9,176,78,0,12,0,68,6,100,100,9,112,10,
		73,36,172,1,48,55,0,176,75,0,12,0,93,245,
		1,89,21,0,0,0,2,0,1,0,6,0,48,79,
		0,95,255,95,254,112,1,6,95,3,100,100,9,90,
		9,176,78,0,12,0,68,6,100,100,9,112,10,73,
		36,177,1,48,55,0,176,75,0,12,0,122,89,18,
		0,0,0,1,0,3,0,48,73,0,95,255,122,112,
		1,6,95,3,100,100,9,100,100,100,9,112,10,73,
		36,182,1,48,55,0,176,75,0,12,0,92,2,89,
		17,0,0,0,1,0,3,0,48,73,0,95,255,112,
		0,6,95,3,100,100,9,100,100,100,9,112,10,73,
		36,184,1,48,81,0,95,3,89,27,0,0,0,2,
		0,6,0,4,0,48,151,0,95,255,112,0,73,48,
		66,0,95,254,112,0,6,112,1,73,36,186,1,176,
		78,0,12,0,31,70,36,187,1,48,100,0,95,3,
		92,113,89,21,0,0,0,2,0,3,0,6,0,48,
		76,0,95,255,95,254,112,1,6,112,2,73,36,188,
		1,48,100,0,95,3,92,114,89,21,0,0,0,2,
		0,3,0,6,0,48,79,0,95,255,95,254,112,1,
		6,112,2,73,36,191,1,48,100,0,95,3,92,116,
		89,18,0,0,0,1,0,3,0,48,73,0,95,255,
		122,112,1,6,112,2,73,36,193,1,48,101,0,48,
		45,0,95,3,112,0,100,100,100,120,112,4,73,36,
		199,1,48,152,0,95,3,112,0,122,8,28,27,36,
		200,1,48,102,0,95,3,48,153,0,95,7,48,103,
		0,95,3,112,0,112,1,112,1,73,36,203,1,95,
		3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,156,0,2,0,116,156,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

