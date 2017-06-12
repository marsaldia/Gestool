/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tdprnc3.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TDOSPRN );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TDOSPRN_NEW );
HB_FUNC_STATIC( TDOSPRN_END );
HB_FUNC_STATIC( TDOSPRN_ENDPAGE );
HB_FUNC_STATIC( TDOSPRN_COMMAND );
HB_FUNC_STATIC( TDOSPRN_SETCOORS );
HB_FUNC_EXTERN( ANSITOOEM );
HB_FUNC_EXTERN( LEN );
HB_FUNC_STATIC( TDOSPRN_SAY );
HB_FUNC_STATIC( TDOSPRN_SAYCMP );
HB_FUNC_STATIC( TDOSPRN_LOADFILE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( STRTOKEN );
HB_FUNC_EXTERN( CHR );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( INT );
HB_FUNC( WORKSHEET );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FREAD );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TDPRNC3 )
{ "TDOSPRN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDOSPRN_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_NEW )}, NULL },
{ "TDOSPRN_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_END )}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDOSPRN_ENDPAGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_ENDPAGE )}, NULL },
{ "TDOSPRN_COMMAND", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_COMMAND )}, NULL },
{ "TDOSPRN_SETCOORS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_SETCOORS )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NROW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NROW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ANSITOOEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ANSITOOEM )}, NULL },
{ "NCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "TDOSPRN_SAY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_SAY )}, NULL },
{ "TDOSPRN_SAYCMP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_SAYCMP )}, NULL },
{ "TDOSPRN_LOADFILE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TDOSPRN_LOADFILE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "_CCOMPRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CNORMAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFORMFEED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLEFTMARGIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NTOPMARGIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LANSITOOEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HDC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "CPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LASTERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HDC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "ENDPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "COMMAND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFORMFEED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "STRTOKEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTOKEN )}, NULL },
{ "CHR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CHR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "NTOPMARGIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLEFTMARGIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEWLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WRITE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "LANSITOOEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOORS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMPRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "CNORMAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WORKSHEET", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WORKSHEET )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREAD )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TDPRNC3, ".\\.\\Prg\\Tdprnc3.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TDPRNC3
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TDPRNC3 )
   #include "hbiniseg.h"
#endif

HB_FUNC( TDOSPRN )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,76,0,36,96,0,103,2,0,100,8,
		29,20,3,176,1,0,104,2,0,12,1,29,9,3,
		166,203,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,8,84,68,111,115,80,114,110,0,108,4,4,
		1,0,108,0,112,3,80,2,36,98,0,48,5,0,
		95,2,100,100,95,1,121,72,121,72,121,72,106,10,
		76,97,115,116,69,114,114,111,114,0,4,1,0,9,
		112,5,73,36,99,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,6,99,80,111,114,116,
		0,106,10,99,67,111,109,112,114,101,115,115,0,106,
		8,99,78,111,114,109,97,108,0,106,10,99,70,111,
		114,109,70,101,101,100,0,106,8,99,66,117,102,102,
		101,114,0,4,5,0,9,112,5,73,36,100,0,48,
		5,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,4,104,68,67,0,106,5,110,82,111,119,0,106,
		5,110,67,111,108,0,106,12,110,76,101,102,116,77,
		97,114,103,105,110,0,106,11,110,84,111,112,77,97,
		114,103,105,110,0,4,5,0,9,112,5,73,36,101,
		0,48,5,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,11,108,65,110,115,105,84,111,79,101,109,
		0,4,1,0,9,112,5,73,36,103,0,48,6,0,
		95,2,106,4,78,101,119,0,108,7,95,1,92,8,
		72,121,72,121,72,112,3,73,36,105,0,48,6,0,
		95,2,106,4,69,110,100,0,108,8,95,1,121,72,
		121,72,121,72,112,3,73,36,107,0,48,9,0,95,
		2,106,10,83,116,97,114,116,80,97,103,101,0,112,
		1,73,36,108,0,48,6,0,95,2,106,8,69,110,
		100,80,97,103,101,0,108,10,95,1,121,72,121,72,
		121,72,112,3,73,36,110,0,48,6,0,95,2,106,
		8,67,111,109,109,97,110,100,0,108,11,95,1,121,
		72,121,72,121,72,112,3,73,36,112,0,48,6,0,
		95,2,106,9,83,101,116,67,111,111,114,115,0,108,
		12,95,1,121,72,121,72,121,72,112,3,73,36,116,
		0,48,13,0,95,2,106,8,78,101,119,76,105,110,
		101,0,89,55,0,1,0,0,0,48,14,0,95,1,
		21,48,15,0,163,0,112,0,106,3,13,10,0,72,
		112,1,73,48,16,0,95,1,21,48,17,0,163,0,
		112,0,23,112,1,73,48,18,0,95,1,121,112,1,
		6,95,1,121,72,121,72,121,72,112,3,73,36,121,
		0,48,13,0,95,2,106,6,87,114,105,116,101,0,
		89,72,0,3,0,0,0,95,3,100,8,28,5,120,
		80,3,48,14,0,95,1,21,48,15,0,163,0,112,
		0,95,3,28,11,176,19,0,95,2,12,1,25,4,
		95,2,72,112,1,73,48,18,0,95,1,21,48,20,
		0,163,0,112,0,176,21,0,95,2,12,1,72,112,
		1,6,95,1,121,72,121,72,121,72,112,3,73,36,
		123,0,48,6,0,95,2,106,4,83,97,121,0,108,
		22,95,1,121,72,121,72,121,72,112,3,73,36,125,
		0,48,6,0,95,2,106,7,83,97,121,67,109,112,
		0,108,23,95,1,121,72,121,72,121,72,112,3,73,
		36,127,0,48,6,0,95,2,106,9,76,111,97,100,
		70,105,108,101,0,108,24,95,1,121,72,121,72,121,
		72,112,3,73,36,129,0,48,25,0,95,2,112,0,
		73,167,14,0,0,176,26,0,104,2,0,95,2,20,
		2,168,48,27,0,95,2,112,0,80,3,176,28,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,29,0,95,3,164,146,1,0,73,
		95,3,110,7,48,27,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,136,0,95,1,100,8,28,11,106,5,
		76,80,84,49,0,80,1,95,2,100,8,28,5,120,
		80,2,36,138,0,176,30,0,95,1,12,1,80,1,
		36,140,0,48,31,0,102,106,3,49,53,0,112,1,
		73,36,141,0,48,32,0,102,106,3,49,56,0,112,
		1,73,36,142,0,48,33,0,102,106,3,49,50,0,
		112,1,73,36,143,0,48,14,0,102,106,1,0,112,
		1,73,36,144,0,48,34,0,102,121,112,1,73,36,
		145,0,48,35,0,102,121,112,1,73,36,146,0,48,
		16,0,102,121,112,1,73,36,147,0,48,18,0,102,
		121,112,1,73,36,148,0,48,36,0,102,120,112,1,
		73,36,149,0,48,37,0,102,95,1,106,2,46,0,
		95,1,24,31,11,106,5,46,80,82,78,0,25,5,
		106,1,0,72,112,1,73,36,150,0,48,38,0,102,
		176,39,0,48,40,0,102,112,0,12,1,112,1,73,
		36,151,0,48,41,0,102,121,112,1,73,36,153,0,
		48,42,0,102,112,0,121,35,28,17,36,154,0,48,
		41,0,102,176,43,0,12,0,112,1,73,36,157,0,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_END )
{
	static const HB_BYTE pcode[] =
	{
		36,163,0,176,44,0,48,17,0,102,112,0,48,20,
		0,102,112,0,72,12,1,31,12,36,164,0,48,45,
		0,102,112,0,73,36,167,0,48,41,0,102,121,112,
		1,73,36,169,0,176,46,0,48,42,0,102,112,0,
		12,1,31,17,36,170,0,48,41,0,102,176,43,0,
		12,0,112,1,73,36,173,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_ENDPAGE )
{
	static const HB_BYTE pcode[] =
	{
		36,179,0,48,47,0,102,48,48,0,102,112,0,112,
		1,73,36,181,0,48,41,0,102,121,112,1,73,36,
		183,0,176,49,0,48,42,0,102,112,0,48,15,0,
		102,112,0,12,2,176,21,0,48,15,0,102,112,0,
		12,1,35,28,17,36,184,0,48,41,0,102,176,43,
		0,12,0,112,1,73,36,187,0,48,14,0,102,106,
		1,0,112,1,73,36,188,0,48,16,0,102,121,112,
		1,73,36,189,0,48,18,0,102,121,112,1,73,36,
		191,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_COMMAND )
{
	static const HB_BYTE pcode[] =
	{
		13,4,5,36,200,0,95,1,80,8,36,202,0,95,
		2,100,69,28,16,36,203,0,96,8,0,106,2,44,
		0,95,2,72,135,36,206,0,95,3,100,69,28,16,
		36,207,0,96,8,0,106,2,44,0,95,3,72,135,
		36,210,0,95,4,100,69,28,16,36,211,0,96,8,
		0,106,2,44,0,95,4,72,135,36,214,0,95,5,
		100,69,28,16,36,215,0,96,8,0,106,2,44,0,
		95,5,72,135,36,218,0,106,1,0,80,6,36,219,
		0,122,80,9,36,221,0,176,44,0,176,50,0,95,
		8,95,9,174,9,0,106,2,44,0,12,3,165,80,
		7,12,1,31,23,36,222,0,96,6,0,176,51,0,
		176,52,0,95,7,12,1,12,1,135,25,208,36,225,
		0,48,14,0,102,21,48,15,0,163,0,112,0,95,
		6,72,112,1,73,36,227,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_SETCOORS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,36,233,0,96,1,0,48,53,0,102,112,
		0,135,36,234,0,96,2,0,48,54,0,102,112,0,
		135,36,236,0,48,17,0,102,112,0,95,1,15,28,
		22,36,237,0,48,45,0,102,112,0,73,36,238,0,
		48,55,0,102,112,0,73,36,241,0,95,1,48,17,
		0,102,112,0,8,28,33,95,2,48,20,0,102,112,
		0,35,28,22,36,242,0,48,45,0,102,112,0,73,
		36,243,0,48,55,0,102,112,0,73,36,246,0,48,
		17,0,102,112,0,95,1,35,28,14,36,247,0,48,
		56,0,102,112,0,73,25,232,36,250,0,95,2,48,
		20,0,102,112,0,15,28,26,36,251,0,48,57,0,
		102,176,58,0,95,2,48,20,0,102,112,0,49,12,
		1,112,1,73,36,254,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_SAY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,36,4,1,95,4,100,8,28,10,48,59,
		0,102,112,0,80,4,36,6,1,48,60,0,102,95,
		1,95,2,112,2,73,36,7,1,48,57,0,102,95,
		3,95,4,112,2,73,36,9,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_SAYCMP )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,36,15,1,95,4,100,8,28,10,48,59,
		0,102,112,0,80,4,36,17,1,48,60,0,102,95,
		1,95,2,112,2,73,36,18,1,48,47,0,102,48,
		61,0,102,112,0,112,1,73,36,19,1,48,14,0,
		102,21,48,15,0,163,0,112,0,95,4,28,11,176,
		19,0,95,3,12,1,25,4,95,3,72,112,1,73,
		36,20,1,48,18,0,102,21,48,20,0,163,0,112,
		0,176,62,0,176,21,0,95,3,12,1,101,51,51,
		51,51,51,51,251,63,10,1,18,101,0,0,0,0,
		0,0,224,63,10,1,72,12,1,72,112,1,73,36,
		21,1,48,47,0,102,48,63,0,102,112,0,112,1,
		73,36,23,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WORKSHEET )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,33,1,106,1,0,80,3,36,35,1,
		121,165,80,4,25,35,36,36,1,96,3,0,176,65,
		0,95,4,122,12,2,176,66,0,106,2,46,0,92,
		9,12,2,72,135,36,35,1,175,4,0,92,7,15,
		28,220,36,39,1,176,67,0,95,3,92,3,12,2,
		80,3,36,41,1,48,2,0,176,0,0,12,0,95,
		1,112,1,80,2,36,43,1,48,55,0,95,2,112,
		0,73,36,45,1,121,165,80,4,25,34,36,46,1,
		48,68,0,95,2,95,4,121,176,69,0,95,4,92,
		2,12,2,95,3,72,112,3,73,36,45,1,175,4,
		0,92,65,15,28,221,36,49,1,48,45,0,95,2,
		112,0,73,36,51,1,48,70,0,95,2,112,0,73,
		36,53,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TDOSPRN_LOADFILE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,62,1,93,208,7,80,5,36,64,1,
		176,71,0,95,1,12,1,31,8,36,65,1,100,110,
		7,36,68,1,48,14,0,102,106,1,0,112,1,73,
		36,70,1,176,72,0,95,1,12,1,80,3,36,71,
		1,176,73,0,95,3,96,2,0,95,5,12,3,165,
		80,4,121,15,28,24,36,72,1,48,14,0,102,176,
		67,0,95,2,122,95,4,12,3,112,1,73,25,214,
		36,75,1,48,14,0,102,176,19,0,48,15,0,102,
		112,0,12,1,112,1,73,36,76,1,176,46,0,95,
		3,20,1,36,78,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,76,0,2,0,116,76,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
