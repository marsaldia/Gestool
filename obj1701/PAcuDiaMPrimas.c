/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\PAcuDiaMPrimas.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( PACUDIAMPRIMAS );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TNEWINFGEN );
HB_FUNC_STATIC( PACUDIAMPRIMAS_CREATE );
HB_FUNC_STATIC( PACUDIAMPRIMAS_OPENFILES );
HB_FUNC_STATIC( PACUDIAMPRIMAS_CLOSEFILES );
HB_FUNC_STATIC( PACUDIAMPRIMAS_LRESOURCE );
HB_FUNC_STATIC( PACUDIAMPRIMAS_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( MASUND );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TPRODUCCION );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PACUDIAMPRIMAS )
{ "PACUDIAMPRIMAS", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( PACUDIAMPRIMAS )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TNEWINFGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TNEWINFGEN )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PACUDIAMPRIMAS_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PACUDIAMPRIMAS_CREATE )}, NULL },
{ "PACUDIAMPRIMAS_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PACUDIAMPRIMAS_OPENFILES )}, NULL },
{ "PACUDIAMPRIMAS_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PACUDIAMPRIMAS_CLOSEFILES )}, NULL },
{ "PACUDIAMPRIMAS_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PACUDIAMPRIMAS_LRESOURCE )}, NULL },
{ "PACUDIAMPRIMAS_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PACUDIAMPRIMAS_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MASUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MASUND )}, NULL },
{ "CPICOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPREFIJOINDICE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OPRODUCCT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TPRODUCCION", {HB_FS_PUBLIC}, {HB_FUNCNAME( TPRODUCCION )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "OPENFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPRODUCCT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LNEWINFORME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFHORAINICIO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFHORAFIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LGRUPOARTICULO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LGRUPOTOPERACION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LGRUPOOPERACION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LGRUPOSECCION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LGRUPOALMACEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDEFCONDICIONES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "CHORAINICIO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHORAFIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TODOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARGO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGRUPOARTICULO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "DESDE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HASTA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGRUPOTOPERACION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGRUPOOPERACION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGRUPOSECCION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OGRUPOALMACEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODETMATERIAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "CCODOPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OOPERACION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETVALORGRUPO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODSEC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALMORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LSEEKINACUMULADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODOPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODSEC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMOPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMSEC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSECCION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFALM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODTOPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMTOPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIPOPERA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCAJAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCAJORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NUNICAJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUNDORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NUNIDADES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NIMPORTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUNIDADES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPESO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPESO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NVOLUMEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVOLUMEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DFECMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCAJAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUNICAJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPORTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PACUDIAMPRIMAS, ".\\.\\Prg\\PAcuDiaMPrimas.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PACUDIAMPRIMAS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PACUDIAMPRIMAS )
   #include "hbiniseg.h"
#endif

HB_FUNC( PACUDIAMPRIMAS )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,145,0,36,8,0,103,2,0,100,8,
		29,79,1,176,1,0,104,2,0,12,1,29,68,1,
		166,6,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,15,80,65,99,117,68,105,97,77,80,114,105,
		109,97,115,0,108,4,4,1,0,108,0,112,3,80,
		2,36,10,0,48,5,0,95,2,106,7,79,66,74,
		69,67,84,0,100,95,1,121,72,121,72,121,72,106,
		10,111,80,114,111,100,117,99,99,84,0,4,1,0,
		9,112,5,73,36,12,0,48,6,0,95,2,106,7,
		67,114,101,97,116,101,0,108,7,95,1,121,72,121,
		72,121,72,112,3,73,36,14,0,48,6,0,95,2,
		106,10,79,112,101,110,70,105,108,101,115,0,108,8,
		95,1,121,72,121,72,121,72,112,3,73,36,16,0,
		48,6,0,95,2,106,11,67,108,111,115,101,70,105,
		108,101,115,0,108,9,95,1,121,72,121,72,121,72,
		112,3,73,36,18,0,48,6,0,95,2,106,10,108,
		82,101,115,111,117,114,99,101,0,108,10,95,1,121,
		72,121,72,121,72,112,3,73,36,20,0,48,6,0,
		95,2,106,10,108,71,101,110,101,114,97,116,101,0,
		108,11,95,1,121,72,121,72,121,72,112,3,73,36,
		22,0,48,12,0,95,2,112,0,73,167,14,0,0,
		176,13,0,104,2,0,95,2,20,2,168,48,14,0,
		95,2,112,0,80,3,176,15,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		16,0,95,3,164,146,1,0,73,95,3,110,7,48,
		14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PACUDIAMPRIMAS_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,26,0,102,80,1,36,28,0,48,17,
		0,95,1,106,8,99,67,111,100,65,114,116,0,106,
		2,67,0,92,18,121,90,8,106,3,64,33,0,6,
		106,16,67,243,100,105,103,111,32,97,114,116,237,99,
		117,108,111,0,120,106,16,67,243,100,105,103,111,32,
		97,114,116,237,99,117,108,111,0,92,14,9,112,10,
		73,36,29,0,48,17,0,95,1,106,8,99,78,111,
		109,65,114,116,0,106,2,67,0,92,100,121,90,8,
		106,3,64,33,0,6,106,9,65,114,116,237,99,117,
		108,111,0,120,106,16,78,111,109,98,114,101,32,97,
		114,116,237,99,117,108,111,0,92,35,9,112,10,73,
		36,30,0,48,17,0,95,1,106,9,99,67,111,100,
		84,79,112,101,0,106,2,67,0,92,3,121,90,8,
		106,3,64,33,0,6,106,10,84,105,112,46,32,79,
		112,101,46,0,9,106,26,67,243,100,105,103,111,32,
		100,101,108,32,116,105,112,111,32,111,112,101,114,97,
		99,105,243,110,0,92,5,9,112,10,73,36,31,0,
		48,17,0,95,1,106,9,99,78,111,109,84,79,112,
		101,0,106,2,67,0,92,35,121,90,8,106,3,64,
		33,0,6,106,10,78,111,109,46,32,79,112,101,46,
		0,9,106,26,78,111,109,98,114,101,32,100,101,108,
		32,116,105,112,111,32,111,112,101,114,97,99,105,243,
		110,0,92,20,9,112,10,73,36,32,0,48,17,0,
		95,1,106,8,99,67,111,100,79,112,101,0,106,2,
		67,0,92,3,121,90,8,106,3,64,33,0,6,106,
		5,79,112,101,46,0,9,106,23,67,243,100,105,103,
		111,32,100,101,32,108,97,32,111,112,101,114,97,99,
		105,243,110,0,92,5,9,112,10,73,36,33,0,48,
		17,0,95,1,106,8,99,78,111,109,79,112,101,0,
		106,2,67,0,92,35,121,90,8,106,3,64,33,0,
		6,106,10,78,111,109,46,32,79,112,101,46,0,9,
		106,23,78,111,109,98,114,101,32,100,101,32,108,97,
		32,111,112,101,114,97,99,105,243,110,0,92,20,9,
		112,10,73,36,34,0,48,17,0,95,1,106,8,99,
		67,111,100,83,101,99,0,106,2,67,0,92,3,121,
		90,8,106,3,64,33,0,6,106,5,83,101,99,46,
		0,9,106,21,67,243,100,105,103,111,32,100,101,32,
		108,97,32,115,101,99,99,105,243,110,0,92,5,9,
		112,10,73,36,35,0,48,17,0,95,1,106,8,99,
		78,111,109,83,101,99,0,106,2,67,0,92,35,121,
		90,8,106,3,64,33,0,6,106,10,78,111,109,46,
		32,83,101,99,46,0,9,106,21,78,111,109,98,114,
		101,32,100,101,32,108,97,32,115,101,99,99,105,243,
		110,0,92,20,9,112,10,73,36,36,0,48,17,0,
		95,1,106,8,99,67,111,100,65,108,109,0,106,2,
		67,0,92,3,121,90,8,106,3,64,33,0,6,106,
		5,65,108,109,46,0,9,106,15,67,243,100,105,103,
		111,32,97,108,109,97,99,233,110,0,92,5,9,112,
		10,73,36,37,0,48,17,0,95,1,106,8,99,78,
		111,109,65,108,109,0,106,2,67,0,92,20,121,90,
		8,106,3,64,33,0,6,106,10,78,111,109,46,32,
		65,108,109,46,0,9,106,15,78,111,109,98,114,101,
		32,97,108,109,97,99,233,110,0,92,20,9,112,10,
		73,36,38,0,48,17,0,95,1,106,7,110,67,97,
		106,97,115,0,106,2,78,0,92,16,92,6,90,8,
		176,18,0,12,0,6,106,6,67,97,106,97,115,0,
		9,106,6,67,97,106,97,115,0,92,12,120,112,10,
		73,36,39,0,48,17,0,95,1,106,8,110,85,110,
		105,67,97,106,0,106,2,78,0,92,16,92,6,90,
		8,176,18,0,12,0,6,106,11,85,110,105,46,32,
		99,97,106,97,115,0,9,106,18,85,105,100,97,100,
		101,115,32,112,111,114,32,99,97,106,97,115,0,92,
		12,120,112,10,73,36,40,0,48,17,0,95,1,106,
		10,110,85,110,105,100,97,100,101,115,0,106,2,78,
		0,92,16,92,6,90,8,176,18,0,12,0,6,106,
		9,85,110,105,100,97,100,101,115,0,120,106,15,84,
		111,116,97,108,32,117,110,105,100,97,100,101,115,0,
		92,12,120,112,10,73,36,41,0,48,17,0,95,1,
		106,9,110,73,109,112,111,114,116,101,0,106,2,78,
		0,92,16,92,6,89,17,0,0,0,1,0,1,0,
		48,19,0,95,255,112,0,6,106,8,73,109,112,111,
		114,116,101,0,120,106,8,73,109,112,111,114,116,101,
		0,92,12,120,112,10,73,36,42,0,48,17,0,95,
		1,106,6,110,80,101,115,111,0,106,2,78,0,92,
		16,92,6,90,8,176,18,0,12,0,6,106,5,80,
		101,115,111,0,9,106,5,80,101,115,111,0,92,12,
		120,112,10,73,36,43,0,48,17,0,95,1,106,9,
		110,86,111,108,117,109,101,110,0,106,2,78,0,92,
		16,92,6,90,8,176,18,0,12,0,6,106,8,86,
		111,108,117,109,101,110,0,9,106,8,86,111,108,117,
		109,101,110,0,92,12,120,112,10,73,36,44,0,48,
		17,0,95,1,106,8,100,70,101,99,77,111,118,0,
		106,2,68,0,92,8,121,90,8,106,3,64,33,0,
		6,106,12,70,101,99,46,32,105,110,105,99,105,111,
		0,9,106,16,70,101,99,104,97,32,100,101,32,105,
		110,105,99,105,111,0,92,12,9,112,10,73,36,46,
		0,48,20,0,95,1,106,8,99,67,111,100,65,114,
		116,0,112,1,73,36,48,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PACUDIAMPRIMAS_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,54,0,120,80,1,36,55,0,176,21,
		0,89,15,0,1,0,0,0,176,22,0,95,1,12,
		1,6,12,1,80,2,36,57,0,113,48,0,0,36,
		59,0,48,23,0,102,48,12,0,176,24,0,12,0,
		176,25,0,12,0,112,1,112,1,73,36,60,0,48,
		26,0,48,27,0,102,112,0,112,0,73,114,76,0,
		0,36,62,0,115,73,36,64,0,176,28,0,106,41,
		73,109,112,111,115,105,98,108,101,32,97,98,114,105,
		114,32,116,111,100,97,115,32,108,97,115,32,98,97,
		115,101,115,32,100,101,32,100,97,116,111,115,0,20,
		1,36,65,0,48,29,0,102,112,0,73,36,66,0,
		9,80,1,36,70,0,176,21,0,95,2,20,1,36,
		72,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PACUDIAMPRIMAS_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,78,0,176,30,0,48,27,0,102,112,0,12,1,
		31,17,36,79,0,48,31,0,48,27,0,102,112,0,
		112,0,73,36,82,0,48,23,0,102,100,112,1,73,
		36,84,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PACUDIAMPRIMAS_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,90,0,48,32,0,102,120,112,1,73,
		36,92,0,48,33,0,102,106,19,73,78,70,95,71,
		69,78,95,80,82,79,68,85,67,67,73,79,78,0,
		112,1,31,8,36,93,0,9,110,7,36,96,0,48,
		34,0,102,112,0,73,36,97,0,48,35,0,102,112,
		0,73,36,99,0,48,36,0,102,112,0,31,8,36,
		100,0,9,110,7,36,103,0,48,37,0,102,9,112,
		1,31,8,36,104,0,9,110,7,36,107,0,48,38,
		0,102,9,112,1,31,8,36,108,0,9,110,7,36,
		111,0,48,39,0,102,9,112,1,31,8,36,112,0,
		9,110,7,36,115,0,48,40,0,102,9,112,1,31,
		8,36,116,0,9,110,7,36,119,0,48,41,0,102,
		9,112,1,73,36,121,0,48,42,0,48,43,0,102,
		112,0,48,44,0,48,45,0,48,27,0,102,112,0,
		112,0,112,0,112,1,73,36,123,0,48,46,0,102,
		100,48,45,0,48,27,0,102,112,0,112,0,112,2,
		73,36,125,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PACUDIAMPRIMAS_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,129,0,102,80,1,36,131,0,106,1,
		0,80,2,36,132,0,106,1,0,80,3,36,133,0,
		176,47,0,92,3,12,1,80,4,36,135,0,48,48,
		0,48,49,0,95,1,112,0,112,0,73,36,136,0,
		48,50,0,48,51,0,95,1,112,0,112,0,73,36,
		137,0,48,52,0,48,45,0,95,1,112,0,112,0,
		73,36,144,0,48,53,0,95,1,90,35,176,54,0,
		106,6,70,101,99,104,97,0,92,13,12,2,106,3,
		58,32,0,72,176,55,0,176,56,0,12,0,12,1,
		72,6,89,128,0,0,0,1,0,1,0,176,54,0,
		106,8,80,101,114,105,111,100,111,0,92,13,12,2,
		106,3,58,32,0,72,176,55,0,48,57,0,95,255,
		112,0,12,1,72,176,47,0,122,12,1,72,176,58,
		0,48,59,0,95,255,112,0,106,9,64,82,32,57,
		57,58,57,57,0,12,2,72,106,4,32,62,32,0,
		72,176,55,0,48,60,0,95,255,112,0,12,1,72,
		176,47,0,122,12,1,72,176,58,0,48,61,0,95,
		255,112,0,106,9,64,82,32,57,57,58,57,57,0,
		12,2,72,6,4,2,0,112,1,73,36,146,0,48,
		62,0,48,63,0,48,64,0,95,1,112,0,112,0,
		112,0,31,104,36,147,0,176,65,0,48,66,0,95,
		1,112,0,89,87,0,0,0,1,0,1,0,176,54,
		0,106,9,65,114,116,237,99,117,108,111,0,92,13,
		12,2,106,3,58,32,0,72,176,67,0,48,68,0,
		48,63,0,48,64,0,95,255,112,0,112,0,112,0,
		12,1,72,106,4,32,62,32,0,72,176,67,0,48,
		69,0,48,63,0,48,64,0,95,255,112,0,112,0,
		112,0,12,1,72,6,20,2,36,150,0,48,62,0,
		48,63,0,48,70,0,95,1,112,0,112,0,112,0,
		31,109,36,151,0,176,65,0,48,66,0,95,1,112,
		0,89,92,0,0,0,1,0,1,0,176,54,0,106,
		14,84,105,112,46,32,111,112,101,97,99,105,243,110,
		0,92,13,12,2,106,3,58,32,0,72,176,67,0,
		48,68,0,48,63,0,48,70,0,95,255,112,0,112,
		0,112,0,12,1,72,106,4,32,62,32,0,72,176,
		67,0,48,69,0,48,63,0,48,70,0,95,255,112,
		0,112,0,112,0,12,1,72,6,20,2,36,154,0,
		48,62,0,48,63,0,48,71,0,95,1,112,0,112,
		0,112,0,31,104,36,155,0,176,65,0,48,66,0,
		95,1,112,0,89,87,0,0,0,1,0,1,0,176,
		54,0,106,9,79,112,101,97,99,105,243,110,0,92,
		13,12,2,106,3,58,32,0,72,176,67,0,48,68,
		0,48,63,0,48,71,0,95,255,112,0,112,0,112,
		0,12,1,72,106,4,32,62,32,0,72,176,67,0,
		48,69,0,48,63,0,48,71,0,95,255,112,0,112,
		0,112,0,12,1,72,6,20,2,36,158,0,48,62,
		0,48,63,0,48,72,0,95,1,112,0,112,0,112,
		0,31,103,36,159,0,176,65,0,48,66,0,95,1,
		112,0,89,86,0,0,0,1,0,1,0,176,54,0,
		106,8,83,101,99,99,105,243,110,0,92,13,12,2,
		106,3,58,32,0,72,176,67,0,48,68,0,48,63,
		0,48,72,0,95,255,112,0,112,0,112,0,12,1,
		72,106,4,32,62,32,0,72,176,67,0,48,69,0,
		48,63,0,48,72,0,95,255,112,0,112,0,112,0,
		12,1,72,6,20,2,36,162,0,48,62,0,48,63,
		0,48,73,0,95,1,112,0,112,0,112,0,31,103,
		36,163,0,176,65,0,48,66,0,95,1,112,0,89,
		86,0,0,0,1,0,1,0,176,54,0,106,8,65,
		108,109,97,99,233,110,0,92,13,12,2,106,3,58,
		32,0,72,176,67,0,48,68,0,48,63,0,48,73,
		0,95,255,112,0,112,0,112,0,12,1,72,106,4,
		32,62,32,0,72,176,67,0,48,69,0,48,63,0,
		48,73,0,95,255,112,0,112,0,112,0,12,1,72,
		6,20,2,36,170,0,48,74,0,48,45,0,48,27,
		0,95,1,112,0,112,0,106,8,100,70,101,99,79,
		114,100,0,112,1,73,36,171,0,48,74,0,48,45,
		0,48,75,0,48,27,0,95,1,112,0,112,0,112,
		0,106,8,99,78,117,109,79,114,100,0,112,1,73,
		36,173,0,106,20,40,32,100,70,101,99,79,114,100,
		32,62,32,67,116,111,100,40,32,34,0,176,55,0,
		48,57,0,95,1,112,0,12,1,72,106,30,34,32,
		41,32,46,111,114,46,32,40,32,100,70,101,99,79,
		114,100,32,61,61,32,67,116,111,100,40,32,34,0,
		72,176,55,0,48,57,0,95,1,112,0,12,1,72,
		106,43,34,32,41,32,46,97,110,100,46,32,65,108,
		108,116,114,105,109,40,32,99,72,111,114,73,110,105,
		32,41,32,62,61,32,65,108,108,116,114,105,109,40,
		32,34,0,72,48,59,0,95,1,112,0,72,106,14,
		34,41,32,41,32,41,32,46,97,110,100,46,32,0,
		72,80,2,36,174,0,96,2,0,106,20,40,32,100,
		70,101,99,70,105,110,32,60,32,67,116,111,100,40,
		32,34,0,176,55,0,48,60,0,95,1,112,0,12,
		1,72,106,30,34,32,41,32,46,111,114,46,32,40,
		32,100,70,101,99,70,105,110,32,60,61,32,67,116,
		111,100,40,32,34,0,72,176,55,0,48,60,0,95,
		1,112,0,12,1,72,106,43,34,32,41,32,46,97,
		110,100,46,32,65,108,108,116,114,105,109,40,32,99,
		72,111,114,70,105,110,32,41,32,60,61,32,65,108,
		108,116,114,105,109,40,32,34,0,72,48,61,0,95,
		1,112,0,72,106,7,34,41,32,41,32,41,0,72,
		135,36,176,0,48,62,0,48,63,0,48,71,0,95,
		1,112,0,112,0,112,0,31,106,36,177,0,96,2,
		0,106,20,32,46,97,110,100,46,32,99,67,111,100,
		79,112,101,32,62,61,32,34,0,176,76,0,48,68,
		0,48,63,0,48,71,0,95,1,112,0,112,0,112,
		0,12,1,72,106,21,34,32,46,97,110,100,46,32,
		99,67,111,100,79,112,101,32,60,61,32,34,0,72,
		176,76,0,48,69,0,48,63,0,48,71,0,95,1,
		112,0,112,0,112,0,12,1,72,106,2,34,0,72,
		135,36,180,0,48,62,0,48,63,0,48,72,0,95,
		1,112,0,112,0,112,0,31,106,36,181,0,96,2,
		0,106,20,32,46,97,110,100,46,32,99,67,111,100,
		83,101,99,32,62,61,32,34,0,176,76,0,48,68,
		0,48,63,0,48,72,0,95,1,112,0,112,0,112,
		0,12,1,72,106,21,34,32,46,97,110,100,46,32,
		99,67,111,100,83,101,99,32,60,61,32,34,0,72,
		176,76,0,48,69,0,48,63,0,48,72,0,95,1,
		112,0,112,0,112,0,12,1,72,106,2,34,0,72,
		135,36,184,0,176,30,0,48,77,0,48,78,0,95,
		1,112,0,112,0,12,1,31,32,36,185,0,96,2,
		0,106,8,32,46,97,110,100,46,32,0,48,77,0,
		48,78,0,95,1,112,0,112,0,72,135,36,188,0,
		48,79,0,48,45,0,48,27,0,95,1,112,0,112,
		0,176,80,0,12,0,176,81,0,48,82,0,48,45,
		0,48,27,0,95,1,112,0,112,0,112,0,12,1,
		48,83,0,48,45,0,48,27,0,95,1,112,0,112,
		0,112,0,95,2,100,100,100,100,100,100,100,120,112,
		12,73,36,190,0,48,42,0,48,43,0,95,1,112,
		0,48,84,0,48,45,0,48,27,0,95,1,112,0,
		112,0,112,0,112,1,73,36,192,0,48,62,0,48,
		63,0,48,73,0,95,1,112,0,112,0,112,0,31,
		99,36,193,0,106,13,99,65,108,109,79,114,100,32,
		62,61,32,34,0,176,76,0,48,68,0,48,63,0,
		48,73,0,95,1,112,0,112,0,112,0,12,1,72,
		106,21,34,32,46,97,110,100,46,32,99,65,108,109,
		79,114,100,32,60,61,32,34,0,72,176,76,0,48,
		69,0,48,63,0,48,73,0,95,1,112,0,112,0,
		112,0,12,1,72,106,2,34,0,72,80,3,25,13,
		36,195,0,106,4,46,116,46,0,80,3,36,198,0,
		48,62,0,48,63,0,48,64,0,95,1,112,0,112,
		0,112,0,31,96,36,199,0,96,3,0,106,20,32,
		46,97,110,100,46,32,99,67,111,100,65,114,116,32,
		62,61,32,34,0,48,68,0,48,63,0,48,64,0,
		95,1,112,0,112,0,112,0,72,106,21,34,32,46,
		97,110,100,46,32,99,67,111,100,65,114,116,32,60,
		61,32,34,0,72,48,69,0,48,63,0,48,64,0,
		95,1,112,0,112,0,112,0,72,106,2,34,0,72,
		135,36,202,0,48,79,0,48,45,0,48,75,0,48,
		27,0,95,1,112,0,112,0,112,0,176,80,0,12,
		0,176,81,0,48,82,0,48,45,0,48,75,0,48,
		27,0,95,1,112,0,112,0,112,0,112,0,12,1,
		48,83,0,48,45,0,48,75,0,48,27,0,95,1,
		112,0,112,0,112,0,112,0,176,85,0,95,3,12,
		1,100,100,100,100,100,100,100,120,112,12,73,36,204,
		0,48,86,0,48,45,0,48,27,0,95,1,112,0,
		112,0,112,0,73,36,206,0,48,87,0,95,1,112,
		0,32,163,7,48,88,0,48,45,0,48,27,0,95,
		1,112,0,112,0,112,0,32,143,7,36,208,0,176,
		89,0,48,90,0,48,45,0,48,27,0,95,1,112,
		0,112,0,112,0,48,45,0,48,91,0,48,27,0,
		95,1,112,0,112,0,112,0,106,8,99,84,105,112,
		79,112,101,0,12,3,80,4,36,212,0,176,92,0,
		48,93,0,48,45,0,48,27,0,95,1,112,0,112,
		0,112,0,48,94,0,95,1,112,0,12,2,29,253,
		6,48,62,0,48,63,0,48,70,0,95,1,112,0,
		112,0,112,0,31,48,95,4,48,68,0,48,63,0,
		48,70,0,95,1,112,0,112,0,112,0,16,29,211,
		6,95,4,48,69,0,48,63,0,48,70,0,95,1,
		112,0,112,0,112,0,34,29,188,6,36,214,0,48,
		95,0,48,45,0,48,75,0,48,27,0,95,1,112,
		0,112,0,112,0,48,93,0,48,45,0,48,27,0,
		95,1,112,0,112,0,112,0,176,96,0,48,97,0,
		48,45,0,48,27,0,95,1,112,0,112,0,112,0,
		12,1,72,48,98,0,48,45,0,48,27,0,95,1,
		112,0,112,0,112,0,72,112,1,29,102,6,36,216,
		0,48,93,0,48,45,0,48,75,0,48,27,0,95,
		1,112,0,112,0,112,0,112,0,176,96,0,48,97,
		0,48,45,0,48,75,0,48,27,0,95,1,112,0,
		112,0,112,0,112,0,12,1,72,48,98,0,48,45,
		0,48,75,0,48,27,0,95,1,112,0,112,0,112,
		0,112,0,72,48,93,0,48,45,0,48,27,0,95,
		1,112,0,112,0,112,0,176,96,0,48,97,0,48,
		45,0,48,27,0,95,1,112,0,112,0,112,0,12,
		1,72,48,98,0,48,45,0,48,27,0,95,1,112,
		0,112,0,112,0,72,8,29,220,5,48,88,0,48,
		45,0,48,75,0,48,27,0,95,1,112,0,112,0,
		112,0,112,0,32,195,5,36,222,0,48,99,0,95,
		1,106,15,84,105,112,111,32,111,112,101,114,97,99,
		105,243,110,0,95,4,112,2,73,36,223,0,48,99,
		0,95,1,106,10,79,112,101,114,97,99,105,243,110,
		0,48,90,0,48,45,0,48,27,0,95,1,112,0,
		112,0,112,0,112,2,73,36,224,0,48,99,0,95,
		1,106,8,83,101,99,99,105,243,110,0,48,100,0,
		48,45,0,48,27,0,95,1,112,0,112,0,112,0,
		112,2,73,36,225,0,48,99,0,95,1,106,8,65,
		108,109,97,99,233,110,0,48,101,0,48,45,0,48,
		75,0,48,27,0,95,1,112,0,112,0,112,0,112,
		0,112,2,73,36,226,0,48,99,0,95,1,106,6,
		70,101,99,104,97,0,176,55,0,48,102,0,48,45,
		0,48,27,0,95,1,112,0,112,0,112,0,12,1,
		112,2,73,36,229,0,48,103,0,95,1,48,104,0,
		48,45,0,48,75,0,48,27,0,95,1,112,0,112,
		0,112,0,112,0,112,1,32,232,2,36,231,0,48,
		105,0,48,45,0,95,1,112,0,112,0,73,36,233,
		0,48,106,0,48,45,0,95,1,112,0,48,104,0,
		48,45,0,48,75,0,48,27,0,95,1,112,0,112,
		0,112,0,112,0,112,1,73,36,234,0,48,107,0,
		48,45,0,95,1,112,0,48,108,0,48,45,0,48,
		75,0,48,27,0,95,1,112,0,112,0,112,0,112,
		0,112,1,73,36,235,0,48,109,0,48,45,0,95,
		1,112,0,48,90,0,48,45,0,48,27,0,95,1,
		112,0,112,0,112,0,112,1,73,36,236,0,48,110,
		0,48,45,0,95,1,112,0,48,100,0,48,45,0,
		48,27,0,95,1,112,0,112,0,112,0,112,1,73,
		36,237,0,48,111,0,48,45,0,95,1,112,0,48,
		101,0,48,45,0,48,75,0,48,27,0,95,1,112,
		0,112,0,112,0,112,0,112,1,73,36,238,0,48,
		112,0,48,45,0,95,1,112,0,176,89,0,48,90,
		0,48,45,0,95,1,112,0,112,0,48,45,0,48,
		91,0,95,1,112,0,112,0,12,2,112,1,73,36,
		239,0,48,113,0,48,45,0,95,1,112,0,176,89,
		0,48,100,0,48,45,0,95,1,112,0,112,0,48,
		45,0,48,114,0,95,1,112,0,112,0,12,2,112,
		1,73,36,240,0,48,115,0,48,45,0,95,1,112,
		0,176,89,0,48,116,0,48,45,0,95,1,112,0,
		112,0,48,117,0,95,1,112,0,12,2,112,1,73,
		36,241,0,48,118,0,48,45,0,95,1,112,0,95,
		4,112,1,73,36,242,0,48,119,0,48,45,0,95,
		1,112,0,176,89,0,95,4,48,45,0,48,120,0,
		48,91,0,48,27,0,95,1,112,0,112,0,112,0,
		112,0,106,8,99,68,101,115,84,105,112,0,12,3,
		112,1,73,36,243,0,48,121,0,48,45,0,95,1,
		112,0,48,122,0,48,45,0,48,75,0,48,27,0,
		95,1,112,0,112,0,112,0,112,0,112,1,73,36,
		244,0,48,123,0,48,45,0,95,1,112,0,48,124,
		0,48,45,0,48,75,0,48,27,0,95,1,112,0,
		112,0,112,0,112,0,112,1,73,36,245,0,48,125,
		0,48,45,0,95,1,112,0,48,122,0,48,45,0,
		48,75,0,48,27,0,95,1,112,0,112,0,112,0,
		112,0,48,124,0,48,45,0,48,75,0,48,27,0,
		95,1,112,0,112,0,112,0,112,0,65,112,1,73,
		36,246,0,48,126,0,48,45,0,95,1,112,0,48,
		127,0,48,45,0,48,75,0,48,27,0,95,1,112,
		0,112,0,112,0,112,0,48,128,0,48,45,0,95,
		1,112,0,112,0,65,112,1,73,36,247,0,48,129,
		0,48,45,0,95,1,112,0,48,130,0,48,45,0,
		48,75,0,48,27,0,95,1,112,0,112,0,112,0,
		112,0,48,128,0,48,45,0,95,1,112,0,112,0,
		65,112,1,73,36,248,0,48,131,0,48,45,0,95,
		1,112,0,48,132,0,48,45,0,48,75,0,48,27,
		0,95,1,112,0,112,0,112,0,112,0,48,128,0,
		48,45,0,95,1,112,0,112,0,65,112,1,73,36,
		249,0,48,133,0,48,45,0,95,1,112,0,48,102,
		0,48,45,0,48,27,0,95,1,112,0,112,0,112,
		0,112,1,73,36,251,0,48,134,0,48,45,0,95,
		1,112,0,112,0,73,26,222,1,36,255,0,48,135,
		0,48,45,0,95,1,112,0,112,0,73,36,1,1,
		48,121,0,48,45,0,95,1,112,0,21,48,136,0,
		163,0,112,0,48,122,0,48,45,0,48,75,0,48,
		27,0,95,1,112,0,112,0,112,0,112,0,72,112,
		1,73,36,2,1,48,123,0,48,45,0,95,1,112,
		0,21,48,137,0,163,0,112,0,48,124,0,48,45,
		0,48,75,0,48,27,0,95,1,112,0,112,0,112,
		0,112,0,72,112,1,73,36,3,1,48,125,0,48,
		45,0,95,1,112,0,21,48,128,0,163,0,112,0,
		48,122,0,48,45,0,48,75,0,48,27,0,95,1,
		112,0,112,0,112,0,112,0,48,124,0,48,45,0,
		48,75,0,48,27,0,95,1,112,0,112,0,112,0,
		112,0,65,72,112,1,73,36,4,1,48,126,0,48,
		45,0,95,1,112,0,21,48,138,0,163,0,112,0,
		48,127,0,48,45,0,48,75,0,48,27,0,95,1,
		112,0,112,0,112,0,112,0,48,124,0,48,45,0,
		48,75,0,48,27,0,95,1,112,0,112,0,112,0,
		112,0,65,48,122,0,48,45,0,48,75,0,48,27,
		0,95,1,112,0,112,0,112,0,112,0,65,72,112,
		1,73,36,5,1,48,129,0,48,45,0,95,1,112,
		0,21,48,130,0,163,0,112,0,48,130,0,48,45,
		0,48,75,0,48,27,0,95,1,112,0,112,0,112,
		0,112,0,48,124,0,48,45,0,48,75,0,48,27,
		0,95,1,112,0,112,0,112,0,112,0,65,48,122,
		0,48,45,0,48,75,0,48,27,0,95,1,112,0,
		112,0,112,0,112,0,65,72,112,1,73,36,6,1,
		48,131,0,48,45,0,95,1,112,0,21,48,132,0,
		163,0,112,0,48,132,0,48,45,0,48,75,0,48,
		27,0,95,1,112,0,112,0,112,0,112,0,48,124,
		0,48,45,0,48,75,0,48,27,0,95,1,112,0,
		112,0,112,0,112,0,65,48,122,0,48,45,0,48,
		75,0,48,27,0,95,1,112,0,112,0,112,0,112,
		0,65,72,112,1,73,36,8,1,48,134,0,48,45,
		0,95,1,112,0,112,0,73,36,12,1,48,139,0,
		48,45,0,48,75,0,48,27,0,95,1,112,0,112,
		0,112,0,112,0,73,26,160,249,36,20,1,48,139,
		0,48,45,0,48,27,0,95,1,112,0,112,0,112,
		0,73,36,22,1,48,140,0,48,43,0,95,1,112,
		0,48,141,0,48,45,0,48,27,0,95,1,112,0,
		112,0,112,0,112,1,73,26,86,248,36,26,1,48,
		142,0,48,45,0,48,27,0,95,1,112,0,112,0,
		176,80,0,12,0,176,81,0,48,82,0,48,45,0,
		48,27,0,95,1,112,0,112,0,112,0,12,1,112,
		2,73,36,27,1,48,142,0,48,45,0,48,75,0,
		48,27,0,95,1,112,0,112,0,112,0,176,80,0,
		12,0,176,81,0,48,82,0,48,45,0,48,75,0,
		48,27,0,95,1,112,0,112,0,112,0,112,0,12,
		1,112,2,73,36,29,1,48,140,0,48,43,0,95,
		1,112,0,48,44,0,48,45,0,48,27,0,95,1,
		112,0,112,0,112,0,112,1,73,36,31,1,48,50,
		0,48,49,0,95,1,112,0,112,0,73,36,33,1,
		48,44,0,48,45,0,95,1,112,0,112,0,121,15,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,145,0,2,0,116,145,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

