/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Models\EmpresasModel.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( EMPRESASMODEL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( BASEMODEL );
HB_FUNC_STATIC( EMPRESASMODEL_UPDATEEMPRESACODIGOEMPRESA );
HB_FUNC_STATIC( EMPRESASMODEL_GETCODIGOACTIVA );
HB_FUNC_STATIC( EMPRESASMODEL_GETCODIGOGRUPO );
HB_FUNC_STATIC( EMPRESASMODEL_GETREGISTROSACTIVOS );
HB_FUNC_STATIC( EMPRESASMODEL_GETPRIMERA );
HB_FUNC_STATIC( EMPRESASMODEL_GETCODIGOGRUPOCAMPOLOGICO );
HB_FUNC_STATIC( EMPRESASMODEL_SCATTER );
HB_FUNC_STATIC( EMPRESASMODEL_DELETEEMPRESA );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( QUOTED );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSCATTER );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_EMPRESASMODEL )
{ "EMPRESASMODEL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "BASEMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( BASEMODEL )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETDATOSTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPRESASMODEL_UPDATEEMPRESACODIGOEMPRESA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_UPDATEEMPRESACODIGOEMPRESA )}, NULL },
{ "EMPRESASMODEL_GETCODIGOACTIVA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_GETCODIGOACTIVA )}, NULL },
{ "EMPRESASMODEL_GETCODIGOGRUPO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_GETCODIGOGRUPO )}, NULL },
{ "EMPRESASMODEL_GETREGISTROSACTIVOS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_GETREGISTROSACTIVOS )}, NULL },
{ "EMPRESASMODEL_GETPRIMERA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_GETPRIMERA )}, NULL },
{ "GETCODIGOGRUPOCAMPOLOGICO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPRESASMODEL_GETCODIGOGRUPOCAMPOLOGICO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_GETCODIGOGRUPOCAMPOLOGICO )}, NULL },
{ "EMPRESASMODEL_SCATTER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_SCATTER )}, NULL },
{ "EMPRESASMODEL_DELETEEMPRESA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EMPRESASMODEL_DELETEEMPRESA )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETEMPRESATABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXECUTESQLSTATEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CCODGRP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COUNTER", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "QUOTED", {HB_FS_PUBLIC}, {HB_FUNCNAME( QUOTED )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DBSCATTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSCATTER )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_EMPRESASMODEL, ".\\Prg\\Models\\EmpresasModel.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_EMPRESASMODEL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_EMPRESASMODEL )
   #include "hbiniseg.h"
#endif

HB_FUNC( EMPRESASMODEL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,33,0,36,6,0,103,2,0,100,8,
		29,28,3,176,1,0,104,2,0,12,1,29,17,3,
		166,211,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,14,69,109,112,114,101,115,97,115,77,111,100,
		101,108,0,108,4,4,1,0,108,0,112,3,80,2,
		36,8,0,48,5,0,95,2,106,20,103,101,116,69,
		109,112,114,101,115,97,84,97,98,108,101,78,97,109,
		101,0,89,25,0,1,0,0,0,48,6,0,95,1,
		106,8,69,109,112,114,101,115,97,0,112,1,6,95,
		1,121,72,121,72,121,72,112,3,73,36,10,0,48,
		7,0,95,2,106,27,85,112,100,97,116,101,69,109,
		112,114,101,115,97,67,111,100,105,103,111,69,109,112,
		114,101,115,97,0,108,8,95,1,121,72,121,72,121,
		72,112,3,73,36,12,0,48,7,0,95,2,106,16,
		103,101,116,67,111,100,105,103,111,65,99,116,105,118,
		97,0,108,9,95,1,121,72,121,72,121,72,112,3,
		73,36,14,0,48,7,0,95,2,106,15,103,101,116,
		67,111,100,105,103,111,71,114,117,112,111,0,108,10,
		95,1,121,72,121,72,121,72,112,3,73,36,16,0,
		48,7,0,95,2,106,20,103,101,116,82,101,103,105,
		115,116,114,111,115,65,99,116,105,118,111,115,0,108,
		11,95,1,121,72,121,72,121,72,112,3,73,36,18,
		0,48,7,0,95,2,106,11,103,101,116,80,114,105,
		109,101,114,97,0,108,12,95,1,121,72,121,72,121,
		72,112,3,73,36,20,0,48,5,0,95,2,106,22,
		103,101,116,67,111,100,105,103,111,71,114,117,112,111,
		67,108,105,101,110,116,101,0,89,27,0,2,0,0,
		0,48,13,0,95,1,95,2,106,8,108,71,114,112,
		67,108,105,0,112,2,6,95,1,121,72,121,72,121,
		72,112,3,73,36,22,0,48,5,0,95,2,106,24,
		103,101,116,67,111,100,105,103,111,71,114,117,112,111,
		80,114,111,118,101,101,100,111,114,0,89,27,0,2,
		0,0,0,48,13,0,95,1,95,2,106,8,108,71,
		114,112,80,114,118,0,112,2,6,95,1,121,72,121,
		72,121,72,112,3,73,36,24,0,48,5,0,95,2,
		106,23,103,101,116,67,111,100,105,103,111,71,114,117,
		112,111,65,114,116,105,99,117,108,111,0,89,27,0,
		2,0,0,0,48,13,0,95,1,95,2,106,8,108,
		71,114,112,65,114,116,0,112,2,6,95,1,121,72,
		121,72,121,72,112,3,73,36,26,0,48,5,0,95,
		2,106,22,103,101,116,67,111,100,105,103,111,71,114,
		117,112,111,65,108,109,97,99,101,110,0,89,27,0,
		2,0,0,0,48,13,0,95,1,95,2,106,8,108,
		71,114,112,65,108,109,0,112,2,6,95,1,121,72,
		121,72,121,72,112,3,73,36,28,0,48,7,0,95,
		2,106,26,103,101,116,67,111,100,105,103,111,71,114,
		117,112,111,67,97,109,112,111,76,111,103,105,99,111,
		0,108,14,95,1,121,72,121,72,121,72,112,3,73,
		36,30,0,48,7,0,95,2,106,8,115,99,97,116,
		116,101,114,0,108,15,95,1,121,72,121,72,121,72,
		112,3,73,36,32,0,48,7,0,95,2,106,14,68,
		101,108,101,116,101,69,109,112,114,101,115,97,0,108,
		16,95,1,121,72,121,72,121,72,112,3,73,36,34,
		0,48,17,0,95,2,112,0,73,167,14,0,0,176,
		18,0,104,2,0,95,2,20,2,168,48,19,0,95,
		2,112,0,80,3,176,20,0,95,3,106,10,73,110,
		105,116,67,108,97,115,115,0,12,2,28,12,48,21,
		0,95,3,164,146,1,0,73,95,3,110,7,48,19,
		0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_UPDATEEMPRESACODIGOEMPRESA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,42,0,106,8,85,80,68,65,84,69,
		32,0,48,22,0,102,112,0,72,106,2,32,0,72,
		106,75,83,69,84,32,67,111,100,69,109,112,32,61,
		32,67,79,78,67,65,84,40,32,39,48,48,39,44,
		32,84,82,73,77,40,32,67,111,100,69,109,112,32,
		41,32,41,32,87,72,69,82,69,32,40,32,76,69,
		78,71,84,72,40,32,67,111,100,69,109,112,32,41,
		32,60,32,52,32,41,0,72,80,2,36,44,0,48,
		23,0,102,95,2,96,1,0,112,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_GETCODIGOGRUPO )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,51,0,106,21,83,69,76,69,67,84,
		32,99,67,111,100,71,114,112,32,70,82,79,77,32,
		0,48,22,0,102,112,0,72,106,18,32,87,72,69,
		82,69,32,67,111,100,69,109,112,32,61,32,39,0,
		72,176,24,0,95,1,12,1,72,106,2,39,0,72,
		80,3,36,53,0,48,23,0,102,95,3,96,2,0,
		112,2,28,12,36,54,0,95,2,88,25,0,110,7,
		36,57,0,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_GETCODIGOACTIVA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,64,0,106,20,83,69,76,69,67,84,
		32,67,111,100,69,109,112,32,70,82,79,77,32,0,
		48,22,0,102,112,0,72,106,15,32,87,72,69,82,
		69,32,108,65,99,116,105,118,97,0,72,80,2,36,
		66,0,48,23,0,102,95,2,96,1,0,112,2,28,
		12,36,67,0,95,1,88,26,0,110,7,36,70,0,
		106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_GETREGISTROSACTIVOS )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,77,0,106,33,83,69,76,69,67,84,
		32,67,111,117,110,116,40,42,41,32,65,83,32,67,
		111,117,110,116,101,114,32,70,82,79,77,32,0,48,
		22,0,102,112,0,72,80,2,36,79,0,48,23,0,
		102,95,2,96,1,0,112,2,28,12,36,80,0,95,
		1,88,27,0,110,7,36,83,0,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_GETPRIMERA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,90,0,106,26,83,69,76,69,67,84,
		32,84,79,80,32,49,32,67,111,100,69,109,112,32,
		70,82,79,77,32,0,48,22,0,102,112,0,72,106,
		18,32,87,72,69,82,69,32,78,79,84,32,108,71,
		114,117,112,111,0,72,80,2,36,92,0,48,23,0,
		102,95,2,96,1,0,112,2,28,12,36,93,0,95,
		1,88,26,0,110,7,36,96,0,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_GETCODIGOGRUPOCAMPOLOGICO )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,104,0,106,21,83,69,76,69,67,84,
		32,99,67,111,100,71,114,112,32,70,82,79,77,32,
		0,48,22,0,102,112,0,72,106,2,32,0,72,106,
		16,87,72,69,82,69,32,67,111,100,69,109,112,32,
		61,32,0,72,176,28,0,95,1,12,1,72,106,6,
		32,65,78,68,32,0,72,95,2,72,80,4,36,106,
		0,48,23,0,102,95,4,96,3,0,112,2,28,27,
		36,107,0,176,29,0,95,3,88,25,0,12,1,31,
		12,36,108,0,95,3,88,25,0,80,1,36,112,0,
		95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_SCATTER )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,119,0,106,21,83,69,76,69,67,84,
		32,84,79,80,32,49,32,42,32,70,82,79,77,32,
		0,48,22,0,102,112,0,72,106,17,32,87,72,69,
		82,69,32,67,111,100,69,109,112,32,61,32,0,72,
		176,28,0,95,1,12,1,72,80,3,36,121,0,48,
		23,0,102,95,3,96,2,0,112,2,28,13,36,122,
		0,176,30,0,95,2,20,1,7,36,125,0,4,0,
		0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EMPRESASMODEL_DELETEEMPRESA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,133,0,106,13,68,69,76,69,84,69,
		32,70,82,79,77,32,0,48,22,0,102,112,0,72,
		106,2,32,0,72,106,16,87,72,69,82,69,32,67,
		111,100,69,109,112,32,61,32,0,72,176,28,0,95,
		1,12,1,72,80,3,36,135,0,48,23,0,102,95,
		3,96,2,0,112,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,33,0,2,0,116,33,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
