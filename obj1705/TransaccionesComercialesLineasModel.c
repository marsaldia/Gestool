/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Models\TransaccionesComercialesLineasModel.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TRANSACCIONESCOMERCIALESLINEASMODEL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( BASEMODEL );
HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADAS );
HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCELINEASAGRUPAD );
HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADASULTIMACON );
HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCETOTALUNIDADES );
HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_TOTALUNIDADESSTOCK );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( QUOTED );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HGET );
HB_FUNC_EXTERN( DATETOSQLSTRING );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TRANSACCIONESCOMERCIALESLINEASMODEL )
{ "TRANSACCIONESCOMERCIALESLINEASMODEL", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSACCIONESCOMERCIALESLINEASMODEL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "BASEMODEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( BASEMODEL )}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADAS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADAS )}, NULL },
{ "TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCELINEASAGRUPAD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCELINEASAGRUPAD )}, NULL },
{ "TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADASULTIMACON", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADASULTIMACON )}, NULL },
{ "TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCETOTALUNIDADES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCETOTALUNIDADES )}, NULL },
{ "TRANSACCIONESCOMERCIALESLINEASMODEL_TOTALUNIDADESSTOCK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSACCIONESCOMERCIALESLINEASMODEL_TOTALUNIDADESSTOCK )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETTABLENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QUOTED", {HB_FS_PUBLIC}, {HB_FUNCNAME( QUOTED )}, NULL },
{ "GETEXTRAWHERE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSQLSENTENCELINEASAGRUPADAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXECUTESQLSTATEMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "GETFECHAFIELDNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HGET )}, NULL },
{ "GETHORAFIELDNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATETOSQLSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATETOSQLSTRING )}, NULL },
{ "GETSQLSENTENCETOTALUNIDADESSTOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TOTALUNIDADESSTOCK", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TRANSACCIONESCOMERCIALESLINEASMODEL, ".\\Prg\\Models\\TransaccionesComercialesLineasModel.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TRANSACCIONESCOMERCIALESLINEASMODEL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TRANSACCIONESCOMERCIALESLINEASMODEL )
   #include "hbiniseg.h"
#endif

HB_FUNC( TRANSACCIONESCOMERCIALESLINEASMODEL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,32,0,36,6,0,103,2,0,100,8,
		29,90,2,176,1,0,104,2,0,12,1,29,79,2,
		166,17,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,36,84,114,97,110,115,97,99,99,105,111,110,
		101,115,67,111,109,101,114,99,105,97,108,101,115,76,
		105,110,101,97,115,77,111,100,101,108,0,108,4,4,
		1,0,108,0,112,3,80,2,36,8,0,48,5,0,
		95,2,106,13,103,101,116,84,97,98,108,101,78,97,
		109,101,0,112,1,73,36,10,0,48,6,0,95,2,
		106,14,103,101,116,69,120,116,114,97,87,104,101,114,
		101,0,89,26,0,1,0,0,0,106,16,65,78,68,
		32,110,67,116,108,83,116,107,32,60,32,50,0,6,
		95,1,121,72,121,72,121,72,112,3,73,36,12,0,
		48,6,0,95,2,106,18,103,101,116,70,101,99,104,
		97,70,105,101,108,100,78,97,109,101,0,89,18,0,
		1,0,0,0,106,8,100,70,101,99,65,108,98,0,
		6,95,1,121,72,121,72,121,72,112,3,73,36,13,
		0,48,6,0,95,2,106,17,103,101,116,72,111,114,
		97,70,105,101,108,100,78,97,109,101,0,89,18,0,
		1,0,0,0,106,8,116,70,101,99,65,108,98,0,
		6,95,1,121,72,121,72,121,72,112,3,73,36,15,
		0,48,7,0,95,2,106,19,103,101,116,76,105,110,
		101,97,115,65,103,114,117,112,97,100,97,115,0,108,
		8,95,1,121,72,121,72,121,72,112,3,73,36,17,
		0,48,7,0,95,2,106,30,103,101,116,83,81,76,
		83,101,110,116,101,110,99,101,76,105,110,101,97,115,
		65,103,114,117,112,97,100,97,115,0,108,9,95,1,
		121,72,121,72,121,72,112,3,73,36,19,0,48,7,
		0,95,2,106,38,103,101,116,76,105,110,101,97,115,
		65,103,114,117,112,97,100,97,115,85,108,116,105,109,
		97,67,111,110,115,111,108,105,100,97,99,105,111,110,
		0,108,10,95,1,121,72,121,72,121,72,112,3,73,
		36,21,0,48,7,0,95,2,106,33,103,101,116,83,
		81,76,83,101,110,116,101,110,99,101,84,111,116,97,
		108,85,110,105,100,97,100,101,115,83,116,111,99,107,
		0,108,11,95,1,121,72,121,72,121,72,112,3,73,
		36,23,0,48,7,0,95,2,106,19,116,111,116,97,
		108,85,110,105,100,97,100,101,115,83,116,111,99,107,
		0,108,12,95,1,121,72,121,72,121,72,112,3,73,
		36,25,0,48,13,0,95,2,112,0,73,167,14,0,
		0,176,14,0,104,2,0,95,2,20,2,168,48,15,
		0,95,2,112,0,80,3,176,16,0,95,3,106,10,
		73,110,105,116,67,108,97,115,115,0,12,2,28,12,
		48,17,0,95,3,164,146,1,0,73,95,3,110,7,
		48,15,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCELINEASAGRUPAD )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,36,39,0,106,138,83,69,76,69,67,84,
		32,99,82,101,102,32,97,115,32,99,67,111,100,105,
		103,111,65,114,116,105,99,117,108,111,44,32,99,65,
		108,109,76,105,110,32,97,115,32,99,67,111,100,105,
		103,111,65,108,109,97,99,101,110,44,32,99,86,97,
		108,80,114,49,32,97,115,32,99,86,97,108,111,114,
		80,114,111,112,105,101,100,97,100,49,44,32,99,86,
		97,108,80,114,50,32,97,115,32,99,86,97,108,111,
		114,80,114,111,112,105,101,100,97,100,50,44,32,99,
		76,111,116,101,32,97,115,32,99,76,111,116,101,32,
		70,82,79,77,32,0,48,18,0,102,112,0,72,106,
		2,32,0,72,106,14,87,72,69,82,69,32,99,82,
		101,102,32,61,32,0,72,176,19,0,95,1,12,1,
		72,106,2,32,0,72,106,15,65,78,68,32,99,65,
		108,109,76,105,110,32,61,32,0,72,176,19,0,95,
		2,12,1,72,106,2,32,0,72,80,6,36,41,0,
		96,6,0,48,20,0,102,112,0,106,2,32,0,72,
		135,36,43,0,96,6,0,106,49,71,82,79,85,80,
		32,66,89,32,99,82,101,102,44,32,99,65,108,109,
		76,105,110,44,32,99,86,97,108,80,114,49,44,32,
		99,86,97,108,80,114,50,44,32,99,76,111,116,101,
		32,0,135,36,45,0,95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADAS )
{
	static const HB_BYTE pcode[] =
	{
		13,2,5,36,51,0,106,19,65,68,83,76,105,110,
		101,97,115,65,103,114,117,112,97,100,97,115,0,80,
		6,36,52,0,48,21,0,102,95,1,95,2,95,3,
		95,4,95,5,112,5,80,7,36,54,0,48,22,0,
		102,95,7,96,6,0,112,2,28,9,36,55,0,95,
		6,110,7,36,58,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETLINEASAGRUPADASULTIMACON )
{
	static const HB_BYTE pcode[] =
	{
		13,2,6,36,71,0,106,21,83,69,76,69,67,84,
		32,110,67,97,110,69,110,116,32,70,82,79,77,32,
		0,48,18,0,102,112,0,72,106,2,32,0,72,106,
		14,87,72,69,82,69,32,99,82,101,102,32,61,32,
		0,72,176,19,0,95,1,12,1,72,106,2,32,0,
		72,106,15,65,78,68,32,99,65,108,109,76,105,110,
		32,61,32,0,72,176,19,0,95,2,12,1,72,106,
		2,32,0,72,106,15,65,78,68,32,99,86,97,108,
		80,114,49,32,61,32,0,72,176,19,0,95,3,12,
		1,72,106,2,32,0,72,106,15,65,78,68,32,99,
		86,97,108,80,114,50,32,61,32,0,72,176,19,0,
		95,4,12,1,72,106,2,32,0,72,106,13,65,78,
		68,32,99,76,111,116,101,32,61,32,0,72,176,19,
		0,95,5,12,1,72,80,8,36,73,0,96,8,0,
		48,20,0,102,112,0,106,2,32,0,72,135,36,75,
		0,176,23,0,95,6,12,1,31,111,36,76,0,96,
		8,0,106,5,65,78,68,32,0,48,24,0,102,112,
		0,72,106,5,32,62,61,32,0,72,176,19,0,176,
		25,0,95,6,106,6,102,101,99,104,97,0,12,2,
		12,1,72,106,2,32,0,72,135,36,77,0,96,8,
		0,106,5,65,78,68,32,0,48,26,0,102,112,0,
		72,106,5,32,62,61,32,0,72,176,19,0,176,25,
		0,95,6,106,5,104,111,114,97,0,12,2,12,1,
		72,106,2,32,0,72,135,36,80,0,48,22,0,102,
		95,8,96,7,0,112,2,28,9,36,81,0,95,7,
		110,7,36,84,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_GETSQLSENTENCETOTALUNIDADES )
{
	static const HB_BYTE pcode[] =
	{
		13,1,7,36,92,0,106,86,83,69,76,69,67,84,
		32,83,85,77,40,32,73,73,70,40,32,110,67,97,
		110,69,110,116,32,61,32,48,44,32,49,44,32,110,
		67,97,110,69,110,116,32,41,32,42,32,110,85,110,
		105,67,97,106,97,32,41,32,97,115,32,91,116,111,
		116,97,108,85,110,105,100,97,100,101,115,83,116,111,
		99,107,93,32,70,82,79,77,32,0,48,18,0,102,
		112,0,72,106,2,32,0,72,106,14,87,72,69,82,
		69,32,99,82,101,102,32,61,32,0,72,176,19,0,
		95,1,12,1,72,106,2,32,0,72,80,8,36,94,
		0,176,23,0,95,2,12,1,31,69,36,95,0,96,
		8,0,106,11,65,78,68,32,67,65,83,84,40,32,
		0,48,24,0,102,112,0,72,106,19,32,65,83,32,
		83,81,76,95,67,72,65,82,32,41,32,62,61,32,
		0,72,176,19,0,176,27,0,95,2,12,1,12,1,
		72,106,2,32,0,72,135,36,98,0,176,23,0,95,
		3,12,1,31,44,36,99,0,96,8,0,106,5,65,
		78,68,32,0,48,26,0,102,112,0,72,106,5,32,
		62,61,32,0,72,176,19,0,95,3,12,1,72,106,
		2,32,0,72,135,36,102,0,176,23,0,95,4,12,
		1,31,39,36,103,0,96,8,0,106,15,65,78,68,
		32,99,65,108,109,76,105,110,32,61,32,0,176,19,
		0,95,4,12,1,72,106,2,32,0,72,135,36,106,
		0,176,23,0,95,5,12,1,31,39,36,107,0,96,
		8,0,106,15,65,78,68,32,99,86,97,108,80,114,
		49,32,61,32,0,176,19,0,95,5,12,1,72,106,
		2,32,0,72,135,36,110,0,176,23,0,95,6,12,
		1,31,39,36,111,0,96,8,0,106,15,65,78,68,
		32,99,86,97,108,80,114,50,32,61,32,0,176,19,
		0,95,6,12,1,72,106,2,32,0,72,135,36,114,
		0,176,23,0,95,7,12,1,31,37,36,115,0,96,
		8,0,106,13,65,78,68,32,99,76,111,116,101,32,
		61,32,0,176,19,0,95,7,12,1,72,106,2,32,
		0,72,135,36,118,0,96,8,0,48,20,0,102,112,
		0,106,2,32,0,72,135,36,120,0,95,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRANSACCIONESCOMERCIALESLINEASMODEL_TOTALUNIDADESSTOCK )
{
	static const HB_BYTE pcode[] =
	{
		13,2,7,36,127,0,48,28,0,102,95,1,95,2,
		95,3,95,4,95,5,95,6,95,7,112,7,80,9,
		36,129,0,48,22,0,102,95,9,96,8,0,112,2,
		28,12,36,130,0,95,8,88,29,0,110,7,36,133,
		0,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,32,0,2,0,116,32,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

