/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Models\SituacionesModel.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SITUACIONESMODEL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASEMODEL );
HB_FUNC_STATIC( SITUACIONESMODEL_NEW );
HB_FUNC_STATIC( SITUACIONESMODEL_ARRAYSITUACIONES );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SITUACIONESMODEL )
{ "SITUACIONESMODEL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SITUACIONESMODEL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASEMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASEMODEL )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SITUACIONESMODEL_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SITUACIONESMODEL_NEW )}, NULL },
<<<<<<< HEAD
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILDROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
=======
>>>>>>> SQLite
{ "SITUACIONESMODEL_ARRAYSITUACIONES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SITUACIONESMODEL_ARRAYSITUACIONES )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDBFTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
<<<<<<< HEAD
=======
{ "_CCOLUMNORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
>>>>>>> SQLite
{ "CTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECTFETCHARRAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SITUACIONESMODEL, ".\\Prg\\Models\\SituacionesModel.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SITUACIONESMODEL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SITUACIONESMODEL )
   #include "hbiniseg.h"
#endif

HB_FUNC( SITUACIONESMODEL )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		149,3,0,116,23,0,36,7,0,103,2,0,100,8,
		29,126,1,176,1,0,104,2,0,12,1,29,115,1,
		166,53,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,17,83,105,116,117,97,99,105,111,110,101,115,
		77,111,100,101,108,0,108,4,4,1,0,108,0,112,
		3,80,2,36,9,0,48,5,0,95,2,100,106,12,
		115,105,116,117,97,99,105,111,110,101,115,0,95,1,
		121,72,121,72,121,72,106,11,99,84,97,98,108,101,
		78,97,109,101,0,4,1,0,9,112,5,73,36,11,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,14,99,68,98,102,84,97,98,108,101,78,
		97,109,101,0,4,1,0,9,112,5,73,36,13,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,9,104,67,111,108,117,109,110,115,0,4,1,
		0,9,112,5,73,36,15,0,48,6,0,95,2,106,
		4,78,101,119,0,108,7,95,1,121,72,121,72,121,
		72,112,3,73,36,17,0,48,8,0,95,2,106,21,
		98,117,105,108,100,82,111,119,83,101,116,87,105,116,
		104,82,101,99,110,111,0,89,16,0,1,0,0,0,
		48,9,0,95,1,120,112,1,6,95,1,121,72,121,
		72,121,72,112,3,73,36,19,0,48,6,0,95,2,
		106,17,97,114,114,97,121,83,105,116,117,97,99,105,
		111,110,101,115,0,108,10,95,1,121,72,121,72,121,
		72,112,3,73,36,21,0,48,11,0,95,2,112,0,
		73,167,14,0,0,176,12,0,104,2,0,95,2,20,
		2,168,48,13,0,95,2,112,0,80,3,176,14,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,15,0,95,3,164,146,1,0,73,
		95,3,110,7,48,13,0,103,2,0,112,0,110,7
=======
		149,3,0,116,22,0,36,7,0,103,2,0,100,8,
		29,115,1,176,1,0,104,2,0,12,1,29,104,1,
		166,42,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,17,83,105,116,117,97,99,105,111,110,101,115,
		77,111,100,101,108,0,108,4,4,1,0,108,0,112,
		3,80,2,36,9,0,48,5,0,95,2,100,106,7,
		110,111,109,98,114,101,0,95,1,121,72,121,72,121,
		72,106,12,99,67,111,108,117,109,110,67,111,100,101,
		0,4,1,0,9,112,5,73,36,11,0,48,5,0,
		95,2,100,106,12,115,105,116,117,97,99,105,111,110,
		101,115,0,95,1,121,72,121,72,121,72,106,11,99,
		84,97,98,108,101,78,97,109,101,0,4,1,0,9,
		112,5,73,36,13,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,14,99,68,98,102,84,
		97,98,108,101,78,97,109,101,0,4,1,0,9,112,
		5,73,36,15,0,48,5,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,9,104,67,111,108,117,109,
		110,115,0,4,1,0,9,112,5,73,36,17,0,48,
		6,0,95,2,106,4,78,101,119,0,108,7,95,1,
		121,72,121,72,121,72,112,3,73,36,19,0,48,6,
		0,95,2,106,17,97,114,114,97,121,83,105,116,117,
		97,99,105,111,110,101,115,0,108,8,95,1,121,72,
		121,72,121,72,112,3,73,36,21,0,48,9,0,95,
		2,112,0,73,167,14,0,0,176,10,0,104,2,0,
		95,2,20,2,168,48,11,0,95,2,112,0,80,3,
		176,12,0,95,3,106,10,73,110,105,116,67,108,97,
		115,115,0,12,2,28,12,48,13,0,95,3,164,146,
		1,0,73,95,3,110,7,48,11,0,103,2,0,112,
		0,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SITUACIONESMODEL_NEW )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		36,27,0,48,16,0,102,106,6,83,105,116,117,97,
		0,112,1,73,36,34,0,48,17,0,102,106,3,105,
=======
		36,27,0,48,14,0,102,106,6,83,105,116,117,97,
		0,112,1,73,36,41,0,48,15,0,102,106,3,105,
>>>>>>> SQLite
		100,0,106,7,99,114,101,97,116,101,0,106,34,73,
		78,84,69,71,69,82,32,80,82,73,77,65,82,89,
		32,75,69,89,32,65,85,84,79,73,78,67,82,69,
		77,69,78,84,0,106,5,116,101,120,116,0,106,14,
		73,100,101,110,116,105,102,105,99,97,100,111,114,0,
<<<<<<< HEAD
		106,9,100,98,102,70,105,101,108,100,0,106,1,0,
		177,3,0,106,7,110,111,109,98,114,101,0,106,7,
		99,114,101,97,116,101,0,106,24,86,65,82,67,72,
		65,82,40,32,49,52,48,32,41,32,78,79,84,32,
		78,85,76,76,0,106,5,116,101,120,116,0,106,18,
		84,105,112,111,32,100,101,32,115,105,116,117,97,99,
		105,111,110,0,106,9,100,98,102,70,105,101,108,100,
		0,106,7,99,83,105,116,117,97,0,177,3,0,177,
		2,0,112,1,73,36,36,0,48,2,0,48,18,0,
		102,112,0,112,0,73,36,38,0,102,110,7
=======
		106,7,104,101,97,100,101,114,0,106,3,73,100,0,
		106,8,118,105,115,105,98,108,101,0,9,106,6,119,
		105,100,116,104,0,92,40,177,5,0,106,7,110,111,
		109,98,114,101,0,106,7,99,114,101,97,116,101,0,
		106,24,86,65,82,67,72,65,82,40,32,49,52,48,
		32,41,32,78,79,84,32,78,85,76,76,0,106,5,
		116,101,120,116,0,106,18,84,105,112,111,32,100,101,
		32,115,105,116,117,97,99,105,111,110,0,106,7,104,
		101,97,100,101,114,0,106,10,83,105,116,117,97,99,
		105,243,110,0,106,8,118,105,115,105,98,108,101,0,
		120,106,6,119,105,100,116,104,0,93,200,0,106,6,
		102,105,101,108,100,0,106,7,99,83,105,116,117,97,
		0,106,5,116,121,112,101,0,106,2,67,0,106,4,
		108,101,110,0,93,140,0,177,8,0,177,2,0,112,
		1,73,36,43,0,48,2,0,48,16,0,102,112,0,
		112,0,73,36,45,0,48,17,0,102,106,7,110,111,
		109,98,114,101,0,112,1,73,36,47,0,102,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SITUACIONESMODEL_ARRAYSITUACIONES )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,2,0,36,44,0,106,20,83,69,76,69,67,84,
		32,110,111,109,98,114,101,32,70,82,79,77,32,0,
		48,19,0,102,112,0,72,80,1,36,45,0,48,20,
		0,102,95,1,112,1,80,2,36,47,0,95,2,110,
=======
		13,2,0,36,53,0,106,20,83,69,76,69,67,84,
		32,110,111,109,98,114,101,32,70,82,79,77,32,0,
		48,18,0,102,112,0,72,80,1,36,54,0,48,19,
		0,102,95,1,112,1,80,2,36,56,0,95,2,110,
>>>>>>> SQLite
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		117,23,0,2,0,116,23,0,4,0,0,82,1,0,
=======
		117,22,0,2,0,116,22,0,4,0,0,82,1,0,
>>>>>>> SQLite
		7
	};

	hb_vmExecute( pcode, symbols );
}

