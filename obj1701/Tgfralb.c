/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tgfralb.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TINFGRFALB );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFGRP );
HB_FUNC_STATIC( TINFGRFALB_CREATE );
HB_FUNC_STATIC( TINFGRFALB_OPENFILES );
HB_FUNC_STATIC( TINFGRFALB_CLOSEFILES );
HB_FUNC_STATIC( TINFGRFALB_RESOURCE );
HB_FUNC_STATIC( TINFGRFALB_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TDATACENTER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATART );
<<<<<<< HEAD
=======
HB_FUNC_EXTERN( CPATDAT );
>>>>>>> SQLite
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( CCODGRUFAM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NTOTNALBCLI );
HB_FUNC_EXTERN( NIMPLALBCLI );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TGFRALB )
{ "TINFGRFALB", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TINFGRFALB )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFGRP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFGRP )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFGRFALB_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFGRFALB_CREATE )}, NULL },
{ "TINFGRFALB_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFGRFALB_OPENFILES )}, NULL },
{ "TINFGRFALB_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFGRFALB_CLOSEFILES )}, NULL },
{ "TINFGRFALB_RESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFGRFALB_RESOURCE )}, NULL },
{ "TINFGRFALB_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFGRFALB_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GRUPOANUCREATEFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGRPFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "OGRUFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OALBCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDATACENTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDATACENTER )}, NULL },
{ "_OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ODBFFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
<<<<<<< HEAD
=======
{ "_ODBFTVTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATDAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATDAT )}, NULL },
{ "ODBFTVTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
>>>>>>> SQLite
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFFECINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFGRFINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFYEA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFRESINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "AESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODGRUFAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCODGRUFAM )}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGRUFAMORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGRUFAMDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODGRP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTNALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTNALBCLI )}, NULL },
{ "CALMLIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLANK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CGRPFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCLIENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDIMPORTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLALBCLI )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TGFRALB, ".\\.\\Prg\\Tgfralb.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TGFRALB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TGFRALB )
   #include "hbiniseg.h"
#endif

HB_FUNC( TINFGRFALB )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		149,3,0,116,111,0,36,8,0,103,2,0,100,8,
		29,117,2,176,1,0,104,2,0,12,1,29,106,2,
		166,44,2,0,122,80,1,48,2,0,176,3,0,12,
=======
		149,3,0,116,114,0,36,8,0,103,2,0,100,8,
		29,161,2,176,1,0,104,2,0,12,1,29,150,2,
		166,88,2,0,122,80,1,48,2,0,176,3,0,12,
>>>>>>> SQLite
		0,106,11,84,73,110,102,71,114,102,65,108,98,0,
		108,4,4,1,0,108,0,112,3,80,2,36,10,0,
		48,5,0,95,2,106,6,76,79,71,73,67,0,9,
		95,1,121,72,121,72,121,72,106,8,108,69,120,99,
		77,111,118,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,8,111,69,115,
		116,97,100,111,0,4,1,0,9,112,5,73,36,12,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,65,
		108,98,67,108,105,84,0,4,1,0,9,112,5,73,
		36,13,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,9,
		111,65,108,98,67,108,105,76,0,4,1,0,9,112,
<<<<<<< HEAD
		5,73,36,14,0,48,5,0,95,2,106,6,65,82,
		82,65,89,0,9,9,9,9,9,9,9,9,9,9,
		9,9,4,12,0,95,1,121,72,121,72,121,72,106,
		5,97,77,101,115,0,4,1,0,9,112,5,73,36,
		15,0,48,5,0,95,2,106,6,76,79,71,73,67,
		0,9,95,1,121,72,121,72,121,72,106,5,108,65,
		110,111,0,4,1,0,9,112,5,73,36,16,0,48,
		5,0,95,2,106,6,65,82,82,65,89,0,106,13,
		78,111,32,102,97,99,116,117,114,97,100,111,0,106,
		10,70,97,99,116,117,114,97,100,111,0,106,6,84,
		111,100,111,115,0,4,3,0,95,1,121,72,121,72,
		121,72,106,8,97,69,115,116,97,100,111,0,4,1,
		0,9,112,5,73,36,18,0,48,6,0,95,2,106,
		7,67,114,101,97,116,101,0,108,7,95,1,121,72,
		121,72,121,72,112,3,73,36,20,0,48,6,0,95,
		2,106,10,79,112,101,110,70,105,108,101,115,0,108,
		8,95,1,121,72,121,72,121,72,112,3,73,36,22,
		0,48,6,0,95,2,106,11,67,108,111,115,101,70,
		105,108,101,115,0,108,9,95,1,121,72,121,72,121,
		72,112,3,73,36,24,0,48,6,0,95,2,106,9,
		82,101,115,111,117,114,99,101,0,108,10,95,1,121,
		72,121,72,121,72,112,3,73,36,26,0,48,6,0,
		95,2,106,10,108,71,101,110,101,114,97,116,101,0,
		108,11,95,1,121,72,121,72,121,72,112,3,73,36,
		28,0,48,12,0,95,2,112,0,73,167,14,0,0,
		176,13,0,104,2,0,95,2,20,2,168,48,14,0,
		95,2,112,0,80,3,176,15,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		16,0,95,3,164,146,1,0,73,95,3,110,7,48,
		14,0,103,2,0,112,0,110,7
=======
		5,73,36,14,0,48,5,0,95,2,106,7,79,66,
		74,69,67,84,0,100,95,1,121,72,121,72,121,72,
		106,9,111,68,98,102,84,118,116,97,0,4,1,0,
		9,112,5,73,36,15,0,48,5,0,95,2,106,6,
		65,82,82,65,89,0,9,9,9,9,9,9,9,9,
		9,9,9,9,4,12,0,95,1,121,72,121,72,121,
		72,106,5,97,77,101,115,0,4,1,0,9,112,5,
		73,36,16,0,48,5,0,95,2,106,6,76,79,71,
		73,67,0,9,95,1,121,72,121,72,121,72,106,5,
		108,65,110,111,0,4,1,0,9,112,5,73,36,17,
		0,48,5,0,95,2,106,6,65,82,82,65,89,0,
		106,13,78,111,32,102,97,99,116,117,114,97,100,111,
		0,106,10,70,97,99,116,117,114,97,100,111,0,106,
		6,84,111,100,111,115,0,4,3,0,95,1,121,72,
		121,72,121,72,106,8,97,69,115,116,97,100,111,0,
		4,1,0,9,112,5,73,36,19,0,48,6,0,95,
		2,106,7,67,114,101,97,116,101,0,108,7,95,1,
		121,72,121,72,121,72,112,3,73,36,21,0,48,6,
		0,95,2,106,10,79,112,101,110,70,105,108,101,115,
		0,108,8,95,1,121,72,121,72,121,72,112,3,73,
		36,23,0,48,6,0,95,2,106,11,67,108,111,115,
		101,70,105,108,101,115,0,108,9,95,1,121,72,121,
		72,121,72,112,3,73,36,25,0,48,6,0,95,2,
		106,9,82,101,115,111,117,114,99,101,0,108,10,95,
		1,121,72,121,72,121,72,112,3,73,36,27,0,48,
		6,0,95,2,106,10,108,71,101,110,101,114,97,116,
		101,0,108,11,95,1,121,72,121,72,121,72,112,3,
		73,36,29,0,48,12,0,95,2,112,0,73,167,14,
		0,0,176,13,0,104,2,0,95,2,20,2,168,48,
		14,0,95,2,112,0,80,3,176,15,0,95,3,106,
		10,73,110,105,116,67,108,97,115,115,0,12,2,28,
		12,48,16,0,95,3,164,146,1,0,73,95,3,110,
		7,48,14,0,103,2,0,112,0,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFGRFALB_CREATE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,1,0,36,32,0,102,80,1,36,34,0,48,17,
		0,95,1,112,0,73,36,36,0,48,18,0,95,1,
		106,8,67,71,82,80,70,65,77,0,106,8,67,71,
		82,80,70,65,77,0,112,2,73,36,37,0,48,19,
=======
		13,1,0,36,33,0,102,80,1,36,35,0,48,17,
		0,95,1,112,0,73,36,37,0,48,18,0,95,1,
		106,8,67,71,82,80,70,65,77,0,106,8,67,71,
		82,80,70,65,77,0,112,2,73,36,38,0,48,19,
>>>>>>> SQLite
		0,95,1,89,22,0,0,0,1,0,1,0,48,20,
		0,48,21,0,95,255,112,0,112,0,6,89,85,0,
		0,0,1,0,1,0,106,20,71,114,117,112,111,32,
		100,101,32,102,97,109,105,108,105,97,32,58,32,0,
		176,22,0,48,20,0,48,21,0,95,255,112,0,112,
		0,12,1,72,106,2,45,0,72,176,23,0,48,20,
		0,48,21,0,95,255,112,0,112,0,48,21,0,48,
		24,0,95,255,112,0,112,0,12,2,72,6,90,32,
		106,27,84,111,116,97,108,32,103,114,117,112,111,32,
		100,101,32,102,97,109,105,108,105,97,115,46,46,46,
<<<<<<< HEAD
		0,6,112,3,73,36,38,0,48,19,0,95,1,89,
=======
		0,6,112,3,73,36,39,0,48,19,0,95,1,89,
>>>>>>> SQLite
		35,0,0,0,1,0,1,0,48,20,0,48,21,0,
		95,255,112,0,112,0,48,25,0,48,21,0,95,255,
		112,0,112,0,72,6,89,72,0,0,0,1,0,1,
		0,106,12,65,114,116,237,99,117,108,111,32,58,32,
		0,176,22,0,48,25,0,48,21,0,95,255,112,0,
		112,0,12,1,72,106,2,45,0,72,176,23,0,48,
		25,0,48,21,0,95,255,112,0,112,0,48,26,0,
		95,255,112,0,12,2,72,6,90,23,106,18,84,111,
		116,97,108,32,97,114,116,105,99,117,108,111,46,46,
<<<<<<< HEAD
		46,0,6,112,3,73,36,40,0,95,1,110,7
=======
		46,0,6,112,3,73,36,41,0,95,1,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFGRFALB_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,3,0,36,48,0,120,80,3,36,54,0,176,27,
		0,89,15,0,1,0,0,0,176,28,0,95,1,12,
		1,6,12,1,80,1,36,55,0,113,145,1,0,36,
		57,0,48,29,0,102,48,30,0,176,31,0,12,0,
		112,0,112,1,73,36,59,0,48,32,0,102,48,33,
=======
		13,3,0,36,49,0,120,80,3,36,55,0,176,27,
		0,89,15,0,1,0,0,0,176,28,0,95,1,12,
		1,6,12,1,80,1,36,56,0,113,251,1,0,36,
		58,0,48,29,0,102,48,30,0,176,31,0,12,0,
		112,0,112,1,73,36,60,0,48,32,0,102,48,33,
>>>>>>> SQLite
		0,176,34,0,106,12,65,76,66,67,76,73,76,46,
		68,66,70,0,100,12,2,106,12,65,76,66,67,76,
		73,76,46,68,66,70,0,100,176,35,0,12,0,100,
		176,36,0,12,0,9,120,9,9,112,9,112,1,73,
		48,37,0,48,38,0,102,112,0,106,12,65,76,66,
		67,76,73,76,46,67,68,88,0,112,1,73,48,37,
		0,48,38,0,102,112,0,112,0,73,48,39,0,48,
<<<<<<< HEAD
		38,0,102,112,0,112,0,73,36,60,0,48,40,0,
		48,38,0,102,112,0,106,5,67,82,69,70,0,112,
		1,73,36,62,0,48,41,0,102,48,33,0,176,34,
=======
		38,0,102,112,0,112,0,73,36,61,0,48,40,0,
		48,38,0,102,112,0,106,5,67,82,69,70,0,112,
		1,73,36,63,0,48,41,0,102,48,33,0,176,34,
>>>>>>> SQLite
		0,106,13,70,65,77,73,76,73,65,83,46,68,66,
		70,0,100,12,2,106,13,70,65,77,73,76,73,65,
		83,46,68,66,70,0,100,176,35,0,12,0,100,176,
		42,0,12,0,9,120,9,9,112,9,112,1,73,48,
		37,0,48,43,0,102,112,0,106,13,70,65,77,73,
		76,73,65,83,46,67,68,88,0,112,1,73,48,37,
		0,48,43,0,102,112,0,112,0,73,48,39,0,48,
<<<<<<< HEAD
		43,0,102,112,0,112,0,73,36,64,0,48,44,0,
		102,48,33,0,176,34,0,106,13,65,82,84,73,67,
		85,76,79,46,68,66,70,0,100,12,2,106,13,65,
		82,84,73,67,85,76,79,46,68,66,70,0,100,176,
		35,0,12,0,100,176,42,0,12,0,9,120,9,9,
		112,9,112,1,73,48,37,0,48,26,0,102,112,0,
		106,13,65,82,84,73,67,85,76,79,46,67,68,88,
		0,112,1,73,48,37,0,48,26,0,102,112,0,112,
		0,73,48,39,0,48,26,0,102,112,0,112,0,73,
		114,77,0,0,36,66,0,115,80,2,36,68,0,9,
		80,3,36,70,0,176,45,0,106,41,73,109,112,111,
		115,105,98,108,101,32,97,98,114,105,114,32,116,111,
		100,97,115,32,108,97,115,32,98,97,115,101,115,32,
		100,101,32,100,97,116,111,115,0,20,1,36,71,0,
		48,46,0,102,112,0,73,36,75,0,176,27,0,95,
		1,20,1,36,77,0,95,3,110,7
=======
		43,0,102,112,0,112,0,73,36,65,0,48,44,0,
		102,48,33,0,176,34,0,106,9,84,86,84,65,46,
		68,66,70,0,100,12,2,106,9,84,86,84,65,46,
		68,66,70,0,100,176,35,0,12,0,100,176,45,0,
		12,0,9,120,9,9,112,9,112,1,73,48,37,0,
		48,46,0,102,112,0,106,9,84,86,84,65,46,67,
		68,88,0,112,1,73,48,37,0,48,46,0,102,112,
		0,112,0,73,48,39,0,48,46,0,102,112,0,112,
		0,73,36,67,0,48,47,0,102,48,33,0,176,34,
		0,106,13,65,82,84,73,67,85,76,79,46,68,66,
		70,0,100,12,2,106,13,65,82,84,73,67,85,76,
		79,46,68,66,70,0,100,176,35,0,12,0,100,176,
		42,0,12,0,9,120,9,9,112,9,112,1,73,48,
		37,0,48,26,0,102,112,0,106,13,65,82,84,73,
		67,85,76,79,46,67,68,88,0,112,1,73,48,37,
		0,48,26,0,102,112,0,112,0,73,48,39,0,48,
		26,0,102,112,0,112,0,73,114,77,0,0,36,69,
		0,115,80,2,36,71,0,9,80,3,36,73,0,176,
		48,0,106,41,73,109,112,111,115,105,98,108,101,32,
		97,98,114,105,114,32,116,111,100,97,115,32,108,97,
		115,32,98,97,115,101,115,32,100,101,32,100,97,116,
		111,115,0,20,1,36,74,0,48,49,0,102,112,0,
		73,36,78,0,176,27,0,95,1,20,1,36,80,0,
		95,3,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFGRFALB_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		36,83,0,176,47,0,48,30,0,102,112,0,12,1,
		31,30,48,48,0,48,30,0,102,112,0,112,0,28,
		17,36,84,0,48,49,0,48,30,0,102,112,0,112,
		0,73,36,87,0,176,47,0,48,38,0,102,112,0,
		12,1,31,30,48,48,0,48,38,0,102,112,0,112,
		0,28,17,36,88,0,48,49,0,48,38,0,102,112,
		0,112,0,73,36,91,0,176,47,0,48,26,0,102,
		112,0,12,1,31,30,48,48,0,48,26,0,102,112,
		0,112,0,28,17,36,92,0,48,49,0,48,26,0,
		102,112,0,112,0,73,36,95,0,176,47,0,48,43,
		0,102,112,0,12,1,31,30,48,48,0,48,43,0,
		102,112,0,112,0,28,17,36,96,0,48,49,0,48,
		43,0,102,112,0,112,0,73,36,99,0,102,110,7
=======
		36,86,0,176,50,0,48,30,0,102,112,0,12,1,
		31,30,48,51,0,48,30,0,102,112,0,112,0,28,
		17,36,87,0,48,52,0,48,30,0,102,112,0,112,
		0,73,36,90,0,176,50,0,48,38,0,102,112,0,
		12,1,31,30,48,51,0,48,38,0,102,112,0,112,
		0,28,17,36,91,0,48,52,0,48,38,0,102,112,
		0,112,0,73,36,94,0,176,50,0,48,46,0,102,
		112,0,12,1,31,30,48,51,0,48,46,0,102,112,
		0,112,0,28,17,36,95,0,48,52,0,48,46,0,
		102,112,0,112,0,73,36,98,0,176,50,0,48,26,
		0,102,112,0,12,1,31,30,48,51,0,48,26,0,
		102,112,0,112,0,28,17,36,99,0,48,52,0,48,
		26,0,102,112,0,112,0,73,36,102,0,176,50,0,
		48,43,0,102,112,0,12,1,31,30,48,51,0,48,
		43,0,102,112,0,112,0,28,17,36,103,0,48,52,
		0,48,43,0,102,112,0,112,0,73,36,106,0,102,
		110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFGRFALB_RESOURCE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,1,1,36,105,0,106,6,84,111,100,111,115,0,
		80,2,36,107,0,48,50,0,102,9,112,1,73,36,
		109,0,48,51,0,102,106,10,73,110,102,65,110,117,
		71,114,112,0,112,1,31,8,36,110,0,9,110,7,
		36,115,0,48,52,0,102,92,70,92,80,92,90,92,
		100,112,4,73,36,121,0,48,53,0,102,92,110,92,
		120,93,130,0,93,140,0,112,4,73,36,125,0,48,
		54,0,48,55,0,102,112,0,48,56,0,48,26,0,
		102,112,0,112,0,112,1,73,36,131,0,48,57,0,
		102,112,0,73,36,134,0,48,58,0,102,93,200,0,
		112,1,73,36,136,0,48,59,0,102,93,190,0,112,
		1,73,36,142,0,48,60,0,102,48,61,0,176,62,
		0,12,0,93,218,0,89,28,0,1,0,1,0,2,
		0,176,63,0,12,0,121,8,28,6,95,255,25,7,
		95,1,165,80,255,6,48,64,0,102,112,0,48,65,
		0,48,66,0,102,112,0,112,0,122,1,100,100,100,
		100,100,100,9,100,100,100,100,100,100,112,17,112,1,
		73,36,145,0,102,110,7
=======
		13,1,1,36,112,0,106,6,84,111,100,111,115,0,
		80,2,36,114,0,48,53,0,102,9,112,1,73,36,
		116,0,48,54,0,102,106,10,73,110,102,65,110,117,
		71,114,112,0,112,1,31,8,36,117,0,9,110,7,
		36,122,0,48,55,0,102,92,70,92,80,92,90,92,
		100,112,4,73,36,128,0,48,56,0,102,92,110,92,
		120,93,130,0,93,140,0,112,4,73,36,132,0,48,
		57,0,48,58,0,102,112,0,48,59,0,48,26,0,
		102,112,0,112,0,112,1,73,36,138,0,48,60,0,
		102,112,0,73,36,141,0,48,61,0,102,93,200,0,
		112,1,73,36,143,0,48,62,0,102,93,190,0,112,
		1,73,36,149,0,48,63,0,102,48,64,0,176,65,
		0,12,0,93,218,0,89,28,0,1,0,1,0,2,
		0,176,66,0,12,0,121,8,28,6,95,255,25,7,
		95,1,165,80,255,6,48,67,0,102,112,0,48,68,
		0,48,69,0,102,112,0,112,0,122,1,100,100,100,
		100,100,100,9,100,100,100,100,100,100,112,17,112,1,
		73,36,152,0,102,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFGRFALB_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,2,0,36,152,0,102,80,1,36,154,0,90,4,
		120,6,80,2,36,156,0,48,67,0,48,68,0,95,
		1,112,0,112,0,73,36,159,0,48,69,0,48,70,
		0,95,1,112,0,112,0,122,8,28,32,36,160,0,
		89,23,0,0,0,1,0,1,0,48,71,0,48,30,
		0,95,255,112,0,112,0,68,6,80,2,25,80,36,
		161,0,48,69,0,48,70,0,95,1,112,0,112,0,
		92,2,8,28,31,36,162,0,89,22,0,0,0,1,
		0,1,0,48,71,0,48,30,0,95,255,112,0,112,
		0,6,80,2,25,31,36,163,0,48,69,0,48,70,
		0,95,1,112,0,112,0,92,3,8,28,11,36,164,
		0,90,4,120,6,80,2,36,167,0,48,72,0,48,
		21,0,95,1,112,0,112,0,73,36,168,0,48,73,
		0,48,26,0,95,1,112,0,112,0,73,36,170,0,
		48,74,0,48,26,0,95,1,112,0,112,0,32,224,
		2,36,173,0,176,75,0,48,76,0,48,26,0,95,
		1,112,0,112,0,48,26,0,95,1,112,0,48,43,
		0,95,1,112,0,12,3,48,77,0,95,1,112,0,
		16,29,132,2,176,75,0,48,76,0,48,26,0,95,
		1,112,0,112,0,48,26,0,95,1,112,0,48,43,
		0,95,1,112,0,12,3,48,78,0,95,1,112,0,
		34,29,90,2,36,175,0,48,79,0,48,38,0,95,
		1,112,0,48,76,0,48,26,0,95,1,112,0,112,
		0,112,1,29,60,2,36,177,0,48,80,0,48,38,
		0,95,1,112,0,112,0,48,76,0,48,26,0,95,
		1,112,0,112,0,5,29,29,2,48,74,0,48,38,
		0,95,1,112,0,112,0,32,14,2,36,179,0,48,
		79,0,48,30,0,95,1,112,0,48,81,0,48,38,
		0,95,1,112,0,112,0,176,82,0,48,83,0,48,
		38,0,95,1,112,0,112,0,12,1,72,48,84,0,
		48,38,0,95,1,112,0,112,0,72,112,1,29,162,
		1,36,185,0,48,80,0,48,38,0,95,1,112,0,
		112,0,48,85,0,95,1,112,0,16,29,136,1,48,
		80,0,48,38,0,95,1,112,0,112,0,48,86,0,
		95,1,112,0,34,29,113,1,48,87,0,48,43,0,
		95,1,112,0,112,0,48,77,0,95,1,112,0,16,
		29,90,1,48,87,0,48,43,0,95,1,112,0,112,
		0,48,78,0,95,1,112,0,34,29,67,1,48,88,
		0,95,1,112,0,28,19,176,89,0,48,38,0,95,
		1,112,0,12,1,121,8,32,41,1,36,187,0,48,
		79,0,48,21,0,95,1,112,0,48,90,0,48,38,
		0,95,1,112,0,112,0,48,80,0,48,38,0,95,
		1,112,0,112,0,72,112,1,32,181,0,36,188,0,
		48,91,0,48,21,0,95,1,112,0,112,0,73,36,
		189,0,48,92,0,48,21,0,95,1,112,0,176,75,
		0,48,76,0,48,26,0,95,1,112,0,112,0,48,
		26,0,95,1,112,0,48,43,0,95,1,112,0,12,
		3,112,1,73,36,190,0,48,93,0,48,21,0,95,
		1,112,0,48,80,0,48,38,0,95,1,112,0,112,
		0,112,1,73,36,191,0,48,94,0,48,21,0,95,
		1,112,0,176,23,0,48,80,0,48,38,0,95,1,
		112,0,112,0,48,26,0,95,1,112,0,12,2,112,
		1,73,36,192,0,48,95,0,95,1,48,96,0,48,
		30,0,95,1,112,0,112,0,48,30,0,95,1,112,
		0,9,112,3,73,36,193,0,48,97,0,48,21,0,
		95,1,112,0,112,0,73,36,195,0,48,98,0,95,
		1,48,99,0,48,30,0,95,1,112,0,112,0,176,
		100,0,48,101,0,48,30,0,95,1,112,0,112,0,
		48,101,0,48,38,0,95,1,112,0,112,0,48,102,
		0,95,1,112,0,48,103,0,95,1,112,0,48,104,
		0,95,1,112,0,12,5,112,2,73,36,201,0,48,
		105,0,48,38,0,95,1,112,0,112,0,73,36,202,
		0,48,106,0,48,55,0,95,1,112,0,48,107,0,
		48,26,0,95,1,112,0,112,0,112,1,73,26,202,
		253,36,210,0,48,105,0,48,26,0,95,1,112,0,
		112,0,73,36,211,0,48,106,0,48,55,0,95,1,
		112,0,48,107,0,48,26,0,95,1,112,0,112,0,
		112,1,73,26,20,253,36,215,0,48,106,0,48,55,
		0,95,1,112,0,48,56,0,48,26,0,95,1,112,
		0,112,0,112,1,73,36,217,0,48,108,0,48,68,
		0,95,1,112,0,112,0,73,36,219,0,48,56,0,
=======
		13,2,0,36,159,0,102,80,1,36,161,0,90,4,
		120,6,80,2,36,163,0,48,70,0,48,71,0,95,
		1,112,0,112,0,73,36,166,0,48,72,0,48,73,
		0,95,1,112,0,112,0,122,8,28,32,36,167,0,
		89,23,0,0,0,1,0,1,0,48,74,0,48,30,
		0,95,255,112,0,112,0,68,6,80,2,25,80,36,
		168,0,48,72,0,48,73,0,95,1,112,0,112,0,
		92,2,8,28,31,36,169,0,89,22,0,0,0,1,
		0,1,0,48,74,0,48,30,0,95,255,112,0,112,
		0,6,80,2,25,31,36,170,0,48,72,0,48,73,
		0,95,1,112,0,112,0,92,3,8,28,11,36,171,
		0,90,4,120,6,80,2,36,174,0,48,75,0,48,
		21,0,95,1,112,0,112,0,73,36,175,0,48,76,
		0,48,26,0,95,1,112,0,112,0,73,36,177,0,
		48,77,0,48,26,0,95,1,112,0,112,0,32,224,
		2,36,180,0,176,78,0,48,79,0,48,26,0,95,
		1,112,0,112,0,48,26,0,95,1,112,0,48,43,
		0,95,1,112,0,12,3,48,80,0,95,1,112,0,
		16,29,132,2,176,78,0,48,79,0,48,26,0,95,
		1,112,0,112,0,48,26,0,95,1,112,0,48,43,
		0,95,1,112,0,12,3,48,81,0,95,1,112,0,
		34,29,90,2,36,182,0,48,82,0,48,38,0,95,
		1,112,0,48,79,0,48,26,0,95,1,112,0,112,
		0,112,1,29,60,2,36,184,0,48,83,0,48,38,
		0,95,1,112,0,112,0,48,79,0,48,26,0,95,
		1,112,0,112,0,5,29,29,2,48,77,0,48,38,
		0,95,1,112,0,112,0,32,14,2,36,186,0,48,
		82,0,48,30,0,95,1,112,0,48,84,0,48,38,
		0,95,1,112,0,112,0,176,85,0,48,86,0,48,
		38,0,95,1,112,0,112,0,12,1,72,48,87,0,
		48,38,0,95,1,112,0,112,0,72,112,1,29,162,
		1,36,192,0,48,83,0,48,38,0,95,1,112,0,
		112,0,48,88,0,95,1,112,0,16,29,136,1,48,
		83,0,48,38,0,95,1,112,0,112,0,48,89,0,
		95,1,112,0,34,29,113,1,48,90,0,48,43,0,
		95,1,112,0,112,0,48,80,0,95,1,112,0,16,
		29,90,1,48,90,0,48,43,0,95,1,112,0,112,
		0,48,81,0,95,1,112,0,34,29,67,1,48,91,
		0,95,1,112,0,28,19,176,92,0,48,38,0,95,
		1,112,0,12,1,121,8,32,41,1,36,194,0,48,
		82,0,48,21,0,95,1,112,0,48,93,0,48,38,
		0,95,1,112,0,112,0,48,83,0,48,38,0,95,
		1,112,0,112,0,72,112,1,32,181,0,36,195,0,
		48,94,0,48,21,0,95,1,112,0,112,0,73,36,
		196,0,48,95,0,48,21,0,95,1,112,0,176,78,
		0,48,79,0,48,26,0,95,1,112,0,112,0,48,
		26,0,95,1,112,0,48,43,0,95,1,112,0,12,
		3,112,1,73,36,197,0,48,96,0,48,21,0,95,
		1,112,0,48,83,0,48,38,0,95,1,112,0,112,
		0,112,1,73,36,198,0,48,97,0,48,21,0,95,
		1,112,0,176,23,0,48,83,0,48,38,0,95,1,
		112,0,112,0,48,26,0,95,1,112,0,12,2,112,
		1,73,36,199,0,48,98,0,95,1,48,99,0,48,
		30,0,95,1,112,0,112,0,48,30,0,95,1,112,
		0,9,112,3,73,36,200,0,48,100,0,48,21,0,
		95,1,112,0,112,0,73,36,202,0,48,101,0,95,
		1,48,102,0,48,30,0,95,1,112,0,112,0,176,
		103,0,48,104,0,48,30,0,95,1,112,0,112,0,
		48,104,0,48,38,0,95,1,112,0,112,0,48,105,
		0,95,1,112,0,48,106,0,95,1,112,0,48,107,
		0,95,1,112,0,12,5,112,2,73,36,208,0,48,
		108,0,48,38,0,95,1,112,0,112,0,73,36,209,
		0,48,109,0,48,58,0,95,1,112,0,48,110,0,
		48,26,0,95,1,112,0,112,0,112,1,73,26,202,
		253,36,217,0,48,108,0,48,26,0,95,1,112,0,
		112,0,73,36,218,0,48,109,0,48,58,0,95,1,
		112,0,48,110,0,48,26,0,95,1,112,0,112,0,
		112,1,73,26,20,253,36,222,0,48,109,0,48,58,
		0,95,1,112,0,48,59,0,48,26,0,95,1,112,
		0,112,0,112,1,73,36,224,0,48,111,0,48,71,
		0,95,1,112,0,112,0,73,36,226,0,48,59,0,
>>>>>>> SQLite
		48,21,0,95,1,112,0,112,0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		117,111,0,2,0,116,111,0,4,0,0,82,1,0,
=======
		117,114,0,2,0,116,114,0,4,0,0,82,1,0,
>>>>>>> SQLite
		7
	};

	hb_vmExecute( pcode, symbols );
}

