/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TRenRPre.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TRENRPRE );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFPART );
HB_FUNC_STATIC( TRENRPRE_CREATE );
HB_FUNC_STATIC( TRENRPRE_OPENFILES );
HB_FUNC_STATIC( TRENRPRE_CLOSEFILES );
HB_FUNC_STATIC( TRENRPRE_LRESOURCE );
HB_FUNC_STATIC( TRENRPRE_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TDATACENTER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( TCHECKBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( AITMPRECLI );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NTOTNPRECLI );
HB_FUNC_EXTERN( NIMPLPRECLI );
HB_FUNC_EXTERN( NDTOATPPRECLI );
HB_FUNC_EXTERN( NRETPRECOSTO );
HB_FUNC_EXTERN( RETPROP );
HB_FUNC_EXTERN( RETVALPROP );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( NRENTABILIDAD );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TRENRPRE )
{ "TRENRPRE", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TRENRPRE )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFPART", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFPART )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRENRPRE_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRENRPRE_CREATE )}, NULL },
{ "TRENRPRE_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRENRPRE_OPENFILES )}, NULL },
{ "TRENRPRE_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRENRPRE_CLOSEFILES )}, NULL },
{ "TRENRPRE_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRENRPRE_LRESOURCE )}, NULL },
{ "TRENRPRE_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRENRPRE_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OPRECLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPRECLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDATACENTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDATACENTER )}, NULL },
{ "_OPRECLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPRECLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RENTCREATEFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDEFARTINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFRESINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LCOSACT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LCOSACT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "AESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LDESGLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LDESGLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMPRECLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMPRECLI )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BPREGENERATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BPOSTGENERATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QUIGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "LALLART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CARTORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERPRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMPRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFPRE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTNPRECLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTNPRECLI )}, NULL },
{ "LEXCIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLPRECLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLPRECLI )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDTOATPPRECLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NDTOATPPRECLI )}, NULL },
{ "NCOSDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRETPRECOSTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( NRETPRECOSTO )}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APPEND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDETALLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODPR1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODPR1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMPR1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RETPROP", {HB_FS_PUBLIC}, {HB_FUNCNAME( RETPROP )}, NULL },
{ "_CCODPR2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODPR2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMPR2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CVALPR1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CVALPR1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMVL1", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RETVALPROP", {HB_FS_PUBLIC}, {HB_FUNCNAME( RETVALPROP )}, NULL },
{ "_CVALPR2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CVALPR2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMVL2", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CLOTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCLIENTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTCAJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCANENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTUNI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTPES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTUNI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "_NTOTIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPREKGR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTPES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTVOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPREVOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTVOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOTCOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NMARGEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDTOATP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NRENTAB", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRENTABILIDAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( NRENTABILIDAD )}, NULL },
{ "_NPREMED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCOSMED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNUMDOC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TRENRPRE, ".\\.\\Prg\\TRenRPre.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TRENRPRE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TRENRPRE )
   #include "hbiniseg.h"
#endif

HB_FUNC( TRENRPRE )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,164,0,36,8,0,103,2,0,100,8,
		29,106,2,176,1,0,104,2,0,12,1,29,95,2,
		166,33,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,84,82,101,110,82,80,114,101,0,108,4,
		4,1,0,108,0,112,3,80,2,36,10,0,48,5,
		0,95,2,106,6,76,79,71,73,67,0,120,95,1,
		121,72,121,72,121,72,106,10,108,68,101,115,103,108,
		111,115,101,0,4,1,0,9,112,5,73,36,11,0,
		48,5,0,95,2,106,6,76,79,71,73,67,0,9,
		95,1,121,72,121,72,121,72,106,8,108,69,120,99,
		77,111,118,0,4,1,0,9,112,5,73,36,12,0,
		48,5,0,95,2,106,6,76,79,71,73,67,0,9,
		95,1,121,72,121,72,121,72,106,8,108,67,111,115,
		65,99,116,0,4,1,0,9,112,5,73,36,13,0,
		48,5,0,95,2,106,7,79,66,74,69,67,84,0,
		100,95,1,121,72,121,72,121,72,106,9,111,80,114,
		101,67,108,105,84,0,4,1,0,9,112,5,73,36,
		14,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,9,111,
		80,114,101,67,108,105,76,0,4,1,0,9,112,5,
		73,36,15,0,48,5,0,95,2,106,7,79,66,74,
		69,67,84,0,100,95,1,121,72,121,72,121,72,106,
		8,111,69,115,116,97,100,111,0,4,1,0,9,112,
		5,73,36,17,0,48,5,0,95,2,106,6,65,82,
		82,65,89,0,106,10,80,101,110,100,105,101,110,116,
		101,0,106,9,65,99,101,112,116,97,100,111,0,106,
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
		106,10,108,82,101,115,111,117,114,99,101,0,108,10,
		95,1,121,72,121,72,121,72,112,3,73,36,27,0,
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

HB_FUNC_STATIC( TRENRPRE_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,36,0,120,80,1,36,37,0,176,17,
		0,89,15,0,1,0,0,0,176,18,0,95,1,12,
		1,6,12,1,80,2,36,39,0,113,143,0,0,36,
		43,0,48,19,0,102,48,20,0,176,21,0,12,0,
		112,0,112,1,73,36,45,0,48,22,0,102,48,23,
		0,176,24,0,106,12,80,82,69,67,76,73,76,46,
		68,66,70,0,100,12,2,106,12,80,82,69,67,76,
		73,76,46,68,66,70,0,100,176,25,0,12,0,100,
		176,26,0,12,0,9,120,9,9,112,9,112,1,73,
		48,27,0,48,28,0,102,112,0,106,12,80,82,69,
		67,76,73,76,46,67,68,88,0,112,1,73,48,27,
		0,48,28,0,102,112,0,112,0,73,48,29,0,48,
		28,0,102,112,0,112,0,73,114,76,0,0,36,47,
		0,115,73,36,49,0,176,30,0,106,41,73,109,112,
		111,115,105,98,108,101,32,97,98,114,105,114,32,116,
		111,100,97,115,32,108,97,115,32,98,97,115,101,115,
		32,100,101,32,100,97,116,111,115,0,20,1,36,50,
		0,48,31,0,102,112,0,73,36,51,0,9,80,1,
		36,55,0,176,17,0,95,2,20,1,36,57,0,95,
		1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRENRPRE_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,64,0,176,32,0,48,20,0,102,112,0,12,1,
		31,30,48,33,0,48,20,0,102,112,0,112,0,28,
		17,36,65,0,48,34,0,48,20,0,102,112,0,112,
		0,73,36,67,0,176,32,0,48,28,0,102,112,0,
		12,1,31,30,48,33,0,48,28,0,102,112,0,112,
		0,28,17,36,68,0,48,34,0,48,28,0,102,112,
		0,112,0,73,36,72,0,48,19,0,102,100,112,1,
		73,36,73,0,48,22,0,102,100,112,1,73,36,75,
		0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRENRPRE_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,79,0,102,80,1,36,81,0,48,35,
		0,95,1,112,0,73,36,83,0,48,36,0,95,1,
		106,8,67,67,79,68,65,82,84,0,106,56,67,67,
		79,68,65,82,84,32,43,32,67,67,79,68,80,82,
		49,32,43,32,67,67,79,68,80,82,50,32,43,32,
		67,86,65,76,80,82,49,32,43,32,67,86,65,76,
		80,82,50,32,43,32,67,76,79,84,69,0,112,2,
		73,36,85,0,48,37,0,95,1,89,22,0,0,0,
		1,0,1,0,48,38,0,48,39,0,95,255,112,0,
		112,0,6,89,65,0,0,0,1,0,1,0,106,12,
		65,114,116,237,99,117,108,111,32,58,32,0,176,40,
		0,48,38,0,48,39,0,95,255,112,0,112,0,12,
		1,72,106,2,45,0,72,176,40,0,48,41,0,48,
		39,0,95,255,112,0,112,0,12,1,72,6,90,23,
		106,18,84,111,116,97,108,32,97,114,116,237,99,117,
		108,111,46,46,46,0,6,112,3,73,36,87,0,95,
		1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRENRPRE_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,91,0,102,80,2,36,93,0,106,6,
		84,111,100,111,115,0,80,3,36,95,0,48,42,0,
		95,2,106,10,73,78,70,82,69,78,65,82,84,0,
		112,1,31,8,36,96,0,9,110,7,36,103,0,48,
		43,0,95,2,92,70,92,80,92,90,92,100,93,32,
		3,112,5,31,8,36,104,0,9,110,7,36,107,0,
		48,44,0,95,2,93,210,0,112,1,73,36,108,0,
		48,45,0,95,2,93,211,0,112,1,73,36,109,0,
		48,46,0,95,2,112,0,73,36,113,0,48,47,0,
		176,48,0,12,0,93,205,0,89,37,0,1,0,1,
		0,2,0,176,49,0,12,0,121,8,28,11,48,50,
		0,95,255,112,0,25,11,48,51,0,95,255,95,1,
		112,1,6,48,52,0,48,53,0,95,2,112,0,112,
		0,122,1,100,100,100,100,100,100,9,100,9,112,12,
		73,36,119,0,48,54,0,95,2,48,47,0,176,55,
		0,12,0,93,218,0,89,28,0,1,0,1,0,3,
		0,176,49,0,12,0,121,8,28,6,95,255,25,7,
		95,1,165,80,255,6,48,56,0,95,2,112,0,48,
		52,0,48,53,0,95,2,112,0,112,0,122,1,100,
		100,100,100,100,100,9,100,100,100,100,100,100,112,17,
		112,1,73,36,123,0,48,47,0,176,48,0,12,0,
		93,88,2,89,37,0,1,0,1,0,2,0,176,49,
		0,12,0,121,8,28,11,48,57,0,95,255,112,0,
		25,11,48,58,0,95,255,95,1,112,1,6,48,52,
		0,48,53,0,95,2,112,0,112,0,122,1,100,100,
		100,100,100,100,9,100,9,112,12,73,36,125,0,48,
		59,0,95,2,176,60,0,12,0,48,61,0,48,20,
		0,95,2,112,0,112,0,112,2,73,36,127,0,48,
		62,0,95,2,89,24,0,0,0,1,0,2,0,48,
		63,0,95,255,48,57,0,95,255,112,0,112,1,6,
		112,1,73,36,128,0,48,64,0,95,2,89,24,0,
		0,0,1,0,2,0,48,65,0,95,255,48,57,0,
		95,255,112,0,112,1,6,112,1,73,36,130,0,120,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TRENRPRE_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,7,0,36,137,0,102,80,1,36,140,0,121,80,
		3,36,141,0,121,80,4,36,142,0,106,1,0,80,
		5,36,143,0,106,1,0,80,6,36,144,0,121,80,
		7,36,146,0,48,66,0,48,67,0,95,1,112,0,
		112,0,73,36,147,0,48,68,0,48,69,0,95,1,
		112,0,112,0,73,36,148,0,48,70,0,48,39,0,
		95,1,112,0,112,0,73,36,153,0,48,71,0,95,
		1,90,29,106,13,70,101,99,104,97,32,32,32,32,
		32,58,32,0,176,72,0,176,73,0,12,0,12,1,
		72,6,89,58,0,0,0,1,0,1,0,106,13,80,
		101,114,105,111,100,111,32,32,32,58,32,0,176,72,
		0,48,74,0,95,255,112,0,12,1,72,106,4,32,
		62,32,0,72,176,72,0,48,75,0,95,255,112,0,
		12,1,72,6,89,77,0,0,0,1,0,1,0,106,
		13,65,114,116,237,99,117,108,111,115,32,58,32,0,
		48,76,0,95,255,112,0,28,12,106,6,84,111,100,
		111,115,0,25,34,176,77,0,48,78,0,95,255,112,
		0,12,1,106,4,32,62,32,0,72,176,77,0,48,
		79,0,95,255,112,0,12,1,72,72,6,89,46,0,
		0,0,1,0,1,0,106,13,69,115,116,97,100,111,
		32,32,32,32,58,32,0,48,56,0,95,255,112,0,
		48,80,0,48,81,0,95,255,112,0,112,0,1,72,
		6,4,4,0,112,1,73,36,155,0,48,82,0,48,
		20,0,95,1,112,0,106,8,100,70,101,99,80,114,
		101,0,112,1,73,36,156,0,48,82,0,48,28,0,
		95,1,112,0,106,8,110,78,117,109,80,114,101,0,
		112,1,73,36,159,0,48,80,0,48,81,0,95,1,
		112,0,112,0,122,8,28,111,36,160,0,106,34,33,
		108,69,115,116,97,100,111,32,46,97,110,100,46,32,
		100,70,101,99,80,114,101,32,62,61,32,67,116,111,
		100,40,32,34,0,176,72,0,48,74,0,95,1,112,
		0,12,1,72,106,29,34,32,41,32,46,97,110,100,
		46,32,100,70,101,99,80,114,101,32,60,61,32,67,
		116,111,100,40,32,34,0,72,176,72,0,48,75,0,
		95,1,112,0,12,1,72,106,4,34,32,41,0,72,
		80,5,26,241,0,36,161,0,48,80,0,48,81,0,
		95,1,112,0,112,0,92,2,8,28,109,36,162,0,
		106,33,108,69,115,116,97,100,111,32,46,97,110,100,
		46,32,100,70,101,99,80,114,101,32,62,61,32,67,
		116,111,100,40,32,34,0,176,72,0,48,74,0,95,
		1,112,0,12,1,72,106,29,34,32,41,32,46,97,
		110,100,46,32,100,70,101,99,80,114,101,32,60,61,
		32,67,116,111,100,40,32,34,0,72,176,72,0,48,
		75,0,95,1,112,0,12,1,72,106,4,34,32,41,
		0,72,80,5,25,113,36,163,0,48,80,0,48,81,
		0,95,1,112,0,112,0,92,3,8,28,93,36,164,
		0,106,19,100,70,101,99,80,114,101,32,62,61,32,
		67,116,111,100,40,32,34,0,176,72,0,48,74,0,
		95,1,112,0,12,1,72,106,29,34,32,41,32,46,
		97,110,100,46,32,100,70,101,99,80,114,101,32,60,
		61,32,67,116,111,100,40,32,34,0,72,176,72,0,
		48,75,0,95,1,112,0,12,1,72,106,4,34,32,
		41,0,72,80,5,36,167,0,176,32,0,48,83,0,
		48,84,0,95,1,112,0,112,0,12,1,31,32,36,
		168,0,96,5,0,106,8,32,46,97,110,100,46,32,
		0,48,83,0,48,84,0,95,1,112,0,112,0,72,
		135,36,171,0,48,36,0,48,20,0,95,1,112,0,
		176,85,0,12,0,176,86,0,48,87,0,48,20,0,
		95,1,112,0,112,0,12,1,48,88,0,48,20,0,
		95,1,112,0,112,0,95,5,100,100,100,100,100,100,
		100,120,112,12,73,36,173,0,48,89,0,48,90,0,
		95,1,112,0,48,91,0,48,20,0,95,1,112,0,
		112,0,112,1,73,36,179,0,106,40,33,108,84,111,
		116,76,105,110,32,46,97,110,100,46,32,33,108,67,
		111,110,116,114,111,108,32,46,97,110,100,46,32,33,
		108,75,105,116,67,104,108,0,80,6,36,181,0,48,
		76,0,95,1,112,0,31,70,36,182,0,96,6,0,
		106,17,32,46,97,110,100,46,32,99,82,101,102,32,
		62,61,32,34,0,48,78,0,95,1,112,0,72,106,
		18,34,32,46,97,110,100,46,32,99,82,101,102,32,
		60,61,32,34,0,72,48,79,0,95,1,112,0,72,
		106,2,34,0,72,135,36,185,0,48,36,0,48,28,
		0,95,1,112,0,176,85,0,12,0,176,86,0,48,
		87,0,48,28,0,95,1,112,0,112,0,12,1,48,
		88,0,48,28,0,95,1,112,0,112,0,176,92,0,
		95,6,12,1,100,100,100,100,100,100,100,120,112,12,
		73,36,187,0,48,93,0,48,20,0,95,1,112,0,
		112,0,73,36,189,0,48,94,0,95,1,112,0,32,
		12,6,48,95,0,48,20,0,95,1,112,0,112,0,
		32,253,5,36,191,0,176,96,0,48,97,0,48,20,
		0,95,1,112,0,112,0,48,98,0,95,1,112,0,
		12,2,29,188,5,36,193,0,48,99,0,48,28,0,
		95,1,112,0,48,97,0,48,20,0,95,1,112,0,
		112,0,176,100,0,48,101,0,48,20,0,95,1,112,
		0,112,0,12,1,72,48,102,0,48,20,0,95,1,
		112,0,112,0,72,112,1,29,127,5,36,195,0,48,
		97,0,48,28,0,95,1,112,0,112,0,176,100,0,
		48,101,0,48,28,0,95,1,112,0,112,0,12,1,
		72,48,102,0,48,28,0,95,1,112,0,112,0,72,
		48,97,0,48,20,0,95,1,112,0,112,0,176,100,
		0,48,101,0,48,20,0,95,1,112,0,112,0,12,
		1,72,48,102,0,48,20,0,95,1,112,0,112,0,
		72,8,29,34,5,36,198,0,48,103,0,95,1,112,
		0,28,24,176,104,0,48,61,0,48,28,0,95,1,
		112,0,112,0,12,1,121,8,32,237,4,48,105,0,
		95,1,112,0,28,50,176,106,0,48,61,0,48,20,
		0,95,1,112,0,112,0,48,61,0,48,28,0,95,
		1,112,0,112,0,48,107,0,95,1,112,0,48,108,
		0,95,1,112,0,12,4,121,8,32,180,4,36,204,
		0,176,104,0,48,61,0,48,28,0,95,1,112,0,
		112,0,12,1,80,2,36,205,0,176,106,0,48,61,
		0,48,20,0,95,1,112,0,112,0,48,61,0,48,
		28,0,95,1,112,0,112,0,48,107,0,95,1,112,
		0,48,108,0,95,1,112,0,12,4,80,3,36,206,
		0,176,109,0,48,61,0,48,20,0,95,1,112,0,
		112,0,48,61,0,48,28,0,95,1,112,0,112,0,
		48,107,0,95,1,112,0,48,108,0,95,1,112,0,
		12,4,80,7,36,208,0,48,50,0,95,1,112,0,
		31,18,48,110,0,48,28,0,95,1,112,0,112,0,
		121,8,28,41,36,209,0,176,111,0,48,61,0,48,
		112,0,95,1,112,0,112,0,48,113,0,48,28,0,
		95,1,112,0,112,0,12,2,95,2,65,80,4,25,
		22,36,211,0,48,110,0,48,28,0,95,1,112,0,
		112,0,95,2,65,80,4,36,214,0,48,114,0,48,
		39,0,95,1,112,0,112,0,73,36,216,0,48,115,
		0,48,39,0,95,1,112,0,48,113,0,48,28,0,
		95,1,112,0,112,0,112,1,73,36,217,0,48,116,
		0,48,39,0,95,1,112,0,48,117,0,48,28,0,
		95,1,112,0,112,0,112,1,73,36,218,0,48,118,
		0,48,39,0,95,1,112,0,48,119,0,48,28,0,
		95,1,112,0,112,0,112,1,73,36,219,0,48,120,
		0,48,39,0,95,1,112,0,176,121,0,48,119,0,
		48,28,0,95,1,112,0,112,0,12,1,112,1,73,
		36,220,0,48,122,0,48,39,0,95,1,112,0,48,
		123,0,48,28,0,95,1,112,0,112,0,112,1,73,
		36,221,0,48,124,0,48,39,0,95,1,112,0,176,
		121,0,48,123,0,48,28,0,95,1,112,0,112,0,
		12,1,112,1,73,36,222,0,48,125,0,48,39,0,
		95,1,112,0,48,126,0,48,28,0,95,1,112,0,
		112,0,112,1,73,36,223,0,48,127,0,48,39,0,
		95,1,112,0,176,128,0,48,119,0,48,28,0,95,
		1,112,0,112,0,48,126,0,48,28,0,95,1,112,
		0,112,0,72,12,1,112,1,73,36,224,0,48,129,
		0,48,39,0,95,1,112,0,48,130,0,48,28,0,
		95,1,112,0,112,0,112,1,73,36,225,0,48,131,
		0,48,39,0,95,1,112,0,176,128,0,48,123,0,
		48,28,0,95,1,112,0,112,0,48,130,0,48,28,
		0,95,1,112,0,112,0,72,12,1,112,1,73,36,
		226,0,48,132,0,48,39,0,95,1,112,0,48,133,
		0,48,28,0,95,1,112,0,112,0,112,1,73,36,
		228,0,48,134,0,95,1,48,135,0,48,20,0,95,
		1,112,0,112,0,48,20,0,95,1,112,0,9,112,
		3,73,36,230,0,48,136,0,48,39,0,95,1,112,
		0,48,137,0,48,28,0,95,1,112,0,112,0,112,
		1,73,36,231,0,48,138,0,48,39,0,95,1,112,
		0,95,2,112,1,73,36,232,0,48,139,0,48,39,
		0,95,1,112,0,48,140,0,48,39,0,95,1,112,
		0,112,0,176,141,0,48,113,0,48,28,0,95,1,
		112,0,112,0,48,112,0,95,1,112,0,106,8,110,
		80,101,115,111,75,103,0,12,3,65,112,1,73,36,
		233,0,48,142,0,48,39,0,95,1,112,0,95,3,
		112,1,73,36,234,0,48,143,0,48,39,0,95,1,
		112,0,48,144,0,48,39,0,95,1,112,0,112,0,
		121,69,28,29,48,145,0,48,39,0,95,1,112,0,
		112,0,48,144,0,48,39,0,95,1,112,0,112,0,
		18,25,3,121,112,1,73,36,235,0,48,146,0,48,
		39,0,95,1,112,0,48,140,0,48,39,0,95,1,
		112,0,112,0,176,141,0,48,113,0,48,28,0,95,
		1,112,0,112,0,48,112,0,95,1,112,0,106,9,
		110,86,111,108,117,109,101,110,0,12,3,65,112,1,
		73,36,236,0,48,147,0,48,39,0,95,1,112,0,
		48,148,0,48,39,0,95,1,112,0,112,0,121,69,
		28,29,48,145,0,48,39,0,95,1,112,0,112,0,
		48,148,0,48,39,0,95,1,112,0,112,0,18,25,
		3,121,112,1,73,36,237,0,48,149,0,48,39,0,
		95,1,112,0,95,4,112,1,73,36,238,0,48,150,
		0,48,39,0,95,1,112,0,95,3,95,4,49,112,
		1,73,36,239,0,48,151,0,48,39,0,95,1,112,
		0,95,7,112,1,73,36,241,0,95,2,121,69,28,
		79,95,4,121,69,28,73,36,242,0,48,152,0,48,
		39,0,95,1,112,0,176,153,0,95,3,95,7,95,
		4,12,3,112,1,73,36,243,0,48,154,0,48,39,
		0,95,1,112,0,95,3,95,2,18,112,1,73,36,
		244,0,48,155,0,48,39,0,95,1,112,0,95,4,
		95,2,18,112,1,73,25,53,36,246,0,48,152,0,
		48,39,0,95,1,112,0,121,112,1,73,36,247,0,
		48,154,0,48,39,0,95,1,112,0,121,112,1,73,
		36,248,0,48,155,0,48,39,0,95,1,112,0,121,
		112,1,73,36,251,0,48,156,0,48,39,0,95,1,
		112,0,48,97,0,48,28,0,95,1,112,0,112,0,
		106,2,47,0,72,176,77,0,176,100,0,48,101,0,
		48,28,0,95,1,112,0,112,0,12,1,12,1,72,
		106,2,47,0,72,48,102,0,48,28,0,95,1,112,
		0,112,0,72,112,1,73,36,253,0,48,157,0,48,
		39,0,95,1,112,0,112,0,73,36,1,1,48,158,
		0,48,28,0,95,1,112,0,112,0,73,26,135,250,
		36,9,1,48,159,0,48,90,0,95,1,112,0,112,
		0,73,36,11,1,48,158,0,48,20,0,95,1,112,
		0,112,0,73,26,237,249,36,15,1,48,160,0,48,
		20,0,95,1,112,0,176,85,0,12,0,176,86,0,
		48,87,0,48,20,0,95,1,112,0,112,0,12,1,
		112,2,73,36,17,1,48,160,0,48,28,0,95,1,
		112,0,176,85,0,12,0,176,86,0,48,87,0,48,
		28,0,95,1,112,0,112,0,12,1,112,2,73,36,
		19,1,48,159,0,48,90,0,95,1,112,0,48,161,
		0,48,20,0,95,1,112,0,112,0,112,1,73,36,
		21,1,48,68,0,48,67,0,95,1,112,0,112,0,
		73,36,24,1,48,161,0,48,39,0,95,1,112,0,
		112,0,121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,164,0,2,0,116,164,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

