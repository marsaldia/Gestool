/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\.\Prg\Tmessage.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SETLANG );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC( GETMSG );
HB_FUNC_EXTERN( OEMTOANSI );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TMESSAGE )
{ "SETLANG", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( SETLANG )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "GETMSG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETMSG )}, NULL },
{ "OEMTOANSI", {HB_FS_PUBLIC}, {HB_FUNCNAME( OEMTOANSI )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TMESSAGE, ".\\.\\Prg\\Tmessage.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TMESSAGE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TMESSAGE )
   #include "hbiniseg.h"
#endif

HB_FUNC( SETLANG )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,10,0,176,1,0,95,1,12,1,106,
		2,78,0,69,28,5,121,25,4,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( GETMSG )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,36,16,0,4,0,0,80,2,36,19,0,
		95,1,121,8,29,79,2,36,38,0,176,3,0,106,
		5,32,83,161,32,0,12,1,106,5,32,78,111,32,
		0,176,3,0,106,13,32,168,67,111,110,116,105,110,
		163,97,63,32,0,12,1,176,3,0,106,12,32,168,
		67,97,110,99,101,108,97,63,32,0,12,1,176,3,
		0,106,14,32,168,82,101,105,110,116,101,110,116,97,
		63,32,0,12,1,176,3,0,106,19,32,69,108,105,
		106,97,32,117,110,97,32,111,112,99,105,162,110,32,
		0,12,1,106,21,32,82,101,103,105,115,116,114,111,
		32,98,108,111,113,117,101,97,100,111,32,0,106,37,
		32,78,111,32,115,101,32,112,117,101,100,101,32,97,
		98,114,105,114,32,108,97,32,66,97,115,101,32,100,
		101,32,68,97,116,111,115,32,0,106,26,32,78,111,
		32,104,97,121,32,99,97,109,112,111,115,32,100,101,
		102,105,110,105,100,111,115,32,0,106,48,32,69,82,
		82,79,82,32,83,67,79,80,69,32,45,32,76,111,
		115,32,116,105,112,111,115,32,100,101,32,100,97,116,
		111,115,32,110,111,32,99,111,105,110,99,105,100,101,
		110,32,0,106,35,32,69,82,82,79,82,32,83,67,
		79,80,69,32,45,32,84,111,112,101,115,32,110,111,
		32,110,105,118,101,108,97,100,111,115,32,0,176,3,
		0,106,34,32,82,101,103,105,115,116,114,111,32,98,
		111,114,114,97,100,111,46,32,168,76,111,32,114,101,
		99,117,112,101,114,97,63,32,0,12,1,106,43,32,
		69,114,114,111,114,32,97,115,105,103,110,97,110,100,
		111,32,108,111,115,32,67,111,100,101,66,108,111,99,
		107,32,100,101,108,32,66,114,111,119,115,101,32,0,
		106,35,32,69,108,32,118,97,108,111,114,32,97,115,
		105,103,110,97,100,111,32,110,111,32,101,115,32,99,
		111,114,114,101,99,116,111,32,0,106,21,32,82,101,
		103,105,115,116,114,111,115,32,98,111,114,114,97,100,
		111,115,32,0,106,22,32,78,111,32,104,97,121,32,
		111,114,100,101,110,32,97,99,116,105,118,111,32,0,
		106,46,32,70,97,108,116,97,32,101,115,112,101,99,
		105,102,105,99,97,114,32,101,108,32,110,111,109,98,
		114,101,32,100,101,108,32,102,105,99,104,101,114,111,
		32,68,66,70,32,0,106,35,32,73,109,112,111,115,
		105,98,108,101,32,98,111,114,114,97,114,32,101,108,
		32,102,105,99,104,101,114,111,32,77,69,77,79,32,
		0,106,38,32,73,109,112,111,115,105,98,108,101,32,
		114,101,110,111,109,98,114,97,114,32,101,108,32,102,
		105,99,104,101,114,111,32,77,69,77,79,32,0,4,
		19,0,80,2,26,126,2,36,39,0,95,1,122,8,
		29,116,2,36,58,0,106,5,32,83,237,32,0,106,
		5,32,78,111,32,0,176,3,0,106,14,32,168,67,
		111,110,116,105,110,117,97,114,63,32,0,12,1,176,
		3,0,106,15,32,168,67,97,110,99,101,108,46,108,
		97,114,63,32,0,12,1,176,3,0,106,15,32,168,
		82,101,105,110,116,101,110,116,101,117,63,32,0,12,
		1,176,3,0,106,21,32,69,115,99,111,108,108,105,
		114,32,117,110,97,32,111,112,99,105,162,32,0,12,
		1,106,21,32,82,101,103,105,115,116,114,101,32,98,
		108,111,113,117,101,106,97,116,32,0,106,40,32,78,
		111,32,233,115,32,112,111,115,115,105,98,108,101,32,
		111,98,114,105,114,32,108,97,32,66,97,115,101,32,
		100,101,32,68,97,100,101,115,32,0,106,26,32,78,
		111,32,104,105,32,104,97,32,99,97,109,112,115,32,
		100,101,102,105,110,105,116,115,32,0,106,51,32,69,
		82,82,79,82,32,83,67,79,80,69,32,45,32,69,
		108,115,32,116,105,112,117,115,32,100,101,32,100,97,
		100,101,115,32,110,111,32,99,111,105,110,99,105,100,
		101,105,120,101,110,32,0,106,52,32,69,82,82,79,
		82,32,83,67,79,80,69,32,45,32,86,97,108,111,
		114,32,115,117,112,101,114,105,111,114,32,109,101,110,
		111,114,32,113,117,101,32,108,39,105,110,102,101,114,
		105,111,114,32,0,176,3,0,106,42,32,82,101,103,
		105,115,116,114,101,32,101,115,98,111,114,114,97,116,
		46,32,168,86,111,108,32,114,101,99,117,112,101,114,
		97,114,45,108,39,104,111,63,32,0,12,1,106,43,
		32,69,114,114,111,114,32,97,115,115,105,103,110,97,
		110,116,32,101,108,115,32,67,111,100,101,66,108,111,
		99,107,32,100,101,108,32,66,114,111,119,115,101,32,
		0,106,38,32,69,108,32,118,97,108,111,114,32,97,
		115,115,105,103,110,97,116,32,110,111,32,233,115,32,
		101,108,32,99,111,114,114,101,99,116,101,32,0,106,
		22,32,82,101,103,105,115,116,114,101,115,32,101,115,
		98,111,114,114,97,116,115,32,0,106,25,32,78,111,
		32,104,105,32,104,97,32,111,114,100,101,110,32,100,
		101,102,105,110,105,116,32,0,106,46,32,70,97,108,
		116,97,32,101,115,112,101,99,105,102,105,99,97,114,
		32,101,108,32,110,111,109,98,114,101,32,100,101,108,
		32,102,105,99,104,101,114,111,32,68,66,70,32,0,
		106,35,32,73,109,112,111,115,105,98,108,101,32,98,
		111,114,114,97,114,32,101,108,32,102,105,99,104,101,
		114,111,32,77,69,77,79,32,0,106,38,32,73,109,
		112,111,115,105,98,108,101,32,114,101,110,111,109,98,
		114,97,114,32,101,108,32,102,105,99,104,101,114,111,
		32,77,69,77,79,32,0,4,19,0,80,2,36,61,
		0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}
