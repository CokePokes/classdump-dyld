/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RUSignInViewControllerDelegate;
@class SKUICircleProgressIndicator, UILabel, UITextField, UIBarButtonItem, UIButton, UITapGestureRecognizer, MPUShapeView, ;

@interface RUSignInViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate> {

	SKUICircleProgressIndicator* _activityIndicatorView;
	UILabel* _appleIDTitleLabel;
	UITextField* _appleIDTextField;
	UIBarButtonItem* _cancelBarButtonItem;
	UIButton* _continueButton;
	UIButton* _createAccountButton;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	MPUShapeView* _entryContentView;
	UIButton* _forgotPasswordButton;
	BOOL _isAuthenticating;
	CGRect _keyboardFrame;
	UILabel* _loadingLabel;
	UILabel* _passwordTitleLabel;
	UITextField* _passwordTextField;
	UILabel* _titleLabel;
	<RUSignInViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RUSignInViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)_cancelAction:(id)arg1 ;
-(void)resetFakeLoadingState;
-(void)_keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)_dismissKeyboardAction:(id)arg1 ;
-(void)_textFieldDidChangeAction:(id)arg1 ;
-(void)_continueAction:(id)arg1 ;
-(void)_forgotPasswordAction:(id)arg1 ;
-(void)_createAccountAction:(id)arg1 ;
-(void)_updateContinueButtonVisibilityAnimated:(BOOL)arg1 ;
-(void)_setLoading:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)_keyboardWillHideNotification:(id)arg1 ;
@end

