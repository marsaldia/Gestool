/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TDbaux.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TDBAUX );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TDBAUX_NEW );
HB_FUNC_STATIC( TDBAUX_FIELDPOS );
HB_FUNC_STATIC( TDBAUX_ONERROR );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ARRAY );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( GETPARAM );
HB_FUNC_EXTERN( _CLSSETERROR );
HB_FUNC_EXTERN( _GENERROR );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TDBAUX )
{ "TDBAUX", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TDBAUX )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDBAUX_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDBAUX_NEW )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDBAUX_FIELDPOS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDBAUX_FIELDPOS )}, NULL },
{ "SETONERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDBAUX_ONERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDBAUX_ONERROR )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AFLDNAMES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ABUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( ARRAY )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "AFLDNAMES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIELDNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "FIELDPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIELDPUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETPARAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPARAM )}, NULL },
{ "_CLSSETERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( _CLSSETERROR )}, NULL },
{ "_GENERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( _GENERROR )}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TDBAUX, ".\\.\\Prg\\TDbaux.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TDBAUX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TDBAUX )
   #include "hbiniseg.h"
#endif

HB_FUNC( TDBAUX )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,35,0,36,5,0,103,1,0,100,8,
		29,121,1,176,1,0,104,1,0,12,1,29,110,1,
		166,48,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,7,84,68,98,65,117,120,0,108,4,4,1,
		0,108,0,112,3,80,2,36,7,0,48,5,0,95,
		2,106,6,65,82,82,65,89,0,100,95,1,121,72,
		121,72,121,72,106,8,97,66,117,102,102,101,114,0,
		4,1,0,9,112,5,73,36,8,0,48,5,0,95,
		2,106,6,65,82,82,65,89,0,100,95,1,121,72,
		121,72,121,72,106,10,97,70,108,100,78,97,109,101,
		115,0,4,1,0,9,112,5,73,36,10,0,48,6,
		0,95,2,106,4,78,101,119,0,108,7,95,1,92,
		8,72,121,72,121,72,112,3,73,36,12,0,48,8,
		0,95,2,106,9,70,105,101,108,100,71,101,116,0,
		89,18,0,2,0,0,0,48,9,0,95,1,112,0,
		95,2,1,6,95,1,121,72,121,72,121,72,112,3,
		73,36,14,0,48,8,0,95,2,106,9,70,105,101,
		108,100,80,117,116,0,89,21,0,3,0,0,0,95,
		3,165,48,9,0,95,1,112,0,95,2,2,6,95,
		1,121,72,121,72,121,72,112,3,73,36,16,0,48,
		6,0,95,2,106,9,70,105,101,108,100,80,111,115,
		0,108,10,95,1,121,72,121,72,121,72,112,3,73,
		36,18,0,48,11,0,95,2,108,12,112,1,73,36,
		20,0,48,13,0,95,2,112,0,73,167,14,0,0,
		176,14,0,104,1,0,95,2,20,2,168,48,15,0,
		95,2,112,0,80,3,176,16,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		17,0,95,3,164,146,1,0,73,95,3,110,7,48,
		15,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDBAUX_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,27,0,48,18,0,95,1,112,0,80,
		3,36,29,0,48,19,0,102,4,0,0,112,1,73,
		36,30,0,48,20,0,102,176,21,0,95,3,12,1,
		112,1,73,36,32,0,122,165,80,2,25,31,36,33,
		0,176,22,0,48,23,0,102,112,0,48,24,0,95,
		1,95,2,112,1,20,2,36,32,0,175,2,0,95,
		3,15,28,224,36,36,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDBAUX_FIELDPOS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,42,0,176,25,0,48,23,0,102,112,
		0,89,28,0,1,0,1,0,1,0,95,255,176,26,
		0,176,27,0,95,1,122,92,9,12,3,12,1,8,
		6,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDBAUX_ONERROR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,50,0,176,27,0,95,1,122,122,12,
		3,106,2,95,0,8,28,80,36,51,0,48,28,0,
		102,176,27,0,95,1,92,2,12,2,112,1,165,80,
		3,121,69,28,23,36,52,0,48,29,0,102,95,3,
		176,30,0,122,122,12,2,112,2,73,25,88,36,54,
		0,176,31,0,176,32,0,95,2,48,33,0,102,112,
		0,176,27,0,95,1,92,2,12,2,12,3,20,1,
		25,56,36,57,0,48,28,0,102,95,1,112,1,165,
		80,3,121,69,28,15,36,58,0,48,34,0,102,95,
		3,112,1,110,7,36,60,0,176,31,0,176,32,0,
		95,2,48,33,0,102,112,0,95,1,12,3,20,1,
		36,64,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,35,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

