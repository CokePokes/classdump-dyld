/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKViewController.h>
#import <GameCenterUI/AAUICredentialRecoveryPresentationDelegate.h>
#import <GameCenterUI/GKAuthenticateViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, GKGame, GKAccountRemoteUIController, GKButton, UIActivityIndicatorView, GKLabel, GKTextField, GKFakeTableGroupView, GKSignInInputView, UIAlertView, NSString, UIView, AAUICredentialRecoveryController;

@interface GKSignInViewController : GKViewController <AAUICredentialRecoveryPresentationDelegate, GKAuthenticateViewController, UITextFieldDelegate, UIScrollViewDelegate> {

	BOOL _disablesSignIn;
	BOOL _constraintsCreated;
	/*^block*/ id _completionHandler;
	UIScrollView* _scrollView;
	GKGame* _game;
	GKAccountRemoteUIController* _accountController;
	GKButton* _createAccountButton;
	GKButton* _iForgotButton;
	UIActivityIndicatorView* _progressIndicator;
	GKLabel* _signInLabel;
	GKLabel* _loginPromptLabel;
	GKLabel* _usernameLabel;
	GKLabel* _passwordLabel;
	GKTextField* _usernameField;
	GKTextField* _passwordField;
	GKFakeTableGroupView* _fakeTableGroupView;
	GKSignInInputView* _signInInputView;
	UIAlertView* _alert;
	int _alertTag;
	/*^block*/ id _alertDismissHandler;
	NSString* _lastUsername;
	int _failedSignInCount;
	UIView* _bubbleContainer;
	AAUICredentialRecoveryController* _credentialRecoveryController;
	UIEdgeInsets _scrollViewInsets;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                                //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKAccountRemoteUIController * accountController;                              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) GKButton * createAccountButton;                                               //@synthesize createAccountButton=_createAccountButton - In the implementation block
@property (nonatomic,retain) GKButton * iForgotButton;                                                     //@synthesize iForgotButton=_iForgotButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * progressIndicator;                                  //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) GKLabel * signInLabel;                                                        //@synthesize signInLabel=_signInLabel - In the implementation block
@property (nonatomic,retain) GKLabel * loginPromptLabel;                                                   //@synthesize loginPromptLabel=_loginPromptLabel - In the implementation block
@property (nonatomic,retain) GKLabel * usernameLabel;                                                      //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * passwordLabel;                                                      //@synthesize passwordLabel=_passwordLabel - In the implementation block
@property (nonatomic,retain) GKTextField * usernameField;                                                  //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) GKTextField * passwordField;                                                  //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) GKFakeTableGroupView * fakeTableGroupView;                                    //@synthesize fakeTableGroupView=_fakeTableGroupView - In the implementation block
@property (nonatomic,retain) GKSignInInputView * signInInputView;                                          //@synthesize signInInputView=_signInInputView - In the implementation block
@property (assign,nonatomic) BOOL constraintsCreated;                                                      //@synthesize constraintsCreated=_constraintsCreated - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollViewInsets;                                                //@synthesize scrollViewInsets=_scrollViewInsets - In the implementation block
@property (nonatomic,retain) UIAlertView * alert;                                                          //@synthesize alert=_alert - In the implementation block
@property (assign,nonatomic) int alertTag;                                                                 //@synthesize alertTag=_alertTag - In the implementation block
@property (nonatomic,copy) id alertDismissHandler;                                                         //@synthesize alertDismissHandler=_alertDismissHandler - In the implementation block
@property (nonatomic,retain) NSString * lastUsername;                                                      //@synthesize lastUsername=_lastUsername - In the implementation block
@property (assign,nonatomic) int failedSignInCount;                                                        //@synthesize failedSignInCount=_failedSignInCount - In the implementation block
@property (nonatomic,retain) UIView * bubbleContainer;                                                     //@synthesize bubbleContainer=_bubbleContainer - In the implementation block
@property (nonatomic,retain) AAUICredentialRecoveryController * credentialRecoveryController;              //@synthesize credentialRecoveryController=_credentialRecoveryController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL disablesSignIn;                                                          //@synthesize disablesSignIn=_disablesSignIn - In the implementation block
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)cancelAlertWithoutDelegateCallback;
-(void)showAlertForTag:(unsigned)arg1 ;
-(void)setAlert:(id)arg1 ;
-(void)setAlertTag:(int)arg1 ;
-(id)alert;
-(int)alertTag;
-(void)startLoadingIndicator;
-(void)stopLoadingIndicator;
-(BOOL)_gkUsesBubbleFlowModalPresentation;
-(id)bubbleAnimatorForTransitionFromViewController:(id)arg1 ;
-(CGRect)finalScreenFrameInViewCoordinatesForBubbleOfType:(int)arg1 ;
-(double)bubbleFlowAnimateOutDuration;
-(double)bubbleFlowAnimateInDuration;
-(double)bubbleFlowSubviewFadeOutDuration;
-(double)bubbleFlowSubviewFadeOutDelay;
-(void)viewWillAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2 ;
-(void)viewDidAppearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2 ;
-(void)viewWillDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2 ;
-(id)viewsToAnimateInWhileAppearingWithBubbleFlow;
-(id)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
-(void)keyboardWillHideShow:(id)arg1 ;
-(void)finishAuthenticationWithError:(id)arg1 ;
-(void)showPasswordChangeAlertWithURL:(id)arg1 ;
-(void)createConstraints;
-(void)showInputView;
-(BOOL)shouldAdjustInsetsForKeyboard;
-(void)cancelSignIn;
-(void)signIn;
-(void)createSubviews;
-(void)createNewAccount;
-(void)iForgotSelected;
-(void)updatePlaceholderTextForEnvironment;
-(id)usernameField;
-(id)progressIndicator;
-(void)authenticateRequestCompletedWithErrorResponse:(id)arg1 error:(id)arg2 ;
-(void)clearPassword;
-(void)setAlertDismissHandler:(/*^block*/ id)arg1 ;
-(void)showAccountRemoteUIForMode:(int)arg1 ;
-(void)setLastUsername:(id)arg1 ;
-(BOOL)handleUnderlyingAuthenticationError:(id)arg1 ;
-(void)presentError:(id)arg1 forAccountRemoteUIController:(id)arg2 ;
-(void)accountRemoteUIController:(id)arg1 finishedWithError:(id)arg2 ;
-(void)setAccountController:(id)arg1 ;
-(id)accountController;
-(void)presentAccountRemoteUIControllerAnimated:(BOOL)arg1 ;
-(void)loadAccountRemoteUIForMode:(int)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(/*^block*/ id)alertDismissHandler;
-(void)updateTableInsetsForKeyboardHeight:(float)arg1 ;
-(CGRect)rectToKeepVisibleAboveKeyboardWithinView:(id)arg1 ;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2 ;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)disablesSignIn;
-(void)setDisablesSignIn:(BOOL)arg1 ;
-(void)showViewController:(id)arg1 ;
-(id)createAccountButton;
-(void)setCreateAccountButton:(id)arg1 ;
-(id)iForgotButton;
-(void)setIForgotButton:(id)arg1 ;
-(void)setProgressIndicator:(id)arg1 ;
-(id)signInLabel;
-(void)setSignInLabel:(id)arg1 ;
-(id)loginPromptLabel;
-(void)setLoginPromptLabel:(id)arg1 ;
-(id)usernameLabel;
-(void)setUsernameLabel:(id)arg1 ;
-(id)passwordLabel;
-(void)setPasswordLabel:(id)arg1 ;
-(void)setUsernameField:(id)arg1 ;
-(void)setPasswordField:(id)arg1 ;
-(id)fakeTableGroupView;
-(void)setFakeTableGroupView:(id)arg1 ;
-(id)signInInputView;
-(void)setSignInInputView:(id)arg1 ;
-(BOOL)constraintsCreated;
-(void)setConstraintsCreated:(BOOL)arg1 ;
-(UIEdgeInsets)scrollViewInsets;
-(void)setScrollViewInsets:(UIEdgeInsets)arg1 ;
-(id)lastUsername;
-(int)failedSignInCount;
-(void)setFailedSignInCount:(int)arg1 ;
-(id)bubbleContainer;
-(void)setBubbleContainer:(id)arg1 ;
-(id)credentialRecoveryController;
-(void)setCredentialRecoveryController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setScrollView:(id)arg1 ;
-(/*^block*/ id)completionHandler;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)scrollView;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(id)passwordField;
@end

