void * __conArrayGet( void *, void *, ... );
long __conGetNL( void *, long * );
long __conRelease( void * );

#include <WinTen.h>
#include <Windows.h>
#include <ClipApi.h>
#ifdef __HARBOUR__
   #include <hbapi.h>
   #include <hbapiitm.h>
   #include <hbvm.h>
   // #include <hbfast.h>
   #define MoveTo( hDC, x, y ) MoveToEx( hDC, x, y, NULL )
   #define _PutSym( _SymEval ) hb_vmPushSymbol( &hb_symEval )
   #define _xPushM  hb_vmPush
   #define _PutLN   hb_vmPushLong
   #define _xEval   hb_vmDo
   #define _cEval0  hb_vmEvalBlock
   #define _Get_Sym hb_dynsymFindName
#endif


#define HA_LEFT    0  // by CeSoTech Alineaciones Horizontales y Verticales
#define HA_RIGHT   1
#define HA_CENTER  2
#define VA_TOP     4
#define VA_BOTTOM  8
#define VA_CENTER  32


static far BOOL bAdjLastCol  ; // CeSoTech
static far BOOL bAdjBrowse   ; // CeSoTech
static far BOOL bDrawHeaders ; // CeSoTech
static far BOOL bDrawFooters ; // CeSoTech
static far WORD wHeaderHeight; // CeSoTech
static far WORD wFooterHeight; // CeSoTech
static far WORD wLineHeight  ; // CeSoTech

static far BOOL bWorking;

WORD WBrwRowsC( HWND hWnd, HDC hDC, HFONT hFont ); // CeSoTech

static void FW_DrawText( HDC hDC, RECT * rct, LPCSTR pText,
                         WORD wAlign, int iLen, HFONT hFont,
                         BOOL bHeadFoot ) ; // CeSoTech
static void FW_DrawBitmapCenter( HDC hDC, HBITMAP hBmp, RECT * rct, WORD nStyle, BOOL bFocused ) ;

void MaskRegion( HDC hDC, RECT * rct, COLORREF cTrColor,
                 COLORREF cBackColor );

// FrameDot( HDC hDC, RECT * pRect );

extern void WndDrawBox( HDC, LPRECT, HPEN, HPEN );
extern void DrawBitmap( HDC, HBITMAP, WORD wCol, WORD wRow, WORD wWidth,
                        WORD wHeight, DWORD dwRaster );


static void near PaintTheLine( HDC hDC, RECT * rct, WORD wIndex,
                               PCLIPVAR pAtext, PCLIPVAR pAsizes,
                               HPEN hWhitePen, HPEN hGrayPen, BOOL bTree,
                               PCLIPVAR pAJustify, WORD wPressed,
                               BOOL bHeader, WORD nStyle,
                               WORD nFocus, BOOL bFocused,
                               PCLIPVAR pTextColor, PCLIPVAR pBkColor,
                               WORD wRowPos, WORD nHeightCtrl,
                               LONG nClrLine, BOOL bFooter,
                               BOOL bSelect, PCLIPVAR pFont,
                               BOOL bDrawFocusRect ) ;



void DrawMasked( HDC, HBITMAP, WORD wCol, WORD wRow );
                  // LOW    HIGH
extern int _dvtoi( DWORD, DWORD );
void MsgStr( long l );
LPSTR Str( WORD w );

#ifndef __FLAT__
   static int near GetInt( PCLIPVAR Array, WORD wIndex );
   static far PCLIPSYMBOL pSkip = 0;
#else
   static long near GetInt( void * Array, WORD wIndex );
   // static far void * pSkip = 0;
   void * pSkip = NULL;
#endif

//---------------------------------------------------------------------------//

static void MaskRegion( HDC hdc, RECT * rct, COLORREF cTransparentColor,
                        COLORREF cBackgroundColor )

{
   HDC        hdcTemp, hdcObject, hdcBack, hdcMem;
   POINT      ptSize;
   COLORREF   cColor;
   HBITMAP    bmAndObject, bmAndBack, bmBackOld, bmObjectOld,
              bmAndTemp, bmTempOld, bmAndMem, bmMemOld;
   HBRUSH     hBrush, hBrOld;

   ptSize.x = rct->right - rct->left + 1;
   ptSize.y = rct->bottom - rct->top + 1;

   hBrush      = CreateSolidBrush(cBackgroundColor);

   hdcTemp     = CreateCompatibleDC(hdc);
   hdcObject   = CreateCompatibleDC(hdc);
   hdcBack     = CreateCompatibleDC(hdc);
   hdcMem      = CreateCompatibleDC(hdc);

   bmAndTemp   = CreateCompatibleBitmap(hdc, ptSize.x, ptSize.y);
   bmAndMem    = CreateCompatibleBitmap(hdc, ptSize.x, ptSize.y);
   bmAndObject = CreateBitmap(ptSize.x, ptSize.y, 1, 1, NULL);
   bmAndBack   = CreateBitmap(ptSize.x, ptSize.y, 1, 1, NULL);

   bmTempOld   = ( HBITMAP ) SelectObject(hdcTemp, bmAndTemp);
   bmMemOld    = ( HBITMAP ) SelectObject(hdcMem, bmAndMem);
   bmBackOld   = ( HBITMAP ) SelectObject(hdcBack, bmAndBack);
   bmObjectOld = ( HBITMAP ) SelectObject(hdcObject, bmAndObject);

   hBrOld      = ( HBRUSH ) SelectObject(hdcMem, hBrush);

   BitBlt(hdcTemp, 0, 0, ptSize.x, ptSize.y, hdc, rct->left, rct->top, SRCCOPY);

   SetMapMode(hdcTemp, GetMapMode(hdc));

   cColor      = SetBkColor(hdcTemp, cTransparentColor);

   BitBlt(hdcObject, 0, 0, ptSize.x, ptSize.y, hdcTemp, 0, 0, SRCCOPY);

   SetBkColor(hdcTemp, cColor);

   BitBlt(hdcBack, 0, 0, ptSize.x, ptSize.y, hdcObject, 0, 0, NOTSRCCOPY);
   PatBlt(hdcMem, 0,0, ptSize.x, ptSize.y, PATCOPY);
   BitBlt(hdcMem, 0, 0, ptSize.x, ptSize.y, hdcObject, 0, 0, SRCAND);
   BitBlt(hdcTemp, 0, 0, ptSize.x, ptSize.y, hdcBack, 0, 0, SRCAND);
   BitBlt(hdcMem, 0, 0, ptSize.x, ptSize.y, hdcTemp, 0, 0, SRCPAINT);
   BitBlt(hdc, rct->left, rct->top, ptSize.x, ptSize.y, hdcMem, 0, 0, SRCCOPY);

   DeleteObject(SelectObject(hdcMem, hBrOld));
   DeleteObject(SelectObject(hdcTemp, bmTempOld));
   DeleteObject(SelectObject(hdcMem, bmMemOld));
   DeleteObject(SelectObject(hdcBack, bmBackOld));
   DeleteObject(SelectObject(hdcObject, bmObjectOld));
   DeleteDC(hdcMem);
   DeleteDC(hdcBack);
   DeleteDC(hdcObject);
   DeleteDC(hdcTemp);
}

//---------------------------------------------------------------------------//

#ifdef __CLIPPER__
static int near GetInt( PCLIPVAR Array, WORD wIndex )
{
    int iRet = 0;
    _cAt( Array, wIndex, -1, ++_tos );

    if( _tos->wType & NUMERIC )
        iRet = (int) _tos->pPointer1;

    else if( _tos->wType & NUM_FLOAT )
        iRet = _dvtoi( (DWORD) _tos->pPointer1, (DWORD) _tos->pPointer2 );

    --_tos;

    return iRet;
}
#endif

#ifdef __XPP__
static long GetInt( void * Array, WORD wIndex )
{
   void * chItem = 0;
   long l;

   __conArrayGet( Array, chItem, wIndex, 0 );
   __conGetNL( chItem, &l );
   __conRelease( chItem );

   return l;
}
#endif

#ifdef __HARBOUR__
   #define GetInt( Array, wIndex )  hb_arrayGetNL( Array, wIndex )
#endif

//-----------------------------------------------------------------------=
                                                        // ��1ra Col.a Pintar
                                                        // �
static void near PaintTheLine( HDC hDC, RECT * rct, WORD wIndex,
                               PCLIPVAR pAtext, PCLIPVAR pAsizes,
                               HPEN hWhitePen, HPEN hGrayPen, BOOL bTree,
                               PCLIPVAR pAJustify, WORD wPressed,
                               BOOL bHeader, WORD nStyle,
                               WORD wFocus, BOOL bFocused,
                               PCLIPVAR pTextColor, PCLIPVAR pBkColor,
                               WORD wRowPos, WORD nHeightCtrl,
                               LONG nClrLine, BOOL bFooter,
                               BOOL bSelect, PCLIPVAR pFont,
                               BOOL bDrawFocusRect )
{
   RECT box, wholebox, rctadj;
   int iMaxRight = rct->right;

   WORD wLenJust = 0 ;
   #ifndef __HARBOUR__
   WORD wLen     = _VARRAYLEN( pAtext );
   CLV_WORD lJustify;
   #else
   WORD wLen     = hb_arrayLen( pAtext );
   PHB_ITEM uElem = hb_itemNew( NULL );
   #endif
   WORD wType, wcLen;
   LONG lValue;
   char * cValue;
   HPEN hOldPen, hPen;
   BITMAP bmp;
   WORD wRow, wCol;
   LONG lColor ;
   HBRUSH hBrush;
   LONG lTextColorOld = -1 ; // CeSoTech
   LONG lBkColorOld   = -1 ; // CeSoTech
   PCLIPVAR pEvalOld ;
   HFONT hFont ; // CeSoTech
   WORD wAlign ; // CeSoTech

   // CeSoTech
   LONG nClrLineC = ( nStyle == 2 || nStyle == 6 || nStyle == 8 ||
                      nStyle == 10 ) ? GetSysColor( COLOR_BTNSHADOW ) : 0 ;

   // CeSoTech
   if ( nClrLine >= 0 )   // Desde Clipper manda color especifico linea
      nClrLineC = nClrLine ;

   if ( ! bDrawHeaders )
      bHeader = FALSE ;

   if ( bFooter )
      bHeader = TRUE ; //-> Para que lo pinte con similar aspecto

   //CeSoTech
   // Si es un estilo sin separadores horizontales, pintar uno mas arriba
   //CeSoTech para que que bien completa el area !!!
   if ( ! (bHeader) && (nStyle == 0 || nStyle == 5 || nStyle == 6 ||
                        nStyle == 9 || nStyle == 10) )
      rct->top--       ;

   wholebox.top    = rct->top+1;
   wholebox.left   = rct->left;
   wholebox.bottom = rct->bottom;
   wholebox.right  = rct->right;

   rct->right  = 0;

   box.top    = rct->top ;
   box.bottom = rct->bottom - 1;

   if( !wIndex | wIndex > wLen )
       wIndex = 1;

   if ( pAJustify )
      #ifndef __HARBOUR__
         wLenJust = _VARRAYLEN( pAJustify );
      #else
         wLenJust = hb_arrayLen( pAJustify );
      #endif

   while( wIndex <= wLen )
   {

        rct->left   = rct->right;

        rct->right  = ( wIndex == wLen ? iMaxRight
                                      : rct->left + GetInt( pAsizes, wIndex ) );
        // CeSoTech // Cuando estoy estoy en la ultima celda, NO pintar hasta
                    // el final si no existe ajuste de ultima columna.
        if ( ( wIndex == wLen ) && ( ! bAdjLastCol )  )
        {
           rct->right  = rct->left + GetInt( pAsizes, wIndex ) +(bHeader ? 1: 0) ;
           if ( !bAdjBrowse )
              wholebox.right = rct->right ; // Tambien ajusto el borde focus

        }
        // CeSoTech //


        wAlign = HA_LEFT | VA_CENTER ;  // Alineacion por defecto
        wcLen = 0;
        ///////// INICIO Toma de datos celda !!!

        #ifndef __HARBOUR__
           if ( wIndex <= wLenJust )
           {
             _cAt( pAJustify, wIndex, 0xFFFF, ( PCLIPVAR ) &lJustify );
             wAlign = lJustify.wWord ;
           }
           _cAt( pAtext, wIndex, 0xFFFF, ++_tos );
           wType = _tos->wType;
           if ( wType & NUMERIC )
              lValue = (LONG) _tos->pPointer1;
           if ( wType & CHARACTER )
           {
              cValue = _VSTR( _tos );
              wcLen = _tos->w2;
           }
        #else

           if ( wIndex <= wLenJust )
           {
              hb_arrayGet( pAJustify, wIndex, uElem );
              if ( ( hb_itemType( uElem ) & LOGICAL ) && hb_itemGetL( uElem ) )
                 wAlign = HA_RIGHT | VA_CENTER ;
              else
                 wAlign = hb_itemGetNL( uElem );

			        hb_itemClear( uElem );
           }

           // uElem.type = HB_IT_NIL;
           hb_arrayGet( pAtext, wIndex, uElem );
           wType = hb_itemType( uElem );
           if ( wType & NUMERIC )
              lValue = hb_itemGetNL( uElem );
           if ( wType & CHARACTER )
           {
//              cValue = hb_itemGetC( uElem );
				cValue = hb_itemGetCPtr( uElem );
                wcLen = strlen( cValue );
           }

        #endif
        ///////// FIN Toma de datos celda !!!



        if( wFocus > 0 && wIndex != wFocus )
        {
           #ifndef __HARBOUR__
              _tos--;
           #endif

           if( rct->right >= iMaxRight )
           {
               wIndex = wLen + 1;   // ya no pintamos m�s
           }
           else
              ++wIndex;
           continue;
        }

        if( bTree ||
            (GetInt( pAsizes, wIndex ) > 0) ) //Si NO es columna oculta (x Freeze)
        {                                     //(Es lo mismo no hacer esto,
                                              // pero es para evitar hacer trabajar
                                              // al codigo sin sentido !!! )

           if( (wType & NUMERIC) && bTree )
           {
               if( lValue )
               {
                  FillRect( hDC, rct, hBrush = CreateSolidBrush( GetPixel( hDC, rct->left, rct->top ) ) );
                  DrawMasked( hDC, (HBITMAP) lValue, rct->top, rct->left );
                  DeleteObject( hBrush );
               }

           }
           else  // Si es Numerico Bmp no Tree, o , es Character !!!!
           {

               if ( pBkColor )  // Bloque de Color Fondo Celda
               {
                  _PutSym( _SymEval );
                  _xPushM( pBkColor );
                  _PutLN( wRowPos );
                  _PutLN( wIndex );
                  _PutLN( bFooter ? 2 : ( bHeader ? 1 : ( bSelect ? 3 : 0 ) ) );
                  _xEval( 3 ) ;
                  if ( _parinfo( -1 ) & NUMERIC )
                    lBkColorOld = SetBkColor( hDC, _parnl( - 1 ) ) ;
               }

               if( pTextColor ) // Bloque de Color Texto Celda
               {
                  _PutSym( _SymEval );
                  _xPushM( pTextColor );
                  _PutLN( wRowPos );
                  _PutLN( wIndex );
                  _PutLN( bFooter ? 2 : ( bHeader ? 1 : ( bSelect ? 3 : 0 ) ) );
                  _xEval( 3 ) ;
                  if ( _parinfo( -1 ) & NUMERIC )
                    lTextColorOld = SetTextColor( hDC, _parnl( - 1 ) ) ;
               }

               hFont = 0 ;
               if( pFont )      // Bloque de Font Celda
               {
                  _PutSym( _SymEval );
                  _xPushM( pFont );
                  _PutLN( wRowPos );
                  _PutLN( wIndex );
                  _PutLN( bFooter ? 2 : ( bHeader ? 1 : ( bSelect ? 3 : 0 ) ) );
                  _xEval( 3 ) ;
                  if ( _parinfo( -1 ) & NUMERIC )
                     hFont = (HFONT) _parnl( - 1 ) ;
               }


               /////// CeSoTech ///////
               if (!bHeader) rct->top ++;


               if( wType & NUMERIC )   // Es un BitMap
               {
                  FW_DrawBitmapCenter( hDC, (HBITMAP) lValue, rct, nStyle, bSelect );
               }
               else                    // Es una Cadena
               {
                  FW_DrawText( hDC, rct,
                               ( wType & CHARACTER ) ? cValue : "",
                               wAlign, wcLen, hFont, bHeader ) ;
               }


               /////// CeSoTech restauracion de colores //////
               if ( lTextColorOld >= 0 )
               {
                  SetTextColor( hDC, lTextColorOld ) ;
                  lTextColorOld = -1 ;
               }
               if ( lBkColorOld >= 0 )
               {
                  SetBkColor( hDC, lBkColorOld ) ;
                  lBkColorOld = -1 ;
               }


               /// CeSoTech ///
               // Si hay modalidad ajustar el Browse y no hay ajuste de ultima
               // columna, deber� pintar hasta el final hasta cubrir toda
               // el area, hasta llegar a la derecha del control. (Col.Ficticia)
               if ( bAdjBrowse && wIndex == wLen && !bAdjLastCol &&
                    rct->right <= iMaxRight )
               {
                  rctadj.top    = rct->top;
                  rctadj.left   = rct->right ;
                  rctadj.bottom = rct->bottom;
                  rctadj.right  = wholebox.right  ;

                  if ( nStyle == 3 )
                     rctadj.top--;

                  if ( wFocus == 0 )  // Si No es CellStyle (Pinto hasta final)
                     ExtTextOut( hDC, 0, rct->top, ETO_OPAQUE, &rctadj, "", 0, 0 );

                  if ( bHeader && nStyle==3 ) // Pinto Bordes Header Falso
                   {
                      rctadj.right  = wholebox.right - 2  ;
                      rctadj.bottom = rctadj.bottom - 2 ;
                      WndDrawBox( hDC, &rctadj, hWhitePen, hGrayPen );
                      rctadj.bottom++  ;
                      rctadj.right++  ;
                      WndDrawBox( hDC, &rctadj, hWhitePen, ( HPEN ) GetStockObject( BLACK_PEN ) );

                      if ( bFooter ) // Si es Footer (Linea Negra de Arriba Foot)
                      {
                        hPen = ( HPEN ) GetStockObject( BLACK_PEN );
                        hOldPen = ( HPEN ) SelectObject( hDC, hPen );
                        MoveTo( hDC, rctadj.left-1, rctadj.top-1 );
                        LineTo( hDC, rctadj.right+1, rctadj.top-1 );
                        SelectObject( hDC, hOldPen );
                      }

                  }

               }
               /// CeSoTech Fin ///

               if (!bHeader) rct->top --;
           }

           box.left   = rct->left;

           box.right  = ( wIndex < wLen && rct->right <= iMaxRight ?
                                                        rct->right - 1 :
                                                        iMaxRight - 1 );

           // CeSoTech // El Borde derecho de Box de la ultima columna,
                       // no estirarlo cuando no exista ajuste de ultima columna
                       // PERO cuando nLineStyle (nStyle) es 7/8 (Lineas Horiz)
                       // queda anti-estetico cortar los renglones, cuando no hay
                       // ajuste ult.col. y hay ajuste de browse. Por ello
                       // se verificara que para cortar el borde no se de esta
                       // condicion.
           if ( ( wIndex == wLen ) && ( ! bAdjLastCol ) )
           {
              if (! (!bHeader && (nStyle==7 || nStyle==8) && !bAdjLastCol && bAdjBrowse) )
               box.right  = rct->left + GetInt( pAsizes, wIndex ) - 1 ;
           }
           // CeSoTech //



           if( ! bTree )
           {
              if( wPressed && ( wIndex == wPressed ) )
              {
                WndDrawBox( hDC, &box, hGrayPen, hWhitePen );
              }
              else
/////////////  if(!bHeader)
               if(!bHeader || (bHeader && nStyle!=3) )
               {
                  switch( nStyle )
                  {
                     case 0:
                        break;
                     case 1:
                    //  hOldPen = SelectObject( hDC, GetStockObject( BLACK_PEN ) );
                        hPen = CreatePen(PS_SOLID, 0, nClrLineC );
                        hOldPen = ( HPEN ) SelectObject( hDC, hPen);
                        MoveTo( hDC, box.left, box.bottom+1 );
                        LineTo( hDC, box.left, box.top );
                        LineTo( hDC, box.right+1, box.top );
                        LineTo( hDC, box.right+1,  box.bottom+1 );
                        LineTo( hDC, box.left, box.bottom+1 );
                        SelectObject( hDC, hOldPen );
                        DeleteObject( hPen);
                        break;
                     case 2:
                        hPen = CreatePen(PS_SOLID, 0, nClrLineC );
                        hOldPen = ( HPEN ) SelectObject( hDC, hPen);
                        MoveTo( hDC, box.left, box.bottom+1 );
                        LineTo( hDC, box.left, box.top );
                        LineTo( hDC, box.right+1, box.top );
                        LineTo( hDC, box.right+1,  box.bottom+1 );
                        LineTo( hDC, box.left, box.bottom+1 );
                        SelectObject( hDC, hOldPen );
                        DeleteObject( hPen);
                        break;
                     case 3:
                        WndDrawBox( hDC, &box, hWhitePen, hGrayPen );
                        break;
                     case 4:
                        box.bottom ++;
                        box.right ++;
                        // FrameDot( hDC, &box );
                        box.bottom --;
                        box.right --;
                        break;
                     case 7:
                     case 8:
                        hPen = CreatePen(PS_SOLID, 0, nClrLineC );
                        hOldPen = ( HPEN ) SelectObject( hDC, hPen);
                        MoveTo( hDC, box.left, box.top );
                        LineTo( hDC, box.right+1, box.top );
                        MoveTo( hDC, box.right+1,  box.bottom+1 );
                        LineTo( hDC, box.left, box.bottom+1 );
                        SelectObject( hDC, hOldPen );
                        DeleteObject( hPen);
                        break;
                     case 5:
                     case 6:
                     case 9:
                     case 10:
                        hPen = CreatePen(PS_SOLID, 0, nClrLineC);
                        hOldPen = ( HPEN ) SelectObject( hDC, hPen);
                        if (box.left>1)
                        {
                           MoveTo( hDC, box.left, box.bottom+1 );
                           LineTo( hDC, box.left, box.top );
                        }
                        MoveTo( hDC, box.right+1, box.top );

                        if ( bDrawFooters && nStyle >= 9 )
                        {
                        LineTo( hDC, box.right+1,
                                     nHeightCtrl - (wFooterHeight+1) ) ;
                        } else {
                          LineTo( hDC, box.right+1,
                                     nStyle < 9 ? box.bottom+1 : nHeightCtrl );
                        }

                        SelectObject( hDC, hOldPen );
                        DeleteObject( hPen);
                        break;
                  }
               }
               else  // Box para Headers !!!
               {
                  box.left ++;

                  // CeSoTech
                  if ( bFooter ) // Linea negra sobre el Footer
                  {
                    hPen = ( HPEN ) GetStockObject( BLACK_PEN );
                    hOldPen = ( HPEN ) SelectObject( hDC, hPen );
                    MoveTo( hDC, box.left-1, box.top-1 );
                    LineTo( hDC, box.right+1, box.top-1 );
                    SelectObject( hDC, hOldPen );
                  }

                  box.right--  ;
                  box.bottom-- ;
                  WndDrawBox( hDC, &box, hWhitePen, hGrayPen );
                  box.bottom++  ;
                  box.right++  ;
                  WndDrawBox( hDC, &box, hWhitePen, ( HPEN ) GetStockObject( BLACK_PEN ) );

                  box.left --;

               }
           }
           else
           {
              if( ! ( wType & NUMERIC ) )
              {
                 box.left -= 16;
              }
           }

          // CeSoTech if( bFocused && wFocus > 0 && wIndex == wFocus )
           if( bDrawFocusRect && bFocused && wFocus > 0 &&
               wIndex == wFocus && nStyle != 3)
           {
            rct->left++;
            rct->top++;
            DrawFocusRect( hDC, rct );
            rct->left--;
            rct->top--;
           }

        }

        #ifndef __HARBOUR__
           _tos--;
        #endif

        if( rct->right >= iMaxRight )
        {
            wIndex = wLen + 1;   // ya no pintamos m�s
        }
        else
           ++wIndex;


   }

   if (bDrawFocusRect && !bTree && bFocused && wFocus==0 && nStyle!=3) // CeSoTech
      DrawFocusRect( hDC, &wholebox );

  hb_itemRelease( uElem );
}

//---------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWSELBOX()
#else
CLIPPER WBRWSELBOX( PARAMS ) // ( hWnd, hDC, nRow, nFirstCol, nCurCol,;
                             //   lFocus, aSizes, hFont)
#endif
{
   HWND hWnd        = (HWND) _parnl( 1 );
   HDC hDC          = (HDC) _parnl( 2 );
   WORD wRow        = _parni( 3 );
   WORD wIndex      = _parni( 4 );
   WORD wCol        = _parni( 5 );
   BOOL bFocused    = _parl( 6 );
   PCLIPVAR pAsizes = _param( 7, -1 );
   HFONT hFont      = (HFONT) _parnl( 8 );
   BOOL bDestroyDC  = FALSE;
   TEXTMETRIC tm;
   RECT rct;
   HFONT hOldFont;

   if( ! hDC )
   {
      bDestroyDC = TRUE;
      hDC = GetDC( hWnd );
   }

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   GetClientRect( hWnd, &rct );
   GetTextMetrics( hDC, &tm );

   if( hFont )
      SelectObject( hDC, hOldFont );

   tm.tmHeight += 1;

   if ( ! bDrawHeaders )  // By CeSoTech
      wRow-- ;

   rct.top    = tm.tmHeight * wRow ;
   rct.bottom = tm.tmHeight * ( wRow + 1) - 1;
   rct.left   = 0;

   while( wIndex < wCol )
      rct.left  += GetInt( pAsizes, wIndex++ );

   rct.right  =  rct.left+GetInt( pAsizes, wCol ) - 1;

   MaskRegion( hDC, &rct, GetBkColor( hDC ), GetSysColor(COLOR_ACTIVECAPTION) );

   if( bFocused )
      DrawFocusRect( hDC, &rct );

   if( bDestroyDC )
      ReleaseDC( hWnd, hDC );
}

//---------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWLINE()
#else
CLIPPER WBRWLINE( PARAMS ) // ( hWnd, hDC, nRow, aText, aSizes, nFirstItem, ;
                           // nClrFore, nClrBack, hFont, lTree, aJustify, nPressed,
                           // nStyle, nColAct, lFocused )
                           // bTextColor, bBkColor, nClrLine, lFooter, lSelect,
                           // bFont, lDrawFocusRect ) // New's by CesoTech
#endif

{
   HWND hWnd        = (HWND) _parnl( 1 );
   HDC hDC          = (HDC) _parnl( 2 );
   WORD wRow        = _parni( 3 );
   BOOL bDestroyDC  = FALSE;
   WORD wHeight;
   RECT rct, box;
   PCLIPVAR bClrFore, bClrBack;
   COLORREF clrFore = 0;
   COLORREF clrBack = 0;
   HPEN hGrayPen    ;
   HPEN hWhitePen   ;
   HFONT hFont      = (HFONT) _parnl( 9 );
   HFONT hOldFont;
   BOOL bTree      = _parl( 10 );
   BOOL bFooter = ISLOGICAL( 19 ) ? _parl( 19 ) : FALSE ;  // CeSoTech

   WORD nHeightCtrl ; // by CeSoTech

   hGrayPen    = CreatePen( PS_SOLID, 1, GetSysColor( COLOR_BTNSHADOW ) ) ; // RGB( 128, 128, 128 ) );
   hWhitePen   = CreatePen( PS_SOLID, 1, GetSysColor( COLOR_BTNHIGHLIGHT ) ); // GetStockObject( WHITE_PEN );


   if( PCOUNT() > 6 )
   {
      if( ISBLOCK( 7 ) )
      {
         bClrFore = _param( 7, -1 );
         _cEval0( bClrFore );
         clrFore = _parnl( -1 );
      }
      else
         clrFore = _parnl( 7 );
   }

   if( PCOUNT() > 7 )
   {
      if( ISBLOCK( 8 ) )
      {
         bClrBack = _param( 8, -1 );
         _cEval0( bClrBack );
         clrBack = _parnl( -1 );
      }
      else
         clrBack = _parnl( 8 );
   }

   if( ! hDC )
   {
      bDestroyDC = TRUE;
      hDC = GetDC( hWnd );
   }

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   GetClientRect( hWnd, &rct );

   nHeightCtrl = rct.bottom-rct.top ; // by CeSoTech

   SetTextColor( hDC, clrFore );
   SetBkColor( hDC, clrBack );

   wHeight = wLineHeight + 1 ;

   if ( ( wRow == 0 ) && bDrawHeaders )  // Es una Cabecera
      wHeight = wHeaderHeight + 1 ;

   if ( ! bFooter )
   {
      if ( ( wRow == 0 ) && bDrawHeaders )  // Es una Cabecera
      {
         rct.top    = 0 ;
         rct.bottom = wHeaderHeight + 1 ;
      }
      else
      {
        rct.top    = ( bDrawHeaders ? wHeaderHeight+1 : 0 ) + (wHeight * (wRow-1) )  ;
        rct.bottom = ( bDrawHeaders ? wHeaderHeight+1 : 0 ) + (wHeight * wRow)  ;
      }

   } else {
      rct.top    = rct.bottom - (wFooterHeight+1) ;
   }

   rct.left   = 0;

   PaintTheLine( hDC, &rct, _parni( 6 ), _param( 4, 0xFFFF ), _param( 5, 0xFFFF ),
                 hWhitePen, hGrayPen, bTree,
                 ISARRAY(11) ? _param( 11, -1 ) : 0, _parni( 12 ),
                 (wRow == 0), _parni( 13 ),
                 _parni( 14 ), _parl( 15 ),
                 ISBLOCK( 16 ) ? _param( 16, -1 ) : 0,   // CeSoTech
                 ISBLOCK( 17 ) ? _param( 17, -1 ) : 0,   // CeSoTech
                 wRow, nHeightCtrl,                      // CeSoTech
                 ISNUM( 18 ) ? _parnl( 18 ) : -1,        // CeSoTech
                 bFooter,                                // CeSoTech
                 ISLOGICAL( 20 ) ? _parl( 20 ) : FALSE,  // CeSoTech
                 ISBLOCK( 21 ) ? _param( 21, -1 ) : 0,   // CeSoTech
                 ISLOGICAL( 22 ) ? _parl( 22 ) : FALSE );// CeSoTech

   DeleteObject( hGrayPen );
   DeleteObject( hWhitePen );

   if( hFont )
      SelectObject( hDC, hOldFont );

   if( bDestroyDC )
       ReleaseDC( hWnd, hDC );

   _reta( 2 );
   _storni( rct.top,    -1, 1 );
   _storni( rct.bottom, -1, 2 );

}

//---------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_AWBRWROWDIM()
#else
CLIPPER AWBRWROWDIM( PARAMS )
#endif

{
   HWND hWnd      = (HWND) _parnl( 1 );
   WORD wRow      = (WORD) _parnl( 2 );
   HFONT hFont    = (HFONT) _parnl( 3 );
   HFONT hOldFont;
   HDC  hDC       = GetDC( hWnd );
   TEXTMETRIC tm;

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   GetTextMetrics( hDC, &tm );
   tm.tmHeight += 1;

   if( hFont )
      SelectObject( hDC, hOldFont );

   ReleaseDC( hWnd, hDC );

   _reta( 2 );
   _storni( tm.tmHeight * wRow++, -1, 1 );
   _storni( tm.tmHeight * wRow,   -1, 2 );
}

//---------------------------------------------------------------------------//

WORD ScreenBaseX( WORD wX )
{
    return 4 * wX / LOWORD( GetDialogBaseUnits() );
}

//---------------------------------------------------------------------------//

WORD ScreenBaseY( WORD wY )
{
    return 8 * wY / HIWORD( GetDialogBaseUnits() );
}


//---------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWRECT()
#else
CLIPPER WBrwRect( PARAMS ) // ( hWnd, nRow, aSizes, nFirstItem, nCol,
                           //   nLineStyle, nWidthVScroll )
#endif
{
   HWND hWnd        = ( HWND ) _parnl( 1 );

   HDC hDC          = GetDC( hWnd );
   WORD wRow        = _parni( 2 );
   WORD wHeight ;
   RECT rct;
   WORD nStyle = ISNUM( 6 ) ? _parni( 6 ) : -1 ; // CeSoTech


   #ifdef __CLIPPER__
      PCLIPVAR paSizes = _param( 3, 0x8000 );
      WORD wLen        = _VARRAYLEN( paSizes );
   #else
      #ifdef __HARBOUR__
//       void * paSizes = ( void * ) _param( 3, HB_IT_ARRAY );
         WORD wLen      = _parinfa( 3, 0 );
      #else
         void * paSizes = ( void * ) _param( 3, 0x8000 );
         WORD wLen      = _VARRAYLEN( paSizes );
      #endif
   #endif
   WORD wIndex      = _parni( 4 );
   WORD wCol        = _parni( 5 );
   WORD wMaxRight;
   LONG l;

   if( !wCol || wCol > wLen )
        return;


   GetWindowRect( hWnd, &rct );
   wMaxRight = rct.right - 2;

   wHeight = wLineHeight + 1 ;

   rct.top    = rct.top + ( bDrawHeaders ? wHeaderHeight+1 : 0 ) +
                (wHeight * (wRow-1) ) ;


   rct.bottom = rct.top + wHeight;
   rct.right  = rct.left;

   while( wIndex <= wCol )
   {
        rct.left   = rct.right;

        #ifndef __HARBOUR__
           #define _parnl(x,y) PARNL(x,params,y);
        #endif
        l = _parnl( 3, wIndex );

        rct.right  = ( wIndex == wLen && bAdjLastCol ? wMaxRight : rct.left + l );

        if( rct.right >= wMaxRight )
        {
            wIndex = wCol + 1;   // ya no pintamos m�s
            rct.right = wMaxRight;
        }
        else
            wIndex++;
   }



   ReleaseDC( hWnd, hDC );

   _reta( 4 );

   #ifdef __XPP__
      #define _storni( x, y, z ) STORNI( x, params, y, z )
   #endif


   // Si es un estilo sin separadores horizontales, pintar uno mas arriba
   //CeSoTech para que que bien completa el area !!!
   if (nStyle == 0 || nStyle == 5 || nStyle == 6 || nStyle == 9 || nStyle == 10)
      rct.top-- ;  // Las coord.de edicion deberan ser mas arriba tambien !!!


   _storni( rct.top,    -1, 1 );
   _storni( rct.left,   -1, 2 );
   _storni( rct.bottom, -1, 3 );
   _storni( ( wMaxRight <= rct.right ) ?
              wMaxRight - _parni( 7 ) : rct.right, -1, 4 );
}

//---------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWPANE()
#else
CLIPPER WBRWPANE( PARAMS ) // ( hWnd, hDC, Self, bLine, aSizes, nFirstItem,
                           //   nClrFore, nClrBack, hFont, aJustify, nStyle
                           //   lCellStyle, lFocused ) -> nRowsSkipped
                           //   bTextColor, bBkColor, nClrLine, nColorFondo, bFont ) // New's by CesoTech
#endif
{
   HWND hWnd        = ( HWND ) _parnl( 1 );
   HDC hDC          = ( HDC ) _parnl( 2 );
   WORD wRows;
   WORD wLastBottom = 0;
   WORD wRow        = 1;
   WORD wSkipped    = 1;
   PCLIPVAR Self    = _param( 3, -1 );
   PCLIPVAR bLine   = _param( 4, -1 );
   PCLIPVAR pASizes = _param( 5, -1 );
   HFONT hFont      = ( HFONT ) _parnl( 9 );
   HFONT hOldFont;
   BOOL bDestroyDC  = FALSE;
   WORD wHeight ;
   RECT rct, box, client;
   WORD wIndex      = _parni( 6 );
   PCLIPVAR bClrFore = 0, bClrBack = 0;
   COLORREF clrFore = 0;
   COLORREF clrBack = 0;
   HPEN hGrayPen    = CreatePen( PS_SOLID, 1, GetSysColor( COLOR_BTNSHADOW ) ) ; // RGB( 128, 128, 128 ) );
   HPEN hWhitePen   = CreatePen( PS_SOLID, 1, GetSysColor( COLOR_BTNHIGHLIGHT ) ); // GetStockObject( WHITE_PEN );
   #ifndef __HARBOUR__
   BOOL bColBlock   = pASizes->wType & BLOCK;
   #else
   BOOL bColBlock   = hb_itemType( pASizes ) & BLOCK;
   PHB_ITEM aLine = hb_itemNew( NULL );
   #endif
   PCLIPVAR pAJustify = ISARRAY( 10 ) ? _param( 10, -1 ): 0;
   WORD nHeightCtrl ; // by CeSoTech
   WORD nStyle = _parni( 11 );



   if( PCOUNT() > 6 )
   {
      if( ISBLOCK( 7 ) )
         bClrFore = _param( 7, -1 );
      else
         clrFore = _parnl( 7 );
   }

   if( PCOUNT() > 7 )
   {
      if( ISBLOCK( 8 ) )
      {
         bClrBack = _param( 8, -1 );
         _cEval0( bClrBack );
         clrBack = _parnl( -1 );
      }
      else
         clrBack = _parnl( 8 );
   }

   if( ! hDC )
   {
      bDestroyDC = TRUE;
      hDC = GetDC( hWnd );
   }

   if( ! pSkip )
       pSkip = _Get_Sym( "SKIP" );

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   /////////////////////////
   // Borremos el Area de la derecha no coubierta
   if ( !bAdjBrowse && !bAdjLastCol )
   {
       GetClientRect( hWnd, &rct );
       SetBkColor( hDC, _parnl( 17 ) ) ;

       for( wIndex=wIndex ; wIndex <= (WORD) _parinfa( 5, NULL); wIndex++ )
       {
            rct.left += _parni( 5, wIndex ) ;
       }

       if ( !(nStyle == 0 || nStyle == 7 || nStyle == 8 || nStyle == 3) )
          rct.left++;

       ExtTextOut( hDC, rct.left, rct.top, ETO_OPAQUE | ETO_CLIPPED,
                   &rct, "", 0, 0 );

       wIndex = _parni( 6 );
       GetClientRect( hWnd, &rct );
   }
   /////////////////////////

   GetClientRect( hWnd, &client );

   nHeightCtrl = client.bottom-client.top ; // by CeSoTech

   wHeight = wLineHeight + 1 ;

   wRows = WBrwRowsC( hWnd, hDC, hFont );

   if( ! bClrFore )
      SetTextColor( hDC, clrFore );
      SetBkColor( hDC, clrBack );

   while( wRow <= wRows && wSkipped == 1 )
   {
      rct.top    = client.top + ( bDrawHeaders ? wHeaderHeight+1 : 0 ) +
                   (wHeight * (wRow-1) ) ;

      rct.bottom = rct.top + wHeight;
      rct.left   = 0;
      rct.right  = client.right;

      #ifndef __HARBOUR__

         _cEval0( bLine );
         _xPushM( _eval );

         if( bClrFore )
         {
            _cEval0( bClrFore );
            SetTextColor( hDC, _parnl( -1 ) );
         }

         if( bClrBack )
         {
            _cEval0( bClrBack );
            SetBkColor( hDC, _parnl( -1 ) );
         }

         if( bColBlock )
            _cEval0( pASizes );

         PaintTheLine( hDC, &rct, wIndex, _tos,
                       ( bColBlock ? _eval : pASizes ),
                       hWhitePen, hGrayPen,
                       bColBlock, pAJustify, 0, FALSE, _parni( 11 ),
                       _parni ( 12 ), _parl( 13 ),
                       ISBLOCK( 14 ) ? _param( 14, -1 ) : 0,   // CeSoTech
                       ISBLOCK( 15 ) ? _param( 15, -1 ) : 0,   // CeSoTech
                       wRow, nHeightCtrl,                      // CeSoTech
                       ISNUM( 16 ) ? _parnl( 16 ) : -1,        // CeSoTech
                       FALSE, FALSE,                           // CeSoTech
                       ISBLOCK( 18 ) ? _param( 18, -1 ) : 0,   // CeSoTech
                       FALSE ) ;

         _tos--;

         _PutSym( pSkip );
         _xPushM( Self );
         _PutQ( 1 );
         _xSend( 1 );

      #else
      {
         // aLine.type = HB_IT_NIL;

         // Esta extension de xHarbour no se puede aplicar en Harbour
         // hb_itemForwardValue( aLine, hb_vmEvalBlock( bLine ) );

         hb_itemCopy( aLine, hb_vmEvalBlock( bLine ) );

         if( bClrFore )
         {
            _cEval0( bClrFore );
            SetTextColor( hDC, _parnl( -1 ) );
         }

         if( bClrBack )
         {
            _cEval0( bClrBack );
            SetBkColor( hDC, _parnl( -1 ) );
         }

         PaintTheLine( hDC, &rct, wIndex, aLine,
                       ( bColBlock ? hb_vmEvalBlock( pASizes ) : pASizes ),
                       hWhitePen, hGrayPen,
                       bColBlock, pAJustify, 0, FALSE, _parnl( 11 ),
                       _parnl ( 12 ), _parl( 13 ),
                       ISBLOCK( 14 ) ? _param( 14, -1 ) : 0,   // CeSoTech
                       ISBLOCK( 15 ) ? _param( 15, -1 ) : 0,   // CeSoTech
                       wRow, nHeightCtrl,                      // CeSoTech
                       ISNUM( 16 ) ? _parnl( 16 ) : -1,        // CeSoTech
                       FALSE, FALSE,                           // CeSoTech
                       ISBLOCK( 18 ) ? _param( 18, -1 ) : 0,   // CeSoTech
                       FALSE ) ;

         if ( pSkip )
         {
            hb_vmPushSymbol( hb_dynsymSymbol( pSkip ) );
            hb_vmPush( Self );
            hb_vmPushLong( 1 );
            hb_vmDo( 1 );
         }
      }

      #endif

      wLastBottom = rct.bottom ;
      wSkipped = _parni( -1 );

      if( wSkipped == 1 )
          wRow++;
   }

   ////////////////////////
   // Borremos el Area de Abajo no cubierta
   GetClientRect( hWnd, &rct );
   SetBkColor( hDC, _parnl( 17 ) ) ;

   rct.top = wLastBottom + 1 ;
   if ( wLastBottom == 0 ) // No Mostro Registros
      rct.top = ( bDrawHeaders ? wHeaderHeight+1 : 0 ) ;

   rct.bottom-=  1 + ( bDrawFooters ? wFooterHeight+1 : 0 ) ;

   if (nStyle == 0 || nStyle == 5 || nStyle == 6 ||
       nStyle == 9 || nStyle == 10 || nStyle == 3 )
      rct.top--;

   if ( !bDrawFooters )
      rct.bottom++;


   if ( rct.top < rct.bottom )
   {
      ExtTextOut( hDC, rct.left, rct.top, ETO_OPAQUE | ETO_CLIPPED,
                  &rct, "", 0, 0 );
   }
   ////////////////////////

   DeleteObject( hGrayPen );
   DeleteObject( hWhitePen );

   if( hFont )
      SelectObject( hDC, hOldFont );

   if( bDestroyDC )
       ReleaseDC( hWnd, hDC );


   _retni( wRow );

   hb_itemRelease( aLine );
}


//---------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWSET()
#else
CLIPPER WBrwSet() // ( lAdjLastCol, lAdjBrowse, lDrawHeaders, lDrawFooters )
#endif
{                                                                  // CeSoTech
    bAdjLastCol  =  _parl( 1 ) ; // Ajuste o no de ultima columna al control.
    bAdjBrowse   =  _parl( 2 ) ; // Ajuste del Browse a la derecha
                                 // cuando no existe ajuste de ultima columna.
    bDrawHeaders = _parl( 3 )  ; // Si quiere visualizar Headers !!!
    bDrawFooters = _parl( 4 )  ; // Si se quiere visualizar Footers !!!

    wHeaderHeight= _parni( 5 )  ;
    wFooterHeight= _parni( 6 )  ;
    wLineHeight  = _parni( 7 )  ;

}

//----------------------------------------------------------------------------//
// Devuelve Nro. de Filas de Datos (No incluye Headers ni Footers)
static WORD WBrwRowsC( HWND hWnd, HDC hDC, HFONT hFont )
{
   WORD wHeight;
   RECT rct;
   WORD wRows;
   BOOL bDCDestroy = FALSE;
   HFONT hOldFont;

   if( ! hDC )
   {
      bDCDestroy = TRUE;
      hDC = GetDC( hWnd );
   }

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   wHeight = wLineHeight + 1 ;

   GetClientRect( hWnd, &rct );
   wRows = ( ( rct.bottom - rct.top - 2 ) -
             ( bDrawHeaders ? wHeaderHeight+1 : 0 ) -
             ( bDrawFooters ? wFooterHeight+1 : 0 ) ) / wHeight ;

   if( hFont )
      SelectObject( hDC, hOldFont );

   if( bDCDestroy )
      ReleaseDC( hWnd, hDC );

   return wRows;
}

//----------------------------------------------------------------------------//

#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWROWS()
#else
CLIPPER WBrwRows( PARAMS ) // ( hWnd, hDC, hFont )
#endif
{
   _retni( WBrwRowsC( ( HWND ) _parnl( 1 ), ( HDC ) _parnl( 2 ),
                      ( HFONT ) _parnl( 3 ) ) );
}
//----------------------------------------------------------------------------//

#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWSCRL()
#else
CLIPPER WBrwScrl( PARAMS ) // ( hWnd, nRows, hFont, nLineStyle, hDC )
#endif
{
   HWND hWnd   = ( HWND ) _parnl( 1 );
   int wRows  = _parni( 2 );
   HFONT hFont = ( HFONT ) _parnl( 3 );
   HFONT hOldFont;
   HDC hDC = ( HDC ) _parnl( 5 );  //  = GetDC( hWnd );
   RECT rct;
   WORD nStyle = _parni( 4 );

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   GetClientRect( hWnd, &rct );

   if ( bDrawHeaders )
      rct.top += wHeaderHeight+1 ;


   // Defino Bottom de Area del Scroll
   rct.bottom = ( WBrwRowsC( hWnd, hDC, hFont ) * (wLineHeight+1) ) +
                ( bDrawHeaders ? wHeaderHeight+1 : 0 )  ;


   // Si es un estilo sin separadores horizontales, pintar uno mas arriba
   // CeSoTech para que que bien completa el area !!!
   // El Area Scroll deber� entonces no tomar el separator (forma parte de ant)
   if ( !(nStyle == 0 || nStyle == 5 || nStyle == 6 ||
          nStyle == 9 || nStyle == 10 || nStyle == 3 ) )
      rct.bottom++;   // Debe tomarse dado que no pinta celda 1 una mas arriba

  // ScrollWindowEx( hWnd, 0, -( (wLineHeight+1) * wRows ), 0, &rct, 0, 0, 0 );

   ScrollDC( hDC, 0, -( (wLineHeight+1) * wRows ), 0, &rct, 0, 0 );



   if( hFont )
      SelectObject( hDC, hOldFont );

  //  ReleaseDC( hWnd, hDC );
}

//----------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_WBRWHEIGHT()
#else
CLIPPER WBrwHeight( PARAMS ) // ( hWnd, hFont )
#endif
{
   HWND hWnd   = ( HWND ) _parnl( 1 );
   HFONT hFont = ( HFONT ) _parnl( 2 );
   HFONT hOldFont;
   HDC hDC     = GetDC( hWnd );
   TEXTMETRIC tm;

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   GetTextMetrics( hDC, &tm );
   _retni( tm.tmHeight ) ;

   if( hFont )
      SelectObject( hDC, hOldFont );

   ReleaseDC( hWnd, hDC );
}

//----------------------------------------------------------------------------//
static void FW_DrawText( HDC hDC, RECT * rct, LPCSTR pText,
                         WORD wAlign, int iWidth,
                         HFONT hFont, BOOL bHeadFoot )

{
   RECT rcttmp     ;
   int iHeight     ;
   UINT uiFlag     ;
   HFONT hOldFont  ;
   int iFactor     ;

   if( hFont )
      hOldFont = ( HFONT ) SelectObject( hDC, hFont );

   /////////////////////////////
   // Alineaciones Verticales //
   /////////////////////////////
   iHeight = DrawText( hDC, pText, iWidth, &rcttmp, DT_CALCRECT ) ;
   iFactor = ( ( rct->bottom - rct->top ) - iHeight ) / 2 ;

   if ( wAlign & VA_TOP )
      iFactor = 0 ;

   if ( wAlign & VA_BOTTOM )
   {
      iFactor = ( rct->bottom - rct->top ) - iHeight - ( bHeadFoot ? 1 : 0 ) ;
   }


   rcttmp.top    = rct->top + iFactor ;
   rcttmp.bottom = rct->bottom ;
   rcttmp.left   = rct->left   ;
   rcttmp.right  = rct->right  ;


   if ( rcttmp.top < rct->top )
     rcttmp.top = rct->top ;

   ///////////////////////////////
   // Alineaciones Horizontales //
   ///////////////////////////////
   uiFlag = DT_LEFT ;
   rcttmp.left+= 2 ;

   if ( wAlign & HA_CENTER )
   {
     rcttmp.left-= 2 ;
     uiFlag = DT_CENTER ;
   }

   if ( wAlign & HA_RIGHT )
   {
     rcttmp.left-= 2 ;
     uiFlag = DT_RIGHT ;
     rcttmp.right-= 2 + ( bHeadFoot ? 1 : 0 ) ;
   }


   ExtTextOut( hDC, 0, 0, ETO_OPAQUE | ETO_CLIPPED, rct, "", 0, 0 ) ;
   DrawText( hDC, pText, iWidth, &rcttmp, uiFlag | DT_NOPREFIX ) ;

   if( hFont )
      SelectObject( hDC, hOldFont );

}















//----------------------------------------------------------------------------//

static void FW_DrawBitmapCenter( HDC hDC, HBITMAP hBmp, RECT * rct, WORD nStyle, BOOL bSelect )
{
   WORD wWidth   ;
   WORD wHeight  ;
   WORD wRow ;
   WORD wCol ;
   BITMAP bm;
   LONG lBkColorBMP, lBkColor = GetBkColor( hDC );
   BOOL bFlag = FALSE ;

   if ( (nStyle == 0 || nStyle == 3 || nStyle == 5 ||
         nStyle == 6 || nStyle == 9 || nStyle == 10) && bSelect )
   {
      rct->bottom-- ;
      bFlag = TRUE ;
   }

   wWidth  = rct->right - rct->left ;
   wHeight = rct->bottom - rct->top ;
   GetObject( hBmp, sizeof( BITMAP ), ( LPSTR ) &bm );

   if ( wHeight > bm.bmHeight )
   {
      wRow = rct->top + ( ( wHeight - bm.bmHeight ) / 2 ) ;
      wHeight = bm.bmHeight ;
   } else
   {
      wRow = rct->top ;
   }

   if ( wWidth > bm.bmWidth )
   {
      wCol = rct->left + ( ( wWidth - bm.bmWidth ) / 2 ) ;
      wWidth = bm.bmWidth ;
   } else
   {
      wCol = rct->left ;
   }

   rct->bottom++;
   ExtTextOut( hDC, 0, rct->top, ETO_OPAQUE, rct, "", 0, 0 );
   rct->bottom--;

   if ( hBmp > 0 )
   {
      DrawBitmap( hDC, hBmp, wRow, wCol, wWidth, wHeight, 0 ) ;
      if( ( lBkColorBMP = GetPixel( hDC, wCol, wRow ) ) != lBkColor)
           MaskRegion( hDC, rct, lBkColorBMP, lBkColor );
   }

   if (bFlag)
      rct->bottom++ ;


}

//----------------------------------------------------------------------------//



/*******


static void FW_DrawBitmapCenter( HDC hDC, HBITMAP hBmp, RECT * rct, WORD nStyle, BOOL bSelect )
{
   WORD wWidth   ;
   WORD wHeight  ;
   WORD wRow ;
   WORD wCol ;
   BITMAP bm;
   LONG lBkColorBMP, lBkColor = GetBkColor( hDC ), lBkColorOld;
   BOOL bFlag = FALSE ;

   RECT rRect ;
   HDC hDC2 ;
   HBITMAP hBmp2, hBmpOld ;


   if ( (nStyle == 0 || nStyle == 3 || nStyle == 5 ||
          nStyle == 6 || nStyle == 9 || nStyle == 10) && bSelect )
   {
      rct->bottom-- ;
      bFlag = TRUE ;
   }

   ///////////////////////////////
   // Creo un buffer auxiliar ////
   rRect.top    = 0 ;
   rRect.left   = 0 ;
   rRect.right  = rct->right - rct->left ;
   rRect.bottom = rct->bottom - rct->top ;

   hDC2    = CreateCompatibleDC( hDC );
   hBmp2   = CreateCompatibleBitmap( hDC, rRect.right, rRect.bottom );
   hBmpOld = SelectObject( hDC2, hBmp2 );
   BitBlt( hDC2, 0, 0, rRect.right, rRect.bottom, hDC, 0, 0, SRCCOPY );
   ///////////////////////////////


   wWidth  = rct->right - rct->left ;
   wHeight = rct->bottom - rct->top ;
   GetObject( hBmp, sizeof( BITMAP ), ( LPSTR ) &bm );

   if ( wHeight > bm.bmHeight )
   {
      wRow = 0 + ( ( wHeight - bm.bmHeight ) / 2 ) ;
      wHeight = bm.bmHeight ;
   } else
   {
      wRow = 0 ;
   }

   if ( wWidth > bm.bmWidth )
   {
      wCol = 0 + ( ( wWidth - bm.bmWidth ) / 2 ) ;
      wWidth = bm.bmWidth ;
   } else
   {
      wCol = 0 ;
   }

   rRect.bottom++;
   lBkColorOld = SetBkColor( hDC2, lBkColor );
   ExtTextOut( hDC2, 0, 0, ETO_OPAQUE, &rRect, "", 0, 0 );
   rRect.bottom--;

   if ( hBmp > 0 )
   {
      DrawBitmap( hDC2, hBmp, wRow, wCol, wWidth, wHeight, 0 ) ;
      if( ( lBkColorBMP = GetPixel( hDC2, wCol, wRow ) ) != lBkColor)
           MaskRegion( hDC2, &rRect, lBkColorBMP, lBkColor );
   }

   ///////////////////////////////
   // Pego el buffer auxiliar ////
   BitBlt( hDC, rct->left, rct->top, rRect.right, rRect.bottom, hDC2, 0, 0, SRCCOPY );
   SetBkColor( hDC2, lBkColorOld );
   SelectObject( hDC2, hBmpOld );
   DeleteObject( hBmp2 );
   DeleteObject( hBmpOld );
   DeleteDC( hDC2 );
   ///////////////////////////////

   if (bFlag)
      rct->bottom++ ;

}


************/




















//----------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_FWDISPBEGIN()
#else
CLIPPER FWDISPBEGI( PARAMS ) // ( hWnd, hDC )
#endif
{
  HWND hWnd        = ( HWND ) _parnl( 1 );
  HDC hDC          = ( HDC ) _parnl( 2 );
  HDC hDC2 ;
  HBITMAP hBmp, hBmpOld ;
  RECT rct;

  GetClientRect( hWnd, &rct );

  hDC2    = CreateCompatibleDC( hDC );
  hBmp    = CreateCompatibleBitmap( hDC, rct.right - rct.left, rct.bottom - rct.top );
  hBmpOld = ( HBITMAP ) SelectObject( hDC2, hBmp );
  BitBlt( hDC2, 0, 0, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY );

  _reta( 5 );
  _stornl( (LONG) hWnd   , -1, 1 );
  _stornl( (LONG) hDC    , -1, 2 );
  _stornl( (LONG) hDC2   , -1, 3 );
  _stornl( (LONG) hBmp   , -1, 4 );
  _stornl( (LONG) hBmpOld, -1, 5 );

   return;
}




//----------------------------------------------------------------------------//
#ifdef __HARBOUR__
HARBOUR HB_FUN_FWDISPEND()
#else
CLIPPER FWDISPEND( PARAMS ) // { hWnd, hDC, hDC2, hBmp, hBmpOld }
#endif
{
   RECT rct;

   GetClientRect( (HWND) _parnl( 1, 1 ), &rct );

   BitBlt( (HDC) _parnl( 1, 2 ), 0, 0, rct.right - rct.left, rct.bottom - rct.top, (HDC) _parnl( 1, 3 ), 0, 0, SRCCOPY );
   SelectObject( (HDC) _parnl( 1, 3 ), (HBITMAP) _parnl( 1, 5 ) );
   DeleteObject( (HBITMAP) _parnl( 1, 4 ) );
   DeleteObject( (HBITMAP) _parnl( 1, 5 ) );
   DeleteDC( (HDC) _parnl( 1, 3 ) );

   _retnl( (LONG) _parnl( 1, 2 ) ) ;

   return ;
}










