/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tfamtik.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TINFFAMTIK );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFFAM );
HB_FUNC_STATIC( TINFFAMTIK_CREATE );
HB_FUNC_STATIC( TINFFAMTIK_OPENFILES );
HB_FUNC_STATIC( TINFFAMTIK_CLOSEFILES );
HB_FUNC_STATIC( TINFFAMTIK_RESOURCE );
HB_FUNC_STATIC( TINFFAMTIK_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
<<<<<<< HEAD
=======
HB_FUNC_EXTERN( CPATDAT );
>>>>>>> SQLite
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCHECKBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCODFAM );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TFAMTIK )
{ "TINFFAMTIK", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TINFFAMTIK )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFFAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFFAM )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFFAMTIK_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFFAMTIK_CREATE )}, NULL },
{ "TINFFAMTIK_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFFAMTIK_OPENFILES )}, NULL },
{ "TINFFAMTIK_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFFAMTIK_CLOSEFILES )}, NULL },
{ "TINFFAMTIK_RESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFFAMTIK_RESOURCE )}, NULL },
{ "TINFFAMTIK_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFFAMTIK_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DETCREATEFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFFAM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OTIKCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIKCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OTIKCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIKCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
<<<<<<< HEAD
=======
{ "_ODBFTVTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATDAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATDAT )}, NULL },
{ "ODBFTVTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
>>>>>>> SQLite
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFFAMINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFSALINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFRESINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LEXCMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LEXCMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CFAMORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFAMDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODFAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCODFAM )}, NULL },
{ "CCBATIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPVPTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNUMTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTIPTIK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECTIK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTIK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMTIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TFAMTIK, ".\\.\\Prg\\Tfamtik.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TFAMTIK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TFAMTIK )
   #include "hbiniseg.h"
#endif

HB_FUNC( TINFFAMTIK )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		149,3,0,116,96,0,36,8,0,103,2,0,100,8,
		29,159,1,176,1,0,104,2,0,12,1,29,148,1,
		166,86,1,0,122,80,1,48,2,0,176,3,0,12,
=======
		149,3,0,116,99,0,36,8,0,103,2,0,100,8,
		29,203,1,176,1,0,104,2,0,12,1,29,192,1,
		166,130,1,0,122,80,1,48,2,0,176,3,0,12,
>>>>>>> SQLite
		0,106,11,84,73,110,102,70,97,109,84,105,107,0,
		108,4,4,1,0,108,0,112,3,80,2,36,10,0,
		48,5,0,95,2,106,6,76,79,71,73,67,0,9,
		95,1,121,72,121,72,121,72,106,8,108,69,120,99,
		77,111,118,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,9,111,84,105,
		107,67,108,105,84,0,4,1,0,9,112,5,73,36,
		12,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,9,111,
		84,105,107,67,108,105,76,0,4,1,0,9,112,5,
<<<<<<< HEAD
		73,36,14,0,48,6,0,95,2,106,7,67,114,101,
		97,116,101,0,108,7,95,1,121,72,121,72,121,72,
		112,3,73,36,16,0,48,6,0,95,2,106,10,79,
		112,101,110,70,105,108,101,115,0,108,8,95,1,121,
		72,121,72,121,72,112,3,73,36,18,0,48,6,0,
		95,2,106,11,67,108,111,115,101,70,105,108,101,115,
		0,108,9,95,1,121,72,121,72,121,72,112,3,73,
		36,20,0,48,6,0,95,2,106,9,82,101,115,111,
		117,114,99,101,0,108,10,95,1,121,72,121,72,121,
		72,112,3,73,36,22,0,48,6,0,95,2,106,10,
		108,71,101,110,101,114,97,116,101,0,108,11,95,1,
		121,72,121,72,121,72,112,3,73,36,24,0,48,12,
		0,95,2,112,0,73,167,14,0,0,176,13,0,104,
		2,0,95,2,20,2,168,48,14,0,95,2,112,0,
		80,3,176,15,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,16,0,95,3,
		164,146,1,0,73,95,3,110,7,48,14,0,103,2,
		0,112,0,110,7
=======
		73,36,13,0,48,5,0,95,2,106,7,79,66,74,
		69,67,84,0,100,95,1,121,72,121,72,121,72,106,
		9,111,68,98,102,84,118,116,97,0,4,1,0,9,
		112,5,73,36,15,0,48,6,0,95,2,106,7,67,
		114,101,97,116,101,0,108,7,95,1,121,72,121,72,
		121,72,112,3,73,36,17,0,48,6,0,95,2,106,
		10,79,112,101,110,70,105,108,101,115,0,108,8,95,
		1,121,72,121,72,121,72,112,3,73,36,19,0,48,
		6,0,95,2,106,11,67,108,111,115,101,70,105,108,
		101,115,0,108,9,95,1,121,72,121,72,121,72,112,
		3,73,36,21,0,48,6,0,95,2,106,9,82,101,
		115,111,117,114,99,101,0,108,10,95,1,121,72,121,
		72,121,72,112,3,73,36,23,0,48,6,0,95,2,
		106,10,108,71,101,110,101,114,97,116,101,0,108,11,
		95,1,121,72,121,72,121,72,112,3,73,36,25,0,
		48,12,0,95,2,112,0,73,167,14,0,0,176,13,
		0,104,2,0,95,2,20,2,168,48,14,0,95,2,
		112,0,80,3,176,15,0,95,3,106,10,73,110,105,
		116,67,108,97,115,115,0,12,2,28,12,48,16,0,
		95,3,164,146,1,0,73,95,3,110,7,48,14,0,
		103,2,0,112,0,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFFAMTIK_CREATE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,1,0,36,28,0,102,80,1,36,30,0,48,17,
		0,95,1,112,0,73,36,32,0,48,18,0,95,1,
		106,8,67,67,79,68,70,65,77,0,106,18,99,67,
		111,100,70,97,109,32,43,32,67,67,79,68,65,82,
		84,0,112,2,73,36,33,0,48,19,0,95,1,89,
=======
		13,1,0,36,29,0,102,80,1,36,31,0,48,17,
		0,95,1,112,0,73,36,33,0,48,18,0,95,1,
		106,8,67,67,79,68,70,65,77,0,106,18,99,67,
		111,100,70,97,109,32,43,32,67,67,79,68,65,82,
		84,0,112,2,73,36,34,0,48,19,0,95,1,89,
>>>>>>> SQLite
		22,0,0,0,1,0,1,0,48,20,0,48,21,0,
		95,255,112,0,112,0,6,89,72,0,0,0,1,0,
		1,0,106,12,70,97,109,105,108,105,97,32,32,58,
		32,0,176,22,0,48,20,0,48,21,0,95,255,112,
		0,112,0,12,1,72,106,2,45,0,72,176,23,0,
		48,20,0,48,21,0,95,255,112,0,112,0,48,24,
		0,95,255,112,0,12,2,72,6,90,22,106,17,84,
		111,116,97,108,32,102,97,109,105,108,105,97,46,46,
<<<<<<< HEAD
		46,0,6,112,3,73,36,34,0,48,19,0,95,1,
=======
		46,0,6,112,3,73,36,35,0,48,19,0,95,1,
>>>>>>> SQLite
		89,35,0,0,0,1,0,1,0,48,20,0,48,21,
		0,95,255,112,0,112,0,48,25,0,48,21,0,95,
		255,112,0,112,0,72,6,89,77,0,0,0,1,0,
		1,0,106,12,65,114,116,237,99,117,108,111,32,58,
		32,0,176,22,0,48,25,0,48,21,0,95,255,112,
		0,112,0,12,1,72,106,2,45,0,72,176,22,0,
		176,23,0,48,25,0,48,21,0,95,255,112,0,112,
		0,48,26,0,95,255,112,0,12,2,12,1,72,6,
<<<<<<< HEAD
		90,6,106,1,0,6,112,3,73,36,36,0,95,1,
=======
		90,6,106,1,0,6,112,3,73,36,37,0,95,1,
>>>>>>> SQLite
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFFAMTIK_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,3,0,36,44,0,120,80,3,36,50,0,176,27,
		0,89,15,0,1,0,0,0,176,28,0,95,1,12,
		1,6,12,1,80,1,36,51,0,113,113,1,0,36,
		53,0,48,29,0,102,48,30,0,176,31,0,106,10,
=======
		13,3,0,36,45,0,120,80,3,36,51,0,176,27,
		0,89,15,0,1,0,0,0,176,28,0,95,1,12,
		1,6,12,1,80,1,36,52,0,113,219,1,0,36,
		54,0,48,29,0,102,48,30,0,176,31,0,106,10,
>>>>>>> SQLite
		84,73,75,69,84,46,68,66,70,0,100,12,2,106,
		10,84,73,75,69,84,46,68,66,70,0,100,176,32,
		0,12,0,100,176,33,0,12,0,9,120,9,9,112,
		9,112,1,73,48,34,0,48,35,0,102,112,0,106,
		10,84,73,75,69,84,46,67,68,88,0,112,1,73,
		48,34,0,48,35,0,102,112,0,112,0,73,48,36,
<<<<<<< HEAD
		0,48,35,0,102,112,0,112,0,73,36,55,0,48,
=======
		0,48,35,0,102,112,0,112,0,73,36,56,0,48,
>>>>>>> SQLite
		37,0,102,48,30,0,176,31,0,106,10,84,73,75,
		69,76,46,68,66,70,0,100,12,2,106,10,84,73,
		75,69,76,46,68,66,70,0,100,176,32,0,12,0,
		100,176,33,0,12,0,9,120,9,9,112,9,112,1,
		73,48,34,0,48,38,0,102,112,0,106,10,84,73,
		75,69,76,46,67,68,88,0,112,1,73,48,34,0,
		48,38,0,102,112,0,112,0,73,48,36,0,48,38,
<<<<<<< HEAD
		0,102,112,0,112,0,73,36,56,0,48,39,0,48,
		38,0,102,112,0,106,8,67,67,66,65,84,73,76,
		0,112,1,73,36,58,0,48,40,0,102,48,30,0,
		176,31,0,106,13,65,82,84,73,67,85,76,79,46,
		68,66,70,0,100,12,2,106,13,65,82,84,73,67,
		85,76,79,46,68,66,70,0,100,176,32,0,12,0,
		100,176,41,0,12,0,9,120,9,9,112,9,112,1,
		73,48,34,0,48,26,0,102,112,0,106,13,65,82,
		84,73,67,85,76,79,46,67,68,88,0,112,1,73,
		48,34,0,48,26,0,102,112,0,112,0,73,48,36,
		0,48,26,0,102,112,0,112,0,73,114,77,0,0,
		36,60,0,115,80,2,36,62,0,9,80,3,36,64,
		0,176,42,0,106,41,73,109,112,111,115,105,98,108,
		101,32,97,98,114,105,114,32,116,111,100,97,115,32,
		108,97,115,32,98,97,115,101,115,32,100,101,32,100,
		97,116,111,115,0,20,1,36,65,0,48,43,0,102,
		112,0,73,36,69,0,176,27,0,95,1,20,1,36,
		71,0,95,3,110,7
=======
		0,102,112,0,112,0,73,36,57,0,48,39,0,48,
		38,0,102,112,0,106,8,67,67,66,65,84,73,76,
		0,112,1,73,36,59,0,48,40,0,102,48,30,0,
		176,31,0,106,9,84,86,84,65,46,68,66,70,0,
		100,12,2,106,9,84,86,84,65,46,68,66,70,0,
		100,176,32,0,12,0,100,176,41,0,12,0,9,120,
		9,9,112,9,112,1,73,48,34,0,48,42,0,102,
		112,0,106,9,84,86,84,65,46,67,68,88,0,112,
		1,73,48,34,0,48,42,0,102,112,0,112,0,73,
		48,36,0,48,42,0,102,112,0,112,0,73,36,61,
		0,48,43,0,102,48,30,0,176,31,0,106,13,65,
		82,84,73,67,85,76,79,46,68,66,70,0,100,12,
		2,106,13,65,82,84,73,67,85,76,79,46,68,66,
		70,0,100,176,32,0,12,0,100,176,44,0,12,0,
		9,120,9,9,112,9,112,1,73,48,34,0,48,26,
		0,102,112,0,106,13,65,82,84,73,67,85,76,79,
		46,67,68,88,0,112,1,73,48,34,0,48,26,0,
		102,112,0,112,0,73,48,36,0,48,26,0,102,112,
		0,112,0,73,114,77,0,0,36,63,0,115,80,2,
		36,65,0,9,80,3,36,67,0,176,45,0,106,41,
		73,109,112,111,115,105,98,108,101,32,97,98,114,105,
		114,32,116,111,100,97,115,32,108,97,115,32,98,97,
		115,101,115,32,100,101,32,100,97,116,111,115,0,20,
		1,36,68,0,48,46,0,102,112,0,73,36,72,0,
		176,27,0,95,1,20,1,36,74,0,95,3,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFFAMTIK_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		36,77,0,176,44,0,48,35,0,102,112,0,12,1,
		31,30,48,45,0,48,35,0,102,112,0,112,0,28,
		17,36,78,0,48,46,0,48,35,0,102,112,0,112,
		0,73,36,81,0,176,44,0,48,38,0,102,112,0,
		12,1,31,30,48,45,0,48,38,0,102,112,0,112,
		0,28,17,36,82,0,48,46,0,48,38,0,102,112,
		0,112,0,73,36,85,0,176,44,0,48,26,0,102,
		112,0,12,1,31,30,48,45,0,48,26,0,102,112,
		0,112,0,28,17,36,86,0,48,46,0,48,26,0,
		102,112,0,112,0,73,36,89,0,102,110,7
=======
		36,80,0,176,47,0,48,35,0,102,112,0,12,1,
		31,30,48,48,0,48,35,0,102,112,0,112,0,28,
		17,36,81,0,48,49,0,48,35,0,102,112,0,112,
		0,73,36,84,0,176,47,0,48,38,0,102,112,0,
		12,1,31,30,48,48,0,48,38,0,102,112,0,112,
		0,28,17,36,85,0,48,49,0,48,38,0,102,112,
		0,112,0,73,36,88,0,176,47,0,48,42,0,102,
		112,0,12,1,31,30,48,48,0,48,42,0,102,112,
		0,112,0,28,17,36,89,0,48,49,0,48,42,0,
		102,112,0,112,0,73,36,92,0,176,47,0,48,26,
		0,102,112,0,12,1,31,30,48,48,0,48,26,0,
		102,112,0,112,0,28,17,36,93,0,48,49,0,48,
		26,0,102,112,0,112,0,73,36,96,0,102,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFFAMTIK_RESOURCE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,1,1,36,93,0,102,80,2,36,95,0,48,47,
		0,95,2,106,11,73,78,70,95,71,69,78,49,49,
		68,0,112,1,31,8,36,96,0,9,110,7,36,101,
		0,48,48,0,95,2,92,110,92,120,93,130,0,93,
		140,0,112,4,73,36,107,0,48,49,0,95,2,92,
		70,92,80,92,90,92,100,112,4,73,36,111,0,48,
		50,0,48,51,0,95,2,112,0,48,52,0,48,26,
		0,95,2,112,0,112,0,112,1,73,36,113,0,48,
		53,0,95,2,93,204,0,112,1,73,36,115,0,48,
		54,0,95,2,93,201,0,112,1,73,36,117,0,48,
		55,0,95,2,112,0,73,36,121,0,48,56,0,176,
		57,0,12,0,93,203,0,89,37,0,1,0,1,0,
		2,0,176,58,0,12,0,121,8,28,11,48,59,0,
		95,255,112,0,25,11,48,60,0,95,255,95,1,112,
		1,6,48,61,0,48,62,0,95,2,112,0,112,0,
		122,1,100,100,100,100,100,100,9,100,9,112,12,73,
		36,124,0,95,2,110,7
=======
		13,1,1,36,100,0,102,80,2,36,102,0,48,50,
		0,95,2,106,11,73,78,70,95,71,69,78,49,49,
		68,0,112,1,31,8,36,103,0,9,110,7,36,108,
		0,48,51,0,95,2,92,110,92,120,93,130,0,93,
		140,0,112,4,73,36,114,0,48,52,0,95,2,92,
		70,92,80,92,90,92,100,112,4,73,36,118,0,48,
		53,0,48,54,0,95,2,112,0,48,55,0,48,26,
		0,95,2,112,0,112,0,112,1,73,36,120,0,48,
		56,0,95,2,93,204,0,112,1,73,36,122,0,48,
		57,0,95,2,93,201,0,112,1,73,36,124,0,48,
		58,0,95,2,112,0,73,36,128,0,48,59,0,176,
		60,0,12,0,93,203,0,89,37,0,1,0,1,0,
		2,0,176,61,0,12,0,121,8,28,11,48,62,0,
		95,255,112,0,25,11,48,63,0,95,255,95,1,112,
		1,6,48,64,0,48,65,0,95,2,112,0,112,0,
		122,1,100,100,100,100,100,100,9,100,9,112,12,73,
		36,131,0,95,2,110,7
>>>>>>> SQLite
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFFAMTIK_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		13,2,0,36,131,0,102,80,1,36,135,0,48,63,
		0,48,64,0,95,1,112,0,112,0,73,36,137,0,
		48,65,0,48,21,0,95,1,112,0,112,0,73,36,
		141,0,48,66,0,95,1,90,26,106,10,70,101,99,
		104,97,32,32,58,32,0,176,67,0,176,68,0,12,
		0,12,1,72,6,89,55,0,0,0,1,0,1,0,
		106,10,80,101,114,105,111,100,111,58,32,0,176,67,
		0,48,69,0,95,255,112,0,12,1,72,106,4,32,
		62,32,0,72,176,67,0,48,70,0,95,255,112,0,
		12,1,72,6,89,55,0,0,0,1,0,1,0,106,
		10,70,97,109,105,108,105,97,58,32,0,176,71,0,
		48,72,0,95,255,112,0,12,1,72,106,4,32,62,
		32,0,72,176,71,0,48,73,0,95,255,112,0,12,
		1,72,6,4,3,0,112,1,73,36,143,0,48,74,
		0,48,38,0,95,1,112,0,112,0,73,36,145,0,
		48,75,0,48,38,0,95,1,112,0,112,0,32,144,
		2,36,147,0,176,76,0,48,77,0,48,38,0,95,
		1,112,0,112,0,48,26,0,95,1,112,0,12,2,
		80,2,36,154,0,176,44,0,48,77,0,48,38,0,
		95,1,112,0,112,0,12,1,32,254,0,95,2,48,
		72,0,95,1,112,0,16,29,241,0,95,2,48,73,
		0,95,1,112,0,34,29,228,0,48,77,0,48,38,
		0,95,1,112,0,112,0,48,78,0,95,1,112,0,
		16,29,205,0,48,77,0,48,38,0,95,1,112,0,
		112,0,48,79,0,95,1,112,0,34,29,182,0,48,
		80,0,95,1,112,0,28,19,48,81,0,48,38,0,
		95,1,112,0,112,0,121,8,32,156,0,36,156,0,
		48,82,0,48,35,0,95,1,112,0,48,83,0,48,
		38,0,95,1,112,0,112,0,48,84,0,48,38,0,
		95,1,112,0,112,0,72,48,85,0,48,38,0,95,
		1,112,0,112,0,72,112,1,28,100,36,160,0,48,
		86,0,48,35,0,95,1,112,0,112,0,106,2,49,
		0,8,31,21,48,86,0,48,35,0,95,1,112,0,
		112,0,106,2,52,0,8,28,59,48,87,0,48,35,
		0,95,1,112,0,112,0,48,69,0,95,1,112,0,
		16,28,37,48,87,0,48,35,0,95,1,112,0,112,
		0,48,70,0,95,1,112,0,34,28,15,36,166,0,
		48,88,0,95,1,95,2,112,1,73,36,174,0,176,
		76,0,48,89,0,48,38,0,95,1,112,0,112,0,
		48,26,0,95,1,112,0,12,2,80,2,36,181,0,
		176,44,0,48,89,0,48,38,0,95,1,112,0,112,
		0,12,1,32,254,0,95,2,48,72,0,95,1,112,
		0,16,29,241,0,95,2,48,73,0,95,1,112,0,
		34,29,228,0,48,89,0,48,38,0,95,1,112,0,
		112,0,48,78,0,95,1,112,0,16,29,205,0,48,
		89,0,48,38,0,95,1,112,0,112,0,48,79,0,
		95,1,112,0,34,29,182,0,48,80,0,95,1,112,
		0,28,19,48,81,0,48,38,0,95,1,112,0,112,
		0,121,8,32,156,0,36,183,0,48,82,0,48,35,
		0,95,1,112,0,48,83,0,48,38,0,95,1,112,
		0,112,0,48,84,0,48,38,0,95,1,112,0,112,
		0,72,48,85,0,48,38,0,95,1,112,0,112,0,
		72,112,1,28,100,36,187,0,48,86,0,48,35,0,
		95,1,112,0,112,0,106,2,49,0,8,31,21,48,
		86,0,48,35,0,95,1,112,0,112,0,106,2,52,
		0,8,28,59,48,87,0,48,35,0,95,1,112,0,
		112,0,48,69,0,95,1,112,0,16,28,37,48,87,
		0,48,35,0,95,1,112,0,112,0,48,70,0,95,
		1,112,0,34,28,15,36,193,0,48,88,0,95,1,
		95,2,112,1,73,36,201,0,48,90,0,48,38,0,
		95,1,112,0,112,0,73,36,203,0,48,91,0,48,
		51,0,95,1,112,0,48,92,0,48,38,0,95,1,
		112,0,112,0,112,1,73,26,100,253,36,207,0,48,
		91,0,48,51,0,95,1,112,0,48,52,0,48,38,
		0,95,1,112,0,112,0,112,1,73,36,209,0,48,
		93,0,48,64,0,95,1,112,0,112,0,73,36,211,
		0,48,52,0,48,21,0,95,1,112,0,112,0,121,
=======
		13,2,0,36,138,0,102,80,1,36,142,0,48,66,
		0,48,67,0,95,1,112,0,112,0,73,36,144,0,
		48,68,0,48,21,0,95,1,112,0,112,0,73,36,
		148,0,48,69,0,95,1,90,26,106,10,70,101,99,
		104,97,32,32,58,32,0,176,70,0,176,71,0,12,
		0,12,1,72,6,89,55,0,0,0,1,0,1,0,
		106,10,80,101,114,105,111,100,111,58,32,0,176,70,
		0,48,72,0,95,255,112,0,12,1,72,106,4,32,
		62,32,0,72,176,70,0,48,73,0,95,255,112,0,
		12,1,72,6,89,55,0,0,0,1,0,1,0,106,
		10,70,97,109,105,108,105,97,58,32,0,176,74,0,
		48,75,0,95,255,112,0,12,1,72,106,4,32,62,
		32,0,72,176,74,0,48,76,0,95,255,112,0,12,
		1,72,6,4,3,0,112,1,73,36,150,0,48,77,
		0,48,38,0,95,1,112,0,112,0,73,36,152,0,
		48,78,0,48,38,0,95,1,112,0,112,0,32,144,
		2,36,154,0,176,79,0,48,80,0,48,38,0,95,
		1,112,0,112,0,48,26,0,95,1,112,0,12,2,
		80,2,36,161,0,176,47,0,48,80,0,48,38,0,
		95,1,112,0,112,0,12,1,32,254,0,95,2,48,
		75,0,95,1,112,0,16,29,241,0,95,2,48,76,
		0,95,1,112,0,34,29,228,0,48,80,0,48,38,
		0,95,1,112,0,112,0,48,81,0,95,1,112,0,
		16,29,205,0,48,80,0,48,38,0,95,1,112,0,
		112,0,48,82,0,95,1,112,0,34,29,182,0,48,
		83,0,95,1,112,0,28,19,48,84,0,48,38,0,
		95,1,112,0,112,0,121,8,32,156,0,36,163,0,
		48,85,0,48,35,0,95,1,112,0,48,86,0,48,
		38,0,95,1,112,0,112,0,48,87,0,48,38,0,
		95,1,112,0,112,0,72,48,88,0,48,38,0,95,
		1,112,0,112,0,72,112,1,28,100,36,167,0,48,
		89,0,48,35,0,95,1,112,0,112,0,106,2,49,
		0,8,31,21,48,89,0,48,35,0,95,1,112,0,
		112,0,106,2,52,0,8,28,59,48,90,0,48,35,
		0,95,1,112,0,112,0,48,72,0,95,1,112,0,
		16,28,37,48,90,0,48,35,0,95,1,112,0,112,
		0,48,73,0,95,1,112,0,34,28,15,36,173,0,
		48,91,0,95,1,95,2,112,1,73,36,181,0,176,
		79,0,48,92,0,48,38,0,95,1,112,0,112,0,
		48,26,0,95,1,112,0,12,2,80,2,36,188,0,
		176,47,0,48,92,0,48,38,0,95,1,112,0,112,
		0,12,1,32,254,0,95,2,48,75,0,95,1,112,
		0,16,29,241,0,95,2,48,76,0,95,1,112,0,
		34,29,228,0,48,92,0,48,38,0,95,1,112,0,
		112,0,48,81,0,95,1,112,0,16,29,205,0,48,
		92,0,48,38,0,95,1,112,0,112,0,48,82,0,
		95,1,112,0,34,29,182,0,48,83,0,95,1,112,
		0,28,19,48,84,0,48,38,0,95,1,112,0,112,
		0,121,8,32,156,0,36,190,0,48,85,0,48,35,
		0,95,1,112,0,48,86,0,48,38,0,95,1,112,
		0,112,0,48,87,0,48,38,0,95,1,112,0,112,
		0,72,48,88,0,48,38,0,95,1,112,0,112,0,
		72,112,1,28,100,36,194,0,48,89,0,48,35,0,
		95,1,112,0,112,0,106,2,49,0,8,31,21,48,
		89,0,48,35,0,95,1,112,0,112,0,106,2,52,
		0,8,28,59,48,90,0,48,35,0,95,1,112,0,
		112,0,48,72,0,95,1,112,0,16,28,37,48,90,
		0,48,35,0,95,1,112,0,112,0,48,73,0,95,
		1,112,0,34,28,15,36,200,0,48,91,0,95,1,
		95,2,112,1,73,36,208,0,48,93,0,48,38,0,
		95,1,112,0,112,0,73,36,210,0,48,94,0,48,
		54,0,95,1,112,0,48,95,0,48,38,0,95,1,
		112,0,112,0,112,1,73,26,100,253,36,214,0,48,
		94,0,48,54,0,95,1,112,0,48,55,0,48,38,
		0,95,1,112,0,112,0,112,1,73,36,216,0,48,
		96,0,48,67,0,95,1,112,0,112,0,73,36,218,
		0,48,55,0,48,21,0,95,1,112,0,112,0,121,
>>>>>>> SQLite
		15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
<<<<<<< HEAD
		117,96,0,2,0,116,96,0,4,0,0,82,1,0,
=======
		117,99,0,2,0,116,99,0,4,0,0,82,1,0,
>>>>>>> SQLite
		7
	};

	hb_vmExecute( pcode, symbols );
}

