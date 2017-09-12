/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TScripts.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TSCRIPTS );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TMANT );
HB_FUNC_STATIC( TSCRIPTS_ACTIVATE );
HB_FUNC_STATIC( TSCRIPTS_OPENFILES );
HB_FUNC_STATIC( TSCRIPTS_DEFINEFILES );
HB_FUNC_STATIC( TSCRIPTS_RESOURCE );
HB_FUNC_STATIC( TSCRIPTS_LPRESAVE );
HB_FUNC_STATIC( TSCRIPTS_COMPILARFICHEROSCRIPT );
HB_FUNC_EXTERN( CPATSCRIPT );
HB_FUNC_STATIC( TSCRIPTS_EJECUTARFICHEROSCRIPT );
HB_FUNC_STATIC( TSCRIPTS_COMPILAREJECUTARFICHEROSCRIPT );
HB_FUNC_STATIC( TSCRIPTS_RUNSCRIPT );
HB_FUNC_STATIC( TSCRIPTS_STARTTIMER );
HB_FUNC_STATIC( TSCRIPTS_ENDTIMER );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_STATIC( TSCRIPTS_GETCOMPILEHBR );
HB_FUNC_STATIC( TSCRIPTS_RUNARRAYSCRIPTS );
HB_FUNC_STATIC( TSCRIPTS_GETCOMPILEFILES );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( NAND );
HB_FUNC_EXTERN( TFONT );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( LBLTITLE );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( NOTVALID );
HB_FUNC_EXTERN( CUSER );
HB_FUNC_EXTERN( BRWUSER );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( TMULTIGET );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( MEMOWRIT );
HB_FUNC_EXTERN( FULLCURDIR );
HB_FUNC_EXTERN( GETFILEDATETIME );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( LOGWRITE );
HB_FUNC_EXTERN( VALTOPRG );
HB_FUNC_EXTERN( WAITRUN );
HB_FUNC_EXTERN( HB_HRBLOAD );
HB_FUNC_EXTERN( HB_HRBDO );
HB_FUNC_EXTERN( HB_HRBUNLOAD );
HB_FUNC_EXTERN( CURSORWAIT );
HB_FUNC_EXTERN( CCURUSR );
HB_FUNC_EXTERN( BY );
HB_FUNC_EXTERN( TTIMER );
HB_FUNC_EXTERN( OWND );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( CURSORWE );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_STATIC( ADIRECTORYEVENTSCRIPT );
HB_FUNC( IMPORTSCRIPT );
HB_FUNC_EXTERN( GETFILENOEXT );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( CPATSCRIPTEMP );
HB_FUNC( RUNEVENTSCRIPT );
HB_FUNC_EXTERN( ISFALSE );
HB_FUNC( RUNSCRIPT );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TSCRIPTS )
{ "TSCRIPTS", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TMANT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMANT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSCRIPTS_ACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_ACTIVATE )}, NULL },
{ "TSCRIPTS_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_OPENFILES )}, NULL },
{ "TSCRIPTS_DEFINEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_DEFINEFILES )}, NULL },
{ "TSCRIPTS_RESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_RESOURCE )}, NULL },
{ "TSCRIPTS_LPRESAVE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_LPRESAVE )}, NULL },
{ "TSCRIPTS_COMPILARFICHEROSCRIPT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_COMPILARFICHEROSCRIPT )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPILARFICHEROSCRIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATSCRIPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATSCRIPT )}, NULL },
{ "TSCRIPTS_EJECUTARFICHEROSCRIPT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_EJECUTARFICHEROSCRIPT )}, NULL },
{ "TSCRIPTS_COMPILAREJECUTARFICHEROSCRIPT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_COMPILAREJECUTARFICHEROSCRIPT )}, NULL },
{ "COMPILAREJECUTARFICHEROSCRIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSCRIPTS_RUNSCRIPT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_RUNSCRIPT )}, NULL },
{ "RUNSCRIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSCRIPTS_STARTTIMER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_STARTTIMER )}, NULL },
{ "TSCRIPTS_ENDTIMER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_ENDTIMER )}, NULL },
{ "ENDTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "ATIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSCRIPTS_GETCOMPILEHBR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_GETCOMPILEHBR )}, NULL },
{ "TSCRIPTS_RUNARRAYSCRIPTS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_RUNARRAYSCRIPTS )}, NULL },
{ "TSCRIPTS_GETCOMPILEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSCRIPTS_GETCOMPILEFILES )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEFINEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( NAND )}, NULL },
{ "NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWNDPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPENFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCREATESHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATESHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWNDBRW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEARCHSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDSEABAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECADD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECDUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECEDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECZOOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECDEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPILAREJECUTARCODIGOSCRIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODSCR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDBUTTONS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHTMLHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHTMLHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFONT )}, NULL },
{ "_CFICHEROPRG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "CFICHEROPRG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AMINUTES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMINSCR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "_CTIME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATIME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LBLTITLE )}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "_CCODSCR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTVALID", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOTVALID )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDESSCR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDESSCR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODUSR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODUSR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CUSER )}, NULL },
{ "OHELPTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRWUSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( BRWUSER )}, NULL },
{ "_OTIME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "CTIME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TMULTIGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMULTIGET )}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "LPRESAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPILARCODIGOSCRIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEKINORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "_NMINSCR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OTIME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOWRIT )}, NULL },
{ "FULLCURDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FULLCURDIR )}, NULL },
{ "GETFILEDATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILEDATETIME )}, NULL },
{ "CFICHEROHBR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "LOGWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOGWRITE )}, NULL },
{ "VALTOPRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTOPRG )}, NULL },
{ "WAITRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( WAITRUN )}, NULL },
{ "DEACTIVATEALLTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATEALLTIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_HRBLOAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HRBLOAD )}, NULL },
{ "HB_HRBDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HRBDO )}, NULL },
{ "HB_HRBUNLOAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HRBUNLOAD )}, NULL },
{ "_ATIMER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CURSORWAIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURSORWAIT )}, NULL },
{ "GOTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCURUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CCURUSR )}, NULL },
{ "BY", {HB_FS_PUBLIC}, {HB_FUNCNAME( BY )}, NULL },
{ "TTIMER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TTIMER )}, NULL },
{ "RUNCODIGOSCRIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {HB_FUNCNAME( OWND )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "SKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CURSORWE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURSORWE )}, NULL },
{ "_CFICHEROHBR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "EJECUTARFICHEROSCRIPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIRECTORYEVENTSCRIPT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ADIRECTORYEVENTSCRIPT )}, NULL },
{ "GETCOMPILEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMPORTSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMPORTSCRIPT )}, NULL },
{ "GETFILENOEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETFILENOEXT )}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL },
{ "CPATSCRIPTEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATSCRIPTEMP )}, NULL },
{ "RUNEVENTSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RUNEVENTSCRIPT )}, NULL },
{ "ISFALSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISFALSE )}, NULL },
{ "RUNSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RUNSCRIPT )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TSCRIPTS, ".\\.\\Prg\\TScripts.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TSCRIPTS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TSCRIPTS )
   #include "hbiniseg.h"
#endif

HB_FUNC( TSCRIPTS )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,162,0,36,7,0,103,2,0,100,8,
		29,178,6,176,1,0,104,2,0,12,1,29,167,6,
		166,105,6,0,122,80,1,48,2,0,176,3,0,12,
		0,106,9,84,83,99,114,105,112,116,115,0,108,4,
		4,1,0,108,0,112,3,80,2,36,9,0,48,5,
		0,95,2,100,106,16,103,99,95,99,111,100,101,95,
		108,105,110,101,95,49,54,0,95,1,121,72,121,72,
		121,72,106,5,99,77,114,117,0,4,1,0,9,112,
		5,73,36,10,0,48,5,0,95,2,100,106,12,87,
		101,98,84,111,112,66,108,97,99,107,0,95,1,121,
		72,121,72,121,72,106,8,99,66,105,116,109,97,112,
		0,4,1,0,9,112,5,73,36,11,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,13,
		111,66,116,110,69,106,101,99,117,116,97,114,0,4,
		1,0,9,112,5,73,36,12,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,13,111,66,
		116,110,67,111,109,112,105,108,97,114,0,4,1,0,
		9,112,5,73,36,13,0,48,5,0,95,2,100,100,
		95,1,121,72,121,72,121,72,106,12,99,70,105,99,
		104,101,114,111,80,82,71,0,4,1,0,9,112,5,
		73,36,14,0,48,5,0,95,2,100,100,95,1,121,
		72,121,72,121,72,106,12,99,70,105,99,104,101,114,
		111,72,98,114,0,4,1,0,9,112,5,73,36,16,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,6,111,84,105,109,101,0,4,1,0,9,
		112,5,73,36,17,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,6,99,84,105,109,101,
		0,4,1,0,9,112,5,73,36,18,0,48,5,0,
		95,2,100,106,7,48,32,109,105,110,46,0,106,7,
		49,32,109,105,110,46,0,106,7,50,32,109,105,110,
		46,0,106,7,53,32,109,105,110,46,0,106,8,49,
		48,32,109,105,110,46,0,106,8,49,53,32,109,105,
		110,46,0,106,8,51,48,32,109,105,110,46,0,106,
		8,52,53,32,109,105,110,46,0,106,7,49,32,104,
		111,114,97,0,106,8,50,32,104,111,114,97,115,0,
		106,8,52,32,104,111,114,97,115,0,106,8,56,32,
		104,111,114,97,115,0,4,12,0,95,1,121,72,121,
		72,121,72,106,6,97,84,105,109,101,0,4,1,0,
		9,112,5,73,36,20,0,48,5,0,95,2,100,121,
		122,92,2,92,5,92,10,92,15,92,30,92,45,92,
		60,92,120,93,240,0,93,224,1,4,12,0,95,1,
		121,72,121,72,121,72,106,9,97,77,105,110,117,116,
		101,115,0,4,1,0,9,112,5,73,36,22,0,48,
		6,0,95,2,100,4,0,0,95,1,121,72,92,32,
		72,121,72,121,72,106,7,97,84,105,109,101,114,0,
		4,1,0,9,112,5,73,36,24,0,48,7,0,95,
		2,106,9,65,99,116,105,118,97,116,101,0,108,8,
		95,1,121,72,121,72,121,72,112,3,73,36,26,0,
		48,7,0,95,2,106,10,79,112,101,110,70,105,108,
		101,115,0,108,9,95,1,121,72,121,72,121,72,112,
		3,73,36,28,0,48,7,0,95,2,106,12,68,101,
		102,105,110,101,70,105,108,101,115,0,108,10,95,1,
		121,72,121,72,121,72,112,3,73,36,30,0,48,7,
		0,95,2,106,9,82,101,115,111,117,114,99,101,0,
		108,11,95,1,121,72,121,72,121,72,112,3,73,36,
		32,0,48,7,0,95,2,106,9,108,80,114,101,83,
		97,118,101,0,108,12,95,1,121,72,121,72,121,72,
		112,3,73,36,36,0,48,7,0,95,2,106,22,67,
		111,109,112,105,108,97,114,70,105,99,104,101,114,111,
		83,99,114,105,112,116,0,108,13,95,1,121,72,121,
		72,121,72,112,3,73,36,37,0,48,14,0,95,2,
		106,21,67,111,109,112,105,108,97,114,67,111,100,105,
		103,111,83,99,114,105,112,116,0,89,31,0,2,0,
		0,0,48,15,0,95,1,176,16,0,12,0,95,2,
		72,106,5,46,112,114,103,0,72,112,1,6,95,1,
		121,72,121,72,121,72,112,3,73,36,39,0,48,7,
		0,95,2,106,22,69,106,101,99,117,116,97,114,70,
		105,99,104,101,114,111,83,99,114,105,112,116,0,108,
		17,95,1,121,72,121,72,121,72,112,3,73,36,40,
		0,48,14,0,95,2,106,21,69,106,101,99,117,116,
		97,114,67,111,100,105,103,111,83,99,114,105,112,116,
		0,89,31,0,2,0,0,0,48,15,0,95,1,176,
		16,0,12,0,95,2,72,106,5,46,104,98,114,0,
		72,112,1,6,95,1,121,72,121,72,121,72,112,3,
		73,36,42,0,48,7,0,95,2,106,30,67,111,109,
		112,105,108,97,114,69,106,101,99,117,116,97,114,70,
		105,99,104,101,114,111,83,99,114,105,112,116,0,108,
		18,95,1,121,72,121,72,121,72,112,3,73,36,45,
		0,48,14,0,95,2,106,29,67,111,109,112,105,108,
		97,114,69,106,101,99,117,116,97,114,67,111,100,105,
		103,111,83,99,114,105,112,116,0,89,31,0,2,0,
		0,0,48,19,0,95,1,176,16,0,12,0,95,2,
		72,106,5,46,112,114,103,0,72,112,1,6,95,1,
		121,72,121,72,121,72,112,3,73,36,47,0,48,7,
		0,95,2,106,10,82,117,110,83,99,114,105,112,116,
		0,108,20,95,1,121,72,121,72,121,72,112,3,73,
		36,48,0,48,14,0,95,2,106,16,82,117,110,67,
		111,100,105,103,111,83,99,114,105,112,116,0,89,31,
		0,2,0,0,0,48,21,0,95,1,176,16,0,12,
		0,95,2,72,106,5,46,104,98,114,0,72,112,1,
		6,95,1,121,72,121,72,121,72,112,3,73,36,52,
		0,48,7,0,95,2,106,11,83,116,97,114,116,84,
		105,109,101,114,0,108,22,95,1,121,72,121,72,121,
		72,112,3,73,36,53,0,48,7,0,95,2,106,9,
		69,110,100,84,105,109,101,114,0,108,23,95,1,121,
		72,121,72,121,72,112,3,73,36,54,0,48,14,0,
		95,2,106,13,82,101,83,116,97,114,116,84,105,109,
		101,114,0,89,23,0,1,0,0,0,48,24,0,95,
		1,112,0,73,48,25,0,95,1,112,0,6,95,1,
		121,72,121,72,121,72,112,3,73,36,56,0,48,14,
		0,95,2,106,17,65,99,116,105,118,97,116,101,65,
		108,108,84,105,109,101,114,0,89,35,0,1,0,0,
		0,176,26,0,48,27,0,95,1,112,0,89,15,0,
		1,0,0,0,48,28,0,95,1,112,0,6,12,2,
		6,95,1,121,72,121,72,121,72,112,3,73,36,57,
		0,48,14,0,95,2,106,19,68,101,65,99,116,105,
		118,97,116,101,65,108,108,84,105,109,101,114,0,89,
		35,0,1,0,0,0,176,26,0,48,27,0,95,1,
		112,0,89,15,0,1,0,0,0,48,29,0,95,1,
		112,0,6,12,2,6,95,1,121,72,121,72,121,72,
		112,3,73,36,59,0,48,7,0,95,2,106,14,103,
		101,116,67,111,109,112,105,108,101,72,98,114,0,108,
		30,95,1,121,72,121,72,121,72,112,3,73,36,61,
		0,48,7,0,95,2,106,16,114,117,110,65,114,114,
		97,121,83,99,114,105,112,116,115,0,108,31,95,1,
		121,72,121,72,121,72,112,3,73,36,63,0,48,7,
		0,95,2,106,16,103,101,116,67,111,109,112,105,108,
		101,70,105,108,101,115,0,108,32,95,1,121,72,121,
		72,121,72,112,3,73,36,65,0,48,33,0,95,2,
		112,0,73,167,14,0,0,176,34,0,104,2,0,95,
		2,20,2,168,48,35,0,95,2,112,0,80,3,176,
		36,0,95,3,106,10,73,110,105,116,67,108,97,115,
		115,0,12,2,28,12,48,37,0,95,3,164,146,1,
		0,73,95,3,110,7,48,35,0,103,2,0,112,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,71,0,120,80,3,36,75,0,95,1,
		100,8,28,5,9,80,1,36,77,0,176,38,0,89,
		10,0,1,0,0,0,95,1,6,12,1,80,5,36,
		78,0,113,61,0,0,36,80,0,176,39,0,48,40,
		0,102,112,0,12,1,28,20,36,81,0,48,41,0,
		102,48,42,0,102,95,2,112,1,112,1,73,36,84,
		0,48,28,0,48,40,0,102,112,0,9,95,1,68,
		112,2,73,114,87,0,0,36,86,0,115,80,4,36,
		88,0,9,80,3,36,90,0,48,43,0,102,112,0,
		73,36,92,0,176,44,0,106,43,73,109,112,111,115,
		105,98,108,101,32,97,98,114,105,114,32,116,111,100,
		97,115,32,108,97,115,32,98,97,115,101,115,32,100,
		101,32,100,97,116,111,115,13,10,0,176,45,0,95,
		4,12,1,72,20,1,36,96,0,176,38,0,95,5,
		20,1,36,98,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_DEFINEFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,36,106,0,95,1,100,8,28,10,48,46,
		0,102,112,0,80,1,36,108,0,48,2,0,176,47,
		0,106,12,83,99,114,105,112,116,115,46,68,98,102,
		0,106,8,83,99,114,105,112,116,115,0,12,2,106,
		12,83,99,114,105,112,116,115,46,68,98,102,0,106,
		8,83,99,114,105,112,116,115,0,176,48,0,12,0,
		106,8,83,99,114,105,112,116,115,0,95,1,112,5,
		80,3,36,110,0,48,49,0,95,3,106,8,99,67,
		111,100,83,99,114,0,106,2,67,0,92,3,121,100,
		100,100,100,106,7,67,243,100,105,103,111,0,9,92,
		100,9,4,0,0,112,13,73,36,111,0,48,49,0,
		95,3,106,8,99,68,101,115,83,99,114,0,106,2,
		67,0,92,35,121,100,100,100,100,106,7,78,111,109,
		98,114,101,0,9,93,144,1,9,4,0,0,112,13,
		73,36,112,0,48,49,0,95,3,106,8,110,77,105,
		110,83,99,114,0,106,2,78,0,92,3,121,100,100,
		100,100,106,8,77,105,110,117,116,111,115,0,9,100,
		120,4,0,0,112,13,73,36,113,0,48,49,0,95,
		3,106,8,99,67,111,100,85,115,114,0,106,2,67,
		0,92,3,121,100,100,100,100,106,18,67,243,100,105,
		103,111,32,100,101,32,117,115,117,97,114,105,111,0,
		9,100,120,4,0,0,112,13,73,36,115,0,48,50,
		0,95,3,106,8,99,67,111,100,83,99,114,0,106,
		12,83,99,114,105,112,116,115,46,67,100,120,0,106,
		8,99,67,111,100,83,99,114,0,100,100,9,9,106,
		7,67,243,100,105,103,111,0,100,100,120,9,112,12,
		73,36,116,0,48,50,0,95,3,106,8,99,68,101,
		115,83,99,114,0,106,12,83,99,114,105,112,116,115,
		46,67,100,120,0,106,8,99,68,101,115,83,99,114,
		0,100,100,9,9,106,7,78,111,109,98,114,101,0,
		100,100,120,9,112,12,73,36,120,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_ACTIVATE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,124,0,102,80,1,36,126,0,48,24,
		0,95,1,112,0,73,36,128,0,176,51,0,48,52,
		0,95,1,112,0,122,12,2,121,8,29,206,2,36,
		134,0,48,53,0,95,1,112,0,100,69,28,18,36,
		135,0,48,54,0,48,53,0,95,1,112,0,112,0,
		73,36,138,0,176,39,0,48,40,0,95,1,112,0,
		12,1,28,20,36,139,0,48,55,0,95,1,112,0,
		31,8,36,140,0,100,110,7,36,148,0,48,56,0,
		95,1,112,0,31,20,36,149,0,48,57,0,95,1,
		48,52,0,95,1,112,0,112,1,73,36,157,0,48,
		58,0,48,59,0,95,1,112,0,106,4,66,85,83,
		0,100,100,89,22,0,0,0,1,0,1,0,48,60,
		0,48,59,0,95,255,112,0,112,0,6,106,9,40,
		66,41,117,115,99,97,114,0,106,2,66,0,100,100,
		100,100,9,112,11,73,36,158,0,48,61,0,48,59,
		0,95,1,112,0,112,0,73,36,167,0,48,58,0,
		48,59,0,95,1,112,0,106,4,78,69,87,0,100,
		100,89,22,0,0,0,1,0,1,0,48,62,0,48,
		59,0,95,255,112,0,112,0,6,106,9,40,65,41,
		241,97,100,105,114,0,106,2,65,0,100,100,92,2,
		100,9,112,11,73,36,174,0,48,58,0,48,59,0,
		95,1,112,0,106,4,68,85,80,0,100,100,89,22,
		0,0,0,1,0,1,0,48,63,0,48,59,0,95,
		255,112,0,112,0,6,106,11,40,68,41,117,112,108,
		105,99,97,114,0,106,2,68,0,100,100,92,2,100,
		9,112,11,73,36,181,0,48,58,0,48,59,0,95,
		1,112,0,106,5,69,68,73,84,0,100,100,89,22,
		0,0,0,1,0,1,0,48,64,0,48,59,0,95,
		255,112,0,112,0,6,106,12,40,77,41,111,100,105,
		102,105,99,97,114,0,106,2,77,0,100,100,92,4,
		100,9,112,11,73,36,188,0,48,58,0,48,59,0,
		95,1,112,0,106,5,90,79,79,77,0,100,100,89,
		22,0,0,0,1,0,1,0,48,65,0,48,59,0,
		95,255,112,0,112,0,6,106,7,40,90,41,111,111,
		109,0,106,2,90,0,100,100,92,8,100,9,112,11,
		73,36,196,0,48,58,0,48,59,0,95,1,112,0,
		106,4,68,69,76,0,100,100,89,22,0,0,0,1,
		0,1,0,48,66,0,48,59,0,95,255,112,0,112,
		0,6,106,11,40,69,41,108,105,109,105,110,97,114,
		0,106,2,69,0,100,100,92,16,100,9,112,11,73,
		36,205,0,48,58,0,48,59,0,95,1,112,0,106,
		10,103,99,95,102,108,97,115,104,95,0,100,100,89,
		29,0,0,0,1,0,1,0,48,67,0,95,255,48,
		68,0,48,40,0,95,255,112,0,112,0,112,1,6,
		106,11,69,40,106,41,101,99,117,116,97,114,0,106,
		2,74,0,100,100,92,8,100,9,112,11,73,36,207,
		0,48,69,0,48,59,0,95,1,112,0,95,1,112,
		1,73,36,209,0,48,70,0,95,1,112,0,100,69,
		28,25,36,210,0,48,71,0,48,59,0,95,1,112,
		0,48,70,0,95,1,112,0,112,1,73,36,213,0,
		48,28,0,48,59,0,95,1,112,0,100,100,100,100,
		100,100,100,100,100,100,100,100,100,100,100,100,89,25,
		0,0,0,1,0,1,0,48,43,0,95,255,112,0,
		73,48,25,0,95,255,112,0,6,112,17,73,25,33,
		36,217,0,176,44,0,106,21,65,99,99,101,115,111,
		32,110,111,32,112,101,114,109,105,116,105,100,111,46,
		0,20,1,36,221,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_RESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,8,1,36,225,0,102,80,2,36,233,0,48,2,
		0,176,72,0,12,0,106,12,67,111,117,114,105,101,
		114,32,78,101,119,0,92,8,92,18,9,120,112,5,
		80,9,36,235,0,95,1,122,69,28,73,36,237,0,
		48,73,0,95,2,176,16,0,12,0,48,68,0,48,
		40,0,95,2,112,0,112,0,72,106,5,46,112,114,
		103,0,72,112,1,73,36,239,0,176,74,0,48,75,
		0,95,2,112,0,12,1,28,19,36,240,0,176,76,
		0,48,75,0,95,2,112,0,12,1,80,7,36,245,
		0,176,77,0,48,78,0,95,2,112,0,48,79,0,
		48,40,0,95,2,112,0,112,0,12,2,80,8,36,
		246,0,176,80,0,176,81,0,95,8,122,12,2,176,
		82,0,48,78,0,95,2,112,0,12,1,12,2,80,
		8,36,248,0,48,83,0,95,2,48,84,0,95,2,
		112,0,95,8,1,112,1,73,36,250,0,48,2,0,
		176,85,0,12,0,100,100,100,100,176,86,0,95,1,
		12,1,106,7,83,99,114,105,112,116,0,72,106,8,
		83,99,114,105,112,116,115,0,100,9,100,100,100,100,
		100,9,100,100,100,100,100,9,100,106,5,111,68,108,
		103,0,100,100,112,24,80,3,36,1,1,48,87,0,
		176,88,0,12,0,92,100,89,47,0,1,0,1,0,
		2,0,176,89,0,12,0,121,8,28,16,48,68,0,
		48,40,0,95,255,112,0,112,0,25,16,48,90,0,
		48,40,0,95,255,112,0,95,1,112,1,6,95,3,
		100,106,3,64,33,0,89,36,0,0,0,2,0,4,
		0,2,0,176,91,0,95,255,48,92,0,48,40,0,
		95,254,112,0,112,0,120,106,2,48,0,12,4,6,
		100,100,100,100,100,9,89,14,0,0,0,1,0,1,
		0,95,255,122,8,6,100,9,9,100,100,100,100,100,
		100,100,100,100,112,25,80,4,36,6,1,48,87,0,
		176,88,0,12,0,92,110,89,47,0,1,0,1,0,
		2,0,176,89,0,12,0,121,8,28,16,48,93,0,
		48,40,0,95,255,112,0,112,0,25,16,48,94,0,
		48,40,0,95,255,112,0,95,1,112,1,6,95,3,
		100,100,100,100,100,100,100,100,9,89,15,0,0,0,
		1,0,1,0,95,255,92,3,69,6,100,9,9,100,
		100,100,100,100,100,100,100,100,112,25,73,36,13,1,
		48,87,0,176,88,0,12,0,93,130,0,89,47,0,
		1,0,1,0,2,0,176,89,0,12,0,121,8,28,
		16,48,95,0,48,40,0,95,255,112,0,112,0,25,
		16,48,96,0,48,40,0,95,255,112,0,95,1,112,
		1,6,95,3,100,100,89,25,0,0,0,1,0,5,
		0,176,97,0,95,255,100,48,98,0,95,255,112,0,
		12,3,6,100,100,100,100,100,9,100,100,9,9,100,
		100,100,100,100,100,106,5,76,85,80,65,0,100,93,
		131,0,112,25,80,5,36,15,1,48,99,0,95,5,
		89,29,0,0,0,1,0,5,0,176,100,0,95,255,
		100,48,98,0,95,255,112,0,9,9,9,120,12,7,
		6,112,1,73,36,20,1,48,101,0,95,2,48,87,
		0,176,102,0,12,0,92,120,89,37,0,1,0,1,
		0,2,0,176,89,0,12,0,121,8,28,11,48,103,
		0,95,255,112,0,25,11,48,83,0,95,255,95,1,
		112,1,6,48,84,0,95,2,112,0,95,3,100,100,
		100,100,100,100,9,100,100,100,100,100,100,112,17,112,
		1,73,36,26,1,48,87,0,176,104,0,12,0,93,
		200,0,89,28,0,1,0,1,0,7,0,176,89,0,
		12,0,121,8,28,6,95,255,25,7,95,1,165,80,
		255,6,95,3,100,100,100,95,9,100,100,9,89,15,
		0,0,0,1,0,1,0,95,255,92,3,69,6,9,
		100,100,112,14,80,6,36,32,1,48,87,0,176,105,
		0,12,0,122,89,40,0,0,0,4,0,2,0,1,
		0,7,0,3,0,48,106,0,95,255,95,254,95,253,
		112,2,28,12,48,107,0,95,252,122,112,1,25,3,
		100,6,95,3,100,100,9,89,15,0,0,0,1,0,
		1,0,95,255,92,3,69,6,100,100,9,112,10,73,
		36,38,1,48,87,0,176,105,0,12,0,92,2,89,
		17,0,0,0,1,0,3,0,48,107,0,95,255,112,
		0,6,95,3,100,100,9,100,100,100,120,112,10,73,
		36,44,1,48,87,0,176,105,0,12,0,93,244,1,
		89,60,0,0,0,4,0,2,0,1,0,7,0,3,
		0,48,106,0,95,255,95,254,95,253,112,2,28,32,
		48,108,0,95,255,48,68,0,48,40,0,95,255,112,
		0,112,0,112,1,73,48,107,0,95,252,122,112,1,
		25,3,100,6,95,3,100,100,9,89,15,0,0,0,
		1,0,1,0,95,255,92,3,69,6,100,100,9,112,
		10,73,36,46,1,95,1,92,3,69,28,55,36,47,
		1,48,109,0,95,3,92,116,89,40,0,0,0,4,
		0,2,0,1,0,7,0,3,0,48,106,0,95,255,
		95,254,95,253,112,2,28,12,48,107,0,95,252,122,
		112,1,25,3,100,6,112,2,73,36,50,1,48,110,
		0,95,3,89,17,0,0,0,1,0,4,0,48,111,
		0,95,255,112,0,6,112,1,73,36,52,1,48,28,
		0,95,3,48,112,0,95,3,112,0,48,113,0,95,
		3,112,0,48,114,0,95,3,112,0,120,100,100,100,
		48,115,0,95,3,112,0,100,100,100,112,11,73,36,
		54,1,176,39,0,95,9,12,1,31,13,36,55,1,
		48,107,0,95,9,112,0,73,36,58,1,48,73,0,
		95,2,106,1,0,112,1,73,36,60,1,48,116,0,
		95,3,112,0,122,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_LPRESAVE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,66,1,95,1,122,8,31,9,95,1,
		92,4,8,28,90,36,68,1,48,117,0,48,40,0,
		102,112,0,48,68,0,48,40,0,102,112,0,112,0,
		106,8,99,67,111,100,83,99,114,0,112,2,28,53,
		36,69,1,176,44,0,106,18,67,243,100,105,103,111,
		32,121,97,32,101,120,105,115,116,101,32,0,176,118,
		0,48,68,0,48,40,0,102,112,0,112,0,12,1,
		72,20,1,36,70,1,9,110,7,36,75,1,176,39,
		0,48,93,0,48,40,0,102,112,0,112,0,12,1,
		28,66,36,76,1,176,44,0,106,48,76,97,32,100,
		101,115,99,114,105,112,99,105,243,110,32,100,101,108,
		32,83,99,114,105,112,116,32,110,111,32,112,117,101,
		100,101,32,101,115,116,97,114,32,118,97,99,237,97,
		46,0,20,1,36,77,1,9,110,7,36,80,1,48,
		119,0,48,40,0,102,112,0,48,78,0,102,112,0,
		48,120,0,48,121,0,102,112,0,112,0,1,112,1,
		73,36,82,1,95,1,92,3,69,28,69,36,88,1,
		176,39,0,48,75,0,102,112,0,12,1,28,37,36,
		89,1,48,73,0,102,176,16,0,12,0,48,68,0,
		48,40,0,102,112,0,112,0,72,106,5,46,112,114,
		103,0,72,112,1,73,36,92,1,176,122,0,48,75,
		0,102,112,0,95,2,20,2,36,96,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_COMPILARFICHEROSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,106,1,95,1,100,8,28,5,120,80,
		1,36,108,1,176,74,0,176,123,0,12,0,106,20,
		104,97,114,98,111,117,114,92,104,97,114,98,111,117,
		114,46,101,120,101,0,72,12,1,31,39,36,109,1,
		176,44,0,106,21,78,111,32,101,120,105,115,116,101,
		32,99,111,109,112,105,108,97,100,111,114,0,20,1,
		36,110,1,120,110,7,36,113,1,176,74,0,48,75,
		0,102,112,0,12,1,31,47,36,114,1,176,44,0,
		106,22,78,111,32,101,120,105,115,116,101,32,101,108,
		32,102,105,99,104,101,114,111,32,0,48,75,0,102,
		112,0,72,20,1,36,115,1,120,110,7,36,120,1,
		176,124,0,48,75,0,102,112,0,12,1,176,124,0,
		48,125,0,102,112,0,12,1,15,29,191,1,36,122,
		1,176,126,0,48,125,0,102,112,0,20,1,36,124,
		1,95,1,28,118,36,125,1,176,127,0,176,123,0,
		12,0,106,21,104,97,114,98,111,117,114,92,104,97,
		114,98,111,117,114,46,101,120,101,32,0,72,48,75,
		0,102,112,0,72,106,4,32,47,105,0,72,176,123,
		0,12,0,72,106,21,105,110,99,108,117,100,101,32,
		47,103,104,32,47,110,32,47,112,32,47,111,0,72,
		48,125,0,102,112,0,72,106,4,32,62,32,0,72,
		176,123,0,12,0,72,106,12,99,111,109,112,105,108,
		101,46,108,111,103,0,72,20,1,36,128,1,176,128,
		0,176,123,0,12,0,106,21,104,97,114,98,111,117,
		114,92,104,97,114,98,111,117,114,46,101,120,101,32,
		0,72,176,129,0,48,75,0,102,112,0,12,1,72,
		106,4,32,47,105,0,72,176,123,0,12,0,72,106,
		21,105,110,99,108,117,100,101,32,47,103,104,32,47,
		110,32,47,112,32,47,111,0,72,176,129,0,48,125,
		0,102,112,0,12,1,72,106,4,32,124,32,0,72,
		176,123,0,12,0,72,106,12,99,111,109,112,105,108,
		101,46,108,111,103,0,72,20,1,36,130,1,176,130,
		0,176,123,0,12,0,106,21,104,97,114,98,111,117,
		114,92,104,97,114,98,111,117,114,46,101,120,101,32,
		0,72,48,75,0,102,112,0,72,106,4,32,47,105,
		0,72,176,123,0,12,0,72,106,21,105,110,99,108,
		117,100,101,32,47,103,104,32,47,110,32,47,112,32,
		47,111,0,72,48,125,0,102,112,0,72,106,4,32,
		124,32,0,72,176,123,0,12,0,72,106,12,99,111,
		109,112,105,108,101,46,108,111,103,0,72,92,6,20,
		2,36,132,1,176,74,0,48,125,0,102,112,0,12,
		1,31,49,36,133,1,176,44,0,106,30,69,114,114,
		111,114,32,97,108,32,99,111,109,112,105,108,97,114,
		32,101,108,32,102,105,99,104,101,114,111,32,0,48,
		125,0,102,112,0,72,20,1,36,138,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_EJECUTARFICHEROSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,10,36,148,1,48,131,0,102,112,0,73,36,
		152,1,48,21,0,102,48,125,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,95,7,95,8,
		95,9,95,10,112,11,80,11,36,156,1,48,132,0,
		102,112,0,73,36,158,1,95,11,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_RUNSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,11,36,172,1,176,74,0,95,1,12,1,28,
		56,36,173,1,176,133,0,95,1,12,1,80,12,36,
		174,1,176,134,0,95,12,95,2,95,3,95,4,95,
		5,95,6,95,7,95,8,95,9,95,10,95,11,12,
		11,80,13,36,175,1,176,135,0,95,12,20,1,36,
		184,1,95,13,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_STARTTIMER )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,36,188,1,102,80,1,36,193,1,48,136,
		0,95,1,4,0,0,112,1,73,36,195,1,176,137,
		0,20,0,36,197,1,48,55,0,95,1,112,0,29,
		235,0,36,199,1,48,138,0,48,40,0,95,1,112,
		0,112,0,73,36,200,1,48,139,0,48,40,0,95,
		1,112,0,112,0,32,190,0,36,202,1,48,79,0,
		48,40,0,95,1,112,0,112,0,121,69,29,151,0,
		176,39,0,48,95,0,48,40,0,95,1,112,0,112,
		0,12,1,31,22,48,95,0,48,40,0,95,1,112,
		0,112,0,176,140,0,12,0,8,28,111,36,204,1,
		176,141,0,48,68,0,48,40,0,95,1,112,0,112,
		0,12,1,80,2,36,206,1,48,2,0,176,142,0,
		12,0,48,79,0,48,40,0,95,1,112,0,112,0,
		97,96,234,0,0,65,89,21,0,0,0,2,0,1,
		0,2,0,48,143,0,95,255,95,254,112,1,6,176,
		144,0,12,0,112,3,80,3,36,207,1,48,28,0,
		95,3,112,0,73,36,209,1,176,145,0,48,27,0,
		95,1,112,0,95,3,20,2,36,213,1,48,146,0,
		48,40,0,95,1,112,0,112,0,73,26,54,255,36,
		217,1,48,43,0,95,1,112,0,73,36,221,1,176,
		147,0,20,0,36,223,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_ENDTIMER )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,36,231,1,48,27,0,102,112,0,96,1,
		0,129,1,1,28,19,36,232,1,48,107,0,95,1,
		112,0,73,36,233,1,130,31,241,132,36,235,1,120,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_COMPILAREJECUTARFICHEROSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,11,36,243,1,176,39,0,95,1,12,1,31,
		45,36,244,1,48,73,0,102,95,1,112,1,73,36,
		245,1,48,148,0,102,176,149,0,95,1,106,5,46,
		112,114,103,0,106,5,46,104,98,114,0,12,3,112,
		1,73,36,248,1,48,15,0,102,112,0,73,36,250,
		1,48,150,0,102,95,2,95,3,95,4,95,5,95,
		6,95,7,95,8,95,9,95,10,95,11,112,10,80,
		12,36,252,1,95,12,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_GETCOMPILEHBR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,2,2,4,0,0,80,2,36,4,2,
		176,151,0,95,1,12,1,80,2,36,6,2,176,39,
		0,95,2,12,1,31,15,36,7,2,48,152,0,102,
		95,2,112,1,110,7,36,10,2,4,0,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_GETCOMPILEFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,17,2,4,0,0,80,3,36,19,2,
		95,1,96,2,0,129,1,1,28,112,36,21,2,176,
		39,0,95,2,122,1,12,1,31,49,36,22,2,48,
		73,0,102,95,2,122,1,112,1,73,36,23,2,48,
		148,0,102,176,149,0,95,2,122,1,106,5,46,112,
		114,103,0,106,5,46,104,98,114,0,12,3,112,1,
		73,36,26,2,48,15,0,102,9,112,1,73,36,28,
		2,176,74,0,48,125,0,102,112,0,12,1,28,18,
		36,29,2,176,145,0,95,3,48,125,0,102,112,0,
		20,2,36,32,2,130,31,148,132,36,34,2,95,3,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSCRIPTS_RUNARRAYSCRIPTS )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,41,2,120,80,4,36,43,2,176,39,
		0,95,1,12,1,31,37,36,45,2,95,1,96,3,
		0,129,1,1,28,23,36,47,2,48,21,0,102,95,
		3,95,2,112,2,80,4,36,49,2,130,31,237,132,
		36,53,2,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( IMPORTSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,13,36,62,2,176,151,0,95,3,12,1,80,
		15,36,64,2,176,39,0,95,15,12,1,32,141,0,
		36,66,2,95,15,96,14,0,129,1,1,28,126,36,
		68,2,48,58,0,95,1,106,19,103,99,95,100,111,
		99,117,109,101,110,116,95,119,104,105,116,101,95,0,
		100,100,89,64,0,0,0,11,0,14,0,4,0,5,
		0,6,0,7,0,8,0,9,0,10,0,11,0,12,
		0,13,0,48,19,0,176,0,0,12,0,95,255,122,
		1,95,254,95,253,95,252,95,251,95,250,95,249,95,
		248,95,247,95,246,95,245,112,11,6,176,154,0,176,
		118,0,95,14,122,1,12,1,12,1,100,100,100,100,
		95,2,112,10,73,36,70,2,130,31,134,132,36,74,
		2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ADIRECTORYEVENTSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,82,2,176,155,0,176,156,0,12,0,
		95,1,72,106,7,92,42,46,112,114,103,0,72,12,
		1,80,2,36,83,2,176,39,0,95,2,12,1,31,
		52,36,84,2,176,26,0,95,2,89,33,0,1,0,
		1,0,1,0,176,156,0,12,0,95,255,72,106,2,
		92,0,72,95,1,122,1,72,165,95,1,122,2,6,
		20,2,36,85,2,95,2,110,7,36,88,2,176,155,
		0,176,16,0,12,0,95,1,72,106,7,92,42,46,
		112,114,103,0,72,12,1,80,2,36,89,2,176,39,
		0,95,2,12,1,31,45,36,90,2,176,26,0,95,
		2,89,33,0,1,0,1,0,1,0,176,16,0,12,
		0,95,255,72,106,2,92,0,72,95,1,122,1,72,
		165,95,1,122,2,6,20,2,36,93,2,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RUNEVENTSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,11,36,103,2,176,151,0,95,1,12,1,80,
		13,36,105,2,176,39,0,95,13,12,1,28,8,36,
		106,2,100,110,7,36,109,2,95,13,96,12,0,129,
		1,1,28,64,36,111,2,48,19,0,176,0,0,12,
		0,95,12,122,1,95,2,95,3,95,4,95,5,95,
		6,95,7,95,8,95,9,95,10,95,11,112,11,80,
		14,36,113,2,176,158,0,95,14,12,1,28,7,36,
		114,2,25,8,36,117,2,130,31,196,132,36,119,2,
		95,14,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( RUNSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,11,36,125,2,176,74,0,176,156,0,12,0,
		95,1,72,12,1,28,45,36,126,2,48,19,0,176,
		0,0,12,0,176,156,0,12,0,95,1,72,95,2,
		95,3,95,4,95,5,95,6,95,7,95,8,95,9,
		95,10,95,11,112,11,110,7,36,129,2,176,74,0,
		176,16,0,12,0,95,1,72,12,1,28,45,36,130,
		2,48,19,0,176,0,0,12,0,176,16,0,12,0,
		95,1,72,95,2,95,3,95,4,95,5,95,6,95,
		7,95,8,95,9,95,10,95,11,112,11,110,7,36,
		133,2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,162,0,2,0,116,162,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
