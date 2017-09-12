/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Models\SQLBaseEmpresasModel.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SQLBASEEMPRESASMODEL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( SQLBASEMODEL );
HB_FUNC_STATIC( SQLBASEEMPRESASMODEL_COMMUNFIELDS );
HB_FUNC_STATIC( SQLBASEEMPRESASMODEL_TIMESTAMPFIELDS );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( CCODEMP );
HB_FUNC_EXTERN( RETSUFEMP );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( HSET );
HB_FUNC_EXTERN( HB_DATETIME );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SQLBASEEMPRESASMODEL )
{ "SQLBASEEMPRESASMODEL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASEEMPRESASMODEL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "SQLBASEMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLBASEMODEL )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASEEMPRESASMODEL_COMMUNFIELDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASEEMPRESASMODEL_COMMUNFIELDS )}, NULL },
{ "SQLBASEEMPRESASMODEL_TIMESTAMPFIELDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASEEMPRESASMODEL_TIMESTAMPFIELDS )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCODEMP )}, NULL },
{ "RETSUFEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( RETSUFEMP )}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "HCOLUMNS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HSET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HSET )}, NULL },
{ "HB_DATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DATETIME )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SQLBASEEMPRESASMODEL, ".\\Prg\\Models\\SQLBaseEmpresasModel.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SQLBASEEMPRESASMODEL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SQLBASEEMPRESASMODEL )
   #include "hbiniseg.h"
#endif

HB_FUNC( SQLBASEEMPRESASMODEL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,22,0,36,7,0,103,2,0,100,8,
		29,208,0,176,1,0,104,2,0,12,1,29,197,0,
		166,135,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,21,83,81,76,66,97,115,101,69,109,112,114,
		101,115,97,115,77,111,100,101,108,0,108,4,4,1,
		0,108,0,112,3,80,2,36,9,0,48,5,0,95,
		2,106,13,67,111,109,109,117,110,70,105,101,108,100,
		115,0,108,6,95,1,121,72,121,72,121,72,112,3,
		73,36,11,0,48,5,0,95,2,106,16,84,105,109,
		101,83,116,97,109,112,70,105,101,108,100,115,0,108,
		7,95,1,121,72,121,72,121,72,112,3,73,36,13,
		0,48,8,0,95,2,112,0,73,167,14,0,0,176,
		9,0,104,2,0,95,2,20,2,168,48,10,0,95,
		2,112,0,80,3,176,11,0,95,3,106,10,73,110,
		105,116,67,108,97,115,115,0,12,2,28,12,48,12,
		0,95,3,164,146,1,0,73,95,3,110,7,48,10,
		0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASEEMPRESASMODEL_COMMUNFIELDS )
{
	static const HB_BYTE pcode[] =
	{
		36,44,0,48,13,0,102,106,3,105,100,0,106,7,
		99,114,101,97,116,101,0,106,35,73,78,84,69,71,
		69,82,32,80,82,73,77,65,82,89,32,75,69,89,
		32,65,85,84,79,95,73,78,67,82,69,77,69,78,
		84,0,106,5,116,101,120,116,0,106,14,73,100,101,
		110,116,105,102,105,99,97,100,111,114,0,106,7,104,
		101,97,100,101,114,0,106,3,73,100,0,106,8,118,
		105,115,105,98,108,101,0,9,177,4,0,106,8,101,
		109,112,114,101,115,97,0,106,7,99,114,101,97,116,
		101,0,106,20,67,72,65,82,32,40,32,52,32,41,
		32,78,79,84,32,78,85,76,76,0,106,5,116,101,
		120,116,0,106,8,69,109,112,114,101,115,97,0,106,
		8,118,105,115,105,98,108,101,0,9,106,8,100,101,
		102,97,117,108,116,0,90,8,176,14,0,12,0,6,
		177,4,0,106,11,100,101,108,101,103,97,99,105,111,
		110,0,106,7,99,114,101,97,116,101,0,106,20,86,
		65,82,67,72,65,82,40,50,41,32,78,79,84,32,
		78,85,76,76,0,106,5,116,101,120,116,0,106,11,
		68,101,108,101,103,97,99,105,243,110,0,106,7,104,
		101,97,100,101,114,0,106,5,68,108,103,46,0,106,
		8,118,105,115,105,98,108,101,0,120,106,6,119,105,
		100,116,104,0,92,40,106,6,102,105,101,108,100,0,
		106,8,99,83,117,102,82,101,109,0,106,5,116,121,
		112,101,0,106,2,67,0,106,4,108,101,110,0,92,
		2,106,8,100,101,102,97,117,108,116,0,90,8,176,
		15,0,12,0,6,177,9,0,106,8,117,115,117,97,
		114,105,111,0,106,7,99,114,101,97,116,101,0,106,
		20,86,65,82,67,72,65,82,40,50,41,32,78,79,
		84,32,78,85,76,76,0,106,5,116,101,120,116,0,
		106,8,117,115,117,97,114,105,111,0,106,7,104,101,
		97,100,101,114,0,106,5,85,115,114,46,0,106,8,
		118,105,115,105,98,108,101,0,120,106,6,119,105,100,
		116,104,0,92,40,106,6,102,105,101,108,100,0,106,
		8,99,67,111,100,85,115,114,0,106,5,116,121,112,
		101,0,106,2,67,0,106,4,108,101,110,0,92,2,
		106,8,100,101,102,97,117,108,116,0,90,8,176,16,
		0,12,0,6,177,9,0,177,4,0,112,1,73,36,
		46,0,48,17,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASEEMPRESASMODEL_TIMESTAMPFIELDS )
{
	static const HB_BYTE pcode[] =
	{
		36,55,0,176,18,0,48,17,0,102,112,0,106,19,
		99,114,101,97,99,105,111,110,95,116,105,109,101,115,
		116,97,109,112,0,106,7,99,114,101,97,116,101,0,
		106,35,68,65,84,69,84,73,77,69,32,68,69,70,
		65,85,76,84,32,67,85,82,82,69,78,84,95,84,
		73,77,69,83,84,65,77,80,0,106,5,116,101,120,
		116,0,106,22,67,114,101,97,99,105,243,110,32,102,
		101,99,104,97,32,121,32,104,111,114,97,0,106,7,
		104,101,97,100,101,114,0,106,9,67,114,101,97,99,
		105,243,110,0,106,8,100,101,102,97,117,108,116,0,
		90,8,176,19,0,12,0,6,177,4,0,20,3,36,
		58,0,48,17,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,22,0,2,0,116,22,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
