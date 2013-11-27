/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>
#import <CommunicationsSetupUI/CNFRegCreateAccountControllerDelegate.h>

@class PSSpecifier, NSString, CNFRegLearnMoreButton;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate> {

	PSSpecifier* _usernameSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _actionGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _createAccountButtonSpecifier;
	NSString* _pendingUsername;
	NSString* _pendingPassword;
	/*^block*/ id _alertHandler;
	unsigned _signinFailureCount;
	CNFRegLearnMoreButton* _learnMoreButton;
	BOOL _hideLearnMoreButton;
	BOOL _useSystemAccount;

}

@property (nonatomic,copy) NSString * pendingUsername;                 //@synthesize pendingUsername=_pendingUsername - In the implementation block
@property (nonatomic,copy) NSString * pendingPassword;                 //@synthesize pendingPassword=_pendingPassword - In the implementation block
@property (nonatomic,copy) id alertHandler;                            //@synthesize alertHandler=_alertHandler - In the implementation block
@property (assign,nonatomic) unsigned signinFailureCount;              //@synthesize signinFailureCount=_signinFailureCount - In the implementation block
@property (assign,nonatomic) BOOL hideLearnMoreButton;                 //@synthesize hideLearnMoreButton=_hideLearnMoreButton - In the implementation block
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationDidResume;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)passwordTextField;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)bundle;
-(void)handleURL:(id)arg1 ;
-(void)setAlertHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)alertHandler;
-(id)specifierList;
-(id)logName;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupEventHandlers;
-(void)setUsernameText:(id)arg1 ;
-(void)_updateDescriptionText;
-(id)usernameTextField;
-(void)signInTapped:(id)arg1 ;
-(void)showCreateAccountController;
-(void)forgotIDButtonTapped;
-(BOOL)usernameIsEmpty;
-(BOOL)passwordIsEmpty;
-(void)_buildSpecifierCache:(id)arg1 ;
-(void)setHideLearnMoreButton:(BOOL)arg1 ;
-(void)_handleTimeout;
-(void)_launchForgotPasswordUrl;
-(void)_resetSigninFailureCount;
-(void)_incrementSigninFailureCount;
-(void)_showRegistrationFailureWithError:(id)arg1 ;
-(void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(BOOL)hideLearnMoreButton;
-(void)_returnKeyPressed;
-(id)_rightButtonItem;
-(id)validationString;
-(void)_updateControllerState;
-(void)_layoutLearnMoreButton;
-(void)learnMorePressed:(id)arg1 ;
-(void)_resignFirstResponders;
-(id)pendingUsername;
-(id)pendingPassword;
-(id)getUserNameForSpecifier:(id)arg1 ;
-(id)getPasswordForSpecifier:(id)arg1 ;
-(void)setSignInButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)__userTappedTextField;
-(void)setPendingUsername:(id)arg1 ;
-(void)setPendingPassword:(id)arg1 ;
-(void)_startTimeout;
-(void)_loadRegionsIfNecessary;
-(void)setUsernameEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPasswordEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCreateAccountButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_buildCreateAccountButtonSpecifierCache:(id)arg1 ;
-(void)_buildSignInGroupSpecifierCache:(id)arg1 ;
-(void)_buildCredentialSpecifierCache:(id)arg1 ;
-(unsigned)signinFailureCount;
-(void)_showSigninFailureAlert;
-(void)setSigninFailureCount:(unsigned)arg1 ;
-(void)_showNewPasswordNeededSheetWithAppleID:(id)arg1 ;
-(void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2 ;
-(void)_finishSignInWithAccount:(id)arg1 animated:(BOOL)arg2 ;
-(void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2 ;
-(void)usernameFieldDidBeginEditing:(id)arg1 ;
-(void)passwordFieldDidBeginEditing:(id)arg1 ;
-(void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1 ;
-(void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)_updateUI;
-(void)cancelButtonTapped;
-(void)setPasswordText:(id)arg1 ;
@end

