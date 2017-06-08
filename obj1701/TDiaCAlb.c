/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TDiaCAlb.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TDIACALB );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFGEN );
HB_FUNC_STATIC( TDIACALB_CREATE );
HB_FUNC_STATIC( TDIACALB_OPENFILES );
HB_FUNC_STATIC( TDIACALB_CLOSEFILES );
HB_FUNC_STATIC( TDIACALB_LRESOURCE );
HB_FUNC_STATIC( TDIACALB_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( GETSYSDATE );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TDATACENTER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATDAT );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TCHECKBOX );
HB_FUNC_EXTERN( AITMALBCLI );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( LCLIENTEBLOQUEARRIESGO );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( ATOTALBCLI );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NPAGALBCLI );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TDIACALB )
{ "TDIACALB", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TDIACALB )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFGEN )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIACALB_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDIACALB_CREATE )}, NULL },
{ "TDIACALB_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDIACALB_OPENFILES )}, NULL },
{ "TDIACALB_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDIACALB_CLOSEFILES )}, NULL },
{ "TDIACALB_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDIACALB_LRESOURCE )}, NULL },
{ "TDIACALB_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDIACALB_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FLDDIARIO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPICOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "XOTHERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSYSDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETSYSDATE )}, NULL },
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
{ "_OALBCLIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OALBCLIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFIVA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATDAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATDAT )}, NULL },
{ "ODBFIVA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFCLIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OENTREGADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "AENTREGADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "LEXCCREDITO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LEXCCREDITO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMALBCLI )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODLG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBTNCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ZAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DINIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFININF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LALLCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CCLIORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCLIDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OENTREGADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCLIENTEBLOQUEARRIESGO", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCLIENTEBLOQUEARRIESGO )}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DFECMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DFECENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DFECENV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "ATOTALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATOTALBCLI )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFALB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBFDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDIVINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTNET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTIVA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTREQ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTDOC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTPNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTTRN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDOCMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPAGALBCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NPAGALBCLI )}, NULL },
{ "ADDCLIENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TDIACALB, ".\\.\\Prg\\TDiaCAlb.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TDIACALB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TDIACALB )
   #include "hbiniseg.h"
#endif

HB_FUNC( TDIACALB )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,137,0,36,7,0,103,2,0,100,8,
		29,32,3,176,1,0,104,2,0,12,1,29,21,3,
		166,215,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,84,68,105,97,67,65,108,98,0,108,4,
		4,1,0,108,0,112,3,80,2,36,9,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,9,95,1,
		121,72,121,72,121,72,106,9,108,69,120,99,67,101,
		114,111,0,4,1,0,9,112,5,73,36,10,0,48,
		5,0,95,2,106,7,79,66,74,69,67,84,0,100,
		95,1,121,72,121,72,121,72,106,8,111,69,115,116,
		97,100,111,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,8,111,68,98,
		102,73,118,97,0,4,1,0,9,112,5,73,36,12,
		0,48,5,0,95,2,106,7,79,66,74,69,67,84,
		0,100,95,1,121,72,121,72,121,72,106,9,111,65,
		108,98,67,108,105,84,0,4,1,0,9,112,5,73,
		36,13,0,48,5,0,95,2,106,7,79,66,74,69,
		67,84,0,100,95,1,121,72,121,72,121,72,106,9,
		111,65,108,98,67,108,105,76,0,4,1,0,9,112,
		5,73,36,14,0,48,5,0,95,2,106,7,79,66,
		74,69,67,84,0,100,95,1,121,72,121,72,121,72,
		106,9,111,65,108,98,67,108,105,80,0,4,1,0,
		9,112,5,73,36,15,0,48,5,0,95,2,106,6,
		65,82,82,65,89,0,106,13,78,111,32,102,97,99,
		116,117,114,97,100,111,0,106,10,70,97,99,116,117,
		114,97,100,111,0,106,6,84,111,100,111,115,0,4,
		3,0,95,1,121,72,121,72,121,72,106,8,97,69,
		115,116,97,100,111,0,4,1,0,9,112,5,73,36,
		16,0,48,5,0,95,2,106,6,76,79,71,73,67,
		0,9,95,1,121,72,121,72,121,72,106,12,108,69,
		120,99,67,114,101,100,105,116,111,0,4,1,0,9,
		112,5,73,36,17,0,48,5,0,95,2,106,6,65,
		82,82,65,89,0,106,14,78,111,32,101,110,116,114,
		101,103,97,100,111,115,0,106,11,69,110,116,114,101,
		103,97,100,111,115,0,106,6,84,111,100,111,115,0,
		4,3,0,95,1,121,72,121,72,121,72,106,11,97,
		69,110,116,114,101,103,97,100,111,0,4,1,0,9,
		112,5,73,36,18,0,48,5,0,95,2,106,7,79,
		66,74,69,67,84,0,100,95,1,121,72,121,72,121,
		72,106,11,111,69,110,116,114,101,103,97,100,111,0,
		4,1,0,9,112,5,73,36,20,0,48,6,0,95,
		2,106,7,67,114,101,97,116,101,0,108,7,95,1,
		121,72,121,72,121,72,112,3,73,36,22,0,48,6,
		0,95,2,106,10,79,112,101,110,70,105,108,101,115,
		0,108,8,95,1,121,72,121,72,121,72,112,3,73,
		36,24,0,48,6,0,95,2,106,11,67,108,111,115,
		101,70,105,108,101,115,0,108,9,95,1,121,72,121,
		72,121,72,112,3,73,36,26,0,48,6,0,95,2,
		106,10,108,82,101,115,111,117,114,99,101,0,108,10,
		95,1,121,72,121,72,121,72,112,3,73,36,28,0,
		48,6,0,95,2,106,10,108,71,101,110,101,114,97,
		116,101,0,108,11,95,1,121,72,121,72,121,72,112,
		3,73,36,30,0,48,12,0,95,2,112,0,73,167,
		14,0,0,176,13,0,104,2,0,95,2,20,2,168,
		48,14,0,95,2,112,0,80,3,176,15,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,16,0,95,3,164,146,1,0,73,95,3,
		110,7,48,14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDIACALB_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,34,0,102,80,1,36,36,0,48,17,
		0,95,1,9,112,1,73,36,37,0,48,18,0,95,
		1,106,8,100,70,101,99,69,110,116,0,106,2,68,
		0,92,8,121,90,8,106,3,64,33,0,6,106,13,
		70,101,99,46,32,101,110,116,114,101,103,97,0,120,
		106,17,70,101,99,104,97,32,100,101,32,101,110,116,
		114,101,103,97,0,92,10,112,9,73,36,38,0,48,
		18,0,95,1,106,8,110,84,111,116,69,110,116,0,
		106,2,78,0,92,16,92,6,89,17,0,0,0,1,
		0,1,0,48,19,0,95,255,112,0,6,106,10,69,
		110,116,114,101,103,97,100,111,0,9,106,24,84,111,
		116,97,108,32,101,110,116,114,101,103,97,115,32,97,
		32,99,117,101,110,116,97,0,92,20,120,112,10,73,
		36,40,0,48,20,0,95,1,112,0,29,141,0,36,
		41,0,48,21,0,95,1,106,8,67,67,79,68,67,
		76,73,0,106,8,67,67,79,68,67,76,73,0,112,
		2,73,36,42,0,48,22,0,95,1,89,22,0,0,
		0,1,0,1,0,48,23,0,48,24,0,95,255,112,
		0,112,0,6,89,72,0,0,0,1,0,1,0,106,
		12,67,108,105,101,110,116,101,32,32,58,32,0,176,
		25,0,48,23,0,48,24,0,95,255,112,0,112,0,
		12,1,72,106,2,45,0,72,176,26,0,48,23,0,
		48,24,0,95,255,112,0,112,0,48,27,0,95,255,
		112,0,12,2,72,6,112,2,73,25,51,36,44,0,
		48,21,0,95,1,106,8,100,70,101,99,77,111,118,
		0,106,26,68,116,111,115,40,32,100,70,101,99,77,
		111,118,32,41,32,43,32,99,68,111,99,77,111,118,
		0,112,2,73,36,47,0,48,28,0,95,1,176,29,
		0,12,0,112,1,73,36,49,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDIACALB_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,55,0,120,80,1,36,56,0,176,30,
		0,89,15,0,1,0,0,0,176,31,0,95,1,12,
		1,6,12,1,80,2,36,58,0,113,108,1,0,36,
		60,0,48,32,0,102,48,33,0,176,34,0,12,0,
		112,0,112,1,73,36,62,0,48,35,0,102,48,36,
		0,176,37,0,106,12,65,76,66,67,76,73,76,46,
		68,66,70,0,100,12,2,106,12,65,76,66,67,76,
		73,76,46,68,66,70,0,100,176,38,0,12,0,100,
		176,39,0,12,0,9,120,9,9,112,9,112,1,73,
		48,40,0,48,41,0,102,112,0,106,12,65,76,66,
		67,76,73,76,46,67,68,88,0,112,1,73,48,40,
		0,48,41,0,102,112,0,112,0,73,48,42,0,48,
		41,0,102,112,0,112,0,73,36,64,0,48,43,0,
		102,48,36,0,176,37,0,106,12,65,76,66,67,76,
		73,80,46,68,66,70,0,100,12,2,106,12,65,76,
		66,67,76,73,80,46,68,66,70,0,100,176,38,0,
		12,0,100,176,39,0,12,0,9,120,9,9,112,9,
		112,1,73,48,40,0,48,44,0,102,112,0,106,12,
		65,76,66,67,76,73,80,46,67,68,88,0,112,1,
		73,48,40,0,48,44,0,102,112,0,112,0,73,48,
		42,0,48,44,0,102,112,0,112,0,73,36,66,0,
		48,45,0,102,48,36,0,176,37,0,106,9,84,73,
		86,65,46,68,66,70,0,100,12,2,106,9,84,73,
		86,65,46,68,66,70,0,100,176,38,0,12,0,100,
		176,46,0,12,0,9,120,9,9,112,9,112,1,73,
		48,40,0,48,47,0,102,112,0,106,9,84,73,86,
		65,46,67,68,88,0,112,1,73,48,40,0,48,47,
		0,102,112,0,112,0,73,48,42,0,48,47,0,102,
		112,0,112,0,73,114,76,0,0,36,68,0,115,73,
		36,70,0,176,48,0,106,41,73,109,112,111,115,105,
		98,108,101,32,97,98,114,105,114,32,116,111,100,97,
		115,32,108,97,115,32,98,97,115,101,115,32,100,101,
		32,100,97,116,111,115,0,20,1,36,71,0,48,49,
		0,102,112,0,73,36,72,0,9,80,1,36,76,0,
		176,30,0,95,2,20,1,36,78,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDIACALB_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,84,0,176,50,0,48,33,0,102,112,0,12,1,
		31,30,48,51,0,48,33,0,102,112,0,112,0,28,
		17,36,85,0,48,52,0,48,33,0,102,112,0,112,
		0,73,36,87,0,176,50,0,48,41,0,102,112,0,
		12,1,31,30,48,51,0,48,41,0,102,112,0,112,
		0,28,17,36,88,0,48,52,0,48,41,0,102,112,
		0,112,0,73,36,90,0,176,50,0,48,44,0,102,
		112,0,12,1,31,30,48,51,0,48,44,0,102,112,
		0,112,0,28,17,36,91,0,48,52,0,48,44,0,
		102,112,0,112,0,73,36,93,0,176,50,0,48,47,
		0,102,112,0,12,1,31,30,48,51,0,48,47,0,
		102,112,0,112,0,28,17,36,94,0,48,52,0,48,
		47,0,102,112,0,112,0,73,36,97,0,48,32,0,
		102,100,112,1,73,36,98,0,48,35,0,102,100,112,
		1,73,36,99,0,48,43,0,102,100,112,1,73,36,
		100,0,48,45,0,102,100,112,1,73,36,102,0,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDIACALB_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,106,0,102,80,2,36,108,0,106,6,
		84,111,100,111,115,0,80,3,36,109,0,106,6,84,
		111,100,111,115,0,80,4,36,111,0,48,53,0,95,
		2,106,10,73,78,70,68,73,65,65,76,66,0,112,
		1,31,8,36,112,0,9,110,7,36,119,0,48,54,
		0,95,2,92,70,92,80,92,90,92,100,100,93,160,
		0,112,6,31,8,36,120,0,9,110,7,36,127,0,
		48,55,0,95,2,48,56,0,176,57,0,12,0,93,
		219,0,89,28,0,1,0,1,0,4,0,176,58,0,
		12,0,121,8,28,6,95,255,25,7,95,1,165,80,
		255,6,48,59,0,95,2,112,0,48,60,0,48,61,
		0,95,2,112,0,112,0,122,1,100,100,100,100,100,
		100,9,100,100,100,100,100,100,112,17,112,1,73,36,
		133,0,48,62,0,95,2,48,56,0,176,57,0,12,
		0,93,218,0,89,28,0,1,0,1,0,3,0,176,
		58,0,12,0,121,8,28,6,95,255,25,7,95,1,
		165,80,255,6,48,63,0,95,2,112,0,48,60,0,
		48,61,0,95,2,112,0,112,0,122,1,100,100,100,
		100,100,100,9,100,100,100,100,100,100,112,17,112,1,
		73,36,137,0,48,56,0,176,64,0,12,0,93,191,
		0,89,37,0,1,0,1,0,2,0,176,58,0,12,
		0,121,8,28,11,48,65,0,95,255,112,0,25,11,
		48,66,0,95,255,95,1,112,1,6,48,60,0,48,
		61,0,95,2,112,0,112,0,122,1,100,100,100,100,
		100,100,9,100,9,112,12,73,36,139,0,48,67,0,
		95,2,112,0,73,36,141,0,48,68,0,48,69,0,
		95,2,112,0,48,70,0,48,33,0,95,2,112,0,
		112,0,112,1,73,36,143,0,48,71,0,95,2,176,
		72,0,12,0,48,73,0,48,33,0,95,2,112,0,
		112,0,112,2,73,36,145,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDIACALB_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,36,152,0,102,80,1,36,154,0,9,80,
		2,36,155,0,4,0,0,80,3,36,156,0,106,1,
		0,80,4,36,158,0,48,74,0,48,75,0,95,1,
		112,0,112,0,73,36,159,0,48,76,0,48,77,0,
		95,1,112,0,112,0,73,36,160,0,48,78,0,48,
		24,0,95,1,112,0,112,0,73,36,166,0,48,79,
		0,95,1,90,29,106,13,70,101,99,104,97,32,32,
		32,32,32,58,32,0,176,80,0,176,81,0,12,0,
		12,1,72,6,89,58,0,0,0,1,0,1,0,106,
		13,80,101,114,105,111,100,111,32,32,32,58,32,0,
		176,80,0,48,82,0,95,255,112,0,12,1,72,106,
		4,32,62,32,0,72,176,80,0,48,83,0,95,255,
		112,0,12,1,72,6,89,77,0,0,0,1,0,1,
		0,106,13,67,108,105,101,110,116,101,32,32,32,58,
		32,0,48,84,0,95,255,112,0,28,12,106,6,84,
		111,100,111,115,0,25,34,176,85,0,48,86,0,95,
		255,112,0,12,1,106,4,32,62,32,0,72,176,85,
		0,48,87,0,95,255,112,0,12,1,72,72,6,89,
		46,0,0,0,1,0,1,0,106,13,69,115,116,97,
		100,111,32,32,32,32,58,32,0,48,63,0,95,255,
		112,0,48,88,0,48,89,0,95,255,112,0,112,0,
		1,72,6,89,46,0,0,0,1,0,1,0,106,13,
		69,110,116,114,101,103,97,100,111,32,58,32,0,48,
		59,0,95,255,112,0,48,88,0,48,90,0,95,255,
		112,0,112,0,1,72,6,4,5,0,112,1,73,36,
		168,0,48,91,0,48,33,0,95,1,112,0,106,8,
		100,70,101,99,65,108,98,0,112,1,73,36,171,0,
		48,88,0,48,89,0,95,1,112,0,112,0,122,8,
		28,28,36,172,0,96,4,0,106,15,110,70,97,99,
		116,117,114,97,100,111,32,60,32,51,0,135,25,82,
		36,173,0,48,88,0,48,89,0,95,1,112,0,112,
		0,92,2,8,28,29,36,174,0,96,4,0,106,16,
		110,70,97,99,116,117,114,97,100,111,32,61,61,32,
		51,0,135,25,35,36,175,0,48,88,0,48,89,0,
		95,1,112,0,112,0,92,3,8,28,15,36,176,0,
		96,4,0,106,4,46,116,46,0,135,36,180,0,48,
		88,0,48,90,0,95,1,112,0,112,0,122,8,28,
		32,36,181,0,96,4,0,106,19,32,46,97,110,100,
		46,32,33,108,69,110,116,114,101,103,97,100,111,0,
		135,25,91,36,182,0,48,88,0,48,90,0,95,1,
		112,0,112,0,92,2,8,28,31,36,183,0,96,4,
		0,106,18,32,46,97,110,100,46,32,108,69,110,116,
		114,101,103,97,100,111,0,135,25,42,36,184,0,48,
		88,0,48,90,0,95,1,112,0,112,0,92,3,8,
		28,22,36,185,0,96,4,0,106,11,32,46,97,110,
		100,46,32,46,116,46,0,135,36,188,0,48,88,0,
		48,90,0,95,1,112,0,112,0,92,2,69,28,104,
		36,189,0,96,4,0,106,26,32,46,97,110,100,46,
		32,100,70,101,99,65,108,98,32,62,61,32,67,116,
		111,100,40,32,34,0,176,80,0,48,82,0,95,1,
		112,0,12,1,72,106,29,34,32,41,32,46,97,110,
		100,46,32,100,70,101,99,65,108,98,32,60,61,32,
		67,116,111,100,40,32,34,0,72,176,80,0,48,83,
		0,95,1,112,0,12,1,72,106,4,34,32,41,0,
		72,135,25,102,36,191,0,96,4,0,106,26,32,46,
		97,110,100,46,32,100,70,101,99,69,110,118,32,62,
		61,32,67,116,111,100,40,32,34,0,176,80,0,48,
		82,0,95,1,112,0,12,1,72,106,29,34,32,41,
		32,46,97,110,100,46,32,100,70,101,99,69,110,118,
		32,60,61,32,67,116,111,100,40,32,34,0,72,176,
		80,0,48,83,0,95,1,112,0,12,1,72,106,4,
		34,32,41,0,72,135,36,194,0,48,84,0,95,1,
		112,0,31,86,36,195,0,96,4,0,106,20,32,46,
		97,110,100,46,32,99,67,111,100,67,108,105,32,62,
		61,32,34,0,176,25,0,48,86,0,95,1,112,0,
		12,1,72,106,21,34,32,46,97,110,100,46,32,99,
		67,111,100,67,108,105,32,60,61,32,34,0,72,176,
		25,0,48,87,0,95,1,112,0,12,1,72,106,2,
		34,0,72,135,36,198,0,176,50,0,48,92,0,48,
		93,0,95,1,112,0,112,0,12,1,31,32,36,199,
		0,96,4,0,106,8,32,46,97,110,100,46,32,0,
		48,92,0,48,93,0,95,1,112,0,112,0,72,135,
		36,202,0,48,21,0,48,33,0,95,1,112,0,176,
		94,0,12,0,176,95,0,48,96,0,48,33,0,95,
		1,112,0,112,0,12,1,48,97,0,48,33,0,95,
		1,112,0,112,0,95,4,100,100,100,100,100,100,100,
		120,112,12,73,36,204,0,48,68,0,48,69,0,95,
		1,112,0,48,98,0,48,33,0,95,1,112,0,112,
		0,112,1,73,36,210,0,48,99,0,48,33,0,95,
		1,112,0,112,0,73,36,212,0,48,100,0,95,1,
		112,0,32,208,2,48,101,0,48,33,0,95,1,112,
		0,112,0,32,193,2,36,215,0,176,102,0,48,103,
		0,48,33,0,95,1,112,0,112,0,48,104,0,95,
		1,112,0,12,2,29,128,2,48,65,0,95,1,112,
		0,28,33,176,105,0,48,23,0,48,33,0,95,1,
		112,0,112,0,48,73,0,48,27,0,95,1,112,0,
		112,0,12,2,25,3,120,29,84,2,36,221,0,48,
		106,0,48,24,0,95,1,112,0,112,0,73,36,223,
		0,48,107,0,48,24,0,95,1,112,0,48,23,0,
		48,33,0,95,1,112,0,112,0,112,1,73,36,224,
		0,48,108,0,48,24,0,95,1,112,0,48,109,0,
		48,33,0,95,1,112,0,112,0,112,1,73,36,225,
		0,48,110,0,48,24,0,95,1,112,0,48,111,0,
		48,33,0,95,1,112,0,112,0,112,1,73,36,226,
		0,48,112,0,48,24,0,95,1,112,0,48,113,0,
		48,33,0,95,1,112,0,112,0,100,8,28,12,176,
		114,0,106,1,0,12,1,25,14,48,113,0,48,33,
		0,95,1,112,0,112,0,112,1,73,36,228,0,176,
		115,0,48,103,0,48,33,0,95,1,112,0,112,0,
		176,116,0,48,117,0,48,33,0,95,1,112,0,112,
		0,12,1,72,48,118,0,48,33,0,95,1,112,0,
		112,0,72,48,73,0,48,33,0,95,1,112,0,112,
		0,48,73,0,48,41,0,95,1,112,0,112,0,48,
		73,0,48,47,0,95,1,112,0,112,0,48,73,0,
		48,119,0,95,1,112,0,112,0,48,120,0,95,1,
		112,0,12,6,80,3,36,230,0,48,121,0,48,24,
		0,95,1,112,0,95,3,122,1,95,3,92,5,1,
		49,95,3,92,6,1,49,112,1,73,36,231,0,48,
		122,0,48,24,0,95,1,112,0,95,3,92,2,1,
		112,1,73,36,232,0,48,123,0,48,24,0,95,1,
		112,0,95,3,92,3,1,112,1,73,36,233,0,48,
		124,0,48,24,0,95,1,112,0,95,3,92,4,1,
		112,1,73,36,234,0,48,125,0,48,24,0,95,1,
		112,0,95,3,92,5,1,112,1,73,36,235,0,48,
		126,0,48,24,0,95,1,112,0,95,3,92,6,1,
		112,1,73,36,236,0,48,127,0,48,24,0,95,1,
		112,0,48,103,0,48,33,0,95,1,112,0,112,0,
		176,116,0,48,117,0,48,33,0,95,1,112,0,112,
		0,12,1,72,48,118,0,48,33,0,95,1,112,0,
		112,0,72,112,1,73,36,237,0,48,128,0,48,24,
		0,95,1,112,0,176,129,0,48,103,0,48,33,0,
		95,1,112,0,112,0,176,116,0,48,117,0,48,33,
		0,95,1,112,0,112,0,12,1,72,48,118,0,48,
		33,0,95,1,112,0,112,0,72,48,73,0,48,44,
		0,95,1,112,0,112,0,48,73,0,48,119,0,95,
		1,112,0,112,0,12,3,112,1,73,36,239,0,48,
		130,0,95,1,48,23,0,48,33,0,95,1,112,0,
		112,0,48,33,0,95,1,112,0,9,112,3,73,36,
		241,0,48,131,0,48,24,0,95,1,112,0,112,0,
		73,36,245,0,48,132,0,48,69,0,95,1,112,0,
		112,0,73,36,247,0,48,133,0,48,33,0,95,1,
		112,0,112,0,73,26,41,253,36,251,0,48,134,0,
		48,33,0,95,1,112,0,176,94,0,12,0,176,95,
		0,48,96,0,48,33,0,95,1,112,0,112,0,12,
		1,112,2,73,36,253,0,48,76,0,48,75,0,95,
		1,112,0,112,0,73,36,255,0,48,70,0,48,24,
		0,95,1,112,0,112,0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,137,0,2,0,116,137,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

