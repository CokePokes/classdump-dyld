/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SUMenuViewControllerDelegate.h>
#import <iTunesStoreUI/SUPreviewOverlayContainer.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <iTunesStore/ISURLOperationDelegate.h>

@protocol SUStorePageViewControllerDelegate;
@class SUViewController, NSString, SUStorePageProtocol, UIPopoverController, SUNavigationMenuViewController, SUSearchFieldController, SSAuthenticationContext, SSMutableURLRequestProperties, SUPageSectionGroup, SUSegmentedControl, _UIBackdropView, , ISURLRequestPerformance, NSDictionary, SSURLRequestProperties;

@interface SUStorePageViewController : SUViewController <SUMenuViewControllerDelegate, SUPreviewOverlayContainer, UIPopoverControllerDelegate, ISURLOperationDelegate> {

	SUViewController* _activeChildViewController;
	CFSetRef _allowedInterfaceOrientations;
	double _expirationTime;
	int _pageType;
	SUViewController* _pendingChildViewController;
	NSString* _scriptUserInfo;
	SUStorePageProtocol* _lastValidProtocol;
	UIPopoverController* _navigationMenuPopover;
	SUNavigationMenuViewController* _navigationMenuViewController;
	SUSearchFieldController* _searchFieldController;
	BOOL _canMoveToOverlay;
	BOOL _externalRequest;
	BOOL _loadingForSectionChange;
	BOOL _loadsWhenHidden;
	BOOL _reloadOnAppear;
	BOOL _reloadsWhenCacheExpired;
	SSAuthenticationContext* _authContext;
	SSMutableURLRequestProperties* _urlRequestProperties;
	BOOL _needsAuthentication;
	int _activeSectionIndex;
	SUPageSectionGroup* _sectionsGroup;
	SUSegmentedControl* _segmentedControl;
	_UIBackdropView* _backdropView;
	<SUStorePageViewControllerDelegate>* _delegate;
	BOOL _lastLoadDidFail;
	/*^block*/ id _loadBlock;
	ISURLRequestPerformance* _performanceMetrics;
	NSDictionary* _showcaseDictionary;
	BOOL _useWebViewFastPath;

}

@property (nonatomic,retain) SSAuthenticationContext * authenticationContext;                                                                //@synthesize authContext=_authContext - In the implementation block
@property (assign,getter=isExternalRequest,nonatomic) BOOL externalRequest;                                                                  //@synthesize externalRequest=_externalRequest - In the implementation block
@property (assign,nonatomic) BOOL needsAuthentication;                                                                                       //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (nonatomic,copy) SSURLRequestProperties * URLRequestProperties; 
@property (assign,nonatomic) BOOL canMoveToOverlay;                                                                                          //@synthesize canMoveToOverlay=_canMoveToOverlay - In the implementation block
@property (assign,nonatomic) BOOL loadsWhenHidden;                                                                                           //@synthesize loadsWhenHidden=_loadsWhenHidden - In the implementation block
@property (nonatomic,readonly) SUViewController * activeChildViewController;                                                                 //@synthesize activeChildViewController=_activeChildViewController - In the implementation block
@property (nonatomic,readonly) SUSearchFieldController * searchFieldController;                                                              //@synthesize searchFieldController=_searchFieldController - In the implementation block
@property (nonatomic,readonly) SUPageSectionGroup * sectionGroup;                                                                            //@synthesize sectionsGroup=_sectionsGroup - In the implementation block
@property (nonatomic,readonly) SUSegmentedControl * sectionSegmentedControl;                                                                 //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,copy) NSString * scriptUserInfo;                                                                                        //@synthesize scriptUserInfo=_scriptUserInfo - In the implementation block
@property (nonatomic,readonly) CGRect documentBounds; 
@property (nonatomic,readonly) BOOL canBeResolved; 
@property (assign,nonatomic) <SUStorePageViewControllerDelegate> * delegate;                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setReloadsWhenCacheExpired:,getter=_reloadsWhenCacheExpired,nonatomic) BOOL _reloadsWhenCacheExpired;              //@synthesize reloadsWhenCacheExpired=_reloadsWhenCacheExpired - In the implementation block
@property (getter=_isCacheExpired,nonatomic,readonly) BOOL _cacheExpired; 
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(id)URLRequest;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)reload;
-(id)delegate;
-(void)invalidate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)setParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)documentBounds;
-(BOOL)isLoaded;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setSection:(id)arg1 ;
-(void)_setSegmentedControl:(id)arg1 ;
-(BOOL)loadsWhenHidden;
-(void)setLoadsWhenHidden:(BOOL)arg1 ;
-(BOOL)reloadWithURLRequestProperties:(id)arg1 ;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg1 ;
-(id)copyArchivableContext;
-(id)newPlaceholderViewController;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)urlBagKey;
-(id)copyDefaultScriptProperties;
-(void)handleApplicationURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3 ;
-(id)iTunesStoreUI_searchFieldController;
-(BOOL)shouldExcludeFromNavigationHistory;
-(id)copyScriptProperties;
-(void)setScriptProperties:(id)arg1 ;
-(id)storePageProtocol;
-(void)storePageProtocolDidChange;
-(id)newRotationController;
-(void)invalidateForMemoryPurge;
-(id)navigationItemForScriptInterface;
-(double)defaultPNGExpirationTime;
-(id)copyScriptViewController;
-(void)_reloadForNetworkTypeChange:(id)arg1 ;
-(void)_reloadPreviewOverlayVisibility;
-(void)_scriptEventNotification:(id)arg1 ;
-(void)_tabConfigurationChanged:(id)arg1 ;
-(void)_documentBoundsChangeNotification:(id)arg1 ;
-(BOOL)canBeResolved;
-(void)_handleFailureWithError:(id)arg1 ;
-(void)enqueueFetchOperation;
-(id)newFetchOperation;
-(id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id*)arg3 ;
-(void)_finishWebViewLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_renderStorePage:(id)arg1 withType:(int)arg2 viewController:(id)arg3 block:(/*^block*/ id)arg4 ;
-(id)URLRequestProperties;
-(void)setURLRequestProperties:(id)arg1 ;
-(BOOL)needsAuthentication;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(void)_sendFailureAfterDialogsFinished:(id)arg1 ;
-(BOOL)viewIsReady;
-(void)_reloadSectionButtons;
-(void)_reloadSearchFieldWithSection:(id)arg1 ;
-(void)_showPlaceholderViewControllerWithTearDown:(BOOL)arg1 ;
-(BOOL)_shouldReloadForAppearance;
-(void)_reloadForAppearance:(BOOL)arg1 ;
-(id)displayedURL;
-(id)scriptUserInfo;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg1 ;
-(double)_expirationTime;
-(void)handleFailureWithError:(id)arg1 ;
-(void)_setPendingChildViewController:(id)arg1 ;
-(void)_setActiveChildViewController:(id)arg1 shouldTearDown:(BOOL)arg2 ;
-(void)showPlaceholderViewController;
-(void)resetNavigationItem:(id)arg1 ;
-(void)_reloadBackgroundViewProperties;
-(CGRect)_frameForActiveViewController;
-(void)_reloadSectionsControlWithGroup:(id)arg1 ;
-(id)_activePageSection;
-(BOOL)_reloadWithURLRequestProperties:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)setScriptUserInfo:(id)arg1 ;
-(id)_newSegmentedControlWithItems:(id)arg1 ;
-(void)_displaySegmentedControl:(id)arg1 ;
-(void)_applyPropertiesToViewController:(id)arg1 ;
-(void)_verifyStorePageProtocol:(id)arg1 ;
-(void)_reloadNavigationBar;
-(BOOL)canMoveToOverlay;
-(void)_repositionForChildViewController:(id)arg1 ;
-(void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2 ;
-(BOOL)_shouldFetchAutomatically;
-(BOOL)_sectionIsNetworkConstrained;
-(void)_reloadContentInsets;
-(void)_dismissNavigationMenuViewController;
-(void)_tearDownNavigationMenu;
-(void)reloadWithStorePage:(id)arg1 ofType:(int)arg2 forURL:(id)arg3 ;
-(BOOL)_reloadWithURLRequestProperties:(id)arg1 preserveSectionControl:(BOOL)arg2 ;
-(void)_performActionForProtocolButton:(id)arg1 ;
-(void)_handleViewControllerBecameReady:(id)arg1 ;
-(void)_finishHandlingFailure;
-(void)enqueueFetchOperationForPageSection:(id)arg1 ;
-(void)_setHeaderView:(id)arg1 ;
-(BOOL)_shouldDisplayControlsInNavigationBar;
-(void)_showNativeShowcaseWithDictionary:(id)arg1 ;
-(BOOL)_shouldDisplaySegmentedControlInNavigationBar:(id)arg1 ;
-(void)_finishSuccessfulLoad;
-(void)_moveToRootSectionForChildViewController:(id)arg1 protocol:(id)arg2 ;
-(void)_fetchPage:(BOOL)arg1 ;
-(BOOL)isExternalRequest;
-(BOOL)pushStorePage:(id)arg1 withTarget:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)_reloadsWhenCacheExpired;
-(BOOL)_isCacheExpired;
-(void)_reloadNavigationButtons;
-(void)_reloadNavigationMenus;
-(void)_navigationButtonAction:(id)arg1 ;
-(void)_setLeftNavigationItem:(id)arg1 forTag:(int)arg2 ;
-(void)_setRightNavigationItem:(id)arg1 forTag:(int)arg2 ;
-(void)_navigationMenuButtonAction:(id)arg1 ;
-(BOOL)_isInTransientViewController;
-(id)setDisplayedSectionGroup:(id)arg1 ;
-(void)_sectionControlAction:(id)arg1 ;
-(BOOL)reloadForSectionsWithGroup:(id)arg1 ;
-(id)_newBarButtonItemsWithButtonItems:(id)arg1 replacingItemWithTag:(int)arg2 withButtonItem:(id)arg3 ;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(void)menuViewController:(id)arg1 didTapButton:(id)arg2 ;
-(void)menuViewControllerDidCancel:(id)arg1 ;
-(BOOL)isShowingPreviewOverlay;
-(void)hidePreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(BOOL)showPreviewOverlay:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3 ;
-(void)setUrlBagKey:(id)arg1 ;
-(void)setURLRequest:(id)arg1 ;
-(void)handleStoreFailureWithError:(id)arg1 ;
-(void)iTunesStoreUI_searchFieldControllerDidChange:(id)arg1 ;
-(BOOL)loadMoreWithURL:(id)arg1 ;
-(id)_activeChildViewController;
-(id)activeChildViewController;
-(void)setExternalRequest:(BOOL)arg1 ;
-(void)_setReloadsWhenCacheExpired:(BOOL)arg1 ;
-(id)searchFieldController;
-(id)sectionGroup;
-(id)sectionSegmentedControl;
-(void)setCanMoveToOverlay:(BOOL)arg1 ;
@end

