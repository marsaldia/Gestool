/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Models\ColumnasUsuariosModel.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( COLUMNASUSUARIOSMODEL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( ADSBASEMODEL );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GETSTRUCT );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GETINDEXES );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_SET );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GET );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GETSTATE );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_EXIST );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_INSERT );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_UPDATE );
HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_DELETE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( QUOTED );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HGET );
HB_FUNC_EXTERN( LASTREC );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_COLUMNASUSUARIOSMODEL )
{ "COLUMNASUSUARIOSMODEL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "ADSBASEMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADSBASEMODEL )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETEMPRESATABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COLUMNASUSUARIOSMODEL_GETSTRUCT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_GETSTRUCT )}, NULL },
{ "COLUMNASUSUARIOSMODEL_GETINDEXES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_GETINDEXES )}, NULL },
{ "COLUMNASUSUARIOSMODEL_SET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_SET )}, NULL },
{ "COLUMNASUSUARIOSMODEL_GET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_GET )}, NULL },
{ "COLUMNASUSUARIOSMODEL_GETSTATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_GETSTATE )}, NULL },
{ "COLUMNASUSUARIOSMODEL_EXIST", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_EXIST )}, NULL },
{ "COLUMNASUSUARIOSMODEL_INSERT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_INSERT )}, NULL },
{ "COLUMNASUSUARIOSMODEL_UPDATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_UPDATE )}, NULL },
{ "COLUMNASUSUARIOSMODEL_DELETE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COLUMNASUSUARIOSMODEL_DELETE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "CCODUSE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CNOMCFG", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "EXIST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPDATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETHEADERTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QUOTED", {HB_FS_PUBLIC}, {HB_FUNCNAME( QUOTED )}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "EXECUTESQLSTATEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CBRWCFG", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NRECCFG", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NTABCFG", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "GET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HGET )}, NULL },
{ "LASTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTREC )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_COLUMNASUSUARIOSMODEL, ".\\Prg\\Models\\ColumnasUsuariosModel.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_COLUMNASUSUARIOSMODEL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_COLUMNASUSUARIOSMODEL )
   #include "hbiniseg.h"
#endif

HB_FUNC( COLUMNASUSUARIOSMODEL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,44,0,36,6,0,103,2,0,100,8,
		29,251,1,176,1,0,104,2,0,12,1,29,240,1,
		166,178,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,22,67,111,108,117,109,110,97,115,85,115,117,
		97,114,105,111,115,77,111,100,101,108,0,108,4,4,
		1,0,108,0,112,3,80,2,36,8,0,48,5,0,
		95,2,100,106,7,67,102,103,85,115,101,0,95,1,
		121,72,121,72,121,72,106,11,99,84,97,98,108,101,
		78,97,109,101,0,4,1,0,9,112,5,73,36,10,
		0,48,6,0,95,2,106,19,103,101,116,72,101,97,
		100,101,114,84,97,98,108,101,78,97,109,101,0,89,
		15,0,1,0,0,0,48,7,0,95,1,112,0,6,
		95,1,121,72,121,72,121,72,112,3,73,36,12,0,
		48,8,0,95,2,106,10,103,101,116,83,116,114,117,
		99,116,0,108,9,95,1,121,72,121,72,121,72,112,
		3,73,36,14,0,48,8,0,95,2,106,11,103,101,
		116,73,110,100,101,120,101,115,0,108,10,95,1,121,
		72,121,72,121,72,112,3,73,36,16,0,48,8,0,
		95,2,106,4,115,101,116,0,108,11,95,1,121,72,
		121,72,121,72,112,3,73,36,18,0,48,8,0,95,
		2,106,4,103,101,116,0,108,12,95,1,121,72,121,
		72,121,72,112,3,73,36,19,0,48,8,0,95,2,
		106,9,103,101,116,83,116,97,116,101,0,108,13,95,
		1,121,72,121,72,121,72,112,3,73,36,21,0,48,
		8,0,95,2,106,6,101,120,105,115,116,0,108,14,
		95,1,121,72,121,72,121,72,112,3,73,36,23,0,
		48,8,0,95,2,106,7,105,110,115,101,114,116,0,
		108,15,95,1,121,72,121,72,121,72,112,3,73,36,
		25,0,48,8,0,95,2,106,7,117,112,100,97,116,
		101,0,108,16,95,1,121,72,121,72,121,72,112,3,
		73,36,27,0,48,8,0,95,2,106,7,100,101,108,
		101,116,101,0,108,17,95,1,121,72,121,72,121,72,
		112,3,73,36,29,0,48,18,0,95,2,112,0,73,
		167,14,0,0,176,19,0,104,2,0,95,2,20,2,
		168,48,20,0,95,2,112,0,80,3,176,21,0,95,
		3,106,10,73,110,105,116,67,108,97,115,115,0,12,
		2,28,12,48,22,0,95,3,164,146,1,0,73,95,
		3,110,7,48,20,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GETSTRUCT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,35,0,4,0,0,80,1,36,37,0,
		176,23,0,95,1,106,8,99,67,111,100,85,115,101,
		0,106,2,67,0,92,3,121,106,15,67,243,100,105,
		103,111,32,117,115,117,97,114,105,111,0,4,5,0,
		20,2,36,38,0,176,23,0,95,1,106,8,99,78,
		111,109,67,102,103,0,106,2,67,0,92,30,121,106,
		15,78,111,109,98,114,101,32,118,101,110,116,97,110,
		97,0,4,5,0,20,2,36,39,0,176,23,0,95,
		1,106,8,110,82,101,99,67,102,103,0,106,2,78,
		0,92,10,121,106,20,82,101,99,110,111,32,100,101,
		32,108,97,32,118,101,110,116,97,110,97,0,4,5,
		0,20,2,36,40,0,176,23,0,95,1,106,8,110,
		84,97,98,67,102,103,0,106,2,78,0,92,10,121,
		106,20,79,114,100,101,110,32,100,101,32,108,97,32,
		118,101,110,116,97,110,97,0,4,5,0,20,2,36,
		41,0,176,23,0,95,1,106,8,99,79,114,100,67,
		102,103,0,106,2,67,0,92,60,121,106,18,84,97,
		103,32,100,101,32,108,97,32,118,101,110,116,97,110,
		97,0,4,5,0,20,2,36,42,0,176,23,0,95,
		1,106,8,99,66,114,119,67,102,103,0,106,2,77,
		0,92,10,121,106,25,67,111,110,102,105,103,117,114,
		97,99,105,243,110,32,100,101,108,32,98,114,111,119,
		115,101,0,4,5,0,20,2,36,44,0,95,1,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GETINDEXES )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,50,0,4,0,0,80,1,36,52,0,
		176,23,0,95,1,106,8,99,67,111,100,85,115,101,
		0,106,18,99,67,111,100,85,115,101,32,43,32,99,
		78,111,109,67,102,103,0,90,10,91,24,0,91,25,
		0,72,6,9,4,4,0,20,2,36,54,0,95,1,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_SET )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,36,60,0,48,26,0,102,95,1,112,1,
		28,21,36,61,0,48,27,0,102,95,1,95,2,95,
		3,95,4,112,4,110,7,36,64,0,48,28,0,102,
		95,1,95,2,95,3,95,4,112,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GET )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,74,0,106,15,83,69,76,69,67,84,
		32,42,32,70,82,79,77,32,0,48,29,0,102,112,
		0,72,106,2,32,0,72,106,17,87,72,69,82,69,
		32,99,67,111,100,85,115,101,32,61,32,0,72,176,
		30,0,176,31,0,12,0,12,1,72,106,6,32,65,
		78,68,32,0,72,106,11,99,78,111,109,67,102,103,
		32,61,32,0,72,176,30,0,95,1,12,1,72,80,
		3,36,76,0,48,32,0,102,95,3,96,2,0,112,
		2,28,49,36,79,0,106,6,83,116,97,116,101,0,
		95,2,88,33,0,106,6,82,101,99,110,111,0,95,
		2,88,34,0,106,6,79,114,100,101,114,0,95,2,
		88,35,0,177,3,0,110,7,36,82,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_GETSTATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,88,0,48,36,0,102,95,1,112,1,
		80,2,36,90,0,176,37,0,95,2,12,1,28,10,
		36,91,0,106,1,0,110,7,36,94,0,176,38,0,
		95,2,106,6,83,116,97,116,101,0,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_EXIST )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,104,0,106,21,83,69,76,69,67,84,
		32,99,66,114,119,67,102,103,32,70,82,79,77,32,
		0,48,29,0,102,112,0,72,106,2,32,0,72,106,
		17,87,72,69,82,69,32,99,67,111,100,85,115,101,
		32,61,32,0,72,176,30,0,176,31,0,12,0,12,
		1,72,106,6,32,65,78,68,32,0,72,106,11,99,
		78,111,109,67,102,103,32,61,32,0,72,176,30,0,
		95,1,12,1,72,80,3,36,106,0,48,32,0,102,
		95,3,96,2,0,112,2,28,19,36,107,0,85,95,
		2,74,176,39,0,12,0,119,121,15,110,7,36,110,
		0,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_INSERT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,4,36,119,0,95,3,100,8,28,5,121,80,
		3,36,120,0,95,4,100,8,28,5,121,80,4,36,
		122,0,106,13,73,78,83,69,82,84,32,73,78,84,
		79,32,0,48,29,0,102,112,0,72,106,2,32,0,
		72,80,6,36,123,0,96,6,0,106,12,40,32,99,
		67,111,100,85,115,101,44,32,0,135,36,124,0,96,
		6,0,106,10,99,78,111,109,67,102,103,44,32,0,
		135,36,125,0,176,37,0,95,2,12,1,31,21,36,
		126,0,96,6,0,106,10,99,66,114,119,67,102,103,
		44,32,0,135,36,128,0,96,6,0,106,10,110,82,
		101,99,67,102,103,44,32,0,135,36,129,0,96,6,
		0,106,11,110,84,97,98,67,102,103,32,41,32,0,
		135,36,130,0,96,6,0,106,8,86,65,76,85,69,
		83,32,0,135,36,131,0,96,6,0,106,3,40,32,
		0,176,30,0,176,31,0,12,0,12,1,72,106,3,
		44,32,0,72,135,36,132,0,96,6,0,176,30,0,
		95,1,12,1,106,3,44,32,0,72,135,36,133,0,
		176,37,0,95,2,12,1,31,22,36,134,0,96,6,
		0,176,30,0,95,2,12,1,106,3,44,32,0,72,
		135,36,136,0,96,6,0,176,40,0,176,41,0,95,
		3,12,1,12,1,106,3,44,32,0,72,135,36,137,
		0,96,6,0,176,40,0,176,41,0,95,4,12,1,
		12,1,106,3,32,41,0,72,135,36,139,0,48,32,
		0,102,95,6,96,5,0,112,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_UPDATE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,4,36,148,0,95,3,100,8,28,5,121,80,
		3,36,149,0,95,4,100,8,28,5,121,80,4,36,
		151,0,106,8,85,80,68,65,84,69,32,0,48,29,
		0,102,112,0,72,106,2,32,0,72,80,6,36,152,
		0,96,6,0,106,5,83,69,84,32,0,135,36,153,
		0,176,37,0,95,2,12,1,31,36,36,154,0,96,
		6,0,106,11,99,66,114,119,67,102,103,32,61,32,
		0,176,30,0,95,2,12,1,72,106,3,44,32,0,
		72,135,36,156,0,96,6,0,106,11,110,82,101,99,
		67,102,103,32,61,32,0,176,40,0,176,41,0,95,
		3,12,1,12,1,72,106,3,44,32,0,72,135,36,
		157,0,96,6,0,106,11,110,84,97,98,67,102,103,
		32,61,32,0,176,40,0,176,41,0,95,4,12,1,
		12,1,72,106,2,32,0,72,135,36,158,0,96,6,
		0,106,17,87,72,69,82,69,32,99,67,111,100,85,
		115,101,32,61,32,0,176,30,0,176,31,0,12,0,
		12,1,72,106,6,32,65,78,68,32,0,72,135,36,
		159,0,96,6,0,106,11,99,78,111,109,67,102,103,
		32,61,32,0,176,30,0,95,1,12,1,72,135,36,
		161,0,48,32,0,102,95,6,96,5,0,112,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COLUMNASUSUARIOSMODEL_DELETE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,170,0,106,13,68,69,76,69,84,69,
		32,70,82,79,77,32,0,48,29,0,102,112,0,72,
		106,2,32,0,72,106,17,87,72,69,82,69,32,99,
		67,111,100,85,115,101,32,61,32,0,72,176,30,0,
		176,31,0,12,0,12,1,72,106,6,32,65,78,68,
		32,0,72,106,11,99,78,111,109,67,102,103,32,61,
		32,0,72,176,30,0,95,1,12,1,72,80,3,36,
		172,0,48,32,0,102,95,3,96,2,0,112,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,44,0,2,0,116,44,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

