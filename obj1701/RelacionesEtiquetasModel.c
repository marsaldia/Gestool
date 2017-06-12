/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Models\RelacionesEtiquetasModel.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( RELACIONESETIQUETASMODEL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASEMODEL );
HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_NEW );
HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_TRANSLATECODIGOTOID );
HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_GETLINEASPRODUCCCION );
HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_GETIDETIQUETAFROMCATEGORIA );
HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_GETRELATIONSOFETIQUETAS );
HB_FUNC_EXTERN( GETSQLDATABASE );
HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_SENTENCEFORINSERTLINE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( HGET );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCODEMP );
HB_FUNC_EXTERN( ETIQUETASMODEL );
HB_FUNC_EXTERN( BASEMODEL );
HB_FUNC_EXTERN( BROWSE );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( TOSQLSTRING );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CHGATEND );
HB_FUNC_EXTERN( HB_SERIALIZE );
HB_FUNC_EXTERN( HB_DESERIALIZE );
HB_FUNC_EXTERN( ATAIL );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_RELACIONESETIQUETASMODEL )
{ "RELACIONESETIQUETASMODEL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( RELACIONESETIQUETASMODEL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASEMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASEMODEL )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RELACIONESETIQUETASMODEL_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( RELACIONESETIQUETASMODEL_NEW )}, NULL },
{ "RELACIONESETIQUETASMODEL_TRANSLATECODIGOTOID", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( RELACIONESETIQUETASMODEL_TRANSLATECODIGOTOID )}, NULL },
{ "RELACIONESETIQUETASMODEL_GETLINEASPRODUCCCION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( RELACIONESETIQUETASMODEL_GETLINEASPRODUCCCION )}, NULL },
{ "RELACIONESETIQUETASMODEL_GETIDETIQUETAFROMCATEGORIA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( RELACIONESETIQUETASMODEL_GETIDETIQUETAFROMCATEGORIA )}, NULL },
{ "RELACIONESETIQUETASMODEL_GETRELATIONSOFETIQUETAS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( RELACIONESETIQUETASMODEL_GETRELATIONSOFETIQUETAS )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QUERY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSQLDATABASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSQLDATABASE )}, NULL },
{ "SENTENCEFORINSERTLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RELACIONESETIQUETASMODEL_SENTENCEFORINSERTLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( RELACIONESETIQUETASMODEL_SENTENCEFORINSERTLINE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "HGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HGET )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CCODEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCODEMP )}, NULL },
{ "ARRAYCODIGOANDID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ETIQUETASMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ETIQUETASMODEL )}, NULL },
{ "EXECUTESQLSTATEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BASEMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( BASEMODEL )}, NULL },
{ "CTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( BROWSE )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "TOSQLSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOSQLSTRING )}, NULL },
{ "CSERORD", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMORD", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CSUFORD", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NNUMLIN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "GETIDETIQUETAFROMCATEGORIA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODCAT", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CHGATEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHGATEND )}, NULL },
{ "GETLINEASPRODUCCCION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_SERIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SERIALIZE )}, NULL },
{ "SELECTFETCHARRAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DESERIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DESERIALIZE )}, NULL },
{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_RELACIONESETIQUETASMODEL, ".\\Prg\\Models\\RelacionesEtiquetasModel.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_RELACIONESETIQUETASMODEL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_RELACIONESETIQUETASMODEL )
   #include "hbiniseg.h"
#endif

HB_FUNC( RELACIONESETIQUETASMODEL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,54,0,36,7,0,103,2,0,100,8,
		29,53,2,176,1,0,104,2,0,12,1,29,42,2,
		166,236,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,25,82,101,108,97,99,105,111,110,101,115,69,
		116,105,113,117,101,116,97,115,77,111,100,101,108,0,
		108,4,4,1,0,108,0,112,3,80,2,36,9,0,
		48,5,0,95,2,100,106,21,114,101,108,97,99,105,
		111,110,101,115,95,101,116,105,113,117,101,116,97,115,
		0,95,1,121,72,121,72,121,72,106,11,99,84,97,
		98,108,101,78,97,109,101,0,4,1,0,9,112,5,
		73,36,11,0,48,5,0,95,2,100,100,95,1,121,
		72,121,72,121,72,106,9,104,67,111,108,117,109,110,
		115,0,4,1,0,9,112,5,73,36,13,0,48,6,
		0,95,2,106,4,78,101,119,0,108,7,95,1,121,
		72,121,72,121,72,112,3,73,36,15,0,48,6,0,
		95,2,106,20,84,114,97,110,115,108,97,116,101,67,
		111,100,105,103,111,84,111,73,100,0,108,8,95,1,
		121,72,121,72,121,72,112,3,73,36,17,0,48,6,
		0,95,2,106,21,103,101,116,76,105,110,101,97,115,
		80,114,111,100,117,99,99,99,105,111,110,0,108,9,
		95,1,121,72,121,72,121,72,112,3,73,36,19,0,
		48,6,0,95,2,106,27,103,101,116,73,100,69,116,
		105,113,117,101,116,97,70,114,111,109,67,97,116,101,
		103,111,114,105,97,0,108,10,95,1,121,72,121,72,
		121,72,112,3,73,36,21,0,48,6,0,95,2,106,
		24,103,101,116,82,101,108,97,116,105,111,110,115,79,
		102,69,116,105,113,117,101,116,97,115,0,108,11,95,
		1,121,72,121,72,121,72,112,3,73,36,23,0,48,
		12,0,95,2,106,24,115,101,116,82,101,108,97,116,
		105,111,110,115,79,102,69,116,105,113,117,101,116,97,
		115,0,89,31,0,4,0,0,0,48,13,0,176,14,
		0,12,0,48,15,0,95,1,95,2,95,3,95,4,
		112,3,112,1,6,95,1,121,72,121,72,121,72,112,
		3,73,36,25,0,48,6,0,95,2,106,22,115,101,
		110,116,101,110,99,101,70,111,114,73,110,115,101,114,
		116,76,105,110,101,0,108,16,95,1,121,72,121,72,
		121,72,112,3,73,36,27,0,48,17,0,95,2,112,
		0,73,167,14,0,0,176,18,0,104,2,0,95,2,
		20,2,168,48,19,0,95,2,112,0,80,3,176,20,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,21,0,95,3,164,146,1,0,
		73,95,3,110,7,48,19,0,103,2,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_NEW )
{
	static const HB_BYTE pcode[] =
	{
		36,46,0,48,22,0,102,106,3,105,100,0,106,7,
		99,114,101,97,116,101,0,106,34,73,78,84,69,71,
		69,82,32,80,82,73,77,65,82,89,32,75,69,89,
		32,65,85,84,79,73,78,67,82,69,77,69,78,84,
		0,106,5,116,101,120,116,0,106,14,73,100,101,110,
		116,105,102,105,99,97,100,111,114,0,177,2,0,106,
		9,105,100,95,112,97,100,114,101,0,106,7,99,114,
		101,97,116,101,0,106,8,73,78,84,69,71,69,82,
		0,106,5,116,101,120,116,0,106,20,73,100,101,110,
		116,105,102,105,99,97,100,111,114,32,112,97,100,114,
		101,0,177,2,0,106,12,116,97,98,108,97,95,112,
		97,100,114,101,0,106,7,99,114,101,97,116,101,0,
		106,13,86,65,82,67,72,65,82,32,40,53,48,41,
		0,106,5,116,101,120,116,0,106,25,78,111,109,98,
		114,101,32,100,101,32,108,97,32,116,97,98,108,97,
		32,112,97,100,114,101,0,177,2,0,106,11,105,100,
		95,101,109,112,114,101,115,97,0,106,7,99,114,101,
		97,116,101,0,106,11,67,72,65,82,32,40,32,52,
		32,41,0,106,5,116,101,120,116,0,106,52,69,109,
		112,114,101,115,97,32,97,32,108,97,32,113,117,101,
		32,112,101,114,116,101,110,101,99,101,32,101,108,32,
		100,111,99,117,109,101,110,116,111,32,121,32,101,116,
		105,113,117,101,116,97,115,0,177,2,0,106,16,116,
		97,98,108,97,95,100,111,99,117,109,101,110,116,111,
		0,106,7,99,114,101,97,116,101,0,106,22,86,65,
		82,67,72,65,82,32,40,53,48,41,32,78,79,84,
		32,78,85,76,76,0,106,5,116,101,120,116,0,106,
		47,78,111,109,98,114,101,32,100,101,32,108,97,32,
		116,97,98,108,97,32,100,111,110,100,101,32,101,115,
		116,195,161,32,101,108,32,105,100,95,100,111,99,117,
		109,101,110,116,111,0,177,2,0,106,13,105,100,95,
		100,111,99,117,109,101,110,116,111,0,106,7,99,114,
		101,97,116,101,0,106,23,86,65,82,67,72,65,82,
		40,32,49,56,32,41,32,78,79,84,32,78,85,76,
		76,0,106,5,116,101,120,116,0,106,30,73,100,101,
		110,116,105,102,105,99,97,100,111,114,32,100,101,32,
		117,110,32,100,111,99,117,109,101,110,116,111,0,177,
		2,0,106,10,101,116,105,113,117,101,116,97,115,0,
		106,7,99,114,101,97,116,101,0,106,16,86,65,82,
		67,72,65,82,32,40,32,50,53,48,32,41,0,106,
		5,116,101,120,116,0,106,22,67,111,110,106,117,110,
		116,111,32,100,101,32,101,116,105,113,117,101,116,97,
		115,0,177,2,0,177,7,0,112,1,73,36,48,0,
		48,2,0,48,23,0,102,112,0,112,0,73,36,50,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_GETIDETIQUETAFROMCATEGORIA )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,58,0,176,24,0,95,2,89,34,0,
		1,0,1,0,1,0,176,25,0,95,1,106,7,99,
		111,100,105,103,111,0,12,2,176,26,0,95,255,12,
		1,8,6,12,2,80,3,36,59,0,95,3,121,69,
		28,21,36,60,0,176,25,0,95,2,95,3,1,106,
		3,105,100,0,20,2,7,36,63,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_GETLINEASPRODUCCCION )
{
	static const HB_BYTE pcode[] =
	{
		13,6,1,36,71,0,106,1,0,80,4,36,72,0,
		106,7,80,82,79,76,73,78,0,80,5,36,73,0,
		106,4,69,77,80,0,176,27,0,12,0,72,106,7,
		80,82,79,76,73,78,0,72,80,6,36,74,0,48,
		28,0,176,29,0,12,0,112,0,80,7,36,78,0,
		106,57,83,69,76,69,67,84,32,99,83,101,114,79,
		114,100,44,32,110,78,117,109,79,114,100,44,32,99,
		83,117,102,79,114,100,44,32,110,78,117,109,76,105,
		110,44,32,99,67,111,100,67,97,116,32,70,82,79,
		77,32,0,95,6,72,106,2,32,0,72,106,26,87,
		72,69,82,69,32,99,67,111,100,67,97,116,32,73,
		83,32,78,79,84,32,78,85,76,76,0,72,80,2,
		36,80,0,48,30,0,176,31,0,12,0,95,2,96,
		5,0,112,2,29,38,1,36,82,0,106,13,73,78,
		83,69,82,84,32,73,78,84,79,32,0,48,32,0,
		102,112,0,72,106,65,40,32,105,100,95,101,109,112,
		114,101,115,97,44,32,116,97,98,108,97,95,100,111,
		99,117,109,101,110,116,111,44,32,105,100,95,100,111,
		99,117,109,101,110,116,111,44,32,101,116,105,113,117,
		101,116,97,115,32,41,32,86,65,76,85,69,83,32,
		0,72,80,3,36,84,0,85,95,5,74,176,33,0,
		20,0,74,36,86,0,85,95,5,74,176,34,0,20,
		0,74,36,87,0,85,95,5,74,176,35,0,12,0,
		119,32,157,0,36,89,0,96,4,0,106,3,40,32,
		0,176,36,0,176,27,0,12,0,12,1,72,106,3,
		44,32,0,72,135,36,90,0,96,4,0,176,36,0,
		95,6,12,1,106,3,44,32,0,72,135,36,91,0,
		96,4,0,106,2,39,0,95,5,88,37,0,72,176,
		38,0,95,5,88,39,0,92,9,12,2,72,95,5,
		88,40,0,72,176,38,0,95,5,88,41,0,92,4,
		12,2,72,106,4,39,44,32,0,72,135,36,92,0,
		96,4,0,176,36,0,48,42,0,102,95,5,88,43,
		0,95,7,112,2,12,1,106,5,32,41,44,32,0,
		72,135,36,94,0,85,95,5,74,176,44,0,20,0,
		74,26,89,255,36,99,0,176,45,0,95,4,12,1,
		28,8,36,100,0,100,110,7,36,103,0,96,3,0,
		176,46,0,95,4,106,3,32,41,0,92,4,12,3,
		135,36,105,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_TRANSLATECODIGOTOID )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,111,0,48,47,0,102,112,0,80,1,
		36,113,0,106,11,85,80,68,65,84,69,32,69,77,
		80,0,176,27,0,12,0,72,106,26,80,82,79,76,
		73,78,32,115,101,116,32,99,67,111,100,67,97,116,
		32,61,32,110,117,108,108,0,72,80,2,36,115,0,
		48,13,0,176,14,0,12,0,95,1,112,1,73,36,
		117,0,48,30,0,176,31,0,12,0,95,2,112,1,
		73,36,119,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_SENTENCEFORINSERTLINE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,36,130,0,106,18,40,32,83,69,76,69,
		67,84,32,105,100,32,70,82,79,77,32,0,48,32,
		0,102,112,0,72,106,21,32,87,72,69,82,69,32,
		105,100,95,101,109,112,114,101,115,97,32,61,32,0,
		72,176,36,0,176,27,0,12,0,12,1,72,106,24,
		32,65,78,68,32,116,97,98,108,97,95,100,111,99,
		117,109,101,110,116,111,32,61,32,0,72,176,36,0,
		95,1,12,1,72,106,21,32,65,78,68,32,105,100,
		95,100,111,99,117,109,101,110,116,111,32,61,32,0,
		72,176,36,0,95,2,12,1,72,106,4,32,41,32,
		0,72,80,5,36,135,0,106,13,68,69,76,69,84,
		69,32,70,82,79,77,32,0,48,32,0,102,112,0,
		72,106,21,32,87,72,69,82,69,32,105,100,95,101,
		109,112,114,101,115,97,32,61,32,0,72,176,36,0,
		176,27,0,12,0,12,1,72,106,24,32,65,78,68,
		32,116,97,98,108,97,95,100,111,99,117,109,101,110,
		116,111,32,61,32,0,72,176,36,0,95,1,12,1,
		72,106,21,32,65,78,68,32,105,100,95,100,111,99,
		117,109,101,110,116,111,32,61,32,0,72,176,36,0,
		95,2,12,1,72,80,6,36,137,0,176,45,0,95,
		3,12,1,28,9,36,138,0,95,6,110,7,36,152,
		0,106,14,82,69,80,76,65,67,69,32,73,78,84,
		79,32,0,48,32,0,102,112,0,72,106,8,32,40,
		32,105,100,44,32,0,72,106,13,105,100,95,101,109,
		112,114,101,115,97,44,32,0,72,106,18,116,97,98,
		108,97,95,100,111,99,117,109,101,110,116,111,44,32,
		0,72,106,15,105,100,95,100,111,99,117,109,101,110,
		116,111,44,32,0,72,106,13,101,116,105,113,117,101,
		116,97,115,32,41,32,0,72,106,10,86,65,76,85,
		69,83,32,40,32,0,72,95,5,72,106,3,44,32,
		0,72,176,36,0,176,27,0,12,0,12,1,72,106,
		3,44,32,0,72,176,36,0,95,1,12,1,72,106,
		3,44,32,0,72,176,36,0,95,2,12,1,72,106,
		3,44,32,0,72,176,36,0,176,48,0,95,3,12,
		1,12,1,72,106,4,32,41,32,0,72,80,4,36,
		154,0,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( RELACIONESETIQUETASMODEL_GETRELATIONSOFETIQUETAS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,167,0,106,23,83,69,76,69,67,84,
		32,101,116,105,113,117,101,116,97,115,32,70,82,79,
		77,32,0,48,32,0,102,112,0,72,106,21,32,87,
		72,69,82,69,32,105,100,95,101,109,112,114,101,115,
		97,32,61,32,0,72,176,36,0,176,27,0,12,0,
		12,1,72,106,24,32,65,78,68,32,116,97,98,108,
		97,95,100,111,99,117,109,101,110,116,111,32,61,32,
		0,72,176,36,0,95,1,12,1,72,106,21,32,65,
		78,68,32,105,100,95,100,111,99,117,109,101,110,116,
		111,32,61,32,0,72,176,36,0,95,2,12,1,72,
		80,4,36,168,0,48,49,0,102,95,4,112,1,80,
		3,36,170,0,176,45,0,95,3,12,1,28,8,36,
		171,0,100,110,7,36,174,0,176,50,0,176,51,0,
		95,3,12,1,12,1,80,5,36,176,0,95,5,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,54,0,2,0,116,54,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
