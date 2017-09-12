/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\TInvitacion.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TINVITACION );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TMANT );
HB_FUNC_STATIC( TINVITACION_CREATE );
HB_FUNC_STATIC( TINVITACION_NEW );
HB_FUNC_STATIC( TINVITACION_OPENFILES );
HB_FUNC_STATIC( TINVITACION_DEFINEFILES );
HB_FUNC_STATIC( TINVITACION_RESOURCE );
HB_FUNC_STATIC( TINVITACION_LPRESAVE );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( LEN );
HB_FUNC_STATIC( TINVITACION_NPRECIOINVITACION );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( CPATEMP );
HB_FUNC_EXTERN( GETWNDFRAME );
HB_FUNC_EXTERN( NLEVELUSR );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( APOLOBREAK );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MSGSTOP );
HB_FUNC_EXTERN( ERRORMESSAGE );
HB_FUNC_EXTERN( CDRIVER );
HB_FUNC_EXTERN( DBFSERVER );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( LBLTITLE );
HB_FUNC_EXTERN( TGETHLP );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( NOTVALID );
HB_FUNC_EXTERN( TCOMBOBOX );
HB_FUNC_EXTERN( TCHECKBOX );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TINVITACION )
{ "TINVITACION", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TMANT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMANT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINVITACION_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION_CREATE )}, NULL },
{ "TINVITACION_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION_NEW )}, NULL },
{ "TINVITACION_OPENFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION_OPENFILES )}, NULL },
{ "TINVITACION_DEFINEFILES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION_DEFINEFILES )}, NULL },
{ "TINVITACION_RESOURCE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION_RESOURCE )}, NULL },
{ "TINVITACION_LPRESAVE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION_LPRESAVE )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AIMAGEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "NIMGINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ABIGRESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TINVITACION_NPRECIOINVITACION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TINVITACION_NPRECIOINVITACION )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( CPATEMP )}, NULL },
{ "GETWNDFRAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETWNDFRAME )}, NULL },
{ "NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLEVEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLEVELUSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NLEVELUSR )}, NULL },
{ "CLOSEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OWNDPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ODBF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LCREATESHELL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHTMLHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "APOLOBREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( APOLOBREAK )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DEFINEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSEFILES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSGSTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGSTOP )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "CDRIVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( CDRIVER )}, NULL },
{ "DBFSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFSERVER )}, NULL },
{ "ADDFIELD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIMAGEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LLOADDIVISA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "LBLTITLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( LBLTITLE )}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TGETHLP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGETHLP )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "CCODINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCODINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTVALID", {HB_FS_PUBLIC}, {HB_FUNCNAME( NOTVALID )}, NULL },
{ "CALIAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CNOMINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNOMINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMBOBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMBOBOX )}, NULL },
{ "ARESOURCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCHECKBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCHECKBOX )}, NULL },
{ "LPREINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LPREINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPREINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPREINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPORDIV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "LPRESAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDFASTKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LVALID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSTART", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRESULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEKINORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NIMGINV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETSTATUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETSTATUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TINVITACION, ".\\.\\Prg\\TInvitacion.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TINVITACION
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TINVITACION )
   #include "hbiniseg.h"
#endif

HB_FUNC( TINVITACION )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,94,0,36,7,0,103,2,0,100,8,
		29,72,4,176,1,0,104,2,0,12,1,29,61,4,
		166,255,3,0,122,80,1,48,2,0,176,3,0,12,
		0,106,12,84,73,110,118,105,116,97,99,105,111,110,
		0,108,4,4,1,0,108,0,112,3,80,2,36,9,
		0,48,5,0,95,2,100,106,12,103,99,95,109,97,
		115,107,115,95,49,54,0,95,1,121,72,121,72,121,
		72,106,5,99,77,114,117,0,4,1,0,9,112,5,
		73,36,17,0,48,6,0,95,2,106,6,65,82,82,
		65,89,0,106,15,103,99,95,99,111,99,107,116,97,
		105,108,95,49,54,0,106,11,103,99,95,117,115,101,
		114,95,49,54,0,106,21,103,99,95,115,101,99,117,
		114,105,116,121,95,97,103,101,110,116,95,49,54,0,
		106,22,103,99,95,117,115,101,114,95,104,101,97,100,
		112,104,111,110,101,115,95,49,54,0,106,13,103,99,
		95,119,111,109,97,110,50,95,49,54,0,106,18,103,
		99,95,116,105,99,107,101,116,95,98,108,117,101,95,
		49,54,0,106,17,103,99,95,116,105,99,107,101,116,
		95,114,101,100,95,49,54,0,4,7,0,95,1,121,
		72,92,32,72,121,72,121,72,106,10,97,82,101,115,
		111,117,114,99,101,0,4,1,0,9,112,5,73,36,
		25,0,48,6,0,95,2,106,6,65,82,82,65,89,
		0,106,15,103,99,95,99,111,99,107,116,97,105,108,
		95,52,56,0,106,12,103,99,95,117,115,101,114,50,
		95,52,56,0,106,21,103,99,95,115,101,99,117,114,
		105,116,121,95,97,103,101,110,116,95,52,56,0,106,
		22,103,99,95,117,115,101,114,95,104,101,97,100,112,
		104,111,110,101,115,95,52,56,0,106,13,103,99,95,
		119,111,109,97,110,50,95,52,56,0,106,18,103,99,
		95,116,105,99,107,101,116,95,98,108,117,101,95,52,
		56,0,106,17,103,99,95,116,105,99,107,101,116,95,
		114,101,100,95,52,56,0,4,7,0,95,1,121,72,
		92,32,72,121,72,121,72,106,13,97,66,105,103,82,
		101,115,111,117,114,99,101,0,4,1,0,9,112,5,
		73,36,34,0,48,6,0,95,2,106,6,65,82,82,
		65,89,0,106,6,67,111,112,97,115,0,106,8,67,
		108,105,101,110,116,101,0,106,10,83,101,103,117,114,
		105,100,97,100,0,106,7,68,101,101,106,97,121,0,
		106,9,67,97,109,97,114,101,114,97,0,106,15,69,
		110,116,114,97,100,97,32,116,105,112,111,32,49,0,
		106,15,69,110,116,114,97,100,97,32,116,105,112,111,
		32,50,0,4,7,0,95,1,121,72,92,32,72,121,
		72,121,72,106,8,97,73,109,97,103,101,110,0,4,
		1,0,9,112,5,73,36,36,0,48,7,0,95,2,
		106,7,67,114,101,97,116,101,0,108,8,95,1,92,
		8,72,121,72,121,72,112,3,73,36,38,0,48,7,
		0,95,2,106,4,78,101,119,0,108,9,95,1,92,
		8,72,121,72,121,72,112,3,73,36,40,0,48,7,
		0,95,2,106,10,79,112,101,110,70,105,108,101,115,
		0,108,10,95,1,121,72,121,72,121,72,112,3,73,
		36,41,0,48,7,0,95,2,106,12,79,112,101,110,
		83,101,114,118,105,99,101,0,108,10,95,1,121,72,
		121,72,121,72,112,3,73,36,43,0,48,7,0,95,
		2,106,12,68,101,102,105,110,101,70,105,108,101,115,
		0,108,11,95,1,121,72,121,72,121,72,112,3,73,
		36,45,0,48,7,0,95,2,106,9,82,101,115,111,
		117,114,99,101,0,108,12,95,1,121,72,121,72,121,
		72,112,3,73,36,47,0,48,7,0,95,2,106,9,
		108,80,114,101,83,97,118,101,0,108,13,95,1,121,
		72,121,72,121,72,112,3,73,36,48,0,48,14,0,
		95,2,106,8,99,73,109,97,103,101,110,0,89,51,
		0,1,0,0,0,48,15,0,95,1,112,0,176,16,
		0,176,17,0,48,18,0,48,19,0,95,1,112,0,
		112,0,122,12,2,176,20,0,48,15,0,95,1,112,
		0,12,1,12,2,1,6,95,1,121,72,121,72,121,
		72,112,3,73,36,49,0,48,14,0,95,2,106,13,
		99,66,105,103,82,101,115,111,117,114,99,101,0,89,
		51,0,1,0,0,0,48,21,0,95,1,112,0,176,
		16,0,176,17,0,48,18,0,48,19,0,95,1,112,
		0,112,0,122,12,2,176,20,0,48,21,0,95,1,
		112,0,12,1,12,2,1,6,95,1,121,72,121,72,
		121,72,112,3,73,36,51,0,48,7,0,95,2,106,
		18,110,80,114,101,99,105,111,73,110,118,105,116,97,
		99,105,111,110,0,108,22,95,1,121,72,121,72,121,
		72,112,3,73,36,53,0,48,23,0,95,2,112,0,
		73,167,14,0,0,176,24,0,104,2,0,95,2,20,
		2,168,48,25,0,95,2,112,0,80,3,176,26,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,27,0,95,3,164,146,1,0,73,
		95,3,110,7,48,25,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINVITACION_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,36,59,0,95,1,100,8,28,9,176,28,
		0,12,0,80,1,36,60,0,95,2,100,8,28,9,
		176,29,0,12,0,80,2,36,62,0,95,3,100,69,
		28,31,48,30,0,102,112,0,100,8,28,21,36,63,
		0,48,31,0,102,176,32,0,95,3,12,1,112,1,
		73,25,13,36,65,0,48,31,0,102,121,112,1,73,
		36,72,0,95,2,100,69,28,13,36,73,0,48,33,
		0,95,2,112,0,73,36,76,0,48,34,0,102,95,
		1,112,1,73,36,77,0,48,35,0,102,95,2,112,
		1,73,36,78,0,48,36,0,102,100,112,1,73,36,
		80,0,48,37,0,102,9,112,1,73,36,81,0,48,
		38,0,102,106,13,73,110,118,105,116,97,99,105,111,
		110,101,115,0,112,1,73,36,83,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINVITACION_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,89,0,95,1,100,8,28,9,176,28,
		0,12,0,80,1,36,91,0,48,34,0,102,95,1,
		112,1,73,36,92,0,48,36,0,102,100,112,1,73,
		36,94,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINVITACION_OPENFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,100,0,120,80,3,36,104,0,95,1,
		100,8,28,5,9,80,1,36,105,0,95,2,100,8,
		28,10,48,39,0,102,112,0,80,2,36,107,0,176,
		40,0,89,15,0,1,0,0,0,176,41,0,95,1,
		12,1,6,12,1,80,5,36,108,0,113,55,0,0,
		36,110,0,176,42,0,48,19,0,102,112,0,12,1,
		28,14,36,111,0,48,43,0,102,95,2,112,1,73,
		36,114,0,48,44,0,48,19,0,102,112,0,9,95,
		1,68,112,2,73,114,100,0,0,36,116,0,115,80,
		4,36,118,0,9,80,3,36,120,0,48,45,0,102,
		112,0,73,36,122,0,176,46,0,176,47,0,95,4,
		12,1,106,57,73,109,112,111,115,105,98,108,101,32,
		97,98,114,105,114,32,116,111,100,97,115,32,108,97,
		115,32,98,97,115,101,115,32,100,101,32,100,97,116,
		111,115,32,100,101,32,105,110,118,105,116,97,99,105,
		111,110,101,115,0,20,2,36,125,0,176,40,0,95,
		5,20,1,36,127,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINVITACION_DEFINEFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,133,0,95,1,100,8,28,10,48,39,
		0,102,112,0,80,1,36,134,0,95,2,100,8,28,
		9,176,48,0,12,0,80,2,36,136,0,48,36,0,
		102,48,2,0,176,49,0,106,11,73,110,118,105,116,
		97,46,68,98,102,0,106,7,73,78,86,73,84,65,
		0,12,2,106,11,73,110,118,105,116,97,46,68,98,
		102,0,106,7,73,78,86,73,84,65,0,95,2,106,
		13,73,110,118,105,116,97,99,105,111,110,101,115,0,
		95,1,112,5,112,1,73,36,138,0,48,50,0,48,
		19,0,102,112,0,106,8,99,67,111,100,73,110,118,
		0,106,2,67,0,92,2,121,100,100,100,100,106,7,
		67,243,100,105,103,111,0,9,92,80,9,4,0,0,
		112,13,73,36,139,0,48,50,0,48,19,0,102,112,
		0,106,8,99,78,111,109,73,110,118,0,106,2,67,
		0,92,30,121,100,100,100,100,106,7,78,111,109,98,
		114,101,0,9,93,200,0,9,4,0,0,112,13,73,
		36,140,0,48,50,0,48,19,0,102,112,0,106,8,
		110,73,109,103,73,110,118,0,106,2,78,0,92,2,
		121,100,100,100,100,106,1,0,9,121,120,4,0,0,
		112,13,73,36,141,0,48,50,0,48,19,0,102,112,
		0,106,8,108,80,114,101,73,110,118,0,106,2,76,
		0,122,121,100,100,100,100,106,1,0,9,121,120,4,
		0,0,112,13,73,36,142,0,48,50,0,48,19,0,
		102,112,0,106,8,110,80,114,101,73,110,118,0,106,
		2,78,0,92,16,92,6,100,100,100,100,106,1,0,
		9,121,120,4,0,0,112,13,73,36,144,0,48,51,
		0,48,19,0,102,112,0,106,8,99,67,111,100,73,
		110,118,0,106,11,73,110,118,105,116,97,46,67,100,
		120,0,106,8,67,67,79,68,73,78,86,0,100,100,
		9,9,106,7,67,243,100,105,103,111,0,100,100,120,
		9,112,12,73,36,145,0,48,51,0,48,19,0,102,
		112,0,106,8,99,78,111,109,73,110,118,0,106,11,
		73,110,118,105,116,97,46,67,100,120,0,106,8,67,
		78,79,77,73,78,86,0,100,100,9,9,106,7,78,
		111,109,98,114,101,0,100,100,120,9,112,12,73,36,
		149,0,48,19,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINVITACION_RESOURCE )
{
	static const HB_BYTE pcode[] =
	{
		13,7,1,36,153,0,102,80,2,36,161,0,48,52,
		0,95,2,112,0,80,8,36,163,0,48,53,0,95,
		2,112,0,73,36,165,0,48,2,0,176,54,0,12,
		0,100,100,100,100,176,55,0,95,1,12,1,106,13,
		105,110,118,105,116,97,99,105,111,110,101,115,0,72,
		106,13,73,78,86,73,84,65,67,73,79,78,69,83,
		0,100,9,100,100,100,100,100,9,100,100,100,100,100,
		9,100,106,5,111,68,108,103,0,100,100,112,24,80,
		3,36,172,0,48,56,0,176,57,0,12,0,92,100,
		89,47,0,1,0,1,0,2,0,176,58,0,12,0,
		121,8,28,16,48,59,0,48,19,0,95,255,112,0,
		112,0,25,16,48,60,0,48,19,0,95,255,112,0,
		95,1,112,1,6,95,3,100,106,3,64,33,0,89,
		36,0,0,0,2,0,4,0,2,0,176,61,0,95,
		255,48,62,0,48,19,0,95,254,112,0,112,0,120,
		106,2,48,0,12,4,6,100,100,100,100,100,120,89,
		23,0,0,0,1,0,1,0,95,255,122,8,21,31,
		8,73,95,255,92,4,8,6,100,9,9,100,100,100,
		100,100,100,100,100,100,112,25,80,4,36,177,0,48,
		56,0,176,57,0,12,0,92,110,89,47,0,1,0,
		1,0,2,0,176,58,0,12,0,121,8,28,16,48,
		63,0,48,19,0,95,255,112,0,112,0,25,16,48,
		64,0,48,19,0,95,255,112,0,95,1,112,1,6,
		95,3,100,100,100,100,100,100,100,100,120,89,15,0,
		0,0,1,0,1,0,95,255,92,3,69,6,100,9,
		9,100,100,100,100,100,100,100,100,100,112,25,80,5,
		36,184,0,48,56,0,176,65,0,12,0,92,120,89,
		28,0,1,0,1,0,8,0,176,58,0,12,0,121,
		8,28,6,95,255,25,7,95,1,165,80,255,6,48,
		15,0,95,2,112,0,95,3,100,100,100,100,100,100,
		9,89,15,0,0,0,1,0,1,0,95,255,92,3,
		69,6,48,66,0,95,2,112,0,100,100,100,100,112,
		17,80,7,36,189,0,48,56,0,176,67,0,12,0,
		93,130,0,89,47,0,1,0,1,0,2,0,176,58,
		0,12,0,121,8,28,16,48,68,0,48,19,0,95,
		255,112,0,112,0,25,16,48,69,0,48,19,0,95,
		255,112,0,95,1,112,1,6,95,3,100,100,100,100,
		100,100,9,89,15,0,0,0,1,0,1,0,95,255,
		92,3,69,6,9,112,12,73,36,195,0,48,56,0,
		176,57,0,12,0,93,140,0,89,47,0,1,0,1,
		0,2,0,176,58,0,12,0,121,8,28,16,48,70,
		0,48,19,0,95,255,112,0,112,0,25,16,48,71,
		0,48,19,0,95,255,112,0,95,1,112,1,6,95,
		3,100,48,72,0,95,2,112,0,100,100,100,100,100,
		100,120,89,51,0,0,0,2,0,2,0,1,0,48,
		68,0,48,19,0,95,255,112,0,112,0,21,28,26,
		73,48,70,0,48,19,0,95,255,112,0,112,0,121,
		16,21,28,8,73,95,254,92,3,69,6,100,9,9,
		100,100,100,100,100,100,100,100,100,112,25,80,6,36,
		201,0,48,56,0,176,73,0,12,0,93,244,1,89,
		37,0,0,0,6,0,2,0,4,0,5,0,1,0,
		3,0,7,0,48,74,0,95,255,95,254,95,253,95,
		252,95,251,95,250,112,5,6,95,3,100,100,9,89,
		15,0,0,0,1,0,1,0,95,255,92,3,69,6,
		100,100,9,112,10,73,36,207,0,48,56,0,176,73,
		0,12,0,93,38,2,89,17,0,0,0,1,0,3,
		0,48,75,0,95,255,112,0,6,95,3,100,100,9,
		100,100,100,120,112,10,73,36,209,0,48,76,0,95,
		3,92,116,89,75,0,0,0,6,0,1,0,4,0,
		2,0,5,0,3,0,7,0,95,255,92,4,8,28,
		33,48,77,0,95,254,112,0,28,21,48,74,0,95,
		253,95,254,95,252,95,255,95,251,95,250,112,5,25,
		22,100,25,19,48,74,0,95,253,95,254,95,252,95,
		255,95,251,95,250,112,5,6,112,2,73,36,211,0,
		48,78,0,95,3,89,17,0,0,0,1,0,4,0,
		48,79,0,95,255,112,0,6,112,1,73,36,213,0,
		48,44,0,95,3,48,80,0,95,3,112,0,48,81,
		0,95,3,112,0,48,82,0,95,3,112,0,120,100,
		100,100,48,83,0,95,3,112,0,100,100,100,112,11,
		73,36,215,0,48,84,0,95,3,112,0,122,8,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINVITACION_LPRESAVE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,36,223,0,95,3,122,8,31,10,95,3,
		92,4,8,29,177,0,36,224,0,176,42,0,48,59,
		0,48,19,0,102,112,0,112,0,12,1,28,74,36,
		225,0,176,46,0,106,45,67,243,100,105,103,111,32,
		100,101,32,108,97,32,105,110,118,105,116,97,99,105,
		243,110,32,110,111,32,112,117,101,100,101,32,101,115,
		116,97,114,32,118,97,99,237,111,0,20,1,36,226,
		0,48,79,0,95,1,112,0,73,36,227,0,100,110,
		7,36,230,0,48,85,0,48,19,0,102,112,0,48,
		59,0,48,19,0,102,112,0,112,0,106,8,99,67,
		111,100,73,110,118,0,112,2,28,46,36,231,0,176,
		46,0,106,17,67,243,100,105,103,111,32,101,120,105,
		115,116,101,110,116,101,0,20,1,36,232,0,48,79,
		0,95,1,112,0,73,36,233,0,100,110,7,36,238,
		0,176,42,0,48,63,0,48,19,0,102,112,0,112,
		0,12,1,28,74,36,239,0,176,46,0,106,45,78,
		111,109,98,114,101,32,100,101,32,108,97,32,105,110,
		118,105,116,97,99,105,243,110,32,110,111,32,112,117,
		101,100,101,32,101,115,116,97,114,32,118,97,99,237,
		111,0,20,1,36,240,0,48,79,0,95,2,112,0,
		73,36,241,0,100,110,7,36,244,0,48,86,0,48,
		19,0,102,112,0,48,87,0,95,5,112,0,112,1,
		73,36,246,0,48,75,0,95,4,122,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TINVITACION_NPRECIOINVITACION )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,252,0,121,80,2,36,254,0,48,88,
		0,48,19,0,102,112,0,112,0,73,36,0,1,48,
		89,0,48,19,0,102,112,0,106,8,99,67,111,100,
		73,110,118,0,112,1,73,36,2,1,48,90,0,48,
		19,0,102,112,0,95,1,112,1,28,34,36,3,1,
		48,68,0,48,19,0,102,112,0,112,0,28,18,36,
		4,1,48,70,0,48,19,0,102,112,0,112,0,80,
		2,36,8,1,48,91,0,48,19,0,102,112,0,112,
		0,73,36,10,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,94,0,2,0,116,94,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
