/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Models\PropiedadesLineasModel.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( PROPIEDADESLINEASMODEL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASELINEASMODEL );
HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_NEW );
HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_UPDATEORDEN );
HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_LARGEUPDATEORDEN );
HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_REORDER );
HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_GETIMPORTSENTENCE );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( TOSQLSTRING );
HB_FUNC_EXTERN( GETSQLDATABASE );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( CLOCALDRIVER );
HB_FUNC_EXTERN( CCHECKAREA );
HB_FUNC_EXTERN( NETERR );
HB_FUNC_EXTERN( HEVAL );
HB_FUNC_EXTERN( CHGATEND );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( FIELDGET );
HB_FUNC_EXTERN( FIELDPOS );
HB_FUNC_EXTERN( HGET );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PROPIEDADESLINEASMODEL )
{ "PROPIEDADESLINEASMODEL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( PROPIEDADESLINEASMODEL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASELINEASMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASELINEASMODEL )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROPIEDADESLINEASMODEL_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PROPIEDADESLINEASMODEL_NEW )}, NULL },
{ "PROPIEDADESLINEASMODEL_UPDATEORDEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PROPIEDADESLINEASMODEL_UPDATEORDEN )}, NULL },
{ "PROPIEDADESLINEASMODEL_LARGEUPDATEORDEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PROPIEDADESLINEASMODEL_LARGEUPDATEORDEN )}, NULL },
{ "PROPIEDADESLINEASMODEL_REORDER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PROPIEDADESLINEASMODEL_REORDER )}, NULL },
{ "PROPIEDADESLINEASMODEL_GETIMPORTSENTENCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PROPIEDADESLINEASMODEL_GETIMPORTSENTENCE )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MAKEIMPORTDBFSQL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDBFTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFOREIGNCOLUMN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCONSTRAINTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TOSQLSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOSQLSTRING )}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QUERY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSQLDATABASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSQLDATABASE )}, NULL },
{ "BUILDROWSETWITHRECNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDFOREIGNKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILDROWSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "CLOCALDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CLOCALDRIVER )}, NULL },
{ "GETDBFTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCHECKAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCHECKAREA )}, NULL },
{ "NETERR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETERR )}, NULL },
{ "HEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HEVAL )}, NULL },
{ "HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOLUMNKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHGATEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHGATEND )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "FIELDGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDGET )}, NULL },
{ "FIELDPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIELDPOS )}, NULL },
{ "HGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HGET )}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PROPIEDADESLINEASMODEL, ".\\Prg\\Models\\PropiedadesLineasModel.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PROPIEDADESLINEASMODEL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PROPIEDADESLINEASMODEL )
   #include "hbiniseg.h"
#endif

HB_FUNC( PROPIEDADESLINEASMODEL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,56,0,36,7,0,103,2,0,100,8,
		29,253,1,176,1,0,104,2,0,12,1,29,242,1,
		166,180,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,23,80,114,111,112,105,101,100,97,100,101,115,
		76,105,110,101,97,115,77,111,100,101,108,0,108,4,
		4,1,0,108,0,112,3,80,2,36,9,0,48,5,
		0,95,2,100,106,19,112,114,111,112,105,101,100,97,
		100,101,115,95,108,105,110,101,97,115,0,95,1,121,
		72,121,72,121,72,106,11,99,84,97,98,108,101,78,
		97,109,101,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,14,99,68,98,102,84,97,98,108,101,78,97,
		109,101,0,4,1,0,9,112,5,73,36,13,0,48,
		5,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,9,104,67,111,108,117,109,110,115,0,4,1,0,
		9,112,5,73,36,15,0,48,6,0,95,2,106,4,
		78,101,119,0,108,7,95,1,121,72,121,72,121,72,
		112,3,73,36,17,0,48,6,0,95,2,106,12,117,
		112,100,97,116,101,79,114,100,101,110,0,108,8,95,
		1,121,72,121,72,121,72,112,3,73,36,19,0,48,
		6,0,95,2,106,17,108,97,114,103,101,85,112,100,
		97,116,101,79,114,100,101,110,0,108,9,95,1,121,
		72,121,72,121,72,112,3,73,36,21,0,48,6,0,
		95,2,106,8,114,101,79,114,100,101,114,0,108,10,
		95,1,121,72,121,72,121,72,112,3,73,36,23,0,
		48,6,0,95,2,106,18,103,101,116,73,109,112,111,
		114,116,83,101,110,116,101,110,99,101,0,108,11,95,
		1,121,72,121,72,121,72,112,3,73,36,25,0,48,
		12,0,95,2,106,24,109,97,107,101,83,112,101,99,
		105,97,108,73,109,112,111,114,116,68,98,102,83,81,
		76,0,89,20,0,1,0,0,0,48,13,0,95,1,
		176,14,0,12,0,112,1,6,95,1,121,72,121,72,
		121,72,112,3,73,36,27,0,48,15,0,95,2,112,
		0,73,167,14,0,0,176,16,0,104,2,0,95,2,
		20,2,168,48,17,0,95,2,112,0,80,3,176,18,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,19,0,95,3,164,146,1,0,
		73,95,3,110,7,48,17,0,103,2,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_NEW )
{
	static const HB_BYTE pcode[] =
	{
		36,33,0,48,20,0,102,106,7,84,66,76,80,82,
		79,0,112,1,73,36,83,0,48,21,0,102,106,3,
		105,100,0,106,7,99,114,101,97,116,101,0,106,34,
		73,78,84,69,71,69,82,32,80,82,73,77,65,82,
		89,32,75,69,89,32,65,85,84,79,73,78,67,82,
		69,77,69,78,84,0,106,5,116,101,120,116,0,106,
		14,73,100,101,110,116,105,102,105,99,97,100,111,114,
		0,106,7,104,101,97,100,101,114,0,106,3,73,100,
		0,106,8,118,105,115,105,98,108,101,0,9,177,4,
		0,106,7,99,111,100,105,103,111,0,106,7,99,114,
		101,97,116,101,0,106,21,86,65,82,67,72,65,82,
		40,52,48,41,32,78,79,84,32,78,85,76,76,0,
		106,5,116,101,120,116,0,106,32,67,243,100,105,103,
		111,32,100,101,32,108,97,32,108,105,110,101,97,32,
		100,101,32,112,114,111,112,105,101,100,97,100,0,106,
		7,104,101,97,100,101,114,0,106,7,67,243,100,105,
		103,111,0,106,8,118,105,115,105,98,108,101,0,120,
		106,6,119,105,100,116,104,0,92,100,106,6,102,105,
		101,108,100,0,106,8,99,67,111,100,84,98,108,0,
		106,5,116,121,112,101,0,106,2,67,0,106,4,108,
		101,110,0,92,40,177,8,0,106,7,110,111,109,98,
		114,101,0,106,7,99,114,101,97,116,101,0,106,21,
		86,65,82,67,72,65,82,40,51,48,41,32,78,79,
		84,32,78,85,76,76,0,106,5,116,101,120,116,0,
		106,32,78,111,109,98,114,101,32,100,101,32,108,97,
		32,108,105,110,101,97,32,100,101,32,112,114,111,112,
		105,101,100,97,100,0,106,7,104,101,97,100,101,114,
		0,106,7,78,111,109,98,114,101,0,106,8,118,105,
		115,105,98,108,101,0,120,106,6,119,105,100,116,104,
		0,92,100,106,6,102,105,101,108,100,0,106,8,99,
		68,101,115,84,98,108,0,106,5,116,121,112,101,0,
		106,2,67,0,106,4,108,101,110,0,92,60,177,8,
		0,106,6,111,114,100,101,110,0,106,7,99,114,101,
		97,116,101,0,106,13,73,78,84,32,78,79,84,32,
		78,85,76,76,0,106,5,116,101,120,116,0,106,39,
		78,250,109,101,114,111,32,100,101,32,111,114,100,101,
		110,32,112,97,114,97,32,99,243,100,105,103,111,115,
		32,100,101,32,98,97,114,114,97,115,0,106,7,104,
		101,97,100,101,114,0,106,6,79,114,100,101,110,0,
		106,8,118,105,115,105,98,108,101,0,120,106,6,119,
		105,100,116,104,0,92,50,106,6,102,105,101,108,100,
		0,106,8,110,79,114,100,84,98,108,0,106,5,116,
		121,112,101,0,106,2,78,0,106,4,108,101,110,0,
		92,5,177,8,0,106,14,99,111,100,105,103,111,95,
		98,97,114,114,97,115,0,106,7,99,114,101,97,116,
		101,0,106,11,86,65,82,67,72,65,82,40,52,41,
		0,106,5,116,101,120,116,0,106,17,67,243,100,105,
		103,111,32,100,101,32,98,97,114,114,97,115,0,106,
		7,104,101,97,100,101,114,0,106,17,67,243,100,105,
		103,111,32,100,101,32,98,97,114,114,97,115,0,106,
		8,118,105,115,105,98,108,101,0,120,106,6,119,105,
		100,116,104,0,92,100,106,6,102,105,101,108,100,0,
		106,8,110,66,97,114,84,98,108,0,106,5,116,121,
		112,101,0,106,2,67,0,106,4,108,101,110,0,92,
		4,177,8,0,106,6,99,111,108,111,114,0,106,7,
		99,114,101,97,116,101,0,106,7,73,78,84,40,57,
		41,0,106,5,116,101,120,116,0,106,16,67,243,100,
		105,103,111,32,100,101,32,99,111,108,111,114,0,106,
		7,104,101,97,100,101,114,0,106,6,67,111,108,111,
		114,0,106,8,118,105,115,105,98,108,101,0,9,106,
		6,119,105,100,116,104,0,92,50,106,6,102,105,101,
		108,100,0,106,7,110,67,111,108,111,114,0,106,5,
		116,121,112,101,0,106,2,78,0,106,4,108,101,110,
		0,92,9,177,8,0,106,12,105,100,95,99,97,98,
		101,99,101,114,97,0,106,7,99,114,101,97,116,101,
		0,106,8,73,78,84,69,71,69,82,0,106,5,116,
		101,120,116,0,106,29,73,100,101,110,116,105,102,105,
		99,97,100,111,114,32,100,101,32,108,97,32,99,97,
		98,101,99,101,114,97,0,106,7,104,101,97,100,101,
		114,0,106,3,73,100,0,106,6,102,105,101,108,100,
		0,106,8,99,67,111,100,80,114,111,0,106,8,118,
		105,115,105,98,108,101,0,9,177,5,0,177,7,0,
		112,1,73,36,85,0,48,22,0,102,106,12,105,100,
		95,99,97,98,101,99,101,114,97,0,112,1,73,36,
		87,0,48,2,0,48,23,0,102,112,0,112,0,73,
		36,89,0,48,24,0,102,106,71,70,79,82,69,73,
		71,78,32,75,69,89,32,40,105,100,95,99,97,98,
		101,99,101,114,97,41,32,82,69,70,69,82,69,78,
		67,69,83,32,112,114,111,112,105,101,100,97,100,101,
		115,40,105,100,41,32,79,78,32,68,69,76,69,84,
		69,32,67,65,83,67,65,68,69,0,112,1,73,36,
		91,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_UPDATEORDEN )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,100,0,106,8,85,80,68,65,84,69,
		32,0,48,25,0,102,112,0,72,106,14,32,83,69,
		84,32,111,114,100,101,110,32,61,32,0,72,95,1,
		72,106,16,32,87,72,69,82,69,32,111,114,100,101,
		110,32,61,32,0,72,176,26,0,95,2,12,1,72,
		80,3,36,101,0,106,8,85,80,68,65,84,69,32,
		0,48,25,0,102,112,0,72,106,14,32,83,69,84,
		32,111,114,100,101,110,32,61,32,0,72,176,26,0,
		95,2,12,1,72,106,13,32,87,72,69,82,69,32,
		105,100,32,61,32,0,72,176,26,0,48,27,0,48,
		28,0,102,112,0,106,3,105,100,0,112,1,12,1,
		72,80,4,36,103,0,48,29,0,176,30,0,12,0,
		95,3,112,1,73,36,104,0,48,29,0,176,30,0,
		12,0,95,4,112,1,73,36,106,0,48,31,0,102,
		112,0,73,36,108,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_LARGEUPDATEORDEN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,116,0,106,8,85,80,68,65,84,69,
		32,0,48,25,0,102,112,0,72,106,14,32,83,69,
		84,32,111,114,100,101,110,32,61,32,0,72,95,1,
		72,106,14,32,87,72,69,82,69,32,111,114,100,101,
		110,32,0,72,95,2,72,80,3,36,118,0,48,29,
		0,176,30,0,12,0,95,3,112,1,73,36,120,0,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_REORDER )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,127,0,106,15,83,69,76,69,67,84,
		32,42,32,70,82,79,77,32,0,48,25,0,102,112,
		0,72,106,22,32,87,72,69,82,69,32,105,100,95,
		99,97,98,101,99,101,114,97,32,61,32,0,72,176,
		26,0,48,32,0,102,112,0,12,1,72,106,16,32,
		79,82,68,69,82,32,98,121,32,111,114,100,101,110,
		0,72,80,2,36,129,0,48,33,0,102,95,2,112,
		1,73,36,131,0,48,34,0,48,28,0,102,112,0,
		112,0,32,132,0,36,133,0,106,8,85,80,68,65,
		84,69,32,0,48,25,0,102,112,0,72,106,14,32,
		83,69,84,32,111,114,100,101,110,32,61,32,0,72,
		176,26,0,48,35,0,48,28,0,102,112,0,112,0,
		12,1,72,106,13,32,87,72,69,82,69,32,105,100,
		32,61,32,0,72,176,26,0,48,27,0,48,28,0,
		102,112,0,106,3,105,100,0,112,1,12,1,72,80,
		1,36,135,0,48,29,0,176,30,0,12,0,95,1,
		112,1,73,36,137,0,48,36,0,48,28,0,102,112,
		0,122,112,1,73,26,113,255,36,141,0,48,31,0,
		102,112,0,73,36,143,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PROPIEDADESLINEASMODEL_GETIMPORTSENTENCE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,147,0,102,80,2,36,150,0,106,1,
		0,80,4,36,151,0,106,1,0,80,5,36,153,0,
		176,37,0,120,176,38,0,12,0,95,1,106,2,92,
		0,72,48,39,0,95,2,112,0,72,176,40,0,106,
		4,100,98,102,0,96,3,0,12,2,9,20,5,36,
		154,0,85,95,3,74,176,41,0,12,0,119,28,9,
		36,155,0,95,5,110,7,36,158,0,106,13,73,78,
		83,69,82,84,32,73,78,84,79,32,0,48,25,0,
		95,2,112,0,72,106,4,32,40,32,0,72,80,5,
		36,159,0,176,42,0,48,43,0,95,2,112,0,89,
		39,0,1,0,2,0,2,0,5,0,95,1,48,44,
		0,95,255,112,0,69,28,16,96,254,255,95,1,106,
		3,44,32,0,72,139,25,3,100,6,20,2,36,160,
		0,176,45,0,95,5,106,11,32,41,32,86,65,76,
		85,69,83,32,0,92,2,12,3,80,5,36,163,0,
		85,95,3,74,176,46,0,20,0,74,36,164,0,85,
		95,3,74,176,47,0,12,0,68,119,29,7,1,36,
		166,0,96,4,0,106,3,40,32,0,135,36,171,0,
		176,42,0,48,43,0,95,2,112,0,89,196,0,2,
		0,3,0,2,0,4,0,3,0,95,1,48,44,0,
		95,255,112,0,69,29,171,0,95,1,106,12,105,100,
		95,99,97,98,101,99,101,114,97,0,8,28,104,96,
		254,255,106,46,32,40,32,83,69,76,69,67,84,32,
		105,100,32,70,82,79,77,32,112,114,111,112,105,101,
		100,97,100,101,115,32,87,72,69,82,69,32,99,111,
		100,105,103,111,32,61,32,0,176,26,0,85,95,253,
		74,176,48,0,176,49,0,176,50,0,95,2,106,6,
		102,105,101,108,100,0,12,2,12,1,12,1,119,12,
		1,72,106,3,32,41,0,72,106,3,44,32,0,72,
		139,25,50,96,254,255,176,26,0,85,95,253,74,176,
		48,0,176,49,0,176,50,0,95,2,106,6,102,105,
		101,108,100,0,12,2,12,1,12,1,119,12,1,106,
		3,44,32,0,72,139,25,3,100,6,20,2,36,174,
		0,176,45,0,95,4,106,5,32,41,44,32,0,92,
		2,12,3,80,4,36,176,0,85,95,3,74,176,51,
		0,20,0,74,26,238,254,36,179,0,85,95,3,74,
		176,52,0,20,0,74,36,181,0,176,53,0,95,4,
		12,1,28,8,36,182,0,100,110,7,36,185,0,176,
		45,0,95,4,106,1,0,92,2,12,3,80,4,36,
		187,0,96,5,0,95,4,135,36,189,0,95,5,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,56,0,2,0,116,56,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

