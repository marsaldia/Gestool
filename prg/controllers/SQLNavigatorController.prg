#include "FiveWin.Ch"
#include "Factu.ch" 

//---------------------------------------------------------------------------//

CLASS SQLNavigatorController FROM SQLBaseController

   DATA oSelectorView

   DATA oNavigatorView

   DATA oFilterController 

   DATA lDocuments                                    INIT .f.

   DATA lOthers                                       INIT .f.

   DATA lLabels                                       INIT .f.

   DATA lConfig                                       INIT .f.

   DATA hFastKey                                      INIT {=>}

   DATA oWindowsBar

   METHOD New()
   METHOD End()

   METHOD setName( cName )                            INLINE ( ::Super:setName( cName ), if( !empty( ::oFilterController ), ::oFilterController:setTableToFilter( cName ), ) ) 

   METHOD Delete( aSelected )                         INLINE ( ::Super:Delete( aSelected ) ) 

   METHOD ActivateNavigatorView()

   METHOD ActivateSelectorView()

   METHOD closeAllWindows()                           INLINE ( if( !empty( oWnd() ), ( SysRefresh(), oWnd():CloseAll(), SysRefresh() ), ) )

   METHOD setFastReport( oFastReport, cTitle, cSentence, cColumns )    

   METHOD addFastKey( uKey, bAction )

   METHOD onKeyChar( nKey )

   METHOD deleteFilter()                                

   METHOD getFilters()                                INLINE ( if( !empty( ::oFilterController ), ::oFilterController:getFilters(), ) ) 

   METHOD setFilter()                                                                                                       

   METHOD getComboBoxOrder()                          INLINE ( if( !empty( ::oSelectorView ) .and. ::oSelectorView:isActive(), ::oSelectorView:getComboBoxOrder(), ::oWindowsBar:oComboBox() ) )

   METHOD onChangeCombo( oColumn )

   METHOD getNavigatorView()                          INLINE ( ::oNavigatorView )

   // Aplication windows bar---------------------------------------------------

   METHOD EnableWindowsBar()

   METHOD DisableWindowsBar()

   METHOD onChangeSearch()                            INLINE ( if( !empty( ::oNavigatorView ), ::oNavigatorView:onChangeSearch(), ) )

   METHOD hideEditAndDeleteButtonFilter()

   METHOD showEditAndDeleteButtonFilter()

   METHOD getIds()                                    INLINE ( ::oBrowseView:getRowSet():idFromRecno( ::oBrowseView:oBrowse:aSelected ) )

END CLASS

//---------------------------------------------------------------------------//

METHOD New( oSenderController )

   ::Super:New( oSenderController )

   ::oNavigatorView                                   := SQLNavigatorView():New( self )

   ::oSelectorView                                    := SQLSelectorView():New( self )

   ::oFilterController                                := SQLFiltrosController():New( self ) 

   ::oWindowsBar                                      := oWndBar()

RETURN ( self )

//---------------------------------------------------------------------------//

METHOD End()

   ::DisableWindowsBar()

   // if !empty( ::oNavigatorView )
   //    ::oNavigatorView:End()
   //    ::oNavigatorView        := nil
   // end if 

   if !empty( ::oSelectorView )
      ::oSelectorView:End()
      ::oSelectorView         := nil
   end if 

   if !empty( ::oFilterController )
      ::oFilterController:End() 
      ::oFilterController     := nil
   end if 

   ::Super():End()

   Self                       := nil

RETURN ( nil )

//---------------------------------------------------------------------------//

METHOD ActivateNavigatorView()

   if empty( ::oNavigatorView )
      RETURN ( Self )
   end if 

   if ::notUserAccess()
      msgStop( "Acceso no permitido." )
      RETURN ( Self )
   end if

   cursorWait()

   ::closeAllWindows()
   
   ::oModel:setNavigatorColumnOrderFromModel( ::getName() )
   ::oModel:setNavigatorColumnOrientationFromModel( ::getName() )

   ::oRowSet:build( ::oModel:getSelectSentence() )

   if !empty( ::oRowSet:get() )

      ::oNavigatorView:Activate()
      
      ::EnableWindowsBar()

   endif 

   cursorWE()

RETURN ( Self )

//---------------------------------------------------------------------------//

METHOD ActivateSelectorView()

   if empty( ::oSelectorView )
      RETURN ( nil )
   end if 

   if ::notUserAccess()
      msgStop( "Acceso no permitido." )
      RETURN ( nil )
   end if

   ::oModel:setSelectorColumnOrderFromModel( ::getName() )
   ::oModel:setSelectorColumnOrientationFromModel( ::getName() )

   ::oRowSet:build( ::oModel:getSelectSentence() )

RETURN ( ::oSelectorView:Activate() )

//---------------------------------------------------------------------------//

METHOD addFastKey( uKey, bAction )

   if hb_ischar( uKey )
      hset( ::hFastKey, asc( upper( uKey ) ), bAction )
      hset( ::hFastKey, asc( lower( uKey ) ), bAction )
   end if

   if hb_isnumeric( uKey )
      hset( ::hFastKey, uKey, bAction )
   end if 

RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD onKeyChar( nKey )

RETURN ( heval( ::hFastKey, {|k,v| if( k == nKey, eval( v ), ) } ) ) 
   
//----------------------------------------------------------------------------//

METHOD setFastReport( oFastReport, cTitle, cSentence, cColumns )    
     
   local oRowSet      
     
   if empty( oFastReport )     
      RETURN ( Self )    
   end if    
    
   DEFAULT cColumns  := ::oModel:getSerializeColumns()       
    
   oRowSet           := ::oModel:newRowSet( cSentence )      
    
   if empty( oRowSet )      
      RETURN ( Self )    
   end if       
    
   oFastReport:setUserDataSet(   cTitle,;     
                                 cColumns,;      
                                 {|| oRowSet:gotop()  },;    
                                 {|| oRowSet:skip(1)  },;    
                                 {|| oRowSet:skip(-1) },;    
                                 {|| oRowSet:eof()    },;
                                 {|nField| msgalert( nField ), oRowSet:fieldGet( nField ) } )
    
RETURN ( Self )    
    
//---------------------------------------------------------------------------//
    
METHOD deleteFilter()                                

   local nId 
   local cFilter  := ::oWindowsBar:GetComboFilter()

   if empty( cFilter )
      RETURN ( Self )    
   end if 

   nId            := ::oFilterController:oModel:getId( cFilter )

   if empty( nId )
      RETURN ( Self )    
   end if 
      
   if SQLAjustableModel():getRolNoConfirmacionEliminacion( Auth():rolUuid() ) .or. msgNoYes( "¿Desea eliminar el registro en curso?", "Confirme eliminación" )
      ::oWindowsBar:setComboFilterItem( "" )
      ::oWindowsBar:evalComboFilterChange()
      ::oFilterController:oModel:deleteById( { nId } )
   end if 

RETURN ( Self )    
    
//---------------------------------------------------------------------------//

METHOD setFilter()         

   local nId      
   local cFilter  := ::oWindowsBar:GetComboFilter()

   if empty( cFilter )

      ::getModel():clearFilterWhere()
   
      ::hideEditAndDeleteButtonFilter()
   
   else 
   
      ::getModel():setFilterWhere( ::oFilterController:getFilterSentence( cFilter ) )
   
      ::showEditAndDeleteButtonFilter()
   
   end if  

   nId            := ::oRowSet:fieldGet( ::getModelColumnKey() )
   
   ::oRowSet:build( ::oModel:getSelectSentence() )

   ::oRowSet:findString( nId )
      
   ::getBrowse():Refresh()

RETURN ( self )

//---------------------------------------------------------------------------//

METHOD EnableWindowsBar()

   if empty( ::oWindowsBar )
      RETURN ( Self )
   end if 

   ::oWindowsBar:enableGet()

   ::oWindowsBar:enableComboBox( ::oBrowseView:getColumnsHeaders() )

   ::oWindowsBar:setComboBoxChange( {|| ::onChangeCombo() } )

   ::oWindowsBar:setComboBoxItem( ::oBrowseView:getColumnHeaderByOrder( ::getModel():getColumnOrder() ) )

   ::oWindowsBar:enableComboFilter( ::getFilters() )

   ::oWindowsBar:showAddButtonFilter()

   ::oWindowsBar:setComboFilterChange( {|| ::setFilter() } )

   ::oWindowsBar:setActionAddButtonFilter( {|| ::oFilterController:Append() } )

   ::oWindowsBar:setActionEditButtonFilter( {|| ::oFilterController:EditByText( ::oWindowsBar:GetComboFilter() ) } )

   ::oWindowsBar:setActionDeleteButtonFilter( {|| ::deleteFilter() } )

   ::oWindowsBar:setGetChange( {|| ::onChangeSearch() } )

   ::oNavigatorView:Refresh()

RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD DisableWindowsBar()

   if empty( ::oWindowsBar )
      RETURN ( Self )
   end if 

   ::oWindowsBar:disableGet()

   ::oWindowsBar:disableComboBox()

   ::oWindowsBar:disableComboFilter()

   ::oWindowsBar:hideAddButtonFilter()

RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD hideEditAndDeleteButtonFilter()

   ::oWindowsBar:HideCleanButtonFilter()

   ::oWindowsBar:HideEditButtonFilter()

   ::oWindowsBar:HideDeleteButtonFilter()

RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD showEditAndDeleteButtonFilter()

   ::oWindowsBar:ShowCleanButtonFilter()

   ::oWindowsBar:ShowEditButtonFilter()

   ::oWindowsBar:ShowDeleteButtonFilter()

RETURN ( Self )

//----------------------------------------------------------------------------//

METHOD onChangeCombo( oColumn )

   local oComboBox   := ::getComboBoxOrder()

   if empty( oComboBox )
      RETURN ( Self )
   end if 

   if empty( ::getBrowse() )
      RETURN ( Self )
   end if 

   if empty( oColumn )
      oColumn        := ::getBrowse():getColumnByHeader( oComboBox:VarGet() )
   end if 

   if empty( oColumn )
      RETURN ( Self )
   end if 

   oComboBox:Set( oColumn:cHeader )

   ::getBrowse():changeColumnOrder( oColumn )

   ::changeModelOrderAndOrientation( oColumn:cSortOrder, oColumn:cOrder )

   ::getBrowse():refreshCurrent()

RETURN ( Self )

//---------------------------------------------------------------------------//


   