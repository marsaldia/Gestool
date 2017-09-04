/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Animat.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TANIMAT );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TCONTROL );
HB_FUNC_STATIC( TANIMAT_REDEFINE );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( DELETEOBJECT );
HB_FUNC_STATIC( TANIMAT_PAINT );
HB_FUNC_STATIC( TANIMAT_LOADBMPS );
HB_FUNC_STATIC( TANIMAT_DEFAULT );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( NOR );
HB_FUNC_EXTERN( TBRUSH );
HB_FUNC_EXTERN( TTIMER );
HB_FUNC_EXTERN( COMPATDC );
HB_FUNC_EXTERN( SELECTOBJECT );
HB_FUNC_EXTERN( STRETCHBLT );
HB_FUNC_EXTERN( DELETEDC );
HB_FUNC_EXTERN( SYSREFRESH );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( READBITMAP );
HB_FUNC_EXTERN( LOADBITMAP );
HB_FUNC_EXTERN( GETRESOURCES );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( NBMPHEIGHT );
HB_FUNC_EXTERN( NBMPWIDTH );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ANIMAT )
{ "TANIMAT", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TANIMAT )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCONTROL )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TANIMAT_REDEFINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANIMAT_REDEFINE )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "ABITMAPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DELETEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DELETEOBJECT )}, NULL },
{ "DESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INITIATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEFAULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BEGINPAINT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAINT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDPAINT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TANIMAT_PAINT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANIMAT_PAINT )}, NULL },
{ "TANIMAT_LOADBMPS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANIMAT_LOADBMPS )}, NULL },
{ "TANIMAT_DEFAULT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TANIMAT_DEFAULT )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACBITMAPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ABITMAPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NSPEED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LWORKING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LFROMTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NACTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REGISTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOR )}, NULL },
{ "DEFCONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBRUSH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBRUSH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBRUSH", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBRUSH )}, NULL },
{ "_OTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TTIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TTIMER )}, NULL },
{ "NSPEED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOADBMPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACBITMAPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NWBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NHBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETDC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LFROMTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LWORKING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NACTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPATDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( COMPATDC )}, NULL },
{ "HDC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECTOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECTOBJECT )}, NULL },
{ "STRETCHBLT", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRETCHBLT )}, NULL },
{ "DELETEDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DELETEDC )}, NULL },
{ "RELEASEDC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SYSREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SYSREFRESH )}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "READBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( READBITMAP )}, NULL },
{ "LOADBITMAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOADBITMAP )}, NULL },
{ "GETRESOURCES", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETRESOURCES )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "_NHBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBMPHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( NBMPHEIGHT )}, NULL },
{ "_NWBMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBMPWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( NBMPWIDTH )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ANIMAT, ".\\.\\Prg\\Animat.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ANIMAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ANIMAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( TANIMAT )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,81,0,36,6,0,103,2,0,100,8,
		29,241,3,176,1,0,104,2,0,12,1,29,230,3,
		166,168,3,0,122,80,1,48,2,0,176,3,0,12,
		0,106,8,84,65,110,105,109,97,116,0,108,4,4,
		1,0,108,0,112,3,80,2,36,8,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,10,
		97,99,66,105,116,109,97,112,115,0,4,1,0,9,
		112,5,73,36,9,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,9,97,66,105,116,109,
		97,112,115,0,4,1,0,9,112,5,73,36,10,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,4,108,71,111,0,4,1,0,9,112,5,73,
		36,11,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,7,111,84,105,109,101,114,0,4,
		1,0,9,112,5,73,36,12,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,7,110,83,
		112,101,101,100,0,4,1,0,9,112,5,73,36,13,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,8,110,65,99,116,117,97,108,0,4,1,
		0,9,112,5,73,36,14,0,48,5,0,95,2,100,
		100,95,1,121,72,121,72,121,72,106,6,110,72,66,
		109,112,0,106,6,110,87,66,109,112,0,4,2,0,
		9,112,5,73,36,16,0,48,5,0,95,2,100,100,
		95,1,121,72,121,72,121,72,106,9,108,87,111,114,
		107,105,110,103,0,4,1,0,9,112,5,73,36,17,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,9,108,80,97,105,110,116,101,100,0,4,
		1,0,9,112,5,73,36,18,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,11,108,70,
		114,111,109,84,105,109,101,114,0,4,1,0,9,112,
		5,73,36,20,0,48,6,0,95,2,106,8,76,79,
		71,73,67,65,76,0,100,95,1,121,72,92,32,72,
		121,72,121,72,106,12,108,82,101,103,105,115,116,101,
		114,101,100,0,4,1,0,9,112,5,73,36,22,0,
		48,7,0,95,2,106,9,82,101,100,101,102,105,110,
		101,0,108,8,95,1,92,8,72,121,72,121,72,112,
		3,73,36,24,0,48,9,0,95,2,106,3,71,111,
		0,89,20,0,1,0,0,0,48,10,0,48,11,0,
		95,1,112,0,112,0,6,95,1,121,72,121,72,121,
		72,112,3,73,36,25,0,48,9,0,95,2,106,5,
		83,116,111,112,0,89,20,0,1,0,0,0,48,12,
		0,48,11,0,95,1,112,0,112,0,6,95,1,121,
		72,121,72,121,72,112,3,73,36,29,0,48,9,0,
		95,2,106,8,68,101,115,116,114,111,121,0,89,60,
		0,1,0,0,0,176,13,0,48,14,0,95,1,112,
		0,89,15,0,1,0,0,0,176,15,0,95,1,12,
		1,6,20,2,48,12,0,48,11,0,95,1,112,0,
		112,0,73,48,16,0,48,17,0,95,1,112,0,112,
		0,6,95,1,121,72,121,72,121,72,112,3,73,36,
		31,0,48,9,0,95,2,106,9,73,110,105,116,105,
		97,116,101,0,89,30,0,2,0,0,0,48,18,0,
		48,17,0,95,1,112,0,95,2,112,1,73,48,19,
		0,95,1,112,0,6,95,1,121,72,121,72,121,72,
		112,3,73,36,32,0,48,9,0,95,2,106,5,73,
		110,105,116,0,89,30,0,2,0,0,0,48,20,0,
		48,17,0,95,1,112,0,95,2,112,1,73,48,19,
		0,95,1,112,0,6,95,1,121,72,121,72,121,72,
		112,3,73,36,34,0,48,9,0,95,2,106,8,68,
		105,115,112,108,97,121,0,89,31,0,1,0,0,0,
		48,21,0,95,1,112,0,73,48,22,0,95,1,112,
		0,73,48,23,0,95,1,112,0,6,95,1,121,72,
		121,72,121,72,112,3,73,36,36,0,48,7,0,95,
		2,106,6,80,97,105,110,116,0,108,24,95,1,121,
		72,121,72,121,72,112,3,73,36,38,0,48,7,0,
		95,2,106,9,76,111,97,100,66,109,112,115,0,108,
		25,95,1,121,72,121,72,121,72,112,3,73,36,40,
		0,48,7,0,95,2,106,8,68,101,102,97,117,108,
		116,0,108,26,95,1,121,72,121,72,121,72,112,3,
		73,36,42,0,48,27,0,95,2,112,0,73,167,14,
		0,0,176,28,0,104,2,0,95,2,20,2,168,48,
		29,0,95,2,112,0,80,3,176,30,0,95,3,106,
		10,73,110,105,116,67,108,97,115,115,0,12,2,28,
		12,48,31,0,95,3,164,146,1,0,73,95,3,110,
		7,48,29,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANIMAT_REDEFINE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,36,48,0,95,4,100,8,28,6,92,4,
		80,4,36,50,0,48,32,0,102,95,1,112,1,73,
		36,51,0,48,33,0,102,95,2,112,1,73,36,52,
		0,48,34,0,102,95,3,112,1,73,36,53,0,48,
		35,0,102,4,0,0,112,1,73,36,54,0,48,36,
		0,102,95,4,112,1,73,36,55,0,48,37,0,102,
		9,112,1,73,36,56,0,48,38,0,102,9,112,1,
		73,36,57,0,48,39,0,102,9,112,1,73,36,58,
		0,48,40,0,102,121,112,1,73,36,60,0,48,41,
		0,102,176,42,0,122,92,2,12,2,112,1,73,36,
		62,0,95,1,100,69,28,14,36,63,0,48,43,0,
		95,1,102,112,1,73,36,66,0,48,44,0,102,112,
		0,100,69,28,17,36,67,0,48,12,0,48,44,0,
		102,112,0,112,0,73,36,70,0,48,45,0,102,48,
		2,0,176,46,0,12,0,106,4,78,85,76,0,112,
		1,112,1,73,36,72,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANIMAT_DEFAULT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,75,0,102,80,1,36,78,0,48,47,
		0,95,1,48,2,0,176,48,0,12,0,48,49,0,
		95,1,112,0,92,100,65,89,26,0,0,0,1,0,
		1,0,48,39,0,95,255,120,112,1,73,48,50,0,
		95,255,112,0,6,95,1,112,3,112,1,73,36,80,
		0,48,51,0,95,1,48,52,0,95,1,112,0,112,
		1,73,36,82,0,48,53,0,95,1,48,54,0,95,
		1,112,0,48,55,0,95,1,112,0,120,112,3,73,
		36,84,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANIMAT_PAINT )
{
	static const HB_BYTE pcode[] =
	{
		13,5,0,36,96,0,48,56,0,102,112,0,31,34,
		36,97,0,48,38,0,102,120,112,1,73,36,98,0,
		48,10,0,48,11,0,102,112,0,112,0,73,36,99,
		0,100,110,7,36,102,0,48,57,0,102,112,0,73,
		36,104,0,48,58,0,102,112,0,28,107,48,59,0,
		102,112,0,31,99,36,106,0,48,37,0,102,120,112,
		1,73,36,108,0,48,60,0,102,112,0,92,10,15,
		28,13,36,109,0,48,40,0,102,121,112,1,73,36,
		112,0,48,54,0,102,112,0,92,10,18,48,60,0,
		102,112,0,65,80,1,36,114,0,95,1,80,2,36,
		115,0,48,54,0,102,112,0,95,1,49,80,3,36,
		117,0,48,40,0,102,21,48,60,0,163,0,112,0,
		23,112,1,73,36,121,0,176,61,0,48,62,0,102,
		112,0,12,1,80,4,36,122,0,176,63,0,95,4,
		48,14,0,102,112,0,122,1,12,2,80,5,36,124,
		0,176,64,0,48,62,0,102,112,0,95,1,121,95,
		3,48,55,0,102,112,0,95,4,121,121,95,3,48,
		55,0,102,112,0,97,32,0,204,0,20,11,36,125,
		0,176,64,0,48,62,0,102,112,0,121,121,95,2,
		48,55,0,102,112,0,95,4,95,3,121,95,2,48,
		55,0,102,112,0,97,32,0,204,0,20,11,36,127,
		0,176,63,0,95,4,95,5,20,2,36,128,0,176,
		65,0,95,4,20,1,36,132,0,48,66,0,102,112,
		0,73,36,134,0,48,39,0,102,9,112,1,73,36,
		135,0,48,37,0,102,9,112,1,73,36,137,0,176,
		67,0,20,0,36,139,0,48,68,0,102,112,0,100,
		69,28,18,36,140,0,48,69,0,48,68,0,102,112,
		0,102,112,1,73,36,143,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TANIMAT_LOADBMPS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,150,0,48,57,0,102,112,0,73,36,
		152,0,122,165,80,2,25,96,36,154,0,106,2,46,
		0,48,52,0,102,112,0,95,2,1,24,28,38,36,
		155,0,176,70,0,48,14,0,102,112,0,176,71,0,
		48,62,0,102,112,0,48,52,0,102,112,0,95,2,
		1,12,2,20,2,25,35,36,157,0,176,70,0,48,
		14,0,102,112,0,176,72,0,176,73,0,12,0,48,
		52,0,102,112,0,95,2,1,12,2,20,2,36,152,
		0,175,2,0,176,74,0,48,52,0,102,112,0,12,
		1,15,28,150,36,162,0,48,75,0,102,176,76,0,
		48,14,0,102,112,0,122,1,12,1,112,1,73,36,
		163,0,48,77,0,102,176,78,0,48,14,0,102,112,
		0,122,1,12,1,112,1,73,36,165,0,48,66,0,
		102,112,0,73,36,167,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,81,0,2,0,116,81,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

