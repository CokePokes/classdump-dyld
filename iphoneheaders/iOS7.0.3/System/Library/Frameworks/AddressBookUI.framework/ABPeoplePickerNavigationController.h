/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UINavigationController.h>

@class ABModel, NSArray;

@interface ABPeoplePickerNavigationController : UINavigationController {

	void* _addressBook;
	id _peoplePickerDelegate;
	ABModel* _model;
	int _behavior;
	CFArrayRef _displayedProperties;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	NSArray* _defaultToolbarItems;
	id _insertionValue;
	int _insertionProperty;
	struct {
		unsigned allowsEditing : 1;
		unsigned allowsCancel : 1;
		unsigned allowsActions : 1;
		unsigned allowsConferencing : 1;
		unsigned allowsSounds : 1;
		unsigned allowsVibrations : 1;
		unsigned hidesSearchableSources : 1;
		unsigned hidesPromptInLandscape : 1;
	}  _flags;
	BOOL _navigationBarIsAnimating;
	BOOL _allowsContactBlocking;
	BOOL _allowsOnlyPhoneActions;
	BOOL _allowsOnlyFaceTimeActions;

}

@property (assign,nonatomic) <ABPeoplePickerNavigationControllerDelegate> * peoplePickerDelegate;              //@synthesize peoplePickerDelegate=_peoplePickerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties; 
@property (assign,nonatomic) void* addressBook; 
@property (assign,nonatomic) BOOL hidesSearchableSources; 
@property (assign,nonatomic) BOOL hidesPromptInLandscape; 
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                       //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL allowsOnlyPhoneActions;                                                      //@synthesize allowsOnlyPhoneActions=_allowsOnlyPhoneActions - In the implementation block
@property (assign,nonatomic) BOOL allowsOnlyFaceTimeActions;                                                   //@synthesize allowsOnlyFaceTimeActions=_allowsOnlyFaceTimeActions - In the implementation block
@property (setter=ab_setDefaultToolbarItems:,nonatomic,retain) NSArray * ab_defaultToolbarItems;               //@synthesize defaultToolbarItems=_defaultToolbarItems - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;                                                //@synthesize reserved4=_reserved4 - In the implementation block
+(void)notifyPreferencesChanged;
-(BOOL)ckCanDismissWhenSuspending;
-(id)initWithAddressBook:(void*)arg1 ;
-(id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3 ;
-(id)peoplePickerDelegate;
-(id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 ;
-(id)initAsAddressBook:(BOOL)arg1 withStyle:(int)arg2 ;
-(id)initAsAddressBook:(BOOL)arg1 ;
-(id)displayedProperties;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)groupsViewControllerDidFinish:(id)arg1 ;
-(void)showMembersOfContactsFilter:(id)arg1 ;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(BOOL)allowsActions;
-(BOOL)allowsContactBlocking;
-(BOOL)allowsOnlyPhoneActions;
-(BOOL)allowsOnlyFaceTimeActions;
-(BOOL)allowsConferencing;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)setAllowsOnlyPhoneActions:(BOOL)arg1 ;
-(void)setAllowsOnlyFaceTimeActions:(BOOL)arg1 ;
-(BOOL)allowsShowingPersonsCards;
-(void)setBannerTitle:(id)arg1 value:(id)arg2 ;
-(void)setSearchCompletionDelegate:(id)arg1 ;
-(void)_applicationEnteringForeground;
-(id)bannerValue;
-(BOOL)allowsCancel;
-(BOOL)allowsCardEditing;
-(void)presentGroupsViewController;
-(void)_performCancel:(id)arg1 ;
-(id)promptForViewControllerType:(int)arg1 orientation:(int)arg2 ;
-(BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 forceDisableEditing:(BOOL)arg4 ;
-(id)insertionValue;
-(int)insertionProperty;
-(BOOL)navigationBarIsAnimating;
-(id)_setupAccountsAndGroupsController;
-(void)setupInitialStackAndLoadState:(BOOL)arg1 ;
-(id)initWithoutSetup;
-(void)setupAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3 ;
-(void)showMembersOfContactsFilter:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3 ;
-(id)membersViewController;
-(void)showCardForPerson:(void*)arg1 ;
-(void)_updateViewControllerNavigationButtons;
-(BOOL)_shouldPreventCancelButtonsFromShowing;
-(void)setPrompt:(id)arg1 forViewControllerType:(int)arg2 ;
-(BOOL)shouldContinueAfterSelectingPerson:(void*)arg1 cell:(id)arg2 ;
-(void)setAllowsVibrations:(BOOL)arg1 ;
-(BOOL)shouldPerformDefaultActionForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 withMemberCell:(id)arg4 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(BOOL)ab_ownsViewControllerToolbarItems:(id)arg1 ;
-(void)ab_changeViewControllerToolbarItemsIfEmpty:(id)arg1 animated:(BOOL)arg2 ;
-(void)ab_changeViewControllersToolbarItemsIfEmpty:(BOOL)arg1 ;
-(void)ab_setDefaultToolbarItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)ab_restoreViewControllerToolbarItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)showUnifiedCardForPerson:(void*)arg1 ;
-(void)finishNavigationBarAnimation;
-(void)notePreferencesChanged;
-(void)setInsertionValue:(id)arg1 property:(int)arg2 ;
-(void)popToDefaultViewController:(BOOL)arg1 ;
-(BOOL)isDefaultViewControllerVisible;
-(void)setHidesPromptInLandscape:(BOOL)arg1 ;
-(BOOL)hidesPromptInLandscape;
-(void)setupAsMePicker;
-(void)personViewController:(id)arg1 requestedLinkForPerson:(id)arg2 ;
-(void)ab_setDefaultToolbarItems:(id)arg1 ;
-(BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(id)ab_defaultToolbarItems;
-(void)searchCurrentContactsGroupUsingQuery:(id)arg1 animated:(BOOL)arg2 ;
-(void)safePopToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)__loadDatabaseAtDirectory:(id)arg1 ;
-(id)bannerTitle;
-(void)loadState;
-(void)dealloc;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setPrompt:(id)arg1 ;
-(BOOL)navigationBar:(id)arg1 shouldPushItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPushItem:(id)arg2 ;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPopItem:(id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setContentSizeForViewInPopover:(CGSize)arg1 ;
-(void)_setPopoverController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setParentViewController:(id)arg1 ;
-(void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_allowsAutorotation;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)removeChildViewController:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)model;
-(void)setAllowsCancel:(BOOL)arg1 ;
-(void)setPeoplePickerDelegate:(id)arg1 ;
-(void)saveState;
-(void*)displayedPerson;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(id)arg1 ;
-(void)setAllowsCardEditing:(BOOL)arg1 ;
-(void)setAllowsSounds:(BOOL)arg1 ;
-(int)behavior;
-(void)setBehavior:(int)arg1 ;
@end

