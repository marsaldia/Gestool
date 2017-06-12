/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tloitem.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TLOITEM );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TLOITEM_NEW );
HB_FUNC_STATIC( TLOITEM_STABILIZE );
HB_FUNC_STATIC( TLOITEM_SAYDATA );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TFONT );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( RAT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TLOITEM )
{ "TLOITEM", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TLOITEM )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TLOITEM_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TLOITEM_NEW )}, NULL },
{ "TLOITEM_STABILIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TLOITEM_STABILIZE )}, NULL },
{ "TLOITEM_SAYDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TLOITEM_SAYDATA )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFONT )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ADATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_APICTURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LSHADOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LGRID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OLABEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LEAN13", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LHORZ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LBANNER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCOLOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "APICTURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "_NDATAHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETTEXTHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEVICE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OLABEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDATAHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLBLHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLBLWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "GETTEXTWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RAT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOLOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TLOITEM, ".\\.\\Prg\\Tloitem.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TLOITEM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TLOITEM )
   #include "hbiniseg.h"
#endif

HB_FUNC( TLOITEM )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,57,0,36,19,0,103,2,0,100,8,
		29,17,2,176,1,0,104,2,0,12,1,29,6,2,
		166,200,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,8,84,76,79,73,116,101,109,0,108,4,4,
		1,0,108,0,112,3,80,2,36,21,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,7,
		111,76,97,98,101,108,0,4,1,0,9,112,5,73,
		36,22,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,6,97,68,97,116,97,0,106,9,
		97,80,105,99,116,117,114,101,0,4,2,0,9,112,
		5,73,36,23,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,6,111,70,111,110,116,0,
		4,1,0,9,112,5,73,36,24,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,7,110,
		67,111,108,111,114,0,4,1,0,9,112,5,73,36,
		25,0,48,5,0,95,2,100,100,95,1,121,72,121,
		72,121,72,106,7,110,87,105,100,116,104,0,106,12,
		110,68,97,116,97,72,101,105,103,104,116,0,106,5,
		110,67,111,108,0,106,6,110,83,105,122,101,0,106,
		5,110,80,97,100,0,106,5,110,80,101,110,0,4,
		6,0,9,112,5,73,36,26,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,8,108,83,
		104,97,100,111,119,0,106,6,108,71,114,105,100,0,
		4,2,0,9,112,5,73,36,27,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,7,108,
		69,97,110,49,51,0,106,6,108,72,111,114,122,0,
		106,8,108,66,97,110,110,101,114,0,4,3,0,9,
		112,5,73,36,30,0,48,6,0,95,2,106,4,78,
		101,119,0,108,7,95,1,92,8,72,121,72,121,72,
		112,3,73,36,32,0,48,6,0,95,2,106,10,83,
		116,97,98,105,108,105,122,101,0,108,8,95,1,121,
		72,121,72,121,72,112,3,73,36,34,0,48,6,0,
		95,2,106,8,83,97,121,68,97,116,97,0,108,9,
		95,1,121,72,121,72,121,72,112,3,73,36,36,0,
		48,10,0,95,2,112,0,73,167,14,0,0,176,11,
		0,104,2,0,95,2,20,2,168,48,12,0,95,2,
		112,0,80,3,176,13,0,95,3,106,10,73,110,105,
		116,67,108,97,115,115,0,12,2,28,12,48,14,0,
		95,3,164,146,1,0,73,95,3,110,7,48,12,0,
		103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TLOITEM_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,14,36,56,0,95,2,100,8,28,13,90,6,
		106,1,0,6,4,1,0,80,2,95,3,100,8,28,
		5,121,80,3,95,4,100,8,28,10,106,1,0,4,
		1,0,80,4,95,1,100,8,28,5,121,80,1,95,
		5,100,8,28,35,48,2,0,176,15,0,12,0,106,
		14,77,115,32,83,97,110,115,32,83,101,114,105,102,
		0,92,6,92,12,9,112,4,80,5,95,6,100,8,
		28,5,122,80,6,95,8,100,8,28,5,9,80,8,
		95,9,100,8,28,5,9,80,9,95,13,100,8,28,
		5,121,80,13,95,10,100,8,28,5,9,80,10,95,
		11,100,8,28,5,120,80,11,95,12,100,8,28,5,
		120,80,12,95,7,100,8,28,42,176,16,0,48,17,
		0,95,2,122,1,112,0,12,1,106,2,78,0,8,
		28,12,106,6,82,73,71,72,84,0,25,9,106,5,
		76,69,70,84,0,80,7,36,58,0,48,18,0,102,
		95,2,112,1,73,36,59,0,48,19,0,102,95,3,
		112,1,73,36,60,0,48,20,0,102,95,4,112,1,
		73,36,61,0,48,21,0,102,95,5,112,1,73,36,
		62,0,48,22,0,102,95,8,112,1,73,36,63,0,
		48,23,0,102,95,9,112,1,73,36,64,0,48,24,
		0,102,95,6,112,1,73,36,65,0,48,25,0,102,
		95,14,112,1,73,36,66,0,48,26,0,102,95,1,
		112,1,73,36,67,0,48,27,0,102,121,112,1,73,
		36,68,0,48,28,0,102,95,10,112,1,73,36,69,
		0,48,29,0,102,95,11,112,1,73,36,70,0,48,
		30,0,102,95,12,112,1,73,36,71,0,48,31,0,
		102,95,13,112,1,73,36,73,0,95,7,106,5,76,
		69,70,84,0,8,28,15,36,74,0,48,32,0,102,
		122,112,1,73,25,90,36,75,0,95,7,106,6,82,
		73,71,72,84,0,8,28,16,36,76,0,48,32,0,
		102,92,2,112,1,73,25,60,36,77,0,95,7,106,
		7,67,69,78,84,69,82,0,8,31,18,95,7,106,
		9,67,69,78,84,69,82,69,68,0,8,28,16,36,
		78,0,48,32,0,102,92,3,112,1,73,25,13,36,
		80,0,48,32,0,102,122,112,1,73,36,83,0,176,
		33,0,48,34,0,102,112,0,12,1,176,33,0,48,
		35,0,102,112,0,12,1,35,28,21,36,84,0,176,
		36,0,48,34,0,102,112,0,106,1,0,20,2,25,
		211,36,87,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TLOITEM_STABILIZE )
{
	static const HB_BYTE pcode[] =
	{
		36,93,0,48,37,0,102,48,38,0,48,39,0,48,
		40,0,102,112,0,112,0,106,2,66,0,48,41,0,
		102,112,0,112,2,112,1,73,36,100,0,48,42,0,
		102,112,0,48,43,0,48,40,0,102,112,0,112,0,
		15,28,23,36,101,0,48,37,0,102,48,43,0,48,
		40,0,102,112,0,112,0,112,1,73,36,125,0,48,
		27,0,102,48,44,0,48,40,0,102,112,0,112,0,
		112,1,73,36,129,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TLOITEM_SAYDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,4,3,36,172,0,121,80,7,36,176,0,95,1,
		100,8,28,5,121,80,1,95,2,100,8,28,5,121,
		80,2,95,3,100,8,28,5,122,80,3,36,178,0,
		95,3,176,33,0,48,35,0,102,112,0,12,1,15,
		28,8,36,179,0,100,110,7,36,182,0,48,45,0,
		102,112,0,121,69,28,15,36,183,0,96,2,0,48,
		45,0,102,112,0,135,36,186,0,176,46,0,48,17,
		0,48,35,0,102,112,0,95,3,1,112,0,48,34,
		0,102,112,0,95,3,1,12,2,80,4,36,188,0,
		176,33,0,95,4,12,1,121,69,29,49,1,36,190,
		0,48,47,0,48,39,0,48,40,0,102,112,0,112,
		0,95,4,48,41,0,102,112,0,112,2,80,5,36,
		191,0,95,4,80,6,36,193,0,95,5,48,48,0,
		102,112,0,15,28,75,36,194,0,176,49,0,106,2,
		32,0,95,6,12,2,80,7,36,195,0,95,7,121,
		69,28,50,36,196,0,176,50,0,95,6,122,95,7,
		122,49,12,3,80,6,36,197,0,48,47,0,48,39,
		0,48,40,0,102,112,0,112,0,95,6,48,41,0,
		102,112,0,112,2,80,5,25,171,36,203,0,95,7,
		121,69,28,108,36,204,0,48,51,0,48,39,0,48,
		40,0,102,112,0,112,0,95,1,95,2,95,6,48,
		41,0,102,112,0,48,48,0,102,112,0,48,52,0,
		102,112,0,100,48,53,0,102,112,0,122,49,112,8,
		73,36,205,0,48,54,0,48,40,0,102,112,0,112,
		0,73,36,206,0,176,50,0,95,4,95,7,122,72,
		12,2,80,4,36,207,0,96,1,0,48,42,0,102,
		112,0,135,36,208,0,121,80,7,26,6,255,36,210,
		0,48,51,0,48,39,0,48,40,0,102,112,0,112,
		0,95,1,95,2,95,4,48,41,0,102,112,0,48,
		48,0,102,112,0,48,52,0,102,112,0,100,48,53,
		0,102,112,0,122,49,112,8,73,36,211,0,106,1,
		0,80,4,26,198,254,36,216,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,57,0,2,0,116,57,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
