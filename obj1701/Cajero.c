/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Cajero.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_STATIC( EDTREC );
HB_FUNC_STATIC( OPENFILES );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC( MKCAJERO );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( CCHECKAREA );
HB_FUNC_EXTERN( LAIS );
HB_FUNC_EXTERN( ORDLISTADD );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_STATIC( CLOSEFILES );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC( CAJERO );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( NLEVELUSR );
HB_FUNC_EXTERN( NAND );
HB_FUNC_EXTERN( SYSREFRESH );
HB_FUNC_EXTERN( ADDMNUNEXT );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( TSHELL );
HB_FUNC_EXTERN( WINAPPREC );
HB_FUNC_EXTERN( WINEDTREC );
HB_FUNC_EXTERN( DBDELREC );
HB_FUNC_EXTERN( WINDUPREC );
HB_FUNC_EXTERN( NOTVALID );
HB_FUNC_EXTERN( WINZOOREC );
HB_FUNC_STATIC( GENREPORT );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( LBLTITLE );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( WINGATHER );
HB_FUNC_EXTERN( EVALGET );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( CCODEMP );
HB_FUNC_EXTERN( CNBREMP );
HB_FUNC_EXTERN( SETREP );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( TFONT );
HB_FUNC_EXTERN( RPTBEGIN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( RPTADDCOLUMN );
HB_FUNC_EXTERN( RPTEND );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBGOTO );
HB_FUNC( CCAJERO );
HB_FUNC_EXTERN( ALIAS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC( BRWCAJERO );
HB_FUNC_EXTERN( GETBRWOPT );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ORDCLEARSCOPE );
HB_FUNC_EXTERN( AUTOSEEK );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( TWBROWSE );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( DESTROYFASTFILTER );
HB_FUNC_EXTERN( SETBRWOPT );
HB_FUNC_EXTERN( ORDNUMBER );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC( RXCAJERO );
HB_FUNC_EXTERN( LISDIR );
HB_FUNC_EXTERN( APPDBF );
HB_FUNC_EXTERN( CPATDAT );
HB_FUNC_EXTERN( LASTREC );
HB_FUNC_EXTERN( ORDCONDSET );
HB_FUNC_EXTERN( DELETED );
HB_FUNC_EXTERN( ORDCREATE );
HB_FUNC( RETCAJERO );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CAJERO )
{ "EDTREC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( EDTREC )}, NULL },
{ "OPENFILES", {HB_FS_STATIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( OPENFILES )}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "MKCAJERO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MKCAJERO )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "CCHECKAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCHECKAREA )}, NULL },
{ "LAIS", {HB_FS_PUBLIC}, {HB_FUNCNAME( LAIS )}, NULL },
{ "ORDLISTADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDLISTADD )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "CLOSEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLOSEFILES )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "CAJERO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CAJERO )}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "NLEVELUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NLEVELUSR )}, NULL },
{ "NAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( NAND )}, NULL },
{ "SYSREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SYSREFRESH )}, NULL },
{ "CLOSEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMNUNEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADDMNUNEXT )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSHELL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSHELL )}, NULL },
{ "CCODCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CNOMCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CNIFCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "WINAPPREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINAPPREC )}, NULL },
{ "OBRW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WINEDTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINEDTREC )}, NULL },
{ "DBDELREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELREC )}, NULL },
{ "WINDUPREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINDUPREC )}, NULL },
{ "NOTVALID", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOTVALID )}, NULL },
{ "NEWAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEARCHSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDSEABAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECADD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECDUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECEDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WINZOOREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINZOOREC )}, NULL },
{ "RECDEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GENREPORT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( GENREPORT )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRESIZED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BKEYDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BINIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCLOSEAREA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLBUTTONUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LBLTITLE )}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "WINGATHER", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINGATHER )}, NULL },
{ "_BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVALGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( EVALGET )}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "CCODEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCODEMP )}, NULL },
{ "CNBREMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CNBREMP )}, NULL },
{ "SETREP", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETREP )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "TFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFONT )}, NULL },
{ "RPTBEGIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RPTBEGIN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RPTADDCOLUMN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RPTADDCOLUMN )}, NULL },
{ "CDOMCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CPOBCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CCDPCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CPRVCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CTELCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CFAXCAJ", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "RPTEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( RPTEND )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LCREATED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARGIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DBGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTO )}, NULL },
{ "CCAJERO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CCAJERO )}, NULL },
{ "ALIAS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALIAS )}, NULL },
{ "VARGET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "BRWCAJERO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BRWCAJERO )}, NULL },
{ "GETBRWOPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETBRWOPT )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ORDCLEARSCOPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCLEARSCOPE )}, NULL },
{ "AUTOSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( AUTOSEEK )}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TWBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TWBROWSE )}, NULL },
{ "_NHEADERHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NFOOTERHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLINEHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "DESTROYFASTFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DESTROYFASTFILTER )}, NULL },
{ "SETBRWOPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETBRWOPT )}, NULL },
{ "ORDNUMBER", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDNUMBER )}, NULL },
{ "DBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCREATE )}, NULL },
{ "RXCAJERO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RXCAJERO )}, NULL },
{ "LISDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( LISDIR )}, NULL },
{ "APPDBF", {HB_FS_PUBLIC}, {HB_FUNCNAME( APPDBF )}, NULL },
{ "CPATDAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATDAT )}, NULL },
{ "_NTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTREC )}, NULL },
{ "_CTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDCONDSET", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCONDSET )}, NULL },
{ "DELETED", {HB_FS_PUBLIC}, {HB_FUNCNAME( DELETED )}, NULL },
{ "SET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDCREATE )}, NULL },
{ "RETCAJERO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RETCAJERO )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00006)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CAJERO, ".\\.\\Prg\\Cajero.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CAJERO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CAJERO )
   #include "hbiniseg.h"
#endif

HB_FUNC_STATIC( OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,116,135,0,36,36,0,120,80,3,36,38,
		0,176,2,0,89,15,0,1,0,0,0,176,3,0,
		95,1,12,1,6,12,1,80,1,36,39,0,113,139,
		0,0,36,41,0,176,4,0,176,5,0,12,0,106,
		11,67,65,74,69,82,79,46,68,66,70,0,72,12,
		1,31,10,36,42,0,176,6,0,20,0,36,45,0,
		176,7,0,120,176,8,0,12,0,176,5,0,12,0,
		106,11,67,65,74,69,82,79,46,68,66,70,0,72,
		176,9,0,106,7,67,65,74,69,82,79,0,104,4,
		0,12,2,120,9,20,6,36,46,0,176,10,0,12,
		0,31,28,176,11,0,176,5,0,12,0,106,11,67,
		65,74,69,82,79,46,67,68,88,0,72,20,1,25,
		8,176,12,0,122,20,1,114,74,0,0,36,48,0,
		115,80,2,36,50,0,9,80,3,36,52,0,176,13,
		0,106,40,73,109,112,111,115,105,98,108,101,32,97,
		98,114,105,114,32,116,111,100,97,32,108,97,32,98,
		97,115,101,32,100,101,32,100,97,116,111,115,13,10,
		0,176,14,0,95,2,12,1,72,20,1,36,56,0,
		176,2,0,95,1,20,1,36,58,0,95,3,31,10,
		36,59,0,176,15,0,20,0,36,62,0,95,3,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CLOSEFILES )
{
	static const HB_BYTE pcode[] =
	{
		116,135,0,36,68,0,85,103,4,0,74,176,16,0,
		20,0,74,36,70,0,100,82,4,0,36,72,0,103,
		2,0,100,69,28,9,36,73,0,100,82,2,0,36,
		76,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CAJERO )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,116,135,0,36,82,0,95,1,100,8,28,
		12,106,6,48,49,48,49,56,0,80,1,36,83,0,
		95,2,100,8,28,9,176,18,0,12,0,80,2,36,
		85,0,103,2,0,100,8,29,220,3,36,91,0,103,
		3,0,100,8,28,15,36,92,0,176,19,0,95,1,
		12,1,82,3,0,36,95,0,176,20,0,103,3,0,
		122,12,2,121,69,28,39,36,96,0,176,13,0,106,
		21,65,99,99,101,115,111,32,110,111,32,112,101,114,
		109,105,116,105,100,111,46,0,20,1,36,97,0,100,
		110,7,36,104,0,95,2,100,69,28,23,36,105,0,
		176,21,0,20,0,48,22,0,95,2,112,0,73,176,
		21,0,20,0,36,112,0,176,1,0,12,0,31,8,
		36,113,0,100,110,7,36,120,0,176,23,0,106,8,
		67,97,106,101,114,111,115,0,176,24,0,12,0,20,
		2,36,140,0,48,25,0,176,26,0,12,0,92,2,
		92,10,92,18,92,70,106,8,67,97,106,101,114,111,
		115,0,100,95,2,100,100,9,100,90,9,103,4,0,
		88,27,0,6,90,9,103,4,0,88,28,0,6,90,
		9,103,4,0,88,29,0,6,4,3,0,103,4,0,
		106,7,67,243,100,105,103,111,0,106,7,78,111,109,
		98,114,101,0,106,7,78,46,73,46,70,46,0,4,
		3,0,100,100,9,9,9,4,3,0,106,7,67,243,
		100,105,103,111,0,106,7,78,111,109,98,114,101,0,
		4,2,0,90,24,176,30,0,48,31,0,103,2,0,
		112,0,103,5,0,103,4,0,100,100,12,5,6,90,
		22,176,32,0,48,31,0,103,2,0,112,0,103,5,
		0,103,4,0,12,3,6,90,19,176,33,0,48,31,
		0,103,2,0,112,0,103,4,0,12,2,6,90,46,
		176,34,0,48,31,0,103,2,0,112,0,103,5,0,
		103,4,0,100,89,23,0,1,0,0,0,176,35,0,
		95,1,103,4,0,120,106,2,48,0,12,4,6,12,
		5,6,100,103,3,0,106,31,67,67,79,68,67,65,
		74,32,43,32,83,112,97,99,101,40,32,49,32,41,
		32,43,32,67,78,79,77,67,65,74,0,100,100,100,
		100,112,29,82,2,0,36,146,0,48,36,0,103,2,
		0,106,4,66,85,83,0,100,100,90,11,48,37,0,
		103,2,0,112,0,6,106,9,40,66,41,117,115,99,
		97,114,0,106,2,66,0,100,100,100,100,9,112,11,
		73,36,148,0,48,38,0,103,2,0,112,0,73,36,
		157,0,48,36,0,103,2,0,106,4,78,69,87,0,
		100,100,90,11,48,39,0,103,2,0,112,0,6,106,
		9,40,65,41,241,97,100,105,114,0,106,2,65,0,
		100,100,92,2,100,9,112,11,73,36,165,0,48,36,
		0,103,2,0,106,4,68,85,80,0,100,100,90,11,
		48,40,0,103,2,0,112,0,6,106,11,40,68,41,
		117,112,108,105,99,97,114,0,106,2,68,0,100,100,
		92,2,100,9,112,11,73,36,173,0,48,36,0,103,
		2,0,106,5,69,68,73,84,0,100,100,90,11,48,
		41,0,103,2,0,112,0,6,106,12,40,77,41,111,
		100,105,102,105,99,97,114,0,106,2,77,0,100,100,
		92,4,100,9,112,11,73,36,181,0,48,36,0,103,
		2,0,106,5,90,79,79,77,0,100,100,90,22,176,
		42,0,48,31,0,103,2,0,112,0,103,5,0,103,
		4,0,12,3,6,106,7,40,90,41,111,111,109,0,
		106,2,90,0,100,100,92,8,100,9,112,11,73,36,
		189,0,48,36,0,103,2,0,106,4,68,69,76,0,
		100,100,90,11,48,43,0,103,2,0,112,0,6,106,
		11,40,69,41,108,105,109,105,110,97,114,0,106,2,
		69,0,100,100,92,16,100,9,112,11,73,36,196,0,
		48,36,0,103,2,0,106,4,73,77,80,0,100,100,
		90,11,176,44,0,103,4,0,12,1,6,106,10,40,
		76,41,105,115,116,97,100,111,0,106,2,76,0,100,
		100,92,8,100,9,112,11,73,36,202,0,48,36,0,
		103,2,0,106,4,69,78,68,0,100,100,90,11,48,
		45,0,103,2,0,112,0,6,106,8,40,83,41,97,
		108,105,114,0,106,2,83,0,100,100,100,100,9,112,
		11,73,36,205,0,48,46,0,103,2,0,100,48,47,
		0,103,2,0,112,0,48,48,0,103,2,0,112,0,
		48,49,0,103,2,0,112,0,48,50,0,103,2,0,
		112,0,48,51,0,103,2,0,112,0,48,52,0,103,
		2,0,112,0,48,53,0,103,2,0,112,0,100,100,
		100,100,100,100,100,100,90,22,48,54,0,48,31,0,
		103,2,0,112,0,112,0,73,100,82,2,0,120,6,
		100,48,55,0,103,2,0,112,0,9,112,20,73,25,
		14,36,209,0,48,56,0,103,2,0,112,0,73,36,
		213,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( EDTREC )
{
	static const HB_BYTE pcode[] =
	{
		13,2,7,36,222,0,48,25,0,176,57,0,12,0,
		100,100,100,100,176,58,0,95,7,12,1,106,10,67,
		97,106,101,114,111,47,97,115,0,72,106,7,67,65,
		74,69,82,79,0,100,9,100,100,100,100,100,9,100,
		100,100,100,100,9,100,106,5,111,68,108,103,0,100,
		100,112,24,80,8,36,229,0,48,59,0,176,60,0,
		12,0,92,110,89,32,0,1,0,1,0,1,0,176,
		61,0,12,0,121,8,28,8,95,255,122,1,25,9,
		95,1,165,95,255,122,2,6,95,8,100,100,89,26,
		0,0,0,2,0,9,0,3,0,176,35,0,95,255,
		95,254,120,106,2,48,0,12,4,6,106,5,78,47,
		87,42,0,100,100,100,100,9,89,14,0,0,0,1,
		0,7,0,95,255,122,8,6,100,9,9,100,100,100,
		100,100,100,100,100,100,112,25,80,9,36,236,0,48,
		59,0,176,60,0,12,0,92,120,89,34,0,1,0,
		1,0,1,0,176,61,0,12,0,121,8,28,9,95,
		255,92,2,1,25,10,95,1,165,95,255,92,2,2,
		6,95,8,100,106,3,64,33,0,100,106,5,78,47,
		87,42,0,100,100,100,100,9,89,15,0,0,0,1,
		0,7,0,95,255,92,3,69,6,100,9,9,100,100,
		100,100,100,100,100,100,100,112,25,73,36,242,0,48,
		59,0,176,60,0,12,0,93,130,0,89,34,0,1,
		0,1,0,1,0,176,61,0,12,0,121,8,28,9,
		95,255,92,3,1,25,10,95,1,165,95,255,92,3,
		2,6,95,8,100,100,100,106,5,78,47,87,42,0,
		100,100,100,100,9,89,15,0,0,0,1,0,7,0,
		95,255,92,3,69,6,100,9,9,100,100,100,100,100,
		100,100,100,100,112,25,73,36,248,0,48,59,0,176,
		60,0,12,0,93,140,0,89,34,0,1,0,1,0,
		1,0,176,61,0,12,0,121,8,28,9,95,255,92,
		4,1,25,10,95,1,165,95,255,92,4,2,6,95,
		8,100,100,100,106,5,78,47,87,42,0,100,100,100,
		100,9,89,15,0,0,0,1,0,7,0,95,255,92,
		3,69,6,100,9,9,100,100,100,100,100,100,100,100,
		100,112,25,73,36,254,0,48,59,0,176,60,0,12,
		0,93,150,0,89,34,0,1,0,1,0,1,0,176,
		61,0,12,0,121,8,28,9,95,255,92,5,1,25,
		10,95,1,165,95,255,92,5,2,6,95,8,100,100,
		100,106,5,78,47,87,42,0,100,100,100,100,9,89,
		15,0,0,0,1,0,7,0,95,255,92,3,69,6,
		100,9,9,100,100,100,100,100,100,100,100,100,112,25,
		73,36,4,1,48,59,0,176,60,0,12,0,93,160,
		0,89,34,0,1,0,1,0,1,0,176,61,0,12,
		0,121,8,28,9,95,255,92,7,1,25,10,95,1,
		165,95,255,92,7,2,6,95,8,100,100,100,106,5,
		78,47,87,42,0,100,100,100,100,9,89,15,0,0,
		0,1,0,7,0,95,255,92,3,69,6,100,9,9,
		100,100,100,100,100,100,100,100,100,112,25,73,36,10,
		1,48,59,0,176,60,0,12,0,93,170,0,89,34,
		0,1,0,1,0,1,0,176,61,0,12,0,121,8,
		28,9,95,255,92,6,1,25,10,95,1,165,95,255,
		92,6,2,6,95,8,100,100,100,106,5,78,47,87,
		42,0,100,100,100,100,9,89,15,0,0,0,1,0,
		7,0,95,255,92,3,69,6,100,9,9,100,100,100,
		100,100,100,100,100,100,112,25,73,36,17,1,48,59,
		0,176,60,0,12,0,93,180,0,89,34,0,1,0,
		1,0,1,0,176,61,0,12,0,121,8,28,9,95,
		255,92,8,1,25,10,95,1,165,95,255,92,8,2,
		6,95,8,100,106,13,57,57,57,57,57,57,57,57,
		57,57,57,57,0,100,106,5,78,47,87,42,0,100,
		100,100,100,9,89,15,0,0,0,1,0,7,0,95,
		255,92,3,69,6,100,9,9,100,100,100,100,100,100,
		100,100,100,112,25,73,36,24,1,48,59,0,176,60,
		0,12,0,93,190,0,89,34,0,1,0,1,0,1,
		0,176,61,0,12,0,121,8,28,9,95,255,92,9,
		1,25,10,95,1,165,95,255,92,9,2,6,95,8,
		100,106,13,57,57,57,57,57,57,57,57,57,57,57,
		57,0,100,106,5,78,47,87,42,0,100,100,100,100,
		9,89,15,0,0,0,1,0,7,0,95,255,92,3,
		69,6,100,9,9,100,100,100,100,100,100,100,100,100,
		112,25,73,36,30,1,48,59,0,176,62,0,12,0,
		122,89,43,0,0,0,6,0,1,0,2,0,3,0,
		4,0,7,0,8,0,176,63,0,95,255,95,254,95,
		253,95,252,95,251,20,5,48,45,0,95,250,122,112,
		1,6,95,8,100,100,9,89,15,0,0,0,1,0,
		7,0,95,255,92,3,69,6,100,100,9,112,10,73,
		36,36,1,48,59,0,176,62,0,12,0,92,2,89,
		17,0,0,0,1,0,8,0,48,45,0,95,255,112,
		0,6,95,8,100,100,9,100,100,100,120,112,10,73,
		36,38,1,48,46,0,95,8,48,47,0,95,8,112,
		0,48,49,0,95,8,112,0,48,64,0,95,8,89,
		21,0,2,0,2,0,2,0,7,0,176,65,0,95,
		255,95,254,12,2,6,112,1,120,100,100,100,48,48,
		0,95,8,112,0,100,100,100,112,11,73,36,40,1,
		48,66,0,95,8,112,0,122,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( GENREPORT )
{
	static const HB_BYTE pcode[] =
	{
		13,7,1,36,49,1,122,80,5,36,50,1,85,95,
		1,74,176,67,0,12,0,119,80,6,36,51,1,176,
		68,0,176,69,0,12,0,106,4,32,45,32,0,72,
		176,70,0,12,0,72,92,50,12,2,80,7,36,52,
		1,176,68,0,106,19,76,105,115,116,97,100,111,32,
		100,101,32,99,97,106,101,114,111,115,0,92,50,12,
		2,80,8,36,58,1,176,71,0,96,7,0,96,8,
		0,96,5,0,12,3,29,127,4,36,60,1,85,95,
		1,74,176,72,0,20,0,74,36,62,1,48,25,0,
		176,73,0,12,0,106,12,67,111,117,114,105,101,114,
		32,78,101,119,0,121,92,246,100,120,100,100,100,100,
		100,100,100,100,100,100,100,100,112,17,80,3,36,63,
		1,48,25,0,176,73,0,12,0,106,12,67,111,117,
		114,105,101,114,32,78,101,119,0,121,92,246,100,100,
		100,100,100,100,100,100,100,100,100,100,100,100,112,17,
		80,4,36,65,1,95,5,122,8,29,178,0,36,74,
		1,176,74,0,89,17,0,0,0,1,0,7,0,176,
		75,0,95,255,12,1,6,89,17,0,0,0,1,0,
		8,0,176,75,0,95,255,12,1,6,4,2,0,90,
		24,106,8,70,101,99,104,97,58,32,0,176,76,0,
		176,77,0,12,0,12,1,72,6,4,1,0,89,37,
		0,0,0,1,0,2,0,106,10,80,225,103,105,110,
		97,32,58,32,0,176,78,0,48,79,0,95,255,112,
		0,92,3,12,2,72,6,4,1,0,95,3,95,4,
		4,2,0,4,0,0,9,100,100,100,120,100,100,106,
		19,76,105,115,116,97,100,111,32,100,101,32,67,97,
		106,101,114,111,115,0,100,106,6,82,73,71,72,84,
		0,106,9,67,69,78,84,69,82,69,68,0,12,16,
		80,2,26,175,0,36,85,1,176,74,0,89,17,0,
		0,0,1,0,7,0,176,75,0,95,255,12,1,6,
		89,17,0,0,0,1,0,8,0,176,75,0,95,255,
		12,1,6,4,2,0,90,24,106,8,70,101,99,104,
		97,58,32,0,176,76,0,176,77,0,12,0,12,1,
		72,6,4,1,0,89,37,0,0,0,1,0,2,0,
		106,10,80,225,103,105,110,97,32,58,32,0,176,78,
		0,48,79,0,95,255,112,0,92,3,12,2,72,6,
		4,1,0,95,3,95,4,4,2,0,4,0,0,9,
		100,100,120,9,100,100,106,19,76,105,115,116,97,100,
		111,32,100,101,32,67,97,106,101,114,111,115,0,100,
		106,6,82,73,71,72,84,0,106,9,67,69,78,84,
		69,82,69,68,0,12,16,80,2,36,91,1,176,80,
		0,90,12,106,7,67,111,100,105,103,111,0,6,4,
		1,0,100,89,15,0,0,0,1,0,1,0,95,255,
		88,27,0,6,4,1,0,100,4,0,0,90,5,92,
		2,6,9,100,100,9,9,100,9,9,100,100,9,100,
		9,100,100,9,100,4,0,0,100,100,20,26,36,95,
		1,176,80,0,90,12,106,7,78,111,109,98,114,101,
		0,6,4,1,0,100,89,15,0,0,0,1,0,1,
		0,95,255,88,28,0,6,4,1,0,100,4,0,0,
		90,5,92,2,6,9,100,100,9,9,100,9,9,100,
		100,9,100,9,100,100,9,100,4,0,0,100,100,20,
		26,36,99,1,176,80,0,90,12,106,7,78,46,73,
		46,70,46,0,6,4,1,0,100,89,15,0,0,0,
		1,0,1,0,95,255,88,29,0,6,4,1,0,100,
		4,0,0,90,5,92,2,6,9,100,100,9,9,100,
		9,9,100,100,9,100,9,100,100,9,100,4,0,0,
		100,100,20,26,36,105,1,176,80,0,90,15,106,10,
		68,111,109,105,99,105,108,105,111,0,6,90,15,106,
		10,80,111,98,108,97,99,105,243,110,0,6,4,2,
		0,100,89,15,0,0,0,1,0,1,0,95,255,88,
		81,0,6,89,15,0,0,0,1,0,1,0,95,255,
		88,82,0,6,4,2,0,100,4,0,0,90,5,92,
		2,6,9,100,100,9,9,100,9,9,100,100,9,100,
		9,100,100,9,100,4,0,0,100,100,20,26,36,112,
		1,176,80,0,90,17,106,12,67,111,100,46,32,80,
		111,115,116,97,108,0,6,90,15,106,10,80,114,111,
		118,105,110,99,105,97,0,6,4,2,0,100,89,15,
		0,0,0,1,0,1,0,95,255,88,83,0,6,89,
		15,0,0,0,1,0,1,0,95,255,88,84,0,6,
		4,2,0,100,4,0,0,90,5,92,2,6,9,100,
		100,9,9,100,9,9,100,100,9,100,9,100,100,9,
		100,4,0,0,100,100,20,26,36,118,1,176,80,0,
		90,14,106,9,84,101,108,233,102,111,110,111,0,6,
		90,9,106,4,70,97,120,0,6,4,2,0,100,89,
		15,0,0,0,1,0,1,0,95,255,88,85,0,6,
		89,15,0,0,0,1,0,1,0,95,255,88,86,0,
		6,4,2,0,100,4,0,0,90,5,92,2,6,9,
		100,100,9,9,100,9,9,100,100,9,100,9,100,100,
		9,100,4,0,0,100,100,20,26,36,120,1,176,87,
		0,20,0,36,122,1,176,88,0,95,2,12,1,31,
		58,48,89,0,95,2,112,0,28,49,36,123,1,48,
		90,0,95,2,121,92,2,92,2,112,3,73,36,124,
		1,48,91,0,95,2,89,20,0,0,0,1,0,1,
		0,85,95,255,74,176,92,0,12,0,119,6,112,1,
		73,36,127,1,48,46,0,95,2,100,89,21,0,0,
		0,1,0,1,0,85,95,255,74,176,93,0,12,0,
		119,68,6,100,100,100,100,100,100,100,100,100,100,100,
		100,112,14,73,36,129,1,48,45,0,95,3,112,0,
		73,36,130,1,48,45,0,95,4,112,0,73,36,131,
		1,48,45,0,95,2,112,0,73,36,135,1,85,95,
		1,74,176,94,0,95,6,20,1,74,36,137,1,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CCAJERO )
{
	static const HB_BYTE pcode[] =
	{
		13,6,3,36,146,1,176,96,0,12,0,80,6,36,
		147,1,9,80,7,36,148,1,9,80,8,36,149,1,
		48,97,0,95,1,112,0,80,9,36,151,1,176,88,
		0,95,9,12,1,28,31,36,152,1,95,3,100,69,
		28,16,36,153,1,48,98,0,95,3,106,1,0,112,
		1,73,36,155,1,120,110,7,36,158,1,176,2,0,
		89,15,0,1,0,0,0,176,3,0,95,1,12,1,
		6,12,1,80,4,36,159,1,113,229,0,0,36,161,
		1,95,2,100,8,28,102,36,163,1,176,7,0,120,
		176,8,0,12,0,176,5,0,12,0,106,11,67,65,
		74,69,82,79,46,68,66,70,0,72,176,9,0,106,
		7,67,65,74,69,82,79,0,96,2,0,12,2,120,
		9,20,6,36,164,1,176,10,0,12,0,31,28,176,
		11,0,176,5,0,12,0,106,11,67,65,74,69,82,
		79,46,67,68,88,0,72,20,1,25,8,176,12,0,
		122,20,1,36,165,1,120,80,7,36,169,1,85,95,
		2,74,176,99,0,95,9,12,1,119,28,51,36,171,
		1,48,98,0,95,1,95,2,88,27,0,112,1,73,
		36,173,1,95,3,100,69,28,18,36,174,1,48,98,
		0,95,3,95,2,88,28,0,112,1,73,36,177,1,
		120,80,8,25,45,36,181,1,176,13,0,106,33,67,
		111,100,105,103,111,32,100,101,32,67,97,106,101,114,
		111,47,97,32,110,111,32,101,110,99,111,110,116,114,
		97,100,111,0,20,1,36,183,1,114,72,0,0,36,
		185,1,115,80,5,36,187,1,176,13,0,106,44,73,
		109,112,111,115,105,98,108,101,32,97,98,114,105,114,
		32,116,111,100,97,115,32,108,97,115,32,98,97,115,
		101,115,32,100,101,32,100,97,116,111,115,32,13,10,
		0,176,14,0,95,5,12,1,72,20,1,36,191,1,
		176,2,0,95,4,20,1,36,193,1,95,7,28,15,
		36,194,1,85,95,2,74,176,16,0,20,0,74,36,
		197,1,95,6,106,1,0,69,28,12,36,198,1,176,
		100,0,95,6,20,1,36,201,1,95,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BRWCAJERO )
{
	static const HB_BYTE pcode[] =
	{
		13,11,4,116,135,0,36,214,1,176,102,0,106,10,
		66,114,119,67,97,106,101,114,111,0,12,1,80,11,
		36,216,1,106,7,67,243,100,105,103,111,0,106,7,
		78,111,109,98,114,101,0,4,2,0,80,13,36,218,
		1,9,80,15,36,220,1,176,103,0,176,104,0,95,
		11,122,12,2,176,105,0,95,13,12,1,12,2,80,
		11,36,221,1,95,13,95,11,1,80,14,36,223,1,
		95,4,100,8,28,5,9,80,4,36,225,1,176,2,
		0,89,15,0,1,0,0,0,176,3,0,95,1,12,
		1,6,12,1,80,5,36,226,1,113,196,3,0,36,
		228,1,176,88,0,95,2,12,1,28,102,36,229,1,
		176,7,0,120,176,8,0,12,0,176,5,0,12,0,
		106,11,67,65,74,69,82,79,46,68,66,70,0,72,
		176,9,0,106,7,67,65,74,69,82,79,0,96,2,
		0,12,2,120,9,20,6,36,230,1,176,10,0,12,
		0,31,28,176,11,0,176,5,0,12,0,106,11,67,
		65,74,69,82,79,46,67,68,88,0,72,20,1,25,
		8,176,12,0,122,20,1,36,231,1,120,80,15,36,
		234,1,85,95,2,74,176,72,0,20,0,74,36,236,
		1,48,25,0,176,57,0,12,0,100,100,100,100,106,
		19,83,101,108,101,99,99,105,111,110,97,114,32,99,
		97,106,101,114,111,0,106,10,72,69,76,80,69,78,
		84,82,89,0,100,9,100,100,100,100,100,9,100,100,
		100,100,100,9,100,106,5,111,68,108,103,0,100,100,
		112,24,80,7,36,243,1,48,59,0,176,60,0,12,
		0,92,104,89,28,0,1,0,1,0,9,0,176,61,
		0,12,0,121,8,28,6,95,255,25,7,95,1,165,
		80,255,6,95,7,100,100,89,21,0,0,0,2,0,
		10,0,2,0,176,106,0,95,255,95,254,12,2,6,
		100,100,100,100,100,9,100,89,27,0,3,0,2,0,
		10,0,2,0,176,107,0,95,1,95,2,95,3,95,
		255,95,254,12,5,6,9,9,100,100,100,100,100,100,
		106,5,70,73,78,68,0,100,100,112,25,80,8,36,
		252,1,48,59,0,176,108,0,12,0,92,102,89,28,
		0,1,0,1,0,14,0,176,61,0,12,0,121,8,
		28,6,95,255,25,7,95,1,165,80,255,6,95,13,
		95,7,100,100,89,48,0,1,0,4,0,2,0,12,
		0,10,0,8,0,85,95,255,74,176,12,0,48,109,
		0,95,254,112,0,20,1,74,48,110,0,95,253,112,
		0,73,48,56,0,95,252,112,0,6,100,100,100,9,
		100,100,100,100,100,100,112,17,80,12,36,11,2,48,
		59,0,176,111,0,12,0,92,105,89,23,0,0,0,
		1,0,2,0,95,255,88,27,0,95,255,88,28,0,
		4,2,0,6,95,7,106,7,67,111,100,105,103,111,
		0,106,7,78,111,109,98,114,101,0,4,2,0,92,
		30,93,200,0,4,2,0,100,100,100,100,89,18,0,
		3,0,1,0,7,0,48,45,0,95,255,122,112,1,
		6,100,100,100,100,100,100,9,95,2,100,100,100,100,
		112,22,80,10,36,13,2,95,4,28,41,36,14,2,
		48,112,0,95,10,92,36,112,1,73,36,15,2,48,
		113,0,95,10,92,36,112,1,73,36,16,2,48,114,
		0,95,10,92,36,112,1,73,36,22,2,48,59,0,
		176,62,0,12,0,122,89,18,0,0,0,1,0,7,
		0,48,45,0,95,255,122,112,1,6,95,7,100,100,
		9,100,100,100,9,112,10,73,36,28,2,48,59,0,
		176,62,0,12,0,92,2,89,17,0,0,0,1,0,
		7,0,48,45,0,95,255,112,0,6,95,7,100,100,
		9,100,100,100,120,112,10,73,36,34,2,48,59,0,
		176,62,0,12,0,93,244,1,89,42,0,0,0,2,
		0,10,0,2,0,176,30,0,95,255,103,5,0,95,
		254,100,89,17,0,1,0,0,0,176,35,0,95,1,
		95,254,12,2,6,12,5,6,95,7,100,100,9,100,
		100,100,9,112,10,73,36,38,2,48,59,0,176,62,
		0,12,0,93,245,1,89,24,0,0,0,2,0,10,
		0,2,0,176,32,0,95,255,103,5,0,95,254,12,
		3,6,95,7,100,100,9,100,100,100,9,112,10,73,
		36,40,2,48,46,0,95,7,48,47,0,95,7,112,
		0,48,49,0,95,7,112,0,48,51,0,95,7,112,
		0,120,100,100,100,48,48,0,95,7,112,0,100,100,
		100,112,11,73,36,42,2,48,66,0,95,7,112,0,
		122,8,28,62,36,44,2,48,98,0,95,1,95,2,
		88,27,0,112,1,73,36,45,2,48,115,0,95,1,
		112,0,73,36,47,2,176,116,0,95,3,12,1,106,
		2,79,0,8,28,18,36,48,2,48,98,0,95,3,
		95,2,88,28,0,112,1,73,36,53,2,48,56,0,
		95,1,112,0,73,36,55,2,176,117,0,95,2,20,
		1,36,57,2,176,118,0,106,10,66,114,119,67,97,
		106,101,114,111,0,85,95,2,74,176,119,0,12,0,
		119,20,2,114,72,0,0,36,59,2,115,80,6,36,
		61,2,176,13,0,106,44,73,109,112,111,115,105,98,
		108,101,32,97,98,114,105,114,32,116,111,100,97,115,
		32,108,97,115,32,98,97,115,101,115,32,100,101,32,
		100,97,116,111,115,32,13,10,0,176,14,0,95,6,
		12,1,72,20,1,36,65,2,176,2,0,95,5,20,
		1,36,67,2,95,15,28,15,36,68,2,85,95,2,
		74,176,16,0,20,0,74,36,71,2,48,66,0,95,
		7,112,0,122,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( MKCAJERO )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,116,135,0,36,77,2,95,1,100,8,28,
		9,176,5,0,12,0,80,1,36,78,2,95,2,100,
		8,28,5,9,80,2,36,80,2,176,120,0,95,1,
		106,11,67,65,74,69,82,79,46,68,66,70,0,72,
		103,6,0,176,8,0,12,0,20,3,36,81,2,176,
		121,0,95,1,95,4,20,2,36,83,2,95,2,28,
		32,176,122,0,95,3,12,1,28,23,36,84,2,176,
		123,0,95,3,95,1,106,7,67,65,74,69,82,79,
		0,20,3,36,87,2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RXCAJERO )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,116,135,0,36,97,2,95,1,100,8,28,
		9,176,124,0,12,0,80,1,36,99,2,176,4,0,
		95,1,106,11,67,65,74,69,82,79,46,68,66,70,
		0,72,12,1,31,34,36,100,2,176,120,0,95,1,
		106,11,67,65,74,69,82,79,46,68,66,70,0,72,
		103,6,0,176,8,0,12,0,20,3,36,103,2,176,
		2,0,89,15,0,1,0,0,0,176,3,0,95,1,
		12,1,6,12,1,80,3,36,104,2,113,33,2,0,
		36,106,2,176,7,0,120,176,8,0,12,0,95,1,
		106,11,67,65,74,69,82,79,46,68,66,70,0,72,
		176,9,0,106,7,67,65,74,69,82,79,0,96,5,
		0,12,2,9,20,5,36,108,2,95,2,100,69,29,
		132,0,36,109,2,48,125,0,95,2,85,95,5,74,
		176,126,0,12,0,119,122,72,112,1,73,36,110,2,
		48,127,0,95,2,106,12,49,32,67,97,106,101,114,
		111,47,97,115,0,112,1,73,36,111,2,176,128,0,
		106,11,33,68,101,108,101,116,101,100,40,41,0,90,
		9,176,129,0,12,0,68,6,100,100,89,35,0,0,
		0,2,0,2,0,5,0,48,130,0,95,255,85,95,
		254,74,176,67,0,12,0,119,112,1,73,176,21,0,
		12,0,6,122,85,95,5,74,176,67,0,12,0,119,
		100,20,8,25,32,36,113,2,176,128,0,106,11,33,
		68,101,108,101,116,101,100,40,41,0,90,9,176,129,
		0,12,0,68,6,20,2,36,116,2,176,131,0,95,
		1,106,11,67,65,74,69,82,79,46,67,68,88,0,
		72,106,8,67,67,79,68,67,65,74,0,106,15,70,
		105,101,108,100,45,62,67,67,79,68,67,65,74,0,
		90,6,91,27,0,6,100,20,5,36,118,2,95,2,
		100,69,29,168,0,36,119,2,48,127,0,95,2,106,
		12,50,32,67,97,106,101,114,111,47,97,115,0,112,
		1,73,36,120,2,176,128,0,100,100,100,100,89,35,
		0,0,0,2,0,2,0,5,0,48,130,0,95,255,
		85,95,254,74,176,67,0,12,0,119,112,1,73,176,
		21,0,12,0,6,122,85,95,5,74,176,67,0,12,
		0,119,100,20,8,36,121,2,176,128,0,106,11,33,
		68,101,108,101,116,101,100,40,41,0,90,9,176,129,
		0,12,0,68,6,100,100,89,35,0,0,0,2,0,
		2,0,5,0,48,130,0,95,255,85,95,254,74,176,
		67,0,12,0,119,112,1,73,176,21,0,12,0,6,
		122,85,95,5,74,176,67,0,12,0,119,100,20,8,
		25,32,36,123,2,176,128,0,106,11,33,68,101,108,
		101,116,101,100,40,41,0,90,9,176,129,0,12,0,
		68,6,20,2,36,126,2,176,131,0,95,1,106,11,
		67,65,74,69,82,79,46,67,68,88,0,72,106,8,
		67,78,79,77,67,65,74,0,106,15,70,105,101,108,
		100,45,62,67,78,79,77,67,65,74,0,90,6,91,
		28,0,6,20,4,114,72,0,0,36,128,2,115,80,
		4,36,130,2,176,13,0,106,44,73,109,112,111,115,
		105,98,108,101,32,97,98,114,105,114,32,116,111,100,
		97,115,32,108,97,115,32,98,97,115,101,115,32,100,
		101,32,100,97,116,111,115,32,13,10,0,176,14,0,
		95,4,12,1,72,20,1,36,134,2,176,2,0,95,
		3,20,1,36,136,2,85,95,5,74,176,16,0,20,
		0,74,36,138,2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RETCAJERO )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,36,146,2,106,1,0,80,5,36,147,2,
		9,80,6,36,149,2,176,2,0,89,15,0,1,0,
		0,0,176,3,0,95,1,12,1,6,12,1,80,3,
		36,150,2,113,147,0,0,36,152,2,95,2,100,8,
		28,102,36,153,2,176,7,0,120,176,8,0,12,0,
		176,5,0,12,0,106,11,67,65,74,69,82,79,46,
		68,66,70,0,72,176,9,0,106,7,67,65,74,69,
		82,79,0,96,2,0,12,2,120,9,20,6,36,154,
		2,176,10,0,12,0,31,28,176,11,0,176,5,0,
		12,0,106,11,67,65,74,69,82,79,46,67,68,88,
		0,72,20,1,25,8,176,12,0,122,20,1,36,155,
		2,120,80,6,36,158,2,85,95,2,74,176,99,0,
		95,1,12,1,119,28,12,36,159,2,95,2,88,28,
		0,80,5,36,160,2,114,72,0,0,36,162,2,115,
		80,4,36,164,2,176,13,0,106,44,73,109,112,111,
		115,105,98,108,101,32,97,98,114,105,114,32,116,111,
		100,97,115,32,108,97,115,32,98,97,115,101,115,32,
		100,101,32,100,97,116,111,115,32,13,10,0,176,14,
		0,95,4,12,1,72,20,1,36,168,2,176,2,0,
		95,3,20,1,36,170,2,95,6,28,15,36,171,2,
		85,95,2,74,176,16,0,20,0,74,36,174,2,176,
		75,0,95,5,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,135,0,6,0,116,135,0,4,0,0,82,1,0,
		89,27,0,7,0,0,0,176,0,0,95,1,95,2,
		95,3,95,4,95,5,95,6,95,7,12,7,6,82,
		5,0,106,8,67,67,79,68,67,65,74,0,106,2,
		67,0,92,3,121,4,4,0,106,8,67,78,79,77,
		67,65,74,0,106,2,67,0,92,30,121,4,4,0,
		106,8,67,78,73,70,67,65,74,0,106,2,67,0,
		92,15,121,4,4,0,106,8,67,68,79,77,67,65,
		74,0,106,2,67,0,92,35,121,4,4,0,106,8,
		67,80,79,66,67,65,74,0,106,2,67,0,92,30,
		121,4,4,0,106,8,67,80,82,86,67,65,74,0,
		106,2,67,0,92,20,121,4,4,0,106,8,67,67,
		68,80,67,65,74,0,106,2,67,0,92,7,121,4,
		4,0,106,8,67,84,69,76,67,65,74,0,106,2,
		67,0,92,12,121,4,4,0,106,8,67,70,65,88,
		67,65,74,0,106,2,67,0,92,12,121,4,4,0,
		4,9,0,82,6,0,7
	};

	hb_vmExecute( pcode, symbols );
}
