/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\mail\TGenMailDatabasePedidosClientes.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TGENMAILINGDATABASEPEDIDOSCLIENTES );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TGENMAILINGDATABASE );
HB_FUNC_STATIC( TGENMAILINGDATABASEPEDIDOSCLIENTES_NEW );
HB_FUNC_EXTERN( MAILREPORTPEDCLI );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( AITMPEDCLI );
HB_FUNC_EXTERN( D );
HB_FUNC_EXTERN( CFIRSTDOC );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( RETFLD );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TGENMAILDATABASEPEDIDOSCLIENTES )
{ "TGENMAILINGDATABASEPEDIDOSCLIENTES", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TGENMAILINGDATABASEPEDIDOSCLIENTES )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TGENMAILINGDATABASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGENMAILINGDATABASE )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGENMAILINGDATABASEPEDIDOSCLIENTES_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TGENMAILINGDATABASEPEDIDOSCLIENTES_NEW )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MAILREPORTPEDCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAILREPORTPEDCLI )}, NULL },
{ "CFORMATODOCUMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETITEMS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMPEDCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMPEDCLI )}, NULL },
{ "SETWORKAREA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PEDIDOSCLIENTES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "D", {HB_FS_PUBLIC}, {HB_FUNCNAME( D )}, NULL },
{ "SETTYPEDOCUMENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTYPEFORMAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFORMATODOCUMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFIRSTDOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( CFIRSTDOC )}, NULL },
{ "DOCUMENTOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETBMPDATABASE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETASUNTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETBLOCKRECIPIENTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "RETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( RETFLD )}, NULL },
{ "NVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODCLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CLIENTES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TGENMAILDATABASEPEDIDOSCLIENTES, ".\\Prg\\mail\\TGenMailDatabasePedidosClientes.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TGENMAILDATABASEPEDIDOSCLIENTES
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TGENMAILDATABASEPEDIDOSCLIENTES )
   #include "hbiniseg.h"
#endif

HB_FUNC( TGENMAILINGDATABASEPEDIDOSCLIENTES )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,36,0,36,6,0,103,2,0,100,8,
		29,226,0,176,1,0,104,2,0,12,1,29,215,0,
		166,153,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,35,84,71,101,110,77,97,105,108,105,110,103,
		68,97,116,97,98,97,115,101,80,101,100,105,100,111,
		115,67,108,105,101,110,116,101,115,0,108,4,4,1,
		0,108,0,112,3,80,2,36,8,0,48,5,0,95,
		2,106,4,78,101,119,0,108,6,95,1,121,72,121,
		72,121,72,112,3,73,36,10,0,48,7,0,95,2,
		106,11,103,101,116,65,100,106,117,110,116,111,0,89,
		20,0,1,0,0,0,176,8,0,48,9,0,95,1,
		112,0,12,1,6,95,1,121,72,121,72,121,72,112,
		3,73,36,12,0,48,10,0,95,2,112,0,73,167,
		14,0,0,176,11,0,104,2,0,95,2,20,2,168,
		48,12,0,95,2,112,0,80,3,176,13,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,14,0,95,3,164,146,1,0,73,95,3,
		110,7,48,12,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TGENMAILINGDATABASEPEDIDOSCLIENTES_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,16,0,102,80,2,36,18,0,48,10,
		0,95,2,112,0,73,36,20,0,48,2,0,48,15,
		0,95,2,112,0,95,1,112,1,73,36,22,0,48,
		16,0,95,2,176,17,0,12,0,112,1,73,36,24,
		0,48,18,0,95,2,48,19,0,176,20,0,12,0,
		95,1,112,1,112,1,73,36,26,0,48,21,0,95,
		2,106,8,110,80,101,100,67,108,105,0,112,1,73,
		36,28,0,48,22,0,95,2,106,3,80,67,0,112,
		1,73,36,30,0,48,23,0,95,2,176,24,0,106,
		3,80,67,0,48,25,0,176,20,0,12,0,95,1,
		112,1,12,2,112,1,73,36,32,0,48,26,0,95,
		2,106,27,103,99,95,99,108,105,112,98,111,97,114,
		100,95,101,109,112,116,121,95,117,115,101,114,95,52,
		56,0,112,1,73,36,34,0,48,27,0,95,2,106,
		70,69,110,118,105,111,32,100,101,32,110,117,101,115,
		116,114,111,32,112,101,100,105,100,111,32,110,250,109,
		101,114,111,32,123,83,101,114,105,101,32,100,101,108,
		32,112,101,100,105,100,111,125,47,123,78,250,109,101,
		114,111,32,100,101,108,32,112,101,100,105,100,111,125,
		0,112,1,73,36,36,0,48,28,0,95,2,89,67,
		0,0,0,1,0,2,0,176,29,0,176,30,0,48,
		19,0,176,20,0,12,0,48,31,0,95,255,112,0,
		112,1,88,32,0,48,33,0,176,20,0,12,0,48,
		31,0,95,255,112,0,112,1,106,8,99,77,101,105,
		73,110,116,0,12,3,12,1,6,112,1,73,36,38,
		0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,36,0,2,0,116,36,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

