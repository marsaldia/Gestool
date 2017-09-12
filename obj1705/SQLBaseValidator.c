/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Prg\Validators\SQLBaseValidator.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SQLBASEVALIDATOR );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( SQLBASEVALIDATOR_NEW );
HB_FUNC_STATIC( SQLBASEVALIDATOR_END );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( FW_GT );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SQLBASEVALIDATOR )
{ "SQLBASEVALIDATOR", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASEVALIDATOR )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLBASEVALIDATOR_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASEVALIDATOR_NEW )}, NULL },
{ "SQLBASEVALIDATOR_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SQLBASEVALIDATOR_END )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OCONTROLLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FW_GT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FW_GT )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SQLBASEVALIDATOR, ".\\Prg\\Validators\\SQLBaseValidator.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SQLBASEVALIDATOR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SQLBASEVALIDATOR )
   #include "hbiniseg.h"
#endif

HB_FUNC( SQLBASEVALIDATOR )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,17,0,36,7,0,103,2,0,100,8,
		29,5,1,176,1,0,104,2,0,12,1,29,250,0,
		166,188,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,17,83,81,76,66,97,115,101,86,97,108,105,
		100,97,116,111,114,0,108,4,4,1,0,108,0,112,
		3,80,2,36,9,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,12,111,67,111,110,116,
		114,111,108,108,101,114,0,4,1,0,9,112,5,73,
		36,11,0,48,5,0,95,2,100,100,95,1,121,72,
		121,72,121,72,106,12,104,86,97,108,105,100,97,116,
		111,114,115,0,4,1,0,9,112,5,73,36,13,0,
		48,6,0,95,2,106,4,78,101,119,0,108,7,95,
		1,121,72,121,72,121,72,112,3,73,36,14,0,48,
		6,0,95,2,106,4,69,110,100,0,108,8,95,1,
		121,72,121,72,121,72,112,3,73,36,16,0,48,9,
		0,95,2,112,0,73,167,14,0,0,176,10,0,104,
		2,0,95,2,20,2,168,48,11,0,95,2,112,0,
		80,3,176,12,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,13,0,95,3,
		164,146,1,0,73,95,3,110,7,48,11,0,103,2,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASEVALIDATOR_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,22,0,48,14,0,102,95,1,112,1,
		73,36,24,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SQLBASEVALIDATOR_END )
{
	static const HB_BYTE pcode[] =
	{
		36,30,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,17,0,2,0,116,17,0,4,0,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}
