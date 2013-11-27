/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SearchBar.h>
#import <Maps/CollectionsTableViewControllerDelegate.h>
#import <Maps/RecentsViewControllerDelegate.h>
#import <Maps/TextFieldAnimationDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIView, UIBarButtonItem, NSArray, UIToolbar, RecentsViewController, UINavigationController, UIPopoverController, PopoverRevealViewController, SearchCompletionsTableViewController;

@interface SearchBarPad : SearchBar <CollectionsTableViewControllerDelegate, RecentsViewControllerDelegate, TextFieldAnimationDelegate, UIPopoverControllerDelegate, UITextFieldDelegate> {

	UIView* _searchView;
	UIBarButtonItem* _searchFieldBarButtonItem;
	UIBarButtonItem* _directionsBarButtonItem;
	UIBarButtonItem* _bookmarksBarButtonItem;
	UIBarButtonItem* _flexibleSpaceBarButtonItem;
	NSArray* _toolbarItems;
	UIToolbar* _toolbar;
	RecentsViewController* _recentsViewController;
	UINavigationController* _recentsAndSuggestionsNavController;
	UIPopoverController* _recentsAndSuggestionsPopoverController;
	UIPopoverController* _directionsPopoverController;
	PopoverRevealViewController* _popoverRevealViewController;
	UINavigationController* _directionsNavController;
	int _viewMode;
	BOOL _shouldSwitchPopoverToSuggestionsOnNewSearchResults;
	SearchCompletionsTableViewController* _searchCompletionsController;

}

@property (assign,nonatomic) int viewMode;                                                                    //@synthesize viewMode=_viewMode - In the implementation block
@property (nonatomic,readonly) RecentsViewController * recentsViewController;                                 //@synthesize recentsViewController=_recentsViewController - In the implementation block
@property (assign,nonatomic) SearchCompletionsTableViewController * searchCompletionsController;              //@synthesize searchCompletionsController=_searchCompletionsController - In the implementation block
-(id)recentsViewController;
-(id)_recentsViewController;
-(int)searchMode;
-(void)recentsViewController:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)recentsViewController:(id)arg1 choseBookmark:(id)arg2 ;
-(BOOL)recentsViewControllerShouldPresentToOrFromSelectionAlert:(id)arg1 ;
-(void)recentsViewControllerDidDismissClearHistorySheet:(id)arg1 ;
-(void)_searchFieldSubmitted:(id)arg1 ;
-(void)_directionsButtonTapped:(id)arg1 ;
-(void)_bookmarksButtonTapped:(id)arg1 ;
-(void)_restoreSearchStringFromDefaults;
-(void)_dismissVisblePopovers;
-(void)presentDirectionsInPopover;
-(BOOL)textFieldShowsRightView:(id)arg1 ;
-(id)toolbarItemsForIdiom:(int)arg1 toolbar:(id)arg2 ;
-(void)dismissDirectionsPopoverAnimated:(BOOL)arg1 ;
-(void)showCompletionsTable;
-(void)hideCompletionsTable;
-(void)updatePopoverViewControllerForSearchField;
-(void)setBackdropLightness:(int)arg1 animation:(id)arg2 ;
-(void)presentCompletionsPopoverForSearchField;
-(void)dismissCompletionsPopoverForSearchField;
-(void)setSearchCompletionsController:(id)arg1 ;
-(id)searchCompletionsController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(int)viewMode;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setSearchString:(id)arg1 ;
-(id)searchString;
-(void)setViewMode:(int)arg1 ;
@end

