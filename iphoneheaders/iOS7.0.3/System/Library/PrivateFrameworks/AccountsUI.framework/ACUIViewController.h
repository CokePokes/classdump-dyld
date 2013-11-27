/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>
#import <AccountsUI/ACUIAccountOperationsDelegate.h>

@class NSTimer, UIProgressHUD, UIBarButtonItem, ACAccountStore, ACUIAccountOperationsHelper;

@interface ACUIViewController : PSListController <ACUIAccountOperationsDelegate> {

	NSTimer* _idleJiggleTimer;
	void* _powerAssertion;
	BOOL _addedToTaskList;
	BOOL _activityInProgress;
	/*^block*/ id _confirmationViewCompletion;
	UIProgressHUD* _hud;
	BOOL _validationInProgress;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	ACAccountStore* _accountStore;
	ACUIAccountOperationsHelper* _accountOperationsHelper;

}

@property (nonatomic,retain) UIBarButtonItem * doneButton;                                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                      //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACUIAccountOperationsHelper * accountOperationsHelper;              //@synthesize accountOperationsHelper=_accountOperationsHelper - In the implementation block
@property (assign,nonatomic) BOOL validationInProgress;                                          //@synthesize validationInProgress=_validationInProgress - In the implementation block
+(BOOL)shouldPresentAsModalSheet;
+(id)acuiAccountStore;
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(void)setDoneButton:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(void)viewDidLoad;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_preventSleepAndDimming:(BOOL)arg1 ;
-(void)hideActivityInProgressUI;
-(BOOL)isPresentedAsModalSheet;
-(id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5 ;
-(id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5 ;
-(void)setTaskCompletionAssertionEnabled:(BOOL)arg1 ;
-(id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6 forceAlert:(BOOL)arg7 completion:(/*^block*/ id)arg8 ;
-(id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6 completion:(/*^block*/ id)arg7 ;
-(id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6 completion:(/*^block*/ id)arg7 ;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5 completion:(/*^block*/ id)arg6 ;
-(void)startValidationWithPrompt:(id)arg1 userInteraction:(BOOL)arg2 ;
-(BOOL)validationInProgress;
-(void)setValidationInProgress:(BOOL)arg1 ;
-(id)_effectiveParentController;
-(void)reloadParentSpecifier;
-(void)reloadAllParentSpecifiersAnimated:(BOOL)arg1 ;
-(void)reloadAllParentSpecifiers;
-(void)_jiggleIdleTimerFired;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5 completion:(/*^block*/ id)arg6 ;
-(id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)startValidationWithPrompt:(id)arg1 ;
-(void)updateValidationPrompt:(id)arg1 ;
-(void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2 ;
-(void)removeParentSpecifier;
-(id)accountOperationsHelper;
-(void)showActivityInProgressUIWithMessage:(id)arg1 ;
-(void)hideActivityInProgressUIWithDelay:(double)arg1 ;
-(BOOL)isShowingActivityInProgressUI;
-(void)setAccountOperationsHelper:(id)arg1 ;
-(void)setCellsChecked:(BOOL)arg1 ;
-(id)doneButton;
-(id)specifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void).cxx_destruct;
@end

