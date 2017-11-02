/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "ejxx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( THDO );
HB_FUNC_EXTERN( MSGALERT );
HB_FUNC_EXTERN( BREAK );
HB_FUNC_STATIC( TRASPASA );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBSKIP );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_EJXX )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "THDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( THDO )}, NULL },
{ "SETATTRIBUTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONNECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGALERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGALERT )}, NULL },
{ "BREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( BREAK )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRASPASA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRASPASA )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "DISCONNECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "PREPARE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BINDPARAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BEGINTRANSACTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLIENTES", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "NOMBRE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DIRECCION", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "TELEFONO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "EDAD", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PRODUCTOS", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NIVEL", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "EXECUTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "COMMIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FREE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_EJXX, "ejxx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_EJXX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_EJXX )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,29,0,48,1,0,176,2,0,12,0,
		106,6,109,121,115,113,108,0,112,1,80,1,36,31,
		0,48,3,0,95,1,97,165,134,1,0,120,112,2,
		73,36,33,0,48,4,0,95,1,106,11,72,68,79,
		100,101,109,111,46,100,98,0,112,1,29,110,1,36,
		35,0,176,5,0,106,19,72,68,79,100,101,109,111,
		46,100,98,32,97,98,105,101,114,116,97,0,20,1,
		36,37,0,113,53,1,0,89,15,0,1,0,0,0,
		176,6,0,95,1,12,1,6,178,36,38,0,48,7,
		0,95,1,106,190,67,82,69,65,84,69,32,84,65,
		66,76,69,32,73,70,32,78,79,84,32,69,88,73,
		83,84,83,32,99,108,105,101,110,116,101,115,32,40,
		32,105,100,82,101,103,32,73,78,84,69,71,69,82,
		32,80,82,73,77,65,82,89,32,75,69,89,44,78,
		111,109,98,114,101,9,9,86,65,82,67,72,65,82,
		40,32,52,48,32,41,44,68,105,114,101,99,99,105,
		111,110,32,9,86,65,82,67,72,65,82,40,32,53,
		48,32,41,44,84,101,108,101,102,111,110,111,9,86,
		65,82,67,72,65,82,40,32,49,50,32,41,44,69,
		100,97,100,9,9,73,78,84,69,71,69,82,44,80,
		114,111,100,117,99,116,111,115,9,86,65,82,67,72,
		65,82,40,32,49,48,32,41,44,78,105,118,101,108,
		9,9,73,78,84,69,71,69,82,32,41,59,0,112,
		1,73,36,39,0,176,5,0,106,31,83,101,32,118,
		97,110,32,97,32,105,109,112,111,114,116,97,114,32,
		108,111,115,32,100,97,116,111,115,46,46,46,0,20,
		1,36,40,0,176,8,0,95,1,20,1,36,41,0,
		176,5,0,106,20,68,97,116,111,115,32,105,109,112,
		111,114,116,97,100,111,115,46,46,46,0,20,1,73,
		114,26,0,0,36,42,0,115,80,2,36,43,0,48,
		9,0,176,10,0,12,0,95,2,112,1,73,36,48,
		0,48,11,0,95,1,112,0,73,36,49,0,176,5,
		0,106,19,72,68,79,100,101,109,111,46,100,98,32,
		99,101,114,114,97,100,97,0,20,1,36,51,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRASPASA )
{
	static const HB_BYTE pcode[] =
	{
		13,9,1,36,58,0,121,80,2,36,62,0,106,106,
		73,78,83,69,82,84,32,73,78,84,79,32,99,108,
		105,101,110,116,101,115,32,40,32,78,111,109,98,114,
		101,44,32,68,105,114,101,99,99,105,111,110,44,32,
		84,101,108,101,102,111,110,111,44,32,69,100,97,100,
		44,32,80,114,111,100,117,99,116,111,115,44,32,78,
		105,118,101,108,32,41,32,86,65,76,85,69,83,32,
		40,32,63,44,32,63,44,32,63,44,32,63,44,32,
		63,44,32,63,32,41,59,0,80,3,36,64,0,176,
		12,0,106,13,99,108,105,101,110,116,101,115,46,100,
		98,102,0,12,1,29,12,1,36,66,0,176,13,0,
		120,100,106,9,99,108,105,101,110,116,101,115,0,100,
		100,9,20,6,36,68,0,48,14,0,95,1,95,3,
		112,1,80,4,36,71,0,48,15,0,95,4,122,96,
		5,0,112,2,73,36,72,0,48,15,0,95,4,92,
		2,96,6,0,112,2,73,36,73,0,48,15,0,95,
		4,92,3,96,7,0,112,2,73,36,74,0,48,15,
		0,95,4,92,4,96,8,0,112,2,73,36,75,0,
		48,15,0,95,4,92,5,96,9,0,112,2,73,36,
		76,0,48,15,0,95,4,92,6,96,10,0,112,2,
		73,36,78,0,48,16,0,95,1,112,0,73,36,80,
		0,85,108,17,74,176,18,0,12,0,68,119,28,83,
		36,81,0,108,17,87,19,80,5,36,82,0,108,17,
		87,20,80,6,36,83,0,108,17,87,21,80,7,36,
		84,0,108,17,87,22,80,8,36,85,0,108,17,87,
		23,80,9,36,86,0,108,17,87,24,80,10,36,88,
		0,48,25,0,95,4,112,0,73,36,90,0,85,108,
		17,74,176,26,0,122,20,1,74,25,161,36,93,0,
		48,27,0,95,1,112,0,73,36,95,0,48,28,0,
		95,4,112,0,73,25,50,36,97,0,176,5,0,106,
		38,70,105,99,104,101,114,111,32,110,111,32,101,110,
		99,111,110,116,114,97,100,111,32,45,62,32,99,108,
		105,101,110,116,101,115,46,100,98,102,0,20,1,36,
		100,0,7
	};

	hb_vmExecute( pcode, symbols );
}

