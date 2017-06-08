/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TInfCPedPob.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TINFCPEDPOB );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TINFCLI );
HB_FUNC_STATIC( TINFCPEDPOB_CREATE );
HB_FUNC_STATIC( TINFCPEDPOB_OPENFILES );
HB_FUNC_STATIC( TINFCPEDPOB_CLOSEFILES );
HB_FUNC_STATIC( TINFCPEDPOB_LRESOURCE );
HB_FUNC_STATIC( TINFCPEDPOB_LGENERATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( MASUND );
HB_FUNC_EXTERN( CNOMBRECAJAS );
HB_FUNC_EXTERN( CNOMBREUNIDADES );
HB_FUNC_EXTERN( CIMP );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( ORETFLD );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( TDATACENTER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( CPATART );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TCHECKBOX );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( AITMPEDCLI );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( CALLTRIMER );
HB_FUNC_EXTERN( LCHKSER );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( NTOTNPEDCLI );
HB_FUNC_EXTERN( NIMPLPEDCLI );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TINFCPEDPOB )
{ "TINFCPEDPOB", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCPEDPOB )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TINFCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINFCLI )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINFCPEDPOB_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCPEDPOB_CREATE )}, NULL },
{ "TINFCPEDPOB_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCPEDPOB_OPENFILES )}, NULL },
{ "TINFCPEDPOB_CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCPEDPOB_CLOSEFILES )}, NULL },
{ "TINFCPEDPOB_LRESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCPEDPOB_LRESOURCE )}, NULL },
{ "TINFCPEDPOB_LGENERATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINFCPEDPOB_LGENERATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FLDPROPIEDADES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MASUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MASUND )}, NULL },
{ "CNOMBRECAJAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( CNOMBRECAJAS )}, NULL },
{ "CNOMBREUNIDADES", {HB_FS_PUBLIC}, {HB_FUNCNAME( CNOMBREUNIDADES )}, NULL },
{ "CPICIMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPICOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CIMP )}, NULL },
{ "ADDTMPINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCDPCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CCODCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORETFLD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORETFLD )}, NULL },
{ "ODBFCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "_OPEDCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPEDCLIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDATACENTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDATACENTER )}, NULL },
{ "_OPEDCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "ADDBAG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPEDCLIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATART", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATART )}, NULL },
{ "ODBFART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STDRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFCLIINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LALLCP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LALLCP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIALOGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "CCPORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCPORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCPDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCPDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINCESC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LINCESC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFEXCINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODEFRESINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "AESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AITMPEDCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( AITMPEDCLI )}, NULL },
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
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "LALLCLI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCLIORG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCLIDES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OESTADO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEXPRESIONFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OFILTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMTRINF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDKEYCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALLTRIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLTRIMER )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBREAK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHKSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LCHKSER )}, NULL },
{ "CSERPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NNUMPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSUFPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LTOTLIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEXCMOV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTOTNPEDCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NTOTNPEDCLI )}, NULL },
{ "LEXCCERO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIMPLPEDCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIMPLPEDCLI )}, NULL },
{ "NDECOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDEROUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NVALDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDPED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDTOESP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDTOESP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDPP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDPP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDTOUNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDTOUNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NDTODOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NDTODOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPERCTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_TELEFONO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FAX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_MOVIL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_MOBSERV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTOINC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDXDELETE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TINFCPEDPOB, ".\\.\\Prg\\TInfCPedPob.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TINFCPEDPOB
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TINFCPEDPOB )
   #include "hbiniseg.h"
#endif

HB_FUNC( TINFCPEDPOB )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,147,0,36,8,0,103,2,0,100,8,
		29,99,3,176,1,0,104,2,0,12,1,29,88,3,
		166,26,3,0,122,80,1,48,2,0,176,3,0,12,
		0,106,12,84,73,110,102,67,80,101,100,80,111,98,
		0,108,4,4,1,0,108,0,112,3,80,2,36,10,
		0,48,5,0,95,2,106,6,76,79,71,73,67,0,
		9,95,1,121,72,121,72,121,72,106,8,108,69,120,
		99,77,111,118,0,4,1,0,9,112,5,73,36,11,
		0,48,5,0,95,2,106,6,76,79,71,73,67,0,
		9,95,1,121,72,121,72,121,72,106,9,108,82,101,
		115,117,109,101,110,0,4,1,0,9,112,5,73,36,
		12,0,48,5,0,95,2,106,6,76,79,71,73,67,
		0,9,95,1,121,72,121,72,121,72,106,9,108,69,
		120,99,67,101,114,111,0,4,1,0,9,112,5,73,
		36,13,0,48,5,0,95,2,106,6,76,79,71,73,
		67,0,120,95,1,121,72,121,72,121,72,106,7,108,
		65,108,108,67,80,0,4,1,0,9,112,5,73,36,
		14,0,48,5,0,95,2,106,6,76,79,71,73,67,
		0,9,95,1,121,72,121,72,121,72,106,8,108,73,
		110,99,69,115,99,0,4,1,0,9,112,5,73,36,
		15,0,48,5,0,95,2,106,7,79,66,74,69,67,
		84,0,100,95,1,121,72,121,72,121,72,106,9,111,
		80,101,100,67,108,105,84,0,4,1,0,9,112,5,
		73,36,16,0,48,5,0,95,2,106,7,79,66,74,
		69,67,84,0,100,95,1,121,72,121,72,121,72,106,
		9,111,80,101,100,67,108,105,76,0,4,1,0,9,
		112,5,73,36,17,0,48,5,0,95,2,106,7,79,
		66,74,69,67,84,0,100,95,1,121,72,121,72,121,
		72,106,8,111,68,98,102,65,114,116,0,4,1,0,
		9,112,5,73,36,18,0,48,5,0,95,2,106,10,
		67,72,65,82,65,67,84,69,82,0,106,6,48,48,
		48,48,48,0,95,1,121,72,121,72,121,72,106,7,
		99,67,80,79,114,103,0,4,1,0,9,112,5,73,
		36,19,0,48,5,0,95,2,106,10,67,72,65,82,
		65,67,84,69,82,0,106,6,57,57,57,57,57,0,
		95,1,121,72,121,72,121,72,106,7,99,67,80,68,
		101,115,0,4,1,0,9,112,5,73,36,20,0,48,
		5,0,95,2,106,6,65,82,82,65,89,0,106,10,
		80,101,110,100,105,101,110,116,101,0,106,13,80,97,
		114,99,105,108,97,109,101,110,116,101,0,106,10,69,
		110,116,114,101,103,97,100,111,0,106,6,84,111,100,
		111,115,0,4,4,0,95,1,121,72,121,72,121,72,
		106,8,97,69,115,116,97,100,111,0,4,1,0,9,
		112,5,73,36,21,0,48,5,0,95,2,106,7,79,
		66,74,69,67,84,0,100,95,1,121,72,121,72,121,
		72,106,8,111,69,115,116,97,100,111,0,4,1,0,
		9,112,5,73,36,23,0,48,6,0,95,2,106,7,
		67,114,101,97,116,101,0,108,7,95,1,121,72,121,
		72,121,72,112,3,73,36,25,0,48,6,0,95,2,
		106,10,79,112,101,110,70,105,108,101,115,0,108,8,
		95,1,121,72,121,72,121,72,112,3,73,36,27,0,
		48,6,0,95,2,106,11,67,108,111,115,101,70,105,
		108,101,115,0,108,9,95,1,121,72,121,72,121,72,
		112,3,73,36,29,0,48,6,0,95,2,106,10,108,
		82,101,115,111,117,114,99,101,0,108,10,95,1,121,
		72,121,72,121,72,112,3,73,36,31,0,48,6,0,
		95,2,106,10,108,71,101,110,101,114,97,116,101,0,
		108,11,95,1,121,72,121,72,121,72,112,3,73,36,
		33,0,48,12,0,95,2,112,0,73,167,14,0,0,
		176,13,0,104,2,0,95,2,20,2,168,48,14,0,
		95,2,112,0,80,3,176,15,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		16,0,95,3,164,146,1,0,73,95,3,110,7,48,
		14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCPEDPOB_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,37,0,102,80,1,36,39,0,48,17,
		0,95,1,106,8,99,84,105,112,68,111,99,0,106,
		2,67,0,92,20,121,90,8,106,3,64,33,0,6,
		106,5,84,105,112,111,0,9,106,18,84,105,112,111,
		32,100,101,32,100,111,99,117,109,101,110,116,111,0,
		92,10,9,112,10,73,36,40,0,48,17,0,95,1,
		106,8,99,68,111,99,77,111,118,0,106,2,67,0,
		92,14,121,90,8,106,3,64,33,0,6,106,5,68,
		111,99,46,0,120,106,10,68,111,99,117,109,101,110,
		116,111,0,92,12,9,112,10,73,36,41,0,48,17,
		0,95,1,106,8,100,70,101,99,77,111,118,0,106,
		2,68,0,92,8,121,90,8,106,3,64,33,0,6,
		106,6,70,101,99,104,97,0,120,106,6,70,101,99,
		104,97,0,92,10,9,112,10,73,36,42,0,48,17,
		0,95,1,106,8,99,67,111,100,65,114,116,0,106,
		2,67,0,92,18,121,90,8,106,3,64,33,0,6,
		106,5,65,114,116,46,0,120,106,16,67,243,100,105,
		103,111,32,97,114,116,237,99,117,108,111,0,92,14,
		9,112,10,73,36,43,0,48,17,0,95,1,106,8,
		99,78,111,109,65,114,116,0,106,2,67,0,92,100,
		121,90,8,106,3,64,33,0,6,106,12,68,101,115,
		99,114,105,112,99,105,243,110,0,120,106,12,68,101,
		115,99,114,105,112,99,105,243,110,0,92,35,9,112,
		10,73,36,44,0,48,18,0,95,1,112,0,73,36,
		45,0,48,17,0,95,1,106,6,99,76,111,116,101,
		0,106,2,67,0,92,14,121,100,106,5,76,111,116,
		101,0,9,106,15,78,250,109,101,114,111,32,100,101,
		32,108,111,116,101,0,92,10,9,112,10,73,36,46,
		0,48,17,0,95,1,106,8,99,67,111,100,67,108,
		105,0,106,2,67,0,92,12,121,90,8,106,3,64,
		33,0,6,106,10,67,243,100,46,32,99,108,105,46,
		0,9,106,13,67,111,100,46,32,67,108,105,101,110,
		116,101,0,92,8,9,112,10,73,36,47,0,48,17,
		0,95,1,106,8,99,78,111,109,67,108,105,0,106,
		2,67,0,92,50,121,90,8,106,3,64,33,0,6,
		106,8,67,108,105,101,110,116,101,0,9,106,13,78,
		111,109,46,32,67,108,105,101,110,116,101,0,92,30,
		9,112,10,73,36,48,0,48,17,0,95,1,106,8,
		99,78,105,102,67,108,105,0,106,2,67,0,92,15,
		121,90,8,106,3,64,33,0,6,106,4,78,105,102,
		0,9,106,4,78,105,102,0,92,12,9,112,10,73,
		36,49,0,48,17,0,95,1,106,8,99,68,111,109,
		67,108,105,0,106,2,67,0,92,35,121,90,8,106,
		3,64,33,0,6,106,10,68,111,109,105,99,105,108,
		105,111,0,9,106,10,68,111,109,105,99,105,108,105,
		111,0,92,20,9,112,10,73,36,50,0,48,17,0,
		95,1,106,8,99,80,111,98,67,108,105,0,106,2,
		67,0,92,25,121,90,8,106,3,64,33,0,6,106,
		10,80,111,98,108,97,99,105,243,110,0,9,106,10,
		80,111,98,108,97,99,105,243,110,0,92,25,9,112,
		10,73,36,51,0,48,17,0,95,1,106,8,99,80,
		114,111,67,108,105,0,106,2,67,0,92,20,121,90,
		8,106,3,64,33,0,6,106,10,80,114,111,118,105,
		110,99,105,97,0,9,106,10,80,114,111,118,105,110,
		99,105,97,0,92,20,9,112,10,73,36,52,0,48,
		17,0,95,1,106,8,99,67,100,112,67,108,105,0,
		106,2,67,0,92,7,121,90,8,106,3,64,33,0,
		6,106,12,67,111,100,46,32,80,111,115,116,97,108,
		0,9,106,12,67,111,100,46,32,80,111,115,116,97,
		108,0,92,7,9,112,10,73,36,53,0,48,17,0,
		95,1,106,8,99,84,108,102,67,108,105,0,106,2,
		67,0,92,12,121,90,8,106,3,64,33,0,6,106,
		9,84,101,108,233,102,111,110,111,0,9,106,9,84,
		101,108,233,102,111,110,111,0,92,12,9,112,10,73,
		36,54,0,48,17,0,95,1,106,8,99,84,105,112,
		86,101,110,0,106,2,67,0,92,20,121,90,8,106,
		3,64,33,0,6,106,6,86,101,110,116,97,0,9,
		106,14,84,105,112,111,32,100,101,32,118,101,110,116,
		97,0,92,10,9,112,10,73,36,55,0,48,17,0,
		95,1,106,8,110,78,117,109,67,97,106,0,106,2,
		78,0,92,16,92,6,90,8,176,19,0,12,0,6,
		176,20,0,12,0,9,176,20,0,12,0,92,12,120,
		112,10,73,36,56,0,48,17,0,95,1,106,8,110,
		85,110,105,68,97,100,0,106,2,78,0,92,16,92,
		6,90,8,176,19,0,12,0,6,176,21,0,12,0,
		9,176,21,0,12,0,92,12,120,112,10,73,36,57,
		0,48,17,0,95,1,106,8,110,78,117,109,85,110,
		105,0,106,2,78,0,92,16,92,6,90,8,176,19,
		0,12,0,6,106,6,84,111,116,46,32,0,176,21,
		0,12,0,72,120,106,6,84,111,116,46,32,0,176,
		21,0,12,0,72,92,10,120,112,10,73,36,58,0,
		48,17,0,95,1,106,8,110,73,109,112,65,114,116,
		0,106,2,78,0,92,16,92,6,89,17,0,0,0,
		1,0,1,0,48,22,0,95,255,112,0,6,106,7,
		80,114,101,99,105,111,0,120,106,7,80,114,101,99,
		105,111,0,92,12,9,112,10,73,36,59,0,48,17,
		0,95,1,106,8,110,80,110,116,86,101,114,0,106,
		2,78,0,92,16,92,6,89,17,0,0,0,1,0,
		1,0,48,22,0,95,255,112,0,6,106,10,80,110,
		116,46,32,118,101,114,46,0,9,106,12,80,117,110,
		116,111,32,118,101,114,100,101,0,92,10,9,112,10,
		73,36,60,0,48,17,0,95,1,106,8,110,73,109,
		112,84,114,110,0,106,2,78,0,92,16,92,6,89,
		17,0,0,0,1,0,1,0,48,22,0,95,255,112,
		0,6,106,7,80,111,114,116,101,115,0,9,106,7,
		80,111,114,116,101,115,0,92,10,9,112,10,73,36,
		61,0,48,17,0,95,1,106,8,110,73,109,112,84,
		111,116,0,106,2,78,0,92,16,92,6,89,17,0,
		0,0,1,0,1,0,48,23,0,95,255,112,0,6,
		106,5,66,97,115,101,0,120,106,5,66,97,115,101,
		0,92,15,120,112,10,73,36,62,0,48,17,0,95,
		1,106,8,110,84,111,116,80,101,115,0,106,2,78,
		0,92,16,92,6,90,8,176,19,0,12,0,6,106,
		10,84,111,116,46,32,112,101,115,111,0,9,106,11,
		84,111,116,97,108,32,112,101,115,111,0,92,12,120,
		112,10,73,36,63,0,48,17,0,95,1,106,8,110,
		80,114,101,75,103,114,0,106,2,78,0,92,16,92,
		6,89,17,0,0,0,1,0,1,0,48,22,0,95,
		255,112,0,6,106,9,80,114,101,46,32,75,103,46,
		0,9,106,12,80,114,101,99,105,111,32,107,105,108,
		111,0,92,12,9,112,10,73,36,64,0,48,17,0,
		95,1,106,8,110,84,111,116,86,111,108,0,106,2,
		78,0,92,16,92,6,90,8,176,19,0,12,0,6,
		106,13,84,111,116,46,32,118,111,108,117,109,101,110,
		0,9,106,14,84,111,116,97,108,32,118,111,108,117,
		109,101,110,0,92,12,120,112,10,73,36,65,0,48,
		17,0,95,1,106,8,110,80,114,101,86,111,108,0,
		106,2,78,0,92,16,92,6,89,17,0,0,0,1,
		0,1,0,48,22,0,95,255,112,0,6,106,10,80,
		114,101,46,32,118,111,108,46,0,9,106,15,80,114,
		101,99,105,111,32,118,111,108,117,109,101,110,0,92,
		12,9,112,10,73,36,66,0,48,17,0,95,1,106,
		8,110,73,118,97,84,111,116,0,106,2,78,0,92,
		16,92,6,89,17,0,0,0,1,0,1,0,48,23,
		0,95,255,112,0,6,176,24,0,12,0,120,176,24,
		0,12,0,92,12,120,112,10,73,36,67,0,48,17,
		0,95,1,106,8,110,84,111,116,70,105,110,0,106,
		2,78,0,92,16,92,6,89,17,0,0,0,1,0,
		1,0,48,23,0,95,255,112,0,6,106,6,84,111,
		116,97,108,0,120,106,6,84,111,116,97,108,0,92,
		12,120,112,10,73,36,68,0,48,17,0,95,1,106,
		8,110,68,116,111,69,115,112,0,106,2,78,0,92,
		6,92,2,90,14,106,9,64,69,32,57,57,46,57,
		57,0,6,106,7,37,68,116,111,46,49,0,9,106,
		27,80,114,105,109,101,114,32,112,111,114,99,101,116,
		97,106,101,32,100,101,115,99,117,101,110,116,111,0,
		92,6,9,112,10,73,36,69,0,48,17,0,95,1,
		106,5,110,68,112,112,0,106,2,78,0,92,6,92,
		2,90,14,106,9,64,69,32,57,57,46,57,57,0,
		6,106,7,37,68,116,111,46,50,0,9,106,29,83,
		101,103,117,110,100,111,32,112,111,114,99,101,110,116,
		97,106,101,32,100,101,115,99,117,101,110,116,111,0,
		92,6,120,112,10,73,36,70,0,48,17,0,95,1,
		106,8,110,68,116,111,85,110,111,0,106,2,78,0,
		92,6,92,2,90,14,106,9,64,69,32,57,57,46,
		57,57,0,6,106,7,37,68,116,111,46,51,0,9,
		106,28,84,101,114,99,101,114,32,112,111,114,99,101,
		110,116,97,106,101,32,100,101,115,99,117,101,110,116,
		111,0,92,6,120,112,10,73,36,71,0,48,17,0,
		95,1,106,8,110,68,116,111,68,111,115,0,106,2,
		78,0,92,6,92,2,90,14,106,9,64,69,32,57,
		57,46,57,57,0,6,106,7,37,68,116,111,46,52,
		0,9,106,28,67,117,97,114,116,111,32,112,111,114,
		99,101,110,116,97,106,101,32,100,101,115,99,117,101,
		110,116,111,0,92,6,120,112,10,73,36,72,0,48,
		17,0,95,1,106,8,99,80,101,114,67,116,111,0,
		106,2,67,0,92,30,121,90,8,106,3,64,33,0,
		6,106,9,67,111,110,116,97,99,116,111,0,9,106,
		9,67,111,110,116,97,99,116,111,0,92,15,9,112,
		10,73,36,73,0,48,17,0,95,1,106,9,84,101,
		108,101,102,111,110,111,0,106,2,67,0,92,20,121,
		90,8,106,3,64,33,0,6,106,9,84,101,108,101,
		102,111,110,111,0,9,106,9,84,101,108,101,102,111,
		110,111,0,92,15,9,112,10,73,36,74,0,48,17,
		0,95,1,106,4,70,97,120,0,106,2,67,0,92,
		20,121,90,8,106,3,64,33,0,6,106,4,70,97,
		120,0,9,106,4,70,97,120,0,92,15,9,112,10,
		73,36,75,0,48,17,0,95,1,106,6,77,111,118,
		105,108,0,106,2,67,0,92,20,121,90,8,106,3,
		64,33,0,6,106,6,77,111,118,105,108,0,9,106,
		6,77,111,118,105,108,0,92,15,9,112,10,73,36,
		76,0,48,17,0,95,1,106,8,109,79,98,115,101,
		114,118,0,106,2,77,0,92,10,121,90,8,106,3,
		64,33,0,6,106,8,79,98,115,101,114,118,46,0,
		9,106,14,79,98,115,101,114,118,97,99,105,111,110,
		101,115,0,92,15,9,112,10,73,36,78,0,48,25,
		0,95,1,106,8,99,67,100,112,67,108,105,0,106,
		36,99,67,100,112,67,108,105,32,43,32,99,67,111,
		100,67,108,105,32,43,32,100,84,111,115,40,32,100,
		70,101,99,77,111,118,32,41,0,112,2,73,36,80,
		0,48,26,0,95,1,89,22,0,0,0,1,0,1,
		0,48,27,0,48,28,0,95,255,112,0,112,0,6,
		89,47,0,0,0,1,0,1,0,106,17,67,243,100,
		105,103,111,32,112,111,115,116,97,108,32,58,32,0,
		176,29,0,48,27,0,48,28,0,95,255,112,0,112,
		0,12,1,72,6,90,28,106,23,84,111,116,97,108,
		32,99,243,100,105,103,111,32,112,111,115,116,97,108,
		46,46,46,0,6,112,3,73,36,82,0,48,26,0,
		95,1,89,35,0,0,0,1,0,1,0,48,27,0,
		48,28,0,95,255,112,0,112,0,48,30,0,48,28,
		0,95,255,112,0,112,0,72,6,89,72,0,0,0,
		1,0,1,0,106,12,67,108,105,101,110,116,101,32,
		32,58,32,0,176,29,0,48,30,0,48,28,0,95,
		255,112,0,112,0,12,1,72,106,2,45,0,72,176,
		31,0,48,30,0,48,28,0,95,255,112,0,112,0,
		48,32,0,95,255,112,0,12,2,72,6,90,22,106,
		17,84,111,116,97,108,32,99,108,105,101,110,116,101,
		46,46,46,0,6,112,3,73,36,84,0,95,1,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCPEDPOB_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,90,0,120,80,1,36,91,0,176,33,
		0,89,15,0,1,0,0,0,176,34,0,95,1,12,
		1,6,12,1,80,2,36,93,0,113,5,1,0,36,
		95,0,48,35,0,102,48,36,0,176,37,0,12,0,
		112,0,112,1,73,36,97,0,48,38,0,102,48,39,
		0,176,40,0,106,12,80,69,68,67,76,73,76,46,
		68,66,70,0,100,12,2,106,12,80,69,68,67,76,
		73,76,46,68,66,70,0,100,176,41,0,12,0,100,
		176,42,0,12,0,9,120,9,9,112,9,112,1,73,
		48,43,0,48,44,0,102,112,0,106,12,80,69,68,
		67,76,73,76,46,67,68,88,0,112,1,73,48,43,
		0,48,44,0,102,112,0,112,0,73,48,45,0,48,
		44,0,102,112,0,112,0,73,36,99,0,48,46,0,
		102,48,39,0,176,40,0,106,13,65,82,84,73,67,
		85,76,79,46,68,66,70,0,100,12,2,106,13,65,
		82,84,73,67,85,76,79,46,68,66,70,0,100,176,
		41,0,12,0,100,176,47,0,12,0,9,120,9,9,
		112,9,112,1,73,48,43,0,48,48,0,102,112,0,
		106,13,65,82,84,73,67,85,76,79,46,67,68,88,
		0,112,1,73,48,43,0,48,48,0,102,112,0,112,
		0,73,48,45,0,48,48,0,102,112,0,112,0,73,
		114,76,0,0,36,101,0,115,73,36,103,0,176,49,
		0,106,41,73,109,112,111,115,105,98,108,101,32,97,
		98,114,105,114,32,116,111,100,97,115,32,108,97,115,
		32,98,97,115,101,115,32,100,101,32,100,97,116,111,
		115,0,20,1,36,104,0,48,50,0,102,112,0,73,
		36,105,0,9,80,1,36,109,0,176,33,0,95,2,
		20,1,36,111,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCPEDPOB_CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		36,117,0,176,51,0,48,36,0,102,112,0,12,1,
		31,30,48,52,0,48,36,0,102,112,0,112,0,28,
		17,36,118,0,48,53,0,48,36,0,102,112,0,112,
		0,73,36,120,0,176,51,0,48,44,0,102,112,0,
		12,1,31,30,48,52,0,48,44,0,102,112,0,112,
		0,28,17,36,121,0,48,53,0,48,44,0,102,112,
		0,112,0,73,36,123,0,176,51,0,48,48,0,102,
		112,0,12,1,31,30,48,52,0,48,48,0,102,112,
		0,112,0,28,17,36,124,0,48,53,0,48,48,0,
		102,112,0,112,0,73,36,127,0,48,35,0,102,100,
		112,1,73,36,128,0,48,38,0,102,100,112,1,73,
		36,129,0,48,46,0,102,100,112,1,73,36,131,0,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCPEDPOB_LRESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,5,1,36,135,0,102,80,2,36,140,0,106,6,
		84,111,100,111,115,0,80,6,36,142,0,48,54,0,
		95,2,106,11,73,78,70,95,71,69,78,51,50,65,
		0,112,1,31,8,36,143,0,9,110,7,36,151,0,
		48,55,0,95,2,92,110,92,120,93,130,0,93,140,
		0,100,93,88,2,112,6,31,8,36,152,0,9,110,
		7,36,157,0,48,56,0,176,57,0,12,0,93,32,
		3,89,37,0,1,0,1,0,2,0,176,58,0,12,
		0,121,8,28,11,48,59,0,95,255,112,0,25,11,
		48,60,0,95,255,95,1,112,1,6,48,61,0,48,
		62,0,95,2,112,0,112,0,122,1,100,100,100,100,
		100,100,9,100,9,112,12,73,36,163,0,48,56,0,
		176,63,0,12,0,92,70,89,37,0,1,0,1,0,
		2,0,176,58,0,12,0,121,8,28,11,48,64,0,
		95,255,112,0,25,11,48,65,0,95,255,95,1,112,
		1,6,48,61,0,48,62,0,95,2,112,0,112,0,
		122,1,100,106,6,57,57,57,57,57,0,100,100,100,
		100,100,100,9,89,18,0,0,0,1,0,2,0,48,
		59,0,95,255,112,0,68,6,100,9,9,100,100,100,
		100,100,100,100,100,100,112,25,80,3,36,169,0,48,
		56,0,176,63,0,12,0,92,90,89,37,0,1,0,
		1,0,2,0,176,58,0,12,0,121,8,28,11,48,
		66,0,95,255,112,0,25,11,48,67,0,95,255,95,
		1,112,1,6,48,61,0,48,62,0,95,2,112,0,
		112,0,122,1,100,106,6,57,57,57,57,57,0,100,
		100,100,100,100,100,9,89,18,0,0,0,1,0,2,
		0,48,59,0,95,255,112,0,68,6,100,9,9,100,
		100,100,100,100,100,100,100,100,112,25,80,4,36,178,
		0,48,56,0,176,57,0,12,0,93,238,2,89,37,
		0,1,0,1,0,2,0,176,58,0,12,0,121,8,
		28,11,48,68,0,95,255,112,0,25,11,48,69,0,
		95,255,95,1,112,1,6,48,61,0,48,62,0,95,
		2,112,0,112,0,122,1,100,100,100,100,100,100,9,
		100,9,112,12,80,5,36,180,0,48,70,0,95,2,
		112,0,73,36,182,0,48,71,0,95,2,112,0,73,
		36,188,0,48,72,0,95,2,48,56,0,176,73,0,
		12,0,93,210,0,89,28,0,1,0,1,0,6,0,
		176,58,0,12,0,121,8,28,6,95,255,25,7,95,
		1,165,80,255,6,48,74,0,95,2,112,0,48,61,
		0,48,62,0,95,2,112,0,112,0,122,1,100,100,
		100,100,100,100,9,100,100,100,100,100,100,112,17,112,
		1,73,36,195,0,48,75,0,95,2,176,76,0,12,
		0,48,77,0,48,36,0,95,2,112,0,112,0,112,
		2,73,36,197,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINFCPEDPOB_LGENERATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,204,0,102,80,1,36,206,0,106,1,
		0,80,2,36,207,0,106,1,0,80,3,36,209,0,
		48,78,0,48,79,0,95,1,112,0,112,0,73,36,
		210,0,48,80,0,48,81,0,95,1,112,0,112,0,
		73,36,211,0,48,82,0,48,28,0,95,1,112,0,
		112,0,73,36,217,0,48,83,0,95,1,90,29,106,
		13,70,101,99,104,97,32,32,32,32,32,58,32,0,
		176,84,0,176,85,0,12,0,12,1,72,6,89,58,
		0,0,0,1,0,1,0,106,13,80,101,114,105,111,
		100,111,32,32,32,58,32,0,176,84,0,48,86,0,
		95,255,112,0,12,1,72,106,4,32,62,32,0,72,
		176,84,0,48,87,0,95,255,112,0,12,1,72,6,
		89,77,0,0,0,1,0,1,0,106,13,67,46,32,
		80,111,115,116,97,108,32,58,32,0,48,59,0,95,
		255,112,0,28,12,106,6,84,111,100,111,115,0,25,
		34,176,88,0,48,64,0,95,255,112,0,12,1,106,
		4,32,62,32,0,72,176,88,0,48,66,0,95,255,
		112,0,12,1,72,72,6,89,77,0,0,0,1,0,
		1,0,106,13,67,108,105,101,110,116,101,115,32,32,
		58,32,0,48,89,0,95,255,112,0,28,12,106,6,
		84,111,100,111,115,0,25,34,176,88,0,48,90,0,
		95,255,112,0,12,1,106,4,32,62,32,0,72,176,
		88,0,48,91,0,95,255,112,0,12,1,72,72,6,
		89,46,0,0,0,1,0,1,0,106,13,69,115,116,
		97,100,111,32,32,32,32,58,32,0,48,74,0,95,
		255,112,0,48,92,0,48,93,0,95,255,112,0,112,
		0,1,72,6,4,5,0,112,1,73,36,219,0,48,
		94,0,48,36,0,95,1,112,0,106,8,100,70,101,
		99,80,101,100,0,112,1,73,36,220,0,48,94,0,
		48,44,0,95,1,112,0,106,8,110,78,117,109,80,
		101,100,0,112,1,73,36,222,0,106,10,33,108,67,
		97,110,99,101,108,32,0,80,2,36,225,0,48,92,
		0,48,93,0,95,1,112,0,112,0,122,8,28,33,
		36,226,0,96,2,0,106,20,32,46,97,110,100,46,
		32,110,69,115,116,97,100,111,32,61,61,32,49,0,
		135,25,102,36,227,0,48,92,0,48,93,0,95,1,
		112,0,112,0,92,2,8,28,33,36,228,0,96,2,
		0,106,20,32,46,97,110,100,46,32,110,69,115,116,
		97,100,111,32,61,61,32,50,0,135,25,51,36,229,
		0,48,92,0,48,93,0,95,1,112,0,112,0,92,
		3,8,28,31,36,230,0,96,2,0,106,20,32,46,
		97,110,100,46,32,110,69,115,116,97,100,111,32,61,
		61,32,51,0,135,36,233,0,96,2,0,106,26,32,
		46,97,110,100,46,32,100,70,101,99,80,101,100,32,
		62,61,32,67,116,111,100,40,32,34,0,176,84,0,
		48,86,0,95,1,112,0,12,1,72,106,29,34,32,
		41,32,46,97,110,100,46,32,100,70,101,99,80,101,
		100,32,60,61,32,67,116,111,100,40,32,34,0,72,
		176,84,0,48,87,0,95,1,112,0,12,1,72,106,
		4,34,32,41,0,72,135,36,235,0,48,59,0,95,
		1,112,0,31,86,36,236,0,96,2,0,106,20,32,
		46,97,110,100,46,32,99,80,111,115,67,108,105,32,
		62,61,32,34,0,176,29,0,48,64,0,95,1,112,
		0,12,1,72,106,21,34,32,46,97,110,100,46,32,
		99,80,111,115,67,108,105,32,60,61,32,34,0,72,
		176,29,0,48,66,0,95,1,112,0,12,1,72,106,
		2,34,0,72,135,36,239,0,48,89,0,95,1,112,
		0,31,86,36,240,0,96,2,0,106,20,32,46,97,
		110,100,46,32,99,67,111,100,67,108,105,32,62,61,
		32,34,0,176,29,0,48,90,0,95,1,112,0,12,
		1,72,106,21,34,32,46,97,110,100,46,32,99,67,
		111,100,67,108,105,32,60,61,32,34,0,72,176,29,
		0,48,91,0,95,1,112,0,12,1,72,106,2,34,
		0,72,135,36,243,0,176,51,0,48,95,0,48,96,
		0,95,1,112,0,112,0,12,1,31,32,36,244,0,
		96,2,0,106,8,32,46,97,110,100,46,32,0,48,
		95,0,48,96,0,95,1,112,0,112,0,72,135,36,
		247,0,48,25,0,48,36,0,95,1,112,0,176,97,
		0,12,0,176,98,0,48,99,0,48,36,0,95,1,
		112,0,112,0,12,1,48,100,0,48,36,0,95,1,
		112,0,112,0,95,2,100,100,100,100,100,100,100,120,
		112,12,73,36,249,0,48,101,0,48,102,0,95,1,
		112,0,106,19,80,114,111,99,101,115,97,110,100,111,
		32,112,101,100,105,100,111,115,0,112,1,73,36,250,
		0,48,103,0,48,102,0,95,1,112,0,48,104,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,252,
		0,48,68,0,95,1,112,0,31,20,36,253,0,106,
		9,33,108,75,105,116,67,104,108,0,80,3,25,13,
		36,255,0,106,4,46,116,46,0,80,3,36,2,1,
		48,25,0,48,44,0,95,1,112,0,176,97,0,12,
		0,176,98,0,48,99,0,48,44,0,95,1,112,0,
		112,0,12,1,48,100,0,48,44,0,95,1,112,0,
		112,0,176,105,0,95,3,12,1,100,100,100,100,100,
		100,100,120,112,12,73,36,4,1,48,106,0,48,36,
		0,95,1,112,0,112,0,73,36,6,1,48,107,0,
		95,1,112,0,32,17,3,48,108,0,48,36,0,95,
		1,112,0,112,0,32,2,3,36,8,1,176,109,0,
		48,110,0,48,36,0,95,1,112,0,112,0,48,111,
		0,95,1,112,0,12,2,29,193,2,36,10,1,48,
		112,0,48,44,0,95,1,112,0,48,110,0,48,36,
		0,95,1,112,0,112,0,176,113,0,48,114,0,48,
		36,0,95,1,112,0,112,0,12,1,72,48,115,0,
		48,36,0,95,1,112,0,112,0,72,112,1,29,132,
		2,36,12,1,48,110,0,48,36,0,95,1,112,0,
		112,0,176,113,0,48,114,0,48,36,0,95,1,112,
		0,112,0,12,1,72,48,115,0,48,36,0,95,1,
		112,0,112,0,72,48,110,0,48,44,0,95,1,112,
		0,112,0,176,113,0,48,114,0,48,44,0,95,1,
		112,0,112,0,12,1,72,48,115,0,48,44,0,95,
		1,112,0,112,0,72,8,29,39,2,36,16,1,48,
		116,0,48,44,0,95,1,112,0,112,0,32,2,2,
		48,117,0,48,44,0,95,1,112,0,112,0,32,243,
		1,48,118,0,95,1,112,0,28,24,176,119,0,48,
		77,0,48,44,0,95,1,112,0,112,0,12,1,121,
		8,32,212,1,48,120,0,95,1,112,0,28,57,176,
		121,0,48,77,0,48,36,0,95,1,112,0,112,0,
		48,77,0,48,44,0,95,1,112,0,112,0,48,122,
		0,95,1,112,0,48,123,0,95,1,112,0,48,124,
		0,95,1,112,0,12,5,121,8,32,148,1,36,18,
		1,48,125,0,95,1,9,112,1,73,36,20,1,48,
		126,0,48,28,0,95,1,112,0,112,0,73,36,22,
		1,48,127,0,48,28,0,95,1,112,0,48,128,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,23,
		1,48,129,0,48,28,0,95,1,112,0,48,130,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,24,
		1,48,131,0,48,28,0,95,1,112,0,48,132,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,25,
		1,48,133,0,48,28,0,95,1,112,0,48,134,0,
		48,36,0,95,1,112,0,112,0,112,1,73,36,26,
		1,48,135,0,48,28,0,95,1,112,0,176,31,0,
		48,30,0,48,36,0,95,1,112,0,112,0,48,32,
		0,95,1,112,0,106,8,99,80,101,114,67,116,111,
		0,12,3,112,1,73,36,27,1,48,136,0,48,28,
		0,95,1,112,0,176,31,0,48,30,0,48,36,0,
		95,1,112,0,112,0,48,32,0,95,1,112,0,106,
		9,84,101,108,101,102,111,110,111,0,12,3,112,1,
		73,36,28,1,48,137,0,48,28,0,95,1,112,0,
		176,31,0,48,30,0,48,36,0,95,1,112,0,112,
		0,48,32,0,95,1,112,0,106,4,70,97,120,0,
		12,3,112,1,73,36,29,1,48,138,0,48,28,0,
		95,1,112,0,176,31,0,48,30,0,48,36,0,95,
		1,112,0,112,0,48,32,0,95,1,112,0,106,6,
		77,111,118,105,108,0,12,3,112,1,73,36,30,1,
		48,139,0,48,28,0,95,1,112,0,176,31,0,48,
		30,0,48,36,0,95,1,112,0,112,0,48,32,0,
		95,1,112,0,106,8,77,67,79,77,69,78,84,0,
		12,3,112,1,73,36,32,1,48,140,0,48,28,0,
		95,1,112,0,112,0,73,36,36,1,48,141,0,48,
		44,0,95,1,112,0,112,0,73,26,130,253,36,44,
		1,48,141,0,48,36,0,95,1,112,0,112,0,73,
		36,46,1,48,142,0,48,102,0,95,1,112,0,112,
		0,73,26,232,252,36,50,1,48,143,0,48,36,0,
		95,1,112,0,176,97,0,12,0,176,98,0,48,99,
		0,48,36,0,95,1,112,0,112,0,12,1,112,2,
		73,36,51,1,48,143,0,48,44,0,95,1,112,0,
		176,97,0,12,0,176,98,0,48,99,0,48,44,0,
		95,1,112,0,112,0,12,1,112,2,73,36,53,1,
		48,142,0,48,102,0,95,1,112,0,48,144,0,48,
		36,0,95,1,112,0,112,0,112,1,73,36,55,1,
		48,80,0,48,79,0,95,1,112,0,112,0,73,36,
		57,1,48,144,0,48,28,0,95,1,112,0,112,0,
		121,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,147,0,2,0,116,147,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

