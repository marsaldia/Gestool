/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Valtostr.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FWNUMFORMAT );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC( NUMPICT );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( VAL );
HB_FUNC( CVALTOSTR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CVALTOCHAR );
HB_FUNC_EXTERN( YEAR );
HB_FUNC_EXTERN( HB_TTOC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DAY );
HB_FUNC_EXTERN( CMONTH );
HB_FUNC_EXTERN( MONTH );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( AT );
HB_FUNC_STATIC( N2E );
HB_FUNC_EXTERN( LOG10 );
HB_FUNC_EXTERN( FLOOR );
HB_FUNC_STATIC( DCHARTODATE );
HB_FUNC_STATIC( DALPHATODATE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_STATIC( PARSENUMSFROMDATESTR );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( STOD );
HB_FUNC_EXTERN( ISDIGIT );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC( UCHARTOVAL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC( WHEELSCROLL );
HB_FUNC( ISBINARYDATA );
HB_FUNC( FW_VALTOEXP );
HB_FUNC_EXTERN( STRINGTOLITERAL );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( HB_TTOS );
HB_FUNC( FW_STOT );
HB_FUNC_EXTERN( HB_STOT );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_VALTOSTR )
{ "FWNUMFORMAT", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( FWNUMFORMAT )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "NUMPICT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( NUMPICT )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "CVALTOSTR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CVALTOSTR )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CVALTOCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CVALTOCHAR )}, NULL },
{ "YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( YEAR )}, NULL },
{ "HB_TTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TTOC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "DAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DAY )}, NULL },
{ "CMONTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( CMONTH )}, NULL },
{ "MONTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( MONTH )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "N2E", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( N2E )}, NULL },
{ "LOG10", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOG10 )}, NULL },
{ "FLOOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FLOOR )}, NULL },
{ "DCHARTODATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( DCHARTODATE )}, NULL },
{ "DALPHATODATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( DALPHATODATE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "PARSENUMSFROMDATESTR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PARSENUMSFROMDATESTR )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "STOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( STOD )}, NULL },
{ "ISDIGIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISDIGIT )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "UCHARTOVAL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( UCHARTOVAL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "WHEELSCROLL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WHEELSCROLL )}, NULL },
{ "ISBINARYDATA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISBINARYDATA )}, NULL },
{ "FW_VALTOEXP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FW_VALTOEXP )}, NULL },
{ "STRINGTOLITERAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRINGTOLITERAL )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "HB_TTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TTOS )}, NULL },
{ "FW_STOT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FW_STOT )}, NULL },
{ "HB_STOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STOT )}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00005)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_VALTOSTR, ".\\.\\Prg\\Valtostr.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_VALTOSTR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_VALTOSTR )
   #include "hbiniseg.h"
#endif

HB_FUNC( FWNUMFORMAT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,116,56,0,36,16,0,103,2,0,103,3,
		0,103,4,0,4,3,0,80,4,36,18,0,176,1,
		0,95,1,12,1,106,2,67,0,8,28,29,176,2,
		0,95,1,12,1,165,80,1,106,4,65,69,73,0,
		24,28,10,36,19,0,95,1,82,2,0,36,21,0,
		176,1,0,95,2,12,1,106,2,76,0,8,28,10,
		36,22,0,95,2,82,3,0,36,24,0,176,3,0,
		12,0,92,3,16,28,30,95,3,100,8,31,16,176,
		1,0,95,3,12,1,106,2,76,0,8,28,10,36,
		25,0,95,3,82,4,0,36,28,0,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( NUMPICT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,116,56,0,36,38,0,95,2,100,8,28,
		5,121,80,2,95,3,100,8,28,5,120,80,3,95,
		4,100,8,28,16,95,2,121,15,28,7,103,3,0,
		25,3,9,80,4,95,5,100,8,28,7,103,4,0,
		80,5,36,40,0,126,1,2,0,36,42,0,95,2,
		121,15,28,20,36,43,0,96,1,0,95,2,95,3,
		28,5,122,25,3,121,72,136,36,46,0,176,5,0,
		176,6,0,92,14,95,1,12,2,122,12,2,80,1,
		36,47,0,176,7,0,106,2,57,0,95,1,12,2,
		80,6,36,49,0,95,4,28,79,36,51,0,176,8,
		0,176,9,0,176,10,0,95,6,12,1,103,2,0,
		106,2,73,0,8,28,26,106,20,57,57,44,57,57,
		57,44,57,57,44,57,57,44,57,57,44,57,57,57,
		0,25,23,106,19,57,57,44,57,57,57,44,57,57,
		57,44,57,57,57,44,57,57,57,0,12,2,12,1,
		80,6,36,54,0,103,2,0,106,2,69,0,8,28,
		33,36,55,0,95,5,9,8,28,11,106,5,64,90,
		69,32,0,25,8,106,4,64,69,32,0,95,6,72,
		80,6,25,27,36,57,0,95,5,9,8,28,10,106,
		4,64,90,32,0,25,5,106,1,0,95,6,72,80,
		6,36,60,0,95,2,121,15,28,25,36,61,0,96,
		6,0,106,2,46,0,176,7,0,106,2,57,0,95,
		2,12,2,72,135,36,64,0,95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CVALTOSTR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,116,56,0,36,72,0,95,3,100,8,28,
		7,103,2,0,80,3,95,4,100,8,28,7,103,4,
		0,80,4,36,74,0,176,1,0,95,2,12,1,106,
		2,66,0,8,28,16,36,75,0,48,12,0,95,2,
		95,1,112,1,80,2,36,88,0,95,1,100,8,28,
		16,36,89,0,106,4,110,105,108,0,80,5,26,63,
		2,36,91,0,176,13,0,95,2,12,1,28,63,36,
		92,0,176,1,0,95,1,12,1,106,2,78,0,8,
		28,31,95,3,106,2,69,0,8,28,22,36,93,0,
		176,9,0,95,1,106,3,64,69,0,12,2,80,5,
		26,5,2,36,95,0,176,14,0,95,1,12,1,80,
		5,26,246,1,36,99,0,95,2,106,3,64,84,0,
		8,28,47,36,103,0,176,15,0,95,1,12,1,121,
		8,28,21,176,16,0,95,1,106,1,0,176,17,0,
		92,116,12,1,12,3,25,9,176,16,0,95,1,12,
		1,80,5,26,188,1,36,107,0,176,1,0,95,1,
		12,1,106,3,68,84,0,24,29,155,1,176,18,0,
		95,2,122,12,2,106,2,64,0,69,29,139,1,36,
		108,0,176,13,0,95,1,12,1,28,22,36,109,0,
		176,19,0,176,20,0,95,2,12,1,12,1,80,5,
		26,121,1,36,111,0,176,21,0,95,2,12,1,80,
		5,36,112,0,176,22,0,95,5,106,3,100,100,0,
		176,23,0,176,24,0,95,1,12,1,92,2,12,2,
		12,3,80,5,36,113,0,106,5,109,109,109,109,0,
		95,5,24,28,56,36,114,0,176,22,0,95,5,106,
		5,109,109,109,109,0,106,5,77,77,77,77,0,95,
		2,24,28,16,176,2,0,176,25,0,95,1,12,1,
		12,1,25,9,176,25,0,95,1,12,1,12,3,80,
		5,25,106,36,115,0,106,4,109,109,109,0,95,5,
		24,28,61,36,116,0,176,22,0,95,5,106,4,109,
		109,109,0,176,18,0,106,4,77,77,77,0,95,2,
		24,28,16,176,2,0,176,25,0,95,1,12,1,12,
		1,25,9,176,25,0,95,1,12,1,92,3,12,2,
		12,3,80,5,25,33,36,118,0,176,22,0,95,5,
		106,3,109,109,0,176,23,0,176,26,0,95,1,12,
		1,92,2,12,2,12,3,80,5,36,120,0,106,5,
		121,121,121,121,0,95,5,24,28,38,36,121,0,176,
		22,0,95,5,106,5,121,121,121,121,0,176,27,0,
		176,15,0,95,1,12,1,92,4,121,12,3,12,3,
		80,5,25,36,36,123,0,176,22,0,95,5,106,3,
		121,121,0,176,23,0,176,15,0,95,1,12,1,92,
		100,50,92,2,12,2,12,3,80,5,36,127,0,106,
		3,104,104,0,95,5,24,28,46,36,131,0,176,18,
		0,95,5,176,28,0,106,3,104,104,0,95,5,12,
		2,122,49,12,2,176,16,0,95,1,106,1,0,176,
		17,0,92,116,12,1,12,3,72,80,5,25,16,36,
		137,0,176,9,0,95,1,95,2,12,2,80,5,36,
		139,0,176,13,0,95,1,12,1,29,155,0,95,4,
		100,69,29,148,0,176,1,0,95,1,12,1,106,4,
		68,78,84,0,24,29,131,0,36,140,0,95,4,28,
		106,36,141,0,176,13,0,95,5,12,1,28,78,176,
		1,0,95,1,12,1,106,2,78,0,8,28,64,36,
		142,0,176,8,0,176,22,0,176,22,0,176,22,0,
		176,22,0,95,2,106,4,64,90,32,0,106,1,0,
		12,3,106,4,64,122,32,0,106,1,0,12,3,106,
		2,90,0,100,12,3,106,2,122,0,106,1,0,12,
		3,12,1,80,2,36,144,0,176,9,0,95,1,95,
		2,12,2,80,5,25,19,36,146,0,176,19,0,176,
		20,0,95,5,12,1,12,1,80,5,36,149,0,176,
		18,0,95,5,122,12,2,106,2,42,0,8,28,56,
		176,20,0,95,5,12,1,92,2,15,28,44,176,1,
		0,95,1,12,1,106,2,78,0,8,28,30,36,150,
		0,176,29,0,95,1,176,5,0,176,20,0,95,5,
		12,1,92,4,49,121,12,2,12,2,80,5,36,153,
		0,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( N2E )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,159,0,121,80,3,36,161,0,95,2,
		100,8,28,6,92,2,80,2,36,163,0,176,30,0,
		95,1,12,1,80,4,36,164,0,176,31,0,95,4,
		12,1,80,3,36,165,0,92,10,95,4,95,3,49,
		84,80,1,36,166,0,95,3,92,9,15,28,14,95,
		2,121,15,28,8,36,167,0,173,2,0,36,169,0,
		176,27,0,95,1,95,2,92,2,72,95,2,12,3,
		106,2,69,0,72,176,8,0,176,27,0,95,3,12,
		1,12,1,72,80,5,36,171,0,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( DCHARTODATE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,180,0,176,2,0,95,1,12,1,165,
		80,3,176,21,0,95,1,12,1,69,28,13,36,181,
		0,176,33,0,95,3,20,1,7,36,183,0,176,21,
		0,176,17,0,92,4,12,1,12,1,80,2,36,184,
		0,176,34,0,95,1,12,1,80,4,36,185,0,176,
		13,0,95,4,12,1,29,150,0,36,186,0,176,18,
		0,95,2,92,2,12,2,80,3,36,187,0,176,17,
		0,92,4,95,3,106,3,100,100,0,8,28,15,106,
		9,109,109,47,100,100,47,121,121,0,25,13,106,9,
		100,100,47,109,109,47,121,121,0,20,2,36,188,0,
		176,34,0,95,1,12,1,80,4,36,189,0,95,3,
		106,3,121,121,0,8,28,66,176,13,0,95,4,12,
		1,28,57,36,190,0,176,17,0,92,4,176,35,0,
		12,0,28,17,106,11,109,109,47,100,100,47,121,121,
		121,121,0,25,13,106,9,109,109,47,100,100,47,121,
		121,0,20,2,36,191,0,176,34,0,95,1,12,1,
		80,4,36,194,0,176,17,0,92,4,95,2,20,2,
		36,196,0,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( DALPHATODATE )
{
	static const HB_BYTE pcode[] =
	{
		13,6,1,36,202,0,134,0,0,0,0,80,2,36,
		204,0,106,4,74,65,78,0,106,4,70,69,66,0,
		106,4,77,65,82,0,106,4,65,80,82,0,106,4,
		77,65,89,0,106,4,74,85,78,0,106,4,74,85,
		76,0,106,4,65,85,71,0,106,4,83,69,80,0,
		106,4,79,67,84,0,106,4,78,79,86,0,106,4,
		68,69,67,0,4,12,0,80,6,36,205,0,106,1,
		0,106,1,0,4,2,0,80,7,36,207,0,122,165,
		80,4,25,30,36,208,0,95,6,95,4,1,95,1,
		24,28,11,36,209,0,95,4,80,3,25,13,36,207,
		0,175,4,0,92,12,15,28,225,36,214,0,176,13,
		0,95,3,12,1,32,155,0,36,215,0,176,36,0,
		95,1,12,1,80,7,36,216,0,176,13,0,95,7,
		92,2,1,12,1,28,22,36,217,0,176,15,0,176,
		37,0,12,0,12,1,95,7,92,2,2,25,63,36,
		219,0,95,7,92,2,1,92,100,35,28,50,36,220,
		0,176,17,0,92,5,12,1,80,5,36,221,0,95,
		7,92,2,148,93,108,7,135,36,222,0,95,7,92,
		2,1,95,5,35,28,13,36,223,0,95,7,92,2,
		148,92,100,135,36,228,0,176,38,0,176,23,0,95,
		7,92,2,1,92,4,12,2,176,23,0,95,3,92,
		2,12,2,72,176,23,0,95,7,122,1,92,2,12,
		2,72,12,1,80,2,36,231,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PARSENUMSFROMDATESTR )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,36,238,0,4,0,0,80,2,36,239,0,
		106,1,0,80,3,36,242,0,95,1,96,4,0,129,
		1,1,28,99,36,243,0,176,39,0,95,4,12,1,
		28,13,36,244,0,96,3,0,95,4,135,25,70,36,
		246,0,95,4,106,2,58,0,8,28,26,176,20,0,
		95,2,12,1,92,2,35,28,14,36,247,0,176,40,
		0,95,2,92,2,20,2,36,249,0,176,13,0,95,
		3,12,1,31,22,36,250,0,176,41,0,95,2,95,
		3,20,2,36,251,0,106,1,0,80,3,36,254,0,
		130,31,161,132,36,255,0,176,13,0,95,3,12,1,
		31,14,36,0,1,176,41,0,95,2,95,3,20,2,
		36,2,1,176,20,0,95,2,12,1,92,2,35,28,
		14,36,3,1,176,40,0,95,2,92,2,20,2,36,
		7,1,176,42,0,95,2,89,32,0,2,0,1,0,
		2,0,95,1,100,8,28,5,121,25,9,176,10,0,
		95,1,12,1,165,95,255,95,2,2,6,20,2,36,
		9,1,95,2,122,1,92,31,15,28,33,36,10,1,
		95,2,122,1,80,4,36,11,1,95,2,92,2,1,
		95,2,122,2,36,12,1,95,4,95,2,92,2,2,
		36,15,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( UCHARTOVAL )
{
	static const HB_BYTE pcode[] =
	{
		13,5,2,36,22,1,106,53,124,46,84,46,124,84,
		124,84,82,85,69,124,89,69,83,124,86,69,82,68,
		65,68,69,82,79,124,86,69,82,79,124,87,65,72,
		82,124,86,82,65,73,124,86,69,82,68,65,68,69,
		73,82,79,124,0,80,5,36,23,1,106,35,124,46,
		70,46,124,70,124,70,65,76,83,69,124,78,79,124,
		70,65,76,83,79,124,70,65,76,83,67,72,124,70,
		65,85,88,124,0,80,6,36,24,1,9,80,7,36,
		27,1,176,1,0,95,2,12,1,106,2,67,0,8,
		28,66,176,20,0,95,2,12,1,122,8,28,55,176,
		2,0,95,2,12,1,106,6,67,68,76,77,78,0,
		24,28,37,36,28,1,176,2,0,95,2,12,1,80,
		2,36,29,1,95,2,106,2,77,0,8,28,25,36,
		30,1,106,2,67,0,80,2,25,14,36,33,1,176,
		1,0,95,2,12,1,80,2,36,35,1,95,2,106,
		2,84,0,8,28,11,36,36,1,106,2,68,0,80,
		2,36,39,1,176,1,0,95,1,12,1,106,2,67,
		0,8,29,4,2,36,40,1,176,44,0,95,1,12,
		1,80,1,36,43,1,95,2,106,2,67,0,8,28,
		12,36,44,1,95,1,80,3,26,245,1,36,45,1,
		95,2,106,2,78,0,8,29,130,0,36,46,1,106,
		2,37,0,95,1,24,80,7,36,47,1,176,13,0,
		95,1,12,1,31,42,176,39,0,95,1,12,1,31,
		33,176,18,0,95,1,122,12,2,106,2,45,0,69,
		28,18,36,48,1,176,45,0,95,1,92,2,12,2,
		80,1,25,206,36,50,1,176,10,0,176,22,0,176,
		22,0,95,1,106,2,44,0,100,12,3,106,2,37,
		0,106,1,0,12,3,12,1,80,3,36,51,1,95,
		7,29,126,1,36,52,1,96,3,0,101,123,20,174,
		71,225,122,132,63,10,2,137,26,105,1,36,54,1,
		95,2,106,2,76,0,8,28,30,36,55,1,106,2,
		124,0,176,2,0,95,1,12,1,72,106,2,124,0,
		72,95,5,24,80,3,26,65,1,36,56,1,95,2,
		106,2,68,0,8,28,17,36,57,1,176,32,0,95,
		1,12,1,80,3,26,38,1,36,59,1,106,2,37,
		0,95,1,24,80,7,36,61,1,176,39,0,95,1,
		12,1,31,17,176,18,0,95,1,122,12,2,106,2,
		45,0,8,28,98,176,8,0,176,27,0,176,10,0,
		176,22,0,176,22,0,95,1,106,2,44,0,100,12,
		3,106,2,37,0,106,1,0,12,3,165,80,4,12,
		1,12,1,12,1,95,4,8,28,51,36,62,1,176,
		10,0,95,4,12,1,80,3,36,63,1,95,7,28,
		20,36,64,1,96,3,0,101,123,20,174,71,225,122,
		132,63,10,2,137,36,66,1,106,2,78,0,80,2,
		26,138,0,36,67,1,106,2,124,0,176,2,0,95,
		1,12,1,72,106,2,124,0,72,95,5,24,28,19,
		36,68,1,120,80,3,36,69,1,106,2,76,0,80,
		2,25,95,36,70,1,106,2,124,0,176,2,0,95,
		1,12,1,72,106,2,124,0,72,95,6,24,28,19,
		36,71,1,9,80,3,36,72,1,106,2,76,0,80,
		2,25,53,36,74,1,176,32,0,95,1,12,1,80,
		3,36,75,1,176,13,0,95,3,12,1,28,20,36,
		76,1,95,1,80,3,36,77,1,106,2,67,0,80,
		2,25,11,36,79,1,106,2,68,0,80,2,25,21,
		36,85,1,95,1,80,3,36,86,1,176,1,0,95,
		3,12,1,80,2,36,89,1,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WHEELSCROLL )
{
	static const HB_BYTE pcode[] =
	{
		116,56,0,36,103,1,103,5,0,100,8,28,38,36,
		108,1,176,13,0,103,5,0,12,1,28,11,36,109,
		1,122,82,5,0,25,16,36,111,1,176,10,0,103,
		5,0,12,1,82,5,0,36,115,1,103,5,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISBINARYDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,36,122,1,9,80,5,36,125,1,176,6,
		0,93,200,0,176,20,0,95,1,12,1,12,2,80,
		4,36,126,1,122,165,80,3,25,55,36,127,1,176,
		45,0,95,1,95,3,122,12,3,80,2,36,128,1,
		95,2,106,2,32,0,35,28,22,95,2,106,5,9,
		10,13,26,0,24,31,10,36,129,1,120,80,5,25,
		13,36,126,1,175,3,0,95,4,15,28,200,36,134,
		1,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FW_VALTOEXP )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,140,1,176,1,0,95,1,12,1,80,
		3,36,143,1,95,1,100,8,28,13,36,144,1,106,
		1,0,80,2,26,229,0,36,145,1,95,3,106,2,
		65,0,8,28,91,36,146,1,106,2,123,0,80,2,
		36,147,1,176,13,0,95,1,12,1,31,56,36,148,
		1,96,2,0,176,48,0,95,1,122,1,12,1,135,
		36,149,1,176,42,0,95,1,89,26,0,1,0,1,
		0,2,0,96,255,255,106,2,44,0,176,48,0,95,
		1,12,1,72,139,6,92,2,20,3,36,151,1,96,
		2,0,106,2,125,0,135,26,128,0,36,152,1,95,
		3,106,2,67,0,8,28,16,36,154,1,176,49,0,
		95,1,12,1,80,2,25,101,36,155,1,95,3,106,
		2,68,0,8,28,32,36,156,1,106,7,83,84,111,
		68,40,34,0,176,50,0,95,1,12,1,72,106,3,
		34,41,0,72,80,2,25,59,36,157,1,95,3,106,
		2,84,0,8,28,35,36,158,1,106,10,70,87,95,
		83,84,111,84,40,34,0,176,51,0,95,1,12,1,
		72,106,3,34,41,0,72,80,2,25,14,36,160,1,
		176,14,0,95,1,12,1,80,2,36,163,1,95,2,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FW_STOT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,167,1,176,53,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,56,0,5,0,116,56,0,4,0,0,82,1,0,
		106,2,65,0,82,2,0,9,82,3,0,100,82,4,
		0,100,82,5,0,7
	};

	hb_vmExecute( pcode, symbols );
}

