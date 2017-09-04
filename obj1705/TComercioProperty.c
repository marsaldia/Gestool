/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Comercio\TComercioProperty.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TCOMERCIOPROPERTY );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TCOMERCIOCONECTOR );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPROPERTIESHEADER );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPROPERTIESLINEPRODUCT );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_GETORBUILDPROPERTIES );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPROPERTIESPRESTASHOP );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_BUILDPROPERTYPRODUCT );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_PROCESSPROPERTYPRODUCT );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEPRESTASHOP );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTECOMBINATION );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTESHOP );
HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEIMAGE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( D );
HB_FUNC_EXTERN( DBSEEKINORD );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( HGET );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( RGBTORGBHEX );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( HB_ENUMINDEX );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( NPREPRO );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TCOMERCIOPROPERTY )
{ "TCOMERCIOPROPERTY", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TCOMERCIOCONECTOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TCOMERCIOCONECTOR )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_APROPERTIESLINEPRODUCT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCOMERCIOPROPERTY_INSERTPROPERTIESHEADER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_INSERTPROPERTIESHEADER )}, NULL },
{ "TCOMERCIOPROPERTY_INSERTPROPERTIESLINEPRODUCT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_INSERTPROPERTIESLINEPRODUCT )}, NULL },
{ "TCOMERCIOPROPERTY_GETORBUILDPROPERTIES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_GETORBUILDPROPERTIES )}, NULL },
{ "TCOMERCIOPROPERTY_INSERTPROPERTIESPRESTASHOP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_INSERTPROPERTIESPRESTASHOP )}, NULL },
{ "TCOMERCIOPROPERTY_BUILDPROPERTYPRODUCT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_BUILDPROPERTYPRODUCT )}, NULL },
{ "TCOMERCIOPROPERTY_PROCESSPROPERTYPRODUCT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_PROCESSPROPERTYPRODUCT )}, NULL },
{ "TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEPRESTASHOP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEPRESTASHOP )}, NULL },
{ "TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTECOMBINATION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTECOMBINATION )}, NULL },
{ "TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTESHOP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTESHOP )}, NULL },
{ "TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEIMAGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEIMAGE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETVALUEATTRIBUTEGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TPRESTASHOPID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETCURRENTWEBNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CLEANPROPERTIES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILDPROPERTYPRODUCT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERTPROPERTIESPRESTASHOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GOTOARTICULOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "D", {HB_FS_PUBLIC}, {HB_FUNCNAME( D )}, NULL },
{ "GETVIEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROPIEDADES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSEEKINORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEKINORD )}, NULL },
{ "ARTICULOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODPRP1", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "APROPERTIESHEADERPRODUCT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HGET )}, NULL },
{ "CCODPRO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "ISSYNCRONIZEALL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "CNOMINT", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "CDESPRO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "LCOLOR", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CCODPRP2", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "ARTICULOPRECIOPROPIEDADES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "CCODART", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "GOTOIDPROPIEDADESLINEAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODPR1", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CVALPR1", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "GETVALUEATTRIBUTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROPIEDADESLINEAS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCODTBL", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "APROPERTIESLINEPRODUCT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDESTBL", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "RGBTORGBHEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( RGBTORGBHEX )}, NULL },
{ "NCOLOR", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NORDTBL", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CCODPR2", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CVALPR2", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "METERPROCESOSETTOTAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "INSERTPROPERTIESHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "METERPROCESOTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "HB_ENUMINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ENUMINDEX )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "INSERTPROPERTIESLINEPRODUCT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPREFIXTABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMMANDEXECDIRECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETINSERTID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OCONEXIONMYSQLDATABASE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WRITETEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETLANGUAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ESCAPESTR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETVALUEATTRIBUTEGROUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETVALUEATTRIBUTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPREPRO", {HB_FS_PUBLIC}, {HB_FUNCNAME( NPREPRO )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "INSERTPRODUCTATTRIBUTEPRESTASHOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERTPRODUCTATTRIBUTECOMBINATION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETVALUEPRODUCTATTRIBUTECOMBINATION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERTPRODUCTATTRIBUTESHOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSERTPRODUCTATTRIBUTEIMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LPRODUCTIDCOLUMNPRODUCTATTRIBUTE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "LPRODUCTIDCOLUMNPRODUCTATTRIBUTESHOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETVALUEIMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TCOMERCIOPROPERTY, ".\\Prg\\Comercio\\TComercioProperty.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TCOMERCIOPROPERTY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TCOMERCIOPROPERTY )
   #include "hbiniseg.h"
#endif

HB_FUNC( TCOMERCIOPROPERTY )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,98,0,36,9,0,103,2,0,100,8,
		29,71,3,176,1,0,104,2,0,12,1,29,60,3,
		166,254,2,0,122,80,1,48,2,0,176,3,0,12,
		0,106,18,84,67,111,109,101,114,99,105,111,80,114,
		111,112,101,114,116,121,0,108,4,4,1,0,108,0,
		112,3,80,2,36,11,0,48,5,0,95,2,100,100,
		95,1,121,72,121,72,121,72,106,15,105,100,77,97,
		110,117,102,97,99,116,117,114,101,114,0,4,1,0,
		9,112,5,73,36,13,0,48,5,0,95,2,100,4,
		0,0,95,1,121,72,121,72,121,72,106,25,97,80,
		114,111,112,101,114,116,105,101,115,72,101,97,100,101,
		114,80,114,111,100,117,99,116,0,4,1,0,9,112,
		5,73,36,14,0,48,5,0,95,2,100,4,0,0,
		95,1,121,72,121,72,121,72,106,23,97,80,114,111,
		112,101,114,116,105,101,115,76,105,110,101,80,114,111,
		100,117,99,116,0,4,1,0,9,112,5,73,36,16,
		0,48,6,0,95,2,106,16,99,108,101,97,110,80,
		114,111,112,101,114,116,105,101,115,0,89,29,0,1,
		0,0,0,48,7,0,95,1,4,0,0,112,1,73,
		48,7,0,95,1,4,0,0,112,1,6,95,1,121,
		72,121,72,121,72,112,3,73,36,18,0,48,8,0,
		95,2,106,23,105,110,115,101,114,116,80,114,111,112,
		101,114,116,105,101,115,72,101,97,100,101,114,0,108,
		9,95,1,121,72,121,72,121,72,112,3,73,36,19,
		0,48,8,0,95,2,106,28,105,110,115,101,114,116,
		80,114,111,112,101,114,116,105,101,115,76,105,110,101,
		80,114,111,100,117,99,116,0,108,10,95,1,121,72,
		121,72,121,72,112,3,73,36,21,0,48,8,0,95,
		2,106,21,103,101,116,79,114,66,117,105,108,100,80,
		114,111,112,101,114,116,105,101,115,0,108,11,95,1,
		121,72,121,72,121,72,112,3,73,36,22,0,48,8,
		0,95,2,106,27,105,110,115,101,114,116,80,114,111,
		112,101,114,116,105,101,115,80,114,101,115,116,97,115,
		104,111,112,0,108,12,95,1,121,72,121,72,121,72,
		112,3,73,36,24,0,48,8,0,95,2,106,21,98,
		117,105,108,100,80,114,111,112,101,114,116,121,80,114,
		111,100,117,99,116,0,108,13,95,1,121,72,121,72,
		121,72,112,3,73,36,26,0,48,8,0,95,2,106,
		23,112,114,111,99,101,115,115,80,114,111,112,101,114,
		116,121,80,114,111,100,117,99,116,0,108,14,95,1,
		121,72,121,72,121,72,112,3,73,36,27,0,48,8,
		0,95,2,106,33,105,110,115,101,114,116,80,114,111,
		100,117,99,116,65,116,116,114,105,98,117,116,101,80,
		114,101,115,116,97,115,104,111,112,0,108,15,95,1,
		121,72,121,72,121,72,112,3,73,36,28,0,48,8,
		0,95,2,106,34,105,110,115,101,114,116,80,114,111,
		100,117,99,116,65,116,116,114,105,98,117,116,101,67,
		111,109,98,105,110,97,116,105,111,110,0,108,16,95,
		1,121,72,121,72,121,72,112,3,73,36,29,0,48,
		8,0,95,2,106,27,105,110,115,101,114,116,80,114,
		111,100,117,99,116,65,116,116,114,105,98,117,116,101,
		83,104,111,112,0,108,17,95,1,121,72,121,72,121,
		72,112,3,73,36,30,0,48,8,0,95,2,106,28,
		105,110,115,101,114,116,80,114,111,100,117,99,116,65,
		116,116,114,105,98,117,116,101,73,109,97,103,101,0,
		108,18,95,1,121,72,121,72,121,72,112,3,73,36,
		32,0,48,19,0,95,2,112,0,73,167,14,0,0,
		176,20,0,104,2,0,95,2,20,2,168,48,21,0,
		95,2,112,0,80,3,176,22,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		23,0,95,3,164,146,1,0,73,95,3,110,7,48,
		21,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_GETORBUILDPROPERTIES )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,40,0,48,24,0,48,25,0,102,112,
		0,95,1,48,26,0,102,112,0,112,2,80,2,36,
		42,0,176,27,0,95,2,12,1,28,34,36,44,0,
		48,28,0,102,112,0,73,36,46,0,48,29,0,102,
		95,1,112,1,73,36,48,0,48,30,0,102,112,0,
		73,36,52,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_BUILDPROPERTYPRODUCT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,56,0,102,80,2,36,58,0,48,31,
		0,176,32,0,12,0,95,1,48,33,0,95,2,112,
		0,112,2,31,9,36,59,0,95,2,110,7,36,66,
		0,85,48,34,0,176,32,0,12,0,48,33,0,95,
		2,112,0,112,1,74,176,35,0,48,36,0,176,32,
		0,12,0,48,33,0,95,2,112,0,112,1,88,37,
		0,106,8,99,67,111,100,80,114,111,0,12,2,119,
		29,6,1,36,68,0,176,38,0,48,39,0,95,2,
		112,0,89,43,0,1,0,1,0,2,0,176,40,0,
		95,1,106,3,105,100,0,12,2,48,34,0,176,32,
		0,12,0,48,33,0,95,255,112,0,112,1,88,41,
		0,8,6,12,2,121,8,29,199,0,36,70,0,48,
		42,0,95,2,112,0,31,28,48,24,0,48,25,0,
		95,2,112,0,95,1,48,26,0,95,2,112,0,112,
		2,121,8,29,161,0,36,74,0,176,43,0,48,39,
		0,95,2,112,0,106,3,105,100,0,48,34,0,176,
		32,0,12,0,48,33,0,95,2,112,0,112,1,88,
		41,0,106,5,110,97,109,101,0,176,27,0,48,34,
		0,176,32,0,12,0,48,33,0,95,2,112,0,112,
		1,88,44,0,12,1,28,29,176,45,0,48,34,0,
		176,32,0,12,0,48,33,0,95,2,112,0,112,1,
		88,46,0,12,1,25,27,176,45,0,48,34,0,176,
		32,0,12,0,48,33,0,95,2,112,0,112,1,88,
		44,0,12,1,106,7,108,67,111,108,111,114,0,48,
		34,0,176,32,0,12,0,48,33,0,95,2,112,0,
		112,1,88,47,0,177,3,0,20,2,36,86,0,85,
		48,34,0,176,32,0,12,0,48,33,0,95,2,112,
		0,112,1,74,176,35,0,48,36,0,176,32,0,12,
		0,48,33,0,95,2,112,0,112,1,88,48,0,106,
		8,99,67,111,100,80,114,111,0,12,2,119,29,6,
		1,36,88,0,176,38,0,48,39,0,95,2,112,0,
		89,43,0,1,0,1,0,2,0,176,40,0,95,1,
		106,3,105,100,0,12,2,48,34,0,176,32,0,12,
		0,48,33,0,95,255,112,0,112,1,88,41,0,8,
		6,12,2,121,8,29,199,0,36,90,0,48,42,0,
		95,2,112,0,31,28,48,24,0,48,25,0,95,2,
		112,0,95,1,48,26,0,95,2,112,0,112,2,121,
		8,29,161,0,36,94,0,176,43,0,48,39,0,95,
		2,112,0,106,3,105,100,0,48,34,0,176,32,0,
		12,0,48,33,0,95,2,112,0,112,1,88,41,0,
		106,5,110,97,109,101,0,176,27,0,48,34,0,176,
		32,0,12,0,48,33,0,95,2,112,0,112,1,88,
		44,0,12,1,28,29,176,45,0,48,34,0,176,32,
		0,12,0,48,33,0,95,2,112,0,112,1,88,46,
		0,12,1,25,27,176,45,0,48,34,0,176,32,0,
		12,0,48,33,0,95,2,112,0,112,1,88,44,0,
		12,1,106,7,108,67,111,108,111,114,0,48,34,0,
		176,32,0,12,0,48,33,0,95,2,112,0,112,1,
		88,47,0,177,3,0,20,2,36,106,0,85,48,49,
		0,176,32,0,12,0,48,33,0,95,2,112,0,112,
		1,74,176,50,0,95,1,12,1,119,29,185,3,36,
		108,0,48,49,0,176,32,0,12,0,48,33,0,95,
		2,112,0,112,1,88,51,0,48,36,0,176,32,0,
		12,0,48,33,0,95,2,112,0,112,1,88,52,0,
		8,29,138,3,85,48,49,0,176,32,0,12,0,48,
		33,0,95,2,112,0,112,1,74,176,53,0,12,0,
		119,32,110,3,36,110,0,48,54,0,176,32,0,12,
		0,48,49,0,176,32,0,12,0,48,33,0,95,2,
		112,0,112,1,88,55,0,48,49,0,176,32,0,12,
		0,48,33,0,95,2,112,0,112,1,88,56,0,72,
		48,33,0,95,2,112,0,112,2,29,105,1,36,113,
		0,48,42,0,95,2,112,0,31,67,48,57,0,48,
		25,0,95,2,112,0,48,58,0,176,32,0,12,0,
		48,33,0,95,2,112,0,112,1,88,41,0,48,58,
		0,176,32,0,12,0,48,33,0,95,2,112,0,112,
		1,88,59,0,72,48,26,0,95,2,112,0,112,2,
		121,8,29,28,1,36,115,0,176,38,0,48,60,0,
		95,2,112,0,89,86,0,1,0,1,0,2,0,176,
		40,0,95,1,106,3,105,100,0,12,2,48,58,0,
		176,32,0,12,0,48,33,0,95,255,112,0,112,1,
		88,59,0,8,21,28,42,73,176,40,0,95,1,106,
		9,105,100,112,97,114,101,110,116,0,12,2,48,58,
		0,176,32,0,12,0,48,33,0,95,255,112,0,112,
		1,88,41,0,8,6,12,2,121,8,29,178,0,36,
		121,0,176,43,0,48,60,0,95,2,112,0,106,3,
		105,100,0,48,58,0,176,32,0,12,0,48,33,0,
		95,2,112,0,112,1,88,59,0,106,9,105,100,112,
		97,114,101,110,116,0,48,58,0,176,32,0,12,0,
		48,33,0,95,2,112,0,112,1,88,41,0,106,5,
		110,97,109,101,0,176,45,0,48,58,0,176,32,0,
		12,0,48,33,0,95,2,112,0,112,1,88,61,0,
		12,1,106,6,99,111,108,111,114,0,176,45,0,176,
		62,0,48,58,0,176,32,0,12,0,48,33,0,95,
		2,112,0,112,1,88,63,0,12,1,12,1,106,9,
		112,111,115,105,116,105,111,110,0,48,58,0,176,32,
		0,12,0,48,33,0,95,2,112,0,112,1,88,64,
		0,177,5,0,20,2,36,129,0,48,54,0,176,32,
		0,12,0,48,49,0,176,32,0,12,0,48,33,0,
		95,2,112,0,112,1,88,65,0,48,49,0,176,32,
		0,12,0,48,33,0,95,2,112,0,112,1,88,66,
		0,72,48,33,0,95,2,112,0,112,2,29,105,1,
		36,132,0,48,42,0,95,2,112,0,31,67,48,57,
		0,48,25,0,95,2,112,0,48,58,0,176,32,0,
		12,0,48,33,0,95,2,112,0,112,1,88,41,0,
		48,58,0,176,32,0,12,0,48,33,0,95,2,112,
		0,112,1,88,59,0,72,48,26,0,95,2,112,0,
		112,2,121,8,29,28,1,36,134,0,176,38,0,48,
		60,0,95,2,112,0,89,86,0,1,0,1,0,2,
		0,176,40,0,95,1,106,3,105,100,0,12,2,48,
		58,0,176,32,0,12,0,48,33,0,95,255,112,0,
		112,1,88,59,0,8,21,28,42,73,176,40,0,95,
		1,106,9,105,100,112,97,114,101,110,116,0,12,2,
		48,58,0,176,32,0,12,0,48,33,0,95,255,112,
		0,112,1,88,41,0,8,6,12,2,121,8,29,178,
		0,36,140,0,176,43,0,48,60,0,95,2,112,0,
		106,3,105,100,0,48,58,0,176,32,0,12,0,48,
		33,0,95,2,112,0,112,1,88,59,0,106,9,105,
		100,112,97,114,101,110,116,0,48,58,0,176,32,0,
		12,0,48,33,0,95,2,112,0,112,1,88,41,0,
		106,5,110,97,109,101,0,176,45,0,48,58,0,176,
		32,0,12,0,48,33,0,95,2,112,0,112,1,88,
		61,0,12,1,106,6,99,111,108,111,114,0,176,45,
		0,176,62,0,48,58,0,176,32,0,12,0,48,33,
		0,95,2,112,0,112,1,88,63,0,12,1,12,1,
		106,9,112,111,115,105,116,105,111,110,0,48,58,0,
		176,32,0,12,0,48,33,0,95,2,112,0,112,1,
		88,64,0,177,5,0,20,2,36,148,0,85,48,49,
		0,176,32,0,12,0,48,33,0,95,2,112,0,112,
		1,74,176,67,0,20,0,74,26,77,252,36,154,0,
		95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPROPERTIESPRESTASHOP )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,36,163,0,48,68,0,102,176,69,0,48,
		39,0,102,112,0,12,1,112,1,73,36,165,0,48,
		39,0,102,112,0,96,2,0,129,1,1,28,98,36,
		167,0,48,70,0,102,95,2,112,1,73,36,169,0,
		48,71,0,102,106,20,83,117,98,105,101,110,100,111,
		32,112,114,111,112,105,101,100,97,100,32,0,176,45,
		0,176,72,0,176,73,0,12,0,12,1,12,1,72,
		106,5,32,100,101,32,0,72,176,45,0,176,72,0,
		176,69,0,48,39,0,102,112,0,12,1,12,1,12,
		1,72,112,1,73,36,171,0,130,31,162,132,36,175,
		0,48,68,0,102,176,69,0,48,60,0,102,112,0,
		12,1,112,1,73,36,177,0,176,74,0,48,60,0,
		102,112,0,100,100,89,45,0,2,0,0,0,176,40,
		0,95,1,106,9,112,111,115,105,116,105,111,110,0,
		12,2,176,40,0,95,2,106,9,112,111,115,105,116,
		105,111,110,0,12,2,35,6,20,4,36,179,0,48,
		60,0,102,112,0,96,1,0,129,1,1,28,103,36,
		181,0,48,75,0,102,95,1,176,73,0,12,0,112,
		2,73,36,183,0,48,71,0,102,106,20,83,117,98,
		105,101,110,100,111,32,112,114,111,112,105,101,100,97,
		100,32,0,176,45,0,176,72,0,176,73,0,12,0,
		12,1,12,1,72,106,5,32,100,101,32,0,72,176,
		45,0,176,72,0,176,69,0,48,60,0,102,112,0,
		12,1,12,1,12,1,72,112,1,73,36,185,0,130,
		31,157,132,36,187,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPROPERTIESHEADER )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,36,193,0,106,1,0,80,2,36,194,0,
		121,80,3,36,201,0,106,20,73,78,83,69,82,84,
		32,73,71,78,79,82,69,32,73,78,84,79,32,0,
		48,76,0,102,106,16,97,116,116,114,105,98,117,116,
		101,95,103,114,111,117,112,0,112,1,72,106,4,32,
		40,32,0,72,106,17,105,115,95,99,111,108,111,114,
		95,103,114,111,117,112,44,32,0,72,106,14,103,114,
		111,117,112,95,116,121,112,101,32,41,32,0,72,106,
		10,86,65,76,85,69,83,32,40,32,0,72,106,2,
		39,0,72,176,40,0,95,1,106,7,108,67,111,108,
		111,114,0,12,2,28,8,106,2,49,0,25,6,106,
		2,48,0,72,106,4,39,44,32,0,72,106,2,39,
		0,72,176,40,0,95,1,106,7,108,67,111,108,111,
		114,0,12,2,28,12,106,6,99,111,108,111,114,0,
		25,11,106,7,115,101,108,101,99,116,0,72,106,4,
		39,32,41,0,72,80,2,36,203,0,48,77,0,102,
		95,2,112,1,28,20,36,204,0,48,78,0,48,79,
		0,102,112,0,112,0,80,3,25,105,36,206,0,48,
		80,0,102,106,32,69,114,114,111,114,32,97,108,32,
		105,110,115,101,114,116,97,114,32,108,97,32,112,114,
		111,112,105,101,100,97,100,32,0,176,40,0,95,1,
		106,5,110,97,109,101,0,12,2,72,106,14,32,101,
		110,32,108,97,32,116,97,98,108,97,32,0,72,48,
		76,0,102,106,16,97,116,116,114,105,98,117,116,101,
		95,103,114,111,117,112,0,112,1,72,92,3,112,2,
		73,36,209,0,176,27,0,95,3,12,1,32,159,1,
		36,219,0,106,20,73,78,83,69,82,84,32,73,71,
		78,79,82,69,32,73,78,84,79,32,0,48,76,0,
		102,106,21,97,116,116,114,105,98,117,116,101,95,103,
		114,111,117,112,95,108,97,110,103,0,112,1,72,106,
		4,32,40,32,0,72,106,21,105,100,95,97,116,116,
		114,105,98,117,116,101,95,103,114,111,117,112,44,32,
		0,72,106,10,105,100,95,108,97,110,103,44,32,0,
		72,106,7,110,97,109,101,44,32,0,72,106,15,112,
		117,98,108,105,99,95,110,97,109,101,32,41,32,0,
		72,106,10,86,65,76,85,69,83,32,40,32,0,72,
		106,2,39,0,72,176,45,0,176,72,0,95,3,12,
		1,12,1,72,106,4,39,44,32,0,72,48,81,0,
		102,112,0,72,106,3,44,32,0,72,106,2,39,0,
		72,48,82,0,48,79,0,102,112,0,176,40,0,95,
		1,106,5,110,97,109,101,0,12,2,112,1,72,106,
		4,39,44,32,0,72,106,2,39,0,72,48,82,0,
		48,79,0,102,112,0,176,40,0,95,1,106,5,110,
		97,109,101,0,12,2,112,1,72,106,4,39,32,41,
		0,72,80,2,36,221,0,48,77,0,102,95,2,112,
		1,31,110,36,222,0,48,80,0,102,106,32,69,114,
		114,111,114,32,97,108,32,105,110,115,101,114,116,97,
		114,32,108,97,32,112,114,111,112,105,101,100,97,100,
		32,0,176,40,0,95,1,106,5,110,97,109,101,0,
		12,2,72,106,14,32,101,110,32,108,97,32,116,97,
		98,108,97,32,0,72,48,76,0,102,106,21,97,116,
		116,114,105,98,117,116,101,95,103,114,111,117,112,95,
		108,97,110,103,0,112,1,72,92,3,112,2,73,36,
		227,0,48,83,0,48,25,0,102,112,0,176,40,0,
		95,1,106,3,105,100,0,12,2,48,26,0,102,112,
		0,95,3,112,3,73,36,231,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPROPERTIESLINEPRODUCT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,237,0,106,1,0,80,3,36,238,0,
		121,80,4,36,239,0,48,24,0,48,25,0,102,112,
		0,176,40,0,95,1,106,9,105,100,112,97,114,101,
		110,116,0,12,2,48,26,0,102,112,0,112,2,80,
		5,36,241,0,176,27,0,176,40,0,95,1,106,9,
		105,100,112,97,114,101,110,116,0,12,2,12,1,28,
		27,176,27,0,176,40,0,95,1,106,3,105,100,0,
		12,2,12,1,28,8,36,242,0,102,110,7,36,252,
		0,106,20,73,78,83,69,82,84,32,73,71,78,79,
		82,69,32,73,78,84,79,32,0,48,76,0,102,106,
		10,97,116,116,114,105,98,117,116,101,0,112,1,72,
		106,4,32,40,32,0,72,106,21,105,100,95,97,116,
		116,114,105,98,117,116,101,95,103,114,111,117,112,44,
		32,0,72,106,8,99,111,108,111,114,44,32,0,72,
		106,12,112,111,115,105,116,105,111,110,32,41,32,0,
		72,106,10,86,65,76,85,69,83,32,40,32,0,72,
		106,2,39,0,72,176,45,0,176,72,0,95,5,12,
		1,12,1,72,106,4,39,44,32,0,72,106,2,39,
		0,72,176,40,0,95,1,106,6,99,111,108,111,114,
		0,12,2,72,106,4,39,32,44,0,72,106,2,39,
		0,72,176,45,0,176,72,0,95,2,12,1,12,1,
		72,106,4,39,32,41,0,72,80,3,36,254,0,48,
		77,0,102,95,3,112,1,28,20,36,255,0,48,78,
		0,48,79,0,102,112,0,112,0,80,4,25,99,36,
		1,1,48,80,0,102,106,32,69,114,114,111,114,32,
		97,108,32,105,110,115,101,114,116,97,114,32,108,97,
		32,112,114,111,112,105,101,100,97,100,32,0,176,40,
		0,95,1,106,5,110,97,109,101,0,12,2,72,106,
		14,32,101,110,32,108,97,32,116,97,98,108,97,32,
		0,72,48,76,0,102,106,10,97,116,116,114,105,98,
		117,116,101,0,112,1,72,92,3,112,2,73,36,4,
		1,176,27,0,95,4,12,1,32,101,2,36,13,1,
		106,20,73,78,83,69,82,84,32,73,71,78,79,82,
		69,32,73,78,84,79,32,0,48,76,0,102,106,15,
		97,116,116,114,105,98,117,116,101,95,108,97,110,103,
		0,112,1,72,106,4,32,40,32,0,72,106,15,105,
		100,95,97,116,116,114,105,98,117,116,101,44,32,0,
		72,106,10,105,100,95,108,97,110,103,44,32,0,72,
		106,8,110,97,109,101,32,41,32,0,72,106,10,86,
		65,76,85,69,83,32,40,32,0,72,106,2,39,0,
		72,176,45,0,176,72,0,95,4,12,1,12,1,72,
		106,4,39,44,32,0,72,48,81,0,102,112,0,72,
		106,3,44,32,0,72,106,2,39,0,72,48,82,0,
		48,79,0,102,112,0,176,40,0,95,1,106,5,110,
		97,109,101,0,12,2,112,1,72,106,4,39,32,41,
		0,72,80,3,36,15,1,48,77,0,102,95,3,112,
		1,31,104,36,16,1,48,80,0,102,106,32,69,114,
		114,111,114,32,97,108,32,105,110,115,101,114,116,97,
		114,32,108,97,32,112,114,111,112,105,101,100,97,100,
		32,0,176,40,0,95,1,106,5,110,97,109,101,0,
		12,2,72,106,14,32,101,110,32,108,97,32,116,97,
		98,108,97,32,0,72,48,76,0,102,106,15,97,116,
		116,114,105,98,117,116,101,95,108,97,110,103,0,112,
		1,72,92,3,112,2,73,36,24,1,106,20,73,78,
		83,69,82,84,32,73,71,78,79,82,69,32,73,78,
		84,79,32,0,48,76,0,102,106,15,97,116,116,114,
		105,98,117,116,101,95,115,104,111,112,0,112,1,72,
		106,4,32,40,32,0,72,106,15,105,100,95,97,116,
		116,114,105,98,117,116,101,44,32,0,72,106,11,105,
		100,95,115,104,111,112,32,41,32,0,72,106,10,86,
		65,76,85,69,83,32,40,32,0,72,106,2,39,0,
		72,176,45,0,176,72,0,95,4,12,1,12,1,72,
		106,4,39,44,32,0,72,106,6,39,49,39,32,41,
		0,72,80,3,36,26,1,48,77,0,102,95,3,112,
		1,31,104,36,27,1,48,80,0,102,106,32,69,114,
		114,111,114,32,97,108,32,105,110,115,101,114,116,97,
		114,32,108,97,32,112,114,111,112,105,101,100,97,100,
		32,0,176,40,0,95,1,106,5,110,97,109,101,0,
		12,2,72,106,14,32,101,110,32,108,97,32,116,97,
		98,108,97,32,0,72,48,76,0,102,106,15,97,116,
		116,114,105,98,117,116,101,95,115,104,111,112,0,112,
		1,72,92,3,112,2,73,36,32,1,48,84,0,48,
		25,0,102,112,0,176,40,0,95,1,106,9,105,100,
		112,97,114,101,110,116,0,12,2,176,40,0,95,1,
		106,3,105,100,0,12,2,72,48,26,0,102,112,0,
		95,4,112,3,73,36,36,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_PROCESSPROPERTYPRODUCT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,36,42,1,120,80,3,36,43,1,121,80,
		4,36,44,1,121,80,5,36,48,1,85,48,49,0,
		176,32,0,12,0,48,33,0,102,112,0,112,1,74,
		176,35,0,176,40,0,95,2,106,3,105,100,0,12,
		2,106,8,99,67,111,100,65,114,116,0,12,2,119,
		29,8,2,36,50,1,48,49,0,176,32,0,12,0,
		48,33,0,102,112,0,112,1,88,51,0,176,40,0,
		95,2,106,3,105,100,0,12,2,8,29,226,1,85,
		48,49,0,176,32,0,12,0,48,33,0,102,112,0,
		112,1,74,176,53,0,12,0,68,119,29,198,1,36,
		52,1,176,27,0,48,49,0,176,32,0,12,0,48,
		33,0,102,112,0,112,1,88,56,0,12,1,32,132,
		1,36,54,1,176,85,0,176,40,0,95,2,106,3,
		105,100,0,12,2,48,49,0,176,32,0,12,0,48,
		33,0,102,112,0,112,1,88,55,0,48,49,0,176,
		32,0,12,0,48,33,0,102,112,0,112,1,88,56,
		0,176,86,0,92,20,12,1,176,86,0,92,20,12,
		1,122,9,48,49,0,176,32,0,12,0,48,33,0,
		102,112,0,112,1,12,8,80,5,36,56,1,48,87,
		0,102,95,1,95,2,95,5,112,3,80,4,36,58,
		1,48,88,0,102,48,49,0,176,32,0,12,0,48,
		33,0,102,112,0,112,1,88,55,0,48,49,0,176,
		32,0,12,0,48,33,0,102,112,0,112,1,88,56,
		0,95,4,112,3,73,36,60,1,176,27,0,48,49,
		0,176,32,0,12,0,48,33,0,102,112,0,112,1,
		88,66,0,12,1,31,52,36,62,1,48,88,0,102,
		48,49,0,176,32,0,12,0,48,33,0,102,112,0,
		112,1,88,65,0,48,49,0,176,32,0,12,0,48,
		33,0,102,112,0,112,1,88,66,0,95,4,112,3,
		73,36,66,1,48,89,0,48,25,0,102,112,0,176,
		40,0,95,2,106,3,105,100,0,12,2,48,49,0,
		176,32,0,12,0,48,33,0,102,112,0,112,1,88,
		55,0,72,48,49,0,176,32,0,12,0,48,33,0,
		102,112,0,112,1,88,56,0,72,48,49,0,176,32,
		0,12,0,48,33,0,102,112,0,112,1,88,65,0,
		72,48,49,0,176,32,0,12,0,48,33,0,102,112,
		0,112,1,88,66,0,72,48,26,0,102,112,0,95,
		4,112,3,73,36,68,1,48,90,0,102,95,1,95,
		4,95,5,95,3,112,4,73,36,70,1,48,91,0,
		102,95,2,95,4,112,2,73,36,74,1,85,48,49,
		0,176,32,0,12,0,48,33,0,102,112,0,112,1,
		74,176,67,0,20,0,74,36,76,1,9,80,3,26,
		254,253,36,82,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEPRESTASHOP )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,36,89,1,121,80,5,36,104,1,106,20,
		73,78,83,69,82,84,32,73,71,78,79,82,69,32,
		73,78,84,79,32,0,48,76,0,102,106,18,112,114,
		111,100,117,99,116,95,97,116,116,114,105,98,117,116,
		101,0,112,1,72,106,4,32,40,32,0,72,48,92,
		0,102,112,0,28,19,106,13,105,100,95,112,114,111,
		100,117,99,116,44,32,0,25,5,106,1,0,72,106,
		8,112,114,105,99,101,44,32,0,72,106,18,119,104,
		111,108,101,115,97,108,101,95,112,114,105,99,101,44,
		32,0,72,106,11,113,117,97,110,116,105,116,121,44,
		32,0,72,106,20,109,105,110,105,109,97,108,95,113,
		117,97,110,116,105,116,121,32,41,32,0,72,106,10,
		86,65,76,85,69,83,32,40,32,0,72,48,92,0,
		102,112,0,28,28,106,2,39,0,176,45,0,176,72,
		0,95,1,12,1,12,1,72,106,4,39,44,32,0,
		72,25,5,106,1,0,72,106,2,39,0,72,176,45,
		0,176,72,0,95,3,12,1,12,1,72,106,4,39,
		44,32,0,72,106,2,39,0,72,176,45,0,176,72,
		0,95,3,12,1,12,1,72,106,4,39,44,32,0,
		72,106,10,39,49,48,48,48,48,39,44,32,0,72,
		106,6,39,49,39,32,41,0,72,80,4,36,106,1,
		48,77,0,102,95,4,112,1,28,21,36,107,1,48,
		78,0,48,79,0,102,112,0,112,0,80,5,26,150,
		0,36,109,1,48,80,0,102,106,32,69,114,114,111,
		114,32,97,108,32,105,110,115,101,114,116,97,114,32,
		108,97,32,112,114,111,112,105,101,100,97,100,32,0,
		176,45,0,48,49,0,176,32,0,12,0,48,33,0,
		102,112,0,112,1,88,56,0,12,1,72,106,4,32,
		45,32,0,72,176,45,0,48,49,0,176,32,0,12,
		0,48,33,0,102,112,0,112,1,88,66,0,12,1,
		72,106,14,32,101,110,32,108,97,32,116,97,98,108,
		97,32,0,72,48,76,0,102,106,18,112,114,111,100,
		117,99,116,95,97,116,116,114,105,98,117,116,101,0,
		112,1,72,92,3,112,2,73,36,112,1,95,5,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTECOMBINATION )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,36,122,1,85,48,58,0,176,32,0,12,
		0,48,33,0,102,112,0,112,1,74,176,35,0,176,
		93,0,95,1,12,1,176,93,0,95,2,12,1,72,
		106,8,99,67,111,100,80,114,111,0,12,2,119,31,
		86,36,123,1,48,80,0,102,106,41,69,114,114,111,
		114,32,97,108,32,98,117,115,99,97,114,32,101,110,
		32,116,97,98,108,97,32,100,101,32,112,114,111,112,
		105,101,100,97,100,101,115,32,0,176,45,0,95,1,
		12,1,72,106,4,32,58,32,0,72,176,45,0,95,
		2,12,1,72,92,3,112,2,73,36,124,1,9,110,
		7,36,127,1,48,57,0,48,25,0,102,112,0,95,
		1,95,2,72,48,26,0,102,112,0,112,2,80,5,
		36,131,1,106,13,68,69,76,69,84,69,32,70,82,
		79,77,32,0,48,76,0,102,106,30,112,114,111,100,
		117,99,116,95,97,116,116,114,105,98,117,116,101,95,
		99,111,109,98,105,110,97,116,105,111,110,0,112,1,
		72,106,2,32,0,72,106,22,87,72,69,82,69,32,
		105,100,95,97,116,116,114,105,98,117,116,101,32,61,
		32,0,72,176,45,0,176,72,0,95,5,12,1,12,
		1,72,106,2,32,0,72,106,28,65,78,68,32,105,
		100,95,112,114,111,100,117,99,116,95,97,116,116,114,
		105,98,117,116,101,32,61,32,0,72,176,45,0,176,
		72,0,95,3,12,1,12,1,72,80,4,36,133,1,
		48,77,0,102,95,4,112,1,31,117,36,134,1,48,
		80,0,102,106,32,69,114,114,111,114,32,97,108,32,
		101,108,105,109,105,110,97,114,32,108,97,32,112,114,
		111,112,105,101,100,97,100,32,0,176,45,0,176,72,
		0,95,5,12,1,12,1,72,106,14,32,101,110,32,
		108,97,32,116,97,98,108,97,32,0,72,48,76,0,
		102,106,30,112,114,111,100,117,99,116,95,97,116,116,
		114,105,98,117,116,101,95,99,111,109,98,105,110,97,
		116,105,111,110,0,112,1,72,92,3,112,2,73,36,
		142,1,106,20,73,78,83,69,82,84,32,73,71,78,
		79,82,69,32,73,78,84,79,32,0,48,76,0,102,
		106,30,112,114,111,100,117,99,116,95,97,116,116,114,
		105,98,117,116,101,95,99,111,109,98,105,110,97,116,
		105,111,110,0,112,1,72,106,3,40,32,0,72,106,
		15,105,100,95,97,116,116,114,105,98,117,116,101,44,
		32,0,72,106,24,105,100,95,112,114,111,100,117,99,
		116,95,97,116,116,114,105,98,117,116,101,32,41,32,
		0,72,106,9,86,65,76,85,69,83,32,40,0,72,
		106,2,39,0,72,176,45,0,176,72,0,95,5,12,
		1,12,1,72,106,4,39,44,32,0,72,106,2,39,
		0,72,176,45,0,176,72,0,95,3,12,1,12,1,
		72,106,4,39,32,41,0,72,80,4,36,144,1,48,
		77,0,102,95,4,112,1,32,130,0,36,145,1,48,
		80,0,102,106,32,69,114,114,111,114,32,97,108,32,
		105,110,115,101,114,116,97,114,32,108,97,32,112,114,
		111,112,105,101,100,97,100,32,0,176,45,0,48,58,
		0,176,32,0,12,0,48,33,0,102,112,0,112,1,
		88,61,0,12,1,72,106,14,32,101,110,32,108,97,
		32,116,97,98,108,97,32,0,72,48,76,0,102,106,
		30,112,114,111,100,117,99,116,95,97,116,116,114,105,
		98,117,116,101,95,99,111,109,98,105,110,97,116,105,
		111,110,0,112,1,72,92,3,112,2,73,36,148,1,
		95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTESHOP )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,36,175,1,106,20,73,78,83,69,82,84,
		32,73,71,78,79,82,69,32,73,78,84,79,32,0,
		48,76,0,102,106,23,112,114,111,100,117,99,116,95,
		97,116,116,114,105,98,117,116,101,95,115,104,111,112,
		0,112,1,72,106,4,32,40,32,0,72,48,94,0,
		102,112,0,28,19,106,13,105,100,95,112,114,111,100,
		117,99,116,44,32,0,25,5,106,1,0,72,106,23,
		105,100,95,112,114,111,100,117,99,116,95,97,116,116,
		114,105,98,117,116,101,44,32,0,72,106,10,105,100,
		95,115,104,111,112,44,32,0,72,106,18,119,104,111,
		108,101,115,97,108,101,95,112,114,105,99,101,44,32,
		0,72,106,8,112,114,105,99,101,44,32,0,72,106,
		9,101,99,111,116,97,120,44,32,0,72,106,9,119,
		101,105,103,104,116,44,32,0,72,106,20,117,110,105,
		116,95,112,114,105,99,101,95,105,109,112,97,99,116,
		44,32,0,72,95,4,28,19,106,13,100,101,102,97,
		117,108,116,95,111,110,44,32,0,25,5,106,1,0,
		72,106,20,109,105,110,105,109,97,108,95,113,117,97,
		110,116,105,116,121,32,41,32,0,72,106,10,86,65,
		76,85,69,83,32,40,32,0,72,48,94,0,102,112,
		0,28,28,106,2,39,0,176,45,0,176,72,0,95,
		1,12,1,12,1,72,106,4,39,44,32,0,72,25,
		5,106,1,0,72,106,2,39,0,72,176,45,0,176,
		72,0,95,2,12,1,12,1,72,106,4,39,44,32,
		0,72,106,6,39,49,39,44,32,0,72,106,2,39,
		0,72,176,45,0,176,72,0,95,3,12,1,12,1,
		72,106,4,39,44,32,0,72,106,2,39,0,72,176,
		45,0,176,72,0,95,3,12,1,12,1,72,106,4,
		39,44,32,0,72,106,6,39,48,39,44,32,0,72,
		106,6,39,48,39,44,32,0,72,106,6,39,48,39,
		44,32,0,72,95,4,28,11,106,5,39,49,39,44,
		0,25,5,106,1,0,72,106,6,39,49,39,32,41,
		0,72,80,5,36,177,1,48,77,0,102,95,5,112,
		1,31,122,36,178,1,48,80,0,102,106,32,69,114,
		114,111,114,32,97,108,32,105,110,115,101,114,116,97,
		114,32,108,97,32,112,114,111,112,105,101,100,97,100,
		32,0,176,45,0,48,58,0,176,32,0,12,0,48,
		33,0,102,112,0,112,1,88,61,0,12,1,72,106,
		14,32,101,110,32,108,97,32,116,97,98,108,97,32,
		0,72,48,76,0,102,106,23,112,114,111,100,117,99,
		116,95,97,116,116,114,105,98,117,116,101,95,115,104,
		111,112,0,112,1,72,92,3,112,2,73,36,181,1,
		120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCOMERCIOPROPERTY_INSERTPRODUCTATTRIBUTEIMAGE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,36,192,1,176,40,0,95,1,106,8,97,
		73,109,97,103,101,115,0,12,2,80,4,36,194,1,
		176,27,0,95,4,12,1,28,8,36,195,1,102,110,
		7,36,198,1,95,4,96,3,0,129,1,1,29,110,
		2,36,200,1,48,95,0,48,25,0,102,112,0,176,
		40,0,95,1,106,3,105,100,0,12,2,176,72,0,
		176,40,0,95,3,106,3,105,100,0,12,2,92,10,
		12,2,72,48,26,0,102,112,0,112,2,80,6,36,
		204,1,106,13,68,69,76,69,84,69,32,70,82,79,
		77,32,0,48,76,0,102,106,24,112,114,111,100,117,
		99,116,95,97,116,116,114,105,98,117,116,101,95,105,
		109,97,103,101,0,112,1,72,106,2,32,0,72,106,
		30,87,72,69,82,69,32,105,100,95,112,114,111,100,
		117,99,116,95,97,116,116,114,105,98,117,116,101,32,
		61,32,0,72,176,45,0,176,72,0,95,2,12,1,
		12,1,72,106,2,32,0,72,106,16,65,78,68,32,
		105,100,95,105,109,97,103,101,32,61,32,0,72,176,
		45,0,176,72,0,95,6,12,1,12,1,72,80,5,
		36,206,1,48,77,0,102,95,5,112,1,31,112,36,
		207,1,48,80,0,102,106,31,69,114,114,111,114,32,
		97,108,32,101,108,105,109,105,110,97,114,32,101,108,
		32,97,114,116,237,99,117,108,111,32,0,176,40,0,
		95,1,106,5,110,97,109,101,0,12,2,72,106,14,
		32,101,110,32,108,97,32,116,97,98,108,97,32,0,
		72,48,76,0,102,106,24,112,114,111,100,117,99,116,
		95,97,116,116,114,105,98,117,116,101,95,105,109,97,
		103,101,0,112,1,72,92,3,112,2,73,36,215,1,
		106,20,73,78,83,69,82,84,32,73,71,78,79,82,
		69,32,73,78,84,79,32,0,48,76,0,102,106,24,
		112,114,111,100,117,99,116,95,97,116,116,114,105,98,
		117,116,101,95,105,109,97,103,101,0,112,1,72,106,
		4,32,40,32,0,72,106,23,105,100,95,112,114,111,
		100,117,99,116,95,97,116,116,114,105,98,117,116,101,
		44,32,0,72,106,12,105,100,95,105,109,97,103,101,
		32,41,32,0,72,106,10,86,65,76,85,69,83,32,
		40,32,0,72,106,2,39,0,72,176,45,0,176,72,
		0,95,2,12,1,12,1,72,106,4,39,44,32,0,
		72,106,2,39,0,72,176,45,0,176,72,0,95,6,
		12,1,12,1,72,106,4,39,32,41,0,72,80,5,
		36,217,1,48,77,0,102,95,5,112,1,31,112,36,
		218,1,48,80,0,102,106,31,69,114,114,111,114,32,
		97,108,32,105,110,115,101,114,116,97,114,32,101,108,
		32,97,114,116,237,99,117,108,111,32,0,176,40,0,
		95,1,106,5,110,97,109,101,0,12,2,72,106,14,
		32,101,110,32,108,97,32,116,97,98,108,97,32,0,
		72,48,76,0,102,106,24,112,114,111,100,117,99,116,
		95,97,116,116,114,105,98,117,116,101,95,105,109,97,
		103,101,0,112,1,72,92,3,112,2,73,36,221,1,
		130,32,152,253,132,36,223,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,98,0,2,0,116,98,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

