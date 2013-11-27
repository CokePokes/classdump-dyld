/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/MailboxContentSelectionModelDataSource.h>
#import <MobileMail/MFSearchTextParserDelegate.h>
#import <MobileMail/MessageMegaMallObserver.h>
#import <MobileMail/MFAddressBookClient.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobileMail/TransferMailboxPickerDelegate.h>
#import <MobileMail/AutoFetchControllerDataSource.h>

@class MessageMegaMall, MFMessageViewingContext, UIBarButtonItem, UITableViewCell, NSArray, UISearchDisplayController, UISearchBar, SearchScopeControl, MFSearchTextParser, MFMessageCriterion, MFActivityMonitor, UIView, UINavigationController, MailboxContentSelectionModel, MFMailMessage, UITableView, MessageViewController, UIActionSheet, NSString, _UINavigationControllerPalette, NSUndoManager, MailDetailViewController;

@interface MailboxContentViewController : UIViewController <MailboxContentSelectionModelDataSource, MFSearchTextParserDelegate, MessageMegaMallObserver, MFAddressBookClient, UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate, UISearchBarDelegate, UIActionSheetDelegate, TransferMailboxPickerDelegate, AutoFetchControllerDataSource> {

	MessageMegaMall* _mall;
	MessageMegaMall* _searchMall;
	MFMessageViewingContext* _viewingContext;
	MFMessageViewingContext* _swipeActionViewingContext;
	float _savedContentOffset;
	MailboxContentViewController* _threadViewController;
	long long _currentConversationID;
	unsigned _currentSection;
	UIBarButtonItem* _multiEditButtonItem;
	UIBarButtonItem* _searchEditButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	UIBarButtonItem* _moveButtonItem;
	UIBarButtonItem* _markButtonItem;
	UITableViewCell* _cellDimmedDuringCompose;
	NSArray* _defaultToolbarItems;
	NSArray* _multiEditBarButtonItems;
	NSArray* _searchBarButtonItems;
	NSArray* _searchMultiEditBarButtonItems;
	UISearchDisplayController* _searchController;
	UISearchBar* _searchBar;
	SearchScopeControl* _searchScopeControl;
	MFSearchTextParser* _searchTextParser;
	MFMessageCriterion* _dateCriterion;
	CFDictionaryRef _commentCache;
	NSArray* _myAddresses;
	MFActivityMonitor* _fetchActivityMonitor;
	UIView* _deleteButtonView;
	UINavigationController* _actionSheetNavigationController;
	MailboxContentSelectionModel* _selectionModel;
	MFMailMessage* _messageToSelectAfterDeletion;
	unsigned _deleteOrArchive;
	CGPoint _lastScrolledContentOffset;
	double _nextAvailableLoadMoreInterval;
	int _addingSourcesCount;
	unsigned _isSearchActive : 1;
	unsigned _wasSearchActive : 1;
	unsigned _wasSearchBarFirstResponder : 1;
	unsigned _isOutgoingMailbox : 1;
	unsigned _isDraftsMailbox : 1;
	unsigned _isEditableMailbox : 1;
	unsigned _isInbox : 1;
	unsigned _isOutbox : 1;
	unsigned _inEditMode : 1;
	unsigned _messageLayerShouldPurge : 1;
	unsigned _isShowingSwipeDeleteConfirmation : 1;
	unsigned _isShowingSwipeActionSheet : 1;
	unsigned _settingSearchText : 1;
	unsigned _isDismissing : 1;
	unsigned _shouldSelectInitialMessage : 1;
	unsigned _shouldKeepSelectionVisible : 2;
	unsigned _searchResultsTableViewIsLoaded : 1;
	unsigned _currentMessageOutsideSearchResults : 1;
	unsigned _savedContentOffsetIsValid : 1;
	unsigned _isDeletingMessages : 1;
	unsigned _isDeletingAllMessages : 1;
	unsigned _anySourceSupportsSearch : 1;
	unsigned _isMovingAllMessages : 1;
	unsigned _shouldBlockRowReloads : 1;
	unsigned _isThreadedMCVC : 1;
	unsigned _willPop : 1;
	unsigned _shouldFadeOutSelectionOnDisappear : 1;
	unsigned _didFadeOutSelectionOnDisappear : 1;
	unsigned _preventNextScrollbarFlash : 1;
	unsigned _preventScrollOnNextAppear : 1;
	unsigned _preventMessageSelection : 1;
	unsigned _ignoringUserInteractionForDelete : 1;
	unsigned _ignoringUserInteractionForDraftRefresh : 1;
	unsigned _useSpecialDeleteAnimation : 1;
	unsigned _deselectingDeletedRow : 1;
	unsigned _isDismissingActionSheet : 1;
	unsigned _viewIsVisible : 1;
	unsigned _isRefreshing : 1;
	unsigned _localMailboxSearchOnly : 1;
	unsigned _startedSearch : 1;
	unsigned _finishedPrimarySearch : 1;
	unsigned _primarySearchHadResults : 1;
	unsigned _initiatedSecondarySearch : 1;
	unsigned _finishedSecondarySearch : 1;
	unsigned _allowLoadingMoreMessages : 1;
	unsigned _loadingMoreMessages : 1;
	unsigned _shouldClearCurrentMessage : 1;
	unsigned _backButtonIncludesUnreadCount : 1;
	unsigned _shouldFetchAfterFinishLaunching : 1;
	BOOL _displayFavoriteToggle;
	BOOL _shouldResetSources;
	UITableViewCell* _quasiSelectedCell;
	UITableView* _tableView;
	MessageViewController* _messageViewController;
	UIActionSheet* _actionSheet;
	NSString* _searchText;
	NSArray* _searchTerms;
	MFMessageCriterion* _searchCriterion;
	_UINavigationControllerPalette* _searchPalette;
	MFMailMessage* _initialMessageToDisplay;
	MFMailMessage* _quasiSelectedMessage;
	unsigned _sourceType;

}

@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) MessageViewController * messageViewController;                      //@synthesize messageViewController=_messageViewController - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                        //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,copy) NSArray * searchTerms;                                                //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,retain) MFMessageCriterion * searchCriterion;                               //@synthesize searchCriterion=_searchCriterion - In the implementation block
@property (nonatomic,readonly) BOOL isEditableMailbox; 
@property (nonatomic,readonly) BOOL isDeletingMessages; 
@property (nonatomic,readonly) BOOL viewIsVisible; 
@property (nonatomic,readonly) BOOL displayFavoriteToggle;                                       //@synthesize displayFavoriteToggle=_displayFavoriteToggle - In the implementation block
@property (readonly) NSUndoManager * undoManager; 
@property (nonatomic,readonly) MailDetailViewController * mailDetailViewController; 
@property (nonatomic,retain) _UINavigationControllerPalette * searchPalette;                     //@synthesize searchPalette=_searchPalette - In the implementation block
@property (nonatomic,retain) MFMailMessage * initialMessageToDisplay;                            //@synthesize initialMessageToDisplay=_initialMessageToDisplay - In the implementation block
@property (nonatomic,retain) UITableViewCell * quasiSelectedCell;                                //@synthesize quasiSelectedCell=_quasiSelectedCell - In the implementation block
@property (nonatomic,retain) MFMailMessage * quasiSelectedMessage;                               //@synthesize quasiSelectedMessage=_quasiSelectedMessage - In the implementation block
@property (assign,nonatomic) unsigned sourceType;                                                //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) BOOL shouldResetSources;                                            //@synthesize shouldResetSources=_shouldResetSources - In the implementation block
@property (assign,nonatomic) BOOL isRefreshing; 
-(void)selectInitialMessageWhenAvailable;
-(void)setMessageViewController:(id)arg1 ;
-(void)selectInitialMessageASAP;
-(void)preventScrollOnNextAppear;
-(id)messageViewController;
-(int)propagateChangeDownwards:(id)arg1 ;
-(void)displayMessageFromSpotlight:(id)arg1 ;
-(BOOL)snapshotOnTermination;
-(void)willPerformVisibleStoreFetch:(id)arg1 ;
-(BOOL)isEditableMailbox;
-(void)displayMessage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_beginIgnoringUserInteractionForDraftRefresh;
-(void)displayMessage:(id)arg1 options:(unsigned)arg2 animated:(BOOL)arg3 ;
-(id)mall;
-(id)copySourcesCurrentlyVisible;
-(void)pulledToRefresh:(id)arg1 ;
-(void)_unreadCountChanged:(id)arg1 ;
-(void)_focusedMessageChanged:(id)arg1 ;
-(void)_updateTableForSettingsOrTimeChange:(id)arg1 ;
-(void)_deliveryQueueProcessingStart:(id)arg1 ;
-(void)_deliveryQueueProcessingStop:(id)arg1 ;
-(void)mailboxUpdatedWithNoChanges:(id)arg1 ;
-(void)_didFinishLaunching:(id)arg1 ;
-(void)setMailboxes:(id)arg1 sourceType:(unsigned)arg2 ;
-(BOOL)shouldResetSources;
-(void)_removeAllSources;
-(void)setShouldResetSources:(BOOL)arg1 ;
-(void)_beginAddingSources;
-(void)_addSource:(id)arg1 toSection:(unsigned)arg2 ;
-(void)_endAddingSources;
-(void)_clearSuspendedSearchState;
-(void)_updateMarginWidthWithTableView:(id)arg1 ;
-(id)_searchFieldFont;
-(void)_resumeSearchControllerAnimated:(BOOL)arg1 ;
-(void)_changeSetHadError:(id)arg1 ;
-(id)mf_statusBarSubtitleString;
-(void)updateIsRefreshing;
-(void)statusBarProgressDidChange:(id)arg1 ;
-(void)_cancelEditModeAnimated:(BOOL)arg1 ;
-(id)newSearchPalette;
-(void)displaySearchPalette;
-(void)updateBarButtons;
-(void)_updateStatusBarWithOurSources;
-(void)_selectInitialMessageIfNecessaryAndDisplayImmediately:(BOOL)arg1 withOptions:(unsigned)arg2 ;
-(BOOL)_hasSearchText;
-(void)_updateLandscapeThreadNavigation;
-(id)sourcesForMegaMall:(id)arg1 ;
-(void)_fetchDelayedIfNecessary;
-(void)updateNoMessagesCellForTableView:(id)arg1 updatingRows:(BOOL)arg2 ;
-(void)restoreContentOffset;
-(void)setQuasiSelectedCell:(id)arg1 ;
-(void)_selectRowOfDisplayedMessageInTableView:(id)arg1 scrollToVisible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)_isDisplayingSearchResults;
-(void)updateNoMessagesCellForTableView:(id)arg1 ;
-(id)_displayedMessage;
-(void)_selectRowOfMessage:(id)arg1 inTableView:(id)arg2 scrollToVisible:(BOOL)arg3 selectionFadeDuration:(float)arg4 ;
-(void)_reloadTableData:(id)arg1 ;
-(void)_ensureIndexPathVisible:(id)arg1 withTableView:(id)arg2 animated:(BOOL)arg3 ;
-(id)initialMessageToDisplay;
-(void)setInitialMessageToDisplay:(id)arg1 ;
-(void)_deselectRowOfDisplayedMessageInTableView:(id)arg1 selectionFadeDuration:(float)arg2 ;
-(void)_endBlockingBackgroundOperations;
-(void)removedFromMailNavigationController:(id)arg1 ;
-(void)_resetSearchWithCriterion:(id)arg1 ;
-(void)updateSearchProgressForTableView:(id)arg1 ;
-(void)_cancelSearch;
-(void)_suspendSearchController;
-(BOOL)_isShowingNoMessagesCellForTableView:(id)arg1 ;
-(void)_popIfNecessaryWithDelay:(double)arg1 ;
-(id)_mallForTableView:(id)arg1 ;
-(BOOL)_isShowingSpinnerInSection:(int)arg1 forTableView:(id)arg2 ;
-(BOOL)_isShowingSearchProgressForTableView:(id)arg1 ;
-(void)_setShowingSearchProgress:(BOOL)arg1 forTableView:(id)arg2 ;
-(id)searchProgressCellPathForTableView:(id)arg1 ;
-(BOOL)_shouldShowNoMessagesCellForTableView:(id)arg1 ;
-(void)_setShowingNoMessagesCell:(BOOL)arg1 forTableView:(id)arg2 ;
-(id)_tableViewForMall:(id)arg1 ;
-(void)deleteButtonLongPressed:(id)arg1 ;
-(void)transferButtonClicked:(id)arg1 ;
-(void)bulkMarkButtonClicked:(id)arg1 ;
-(BOOL)shouldDisplaySearchEditButtons;
-(void)editButtonClicked:(id)arg1 ;
-(BOOL)allowDeleteAll;
-(id)deleteButtonItem;
-(id)moveButtonItem;
-(id)markButtonItem;
-(id)currentEditButtonItem;
-(void)updateToolbarButtonTitles;
-(void)updateCurrentEditButton;
-(void)updateToolbarButtons;
-(void)updateNavigationBarButtons;
-(void)_beginMessageDeletionAnimation;
-(void)_deleteSelectedMessages;
-(void)_bulkMarkSelection:(id)arg1 asFlagged:(BOOL)arg2 ;
-(void)_bulkMarkSelection:(id)arg1 asRead:(BOOL)arg2 ;
-(void)_bulkMarkSelection:(id)arg1 asJunk:(BOOL)arg2 ;
-(void)_pauseReloadingMessagesForMall:(id)arg1 ;
-(void)_completeBulkMarkMessagesForMall:(id)arg1 ;
-(void)_reloadPendingMessagesForMall:(id)arg1 ;
-(void)_transferSelection:(id)arg1 ;
-(void)_destroySwipeActionViewingContext;
-(BOOL)performSwipeMoveWithContext:(id)arg1 ;
-(void)_completeSwipeReplyForwardWithContext:(id)arg1 ;
-(BOOL)performBulkMarkWithContext:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(BOOL)performBulkDeleteWithContext:(id)arg1 destructiveButtonIndex:(int)arg2 clickedButtonAtIndex:(int)arg3 ;
-(BOOL)performSwipeActionWithContext:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)_updateCurrentMessageOutsideSearchResultsAnimated:(BOOL)arg1 ;
-(void)_setInEditMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRowDeletionEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)deleteShortcutInvoked:(id)arg1 ;
-(id)quasiSelectedMessage;
-(void)_reallyDeleteMessages:(id)arg1 deleteOrArchive:(unsigned)arg2 ;
-(void)_messageCellDeletionAnimationsDidStopForTableView:(id)arg1 animated:(BOOL)arg2 ;
-(void)deleteAction:(id)arg1 showChoices:(BOOL)arg2 ;
-(id)mailDetailViewController;
-(void)_finishedAnimatingMessageToDeleteButton:(void*)arg1 ;
-(void)_reallyDeleteMessages:(id)arg1 inSection:(unsigned)arg2 deleteOrArchive:(unsigned)arg3 ;
-(int)_stackViewTransferOptions;
-(void)willDismiss:(BOOL)arg1 ;
-(void)didDismiss:(BOOL)arg1 ;
-(void)_clearIsDismissing;
-(void)_selectInitialMessageNowWithOptions:(unsigned)arg1 ;
-(void)_statusBarProgressDidHide:(id)arg1 ;
-(void)prepareForSpecialDeleteAnimation;
-(void)commitSpecialDeleteAnimationWithMessages:(id)arg1 deleteOrArchive:(unsigned)arg2 ;
-(void)invalidateCommentCache;
-(id)myEmailAddresses;
-(id)addressCommentForAddressList:(id)arg1 ;
-(void)_updateViewingContextToMessage:(id)arg1 ;
-(void)_setBackButtonIncludesUnreadCount:(BOOL)arg1 ;
-(void)_setCurrentMessageOutsideSearchResults:(BOOL)arg1 ;
-(id)sourcesForMessagesAtTableIndexPath:(id)arg1 ;
-(void)_setIsThreadedMCVC:(BOOL)arg1 ;
-(void)setSearchTerms:(id)arg1 ;
-(void)setSearchCriterion:(id)arg1 ;
-(id)mf_unreadCountForDisplay;
-(void)_updateBadgeCount;
-(id)_statusBarSubtitleStringWithBadgeCount:(unsigned)arg1 ;
-(id)_subtitleFormatWithBadgeCount:(unsigned)arg1 ;
-(id)messagesAtTableIndexPath:(id)arg1 ;
-(BOOL)_shouldShowSearchProgressAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(id)_firstMessageSubject;
-(id)noMessagesCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_shouldShowSpinnerAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(id)searchProgressCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(Class)_tableViewCellClass;
-(id)cachedAddressCommentForAddressList:(id)arg1 ;
-(unsigned)messageCountAtTableIndexPath:(id)arg1 ;
-(id)messagesForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)_setRowOfDisplayedMessageQuasiSelected:(BOOL)arg1 ;
-(void)restoreDraftOrOutboxMessage:(id)arg1 ;
-(id)displayThreadedViewForMessage:(id)arg1 mall:(id)arg2 animate:(BOOL)arg3 ;
-(void)_reloadTableData:(id)arg1 sections:(id)arg2 ;
-(BOOL)getContentOfffset:(CGPoint*)arg1 ensuringIndexPathVisible:(id)arg2 inTableView:(id)arg3 ;
-(void)setQuasiSelectedMessage:(id)arg1 ;
-(void)_connectionEstablished:(id)arg1 ;
-(void)handleMallStartedFetch:(id)arg1 ;
-(void)_setShowingSpinner:(BOOL)arg1 inSection:(int)arg2 forTableView:(id)arg3 ;
-(void)_deselectRowOfDisplayedMessageInTableView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_endIgnoringUserInteractionForDraftRefresh;
-(void)beginSecondarySearch;
-(void)getConversationStateAtTableIndexPath:(id)arg1 hasUnread:(BOOL*)arg2 hasUnflagged:(BOOL*)arg3 ;
-(void)getSourceStateHasUnread:(BOOL*)arg1 hasUnflagged:(BOOL*)arg2 ;
-(void)_beginBlockingBackgroundOperations;
-(void)_initiateSecondarySearchIfAppropriateForMall:(id)arg1 ;
-(void)_configureSearchMallSources;
-(unsigned)searchOrderOptions;
-(void)searchScopeChanged:(id)arg1 ;
-(BOOL)_primaryMallHasEditableMessages;
-(BOOL)_messagesAreEditableInSource:(id)arg1 ;
-(id)_favoritesMailboxSources;
-(void)dismissSearchResultsAnimated:(BOOL)arg1 ;
-(void)_dumpAndReloadSourcesForMall:(id)arg1 shouldThread:(BOOL)arg2 ;
-(void)searchTextParser:(id)arg1 searchCriterionChanged:(id)arg2 terms:(id)arg3 ;
-(void)megaMallMessageCountChanged:(id)arg1 ;
-(void)megaMallMessageAtIndexChanged:(id)arg1 ;
-(void)megaMallStartFetch:(id)arg1 ;
-(void)megaMallFinishedFetch:(id)arg1 ;
-(void)megaMallCurrentMessageRemoved:(id)arg1 ;
-(void)megaMallDidLoadMessages:(id)arg1 ;
-(void)megaMallGrowingMailboxesChanged:(id)arg1 ;
-(void)megaMallDidFinishSearch:(id)arg1 ;
-(void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3 ;
-(void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(BOOL)arg2 ;
-(void)setMailboxes:(id)arg1 ;
-(BOOL)isDeletingMessages;
-(id)mf_applicationContexts;
-(void)setShouldFadeOutSelectionOnDisappear:(BOOL)arg1 ;
-(BOOL)containsMessageOrConversation:(id)arg1 ;
-(BOOL)canResignFocus;
-(void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(BOOL)arg3 ;
-(void)resignPreparedForTransferOfMessages:(BOOL)arg1 ;
-(id)messageToSelectAfterDeletedMessages:(id)arg1 mall:(id*)arg2 ;
-(void)updateSelectionAnimated:(BOOL)arg1 ;
-(void)_displayNameChanged:(id)arg1 ;
-(id)quasiSelectedCell;
-(BOOL)shouldHideWhenRotatingToPortraitOrientation;
-(BOOL)allowBackNavigationForSlidableMasterSplitViewController:(id)arg1 ;
-(id)searchCriterion;
-(BOOL)displayFavoriteToggle;
-(void)selectMessageAtIndex:(int)arg1 ;
-(BOOL)isSearching;
-(id)searchPalette;
-(void)setSearchPalette:(id)arg1 ;
-(id)currentTableView;
-(void)deleteButtonClicked:(id)arg1 ;
-(id)sources;
-(BOOL)viewIsVisible;
-(void)_popoverWillBePresented:(id)arg1 ;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)applicationWillSuspend;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(void)didReceiveMemoryWarning;
-(void)applicationDidResume;
-(BOOL)shouldAutorotate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)keyCommands;
-(BOOL)canBecomeFirstResponder;
-(id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(id)arg1 ;
-(void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)loadView;
-(void)viewDidUnload;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)rotatingHeaderView;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_Ma3*)arg1 ;
-(BOOL)canDismiss;
-(unsigned)sourceType;
-(void)setSourceType:(unsigned)arg1 ;
-(id)tableView;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(id)searchText;
-(CGPoint)tableView:(id)arg1 newContentOffsetAfterUpdate:(CGPoint)arg2 context:(id)arg3 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(BOOL)isRefreshing;
-(void)viewWillReappear:(BOOL)arg1 ;
-(void)viewWillFirstAppear:(BOOL)arg1 ;
-(void)preventNextScrollbarFlash;
-(void)setSearchText:(id)arg1 ;
-(id)actionSheet;
-(void)setActionSheet:(id)arg1 ;
-(void)setIsRefreshing:(BOOL)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(id)searchTerms;
-(void)_popIfNecessary;
-(void)updateTitle;
@end

