/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class SBDeviceLockTitle, SBDeviceLockEntryField, UIView, NSString;

@interface SBDeviceLockView : UIView {

	int _style;
	int _interfaceOrientation;
	SBDeviceLockTitle* _statusView;
	SBDeviceLockEntryField* _entryView;
	id _delegate;

}

@property (nonatomic,readonly) UIView * statusView; 
@property (nonatomic,readonly) UIView * entryView; 
@property (nonatomic,readonly) UIView * keypadView; 
@property (nonatomic,readonly) int style;                                                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int interfaceOrientation;                                                       //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain) NSString * statusTitle; 
@property (nonatomic,retain) NSString * statusSubtitle; 
@property (assign,getter=isShowingStatusWarning,nonatomic) BOOL showingStatusWarning; 
@property (nonatomic,retain) NSString * passcode; 
@property (assign,getter=isShowingEntryStatusWarning,nonatomic) BOOL showingEntryStatusWarning; 
@property (assign,nonatomic) BOOL playsKeyboardClicks; 
@property (assign,nonatomic) BOOL showsEmergencyCallButton; 
@property (getter=isKeypadMinimized,nonatomic,readonly) BOOL keypadMinimized; 
@property (assign,nonatomic) id delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
+(int)defaultStyle;
+(int)defaultStyleForSiri:(BOOL)arg1 ;
+(double)deviceLockAnimationDuration;
+(int)defaultStyleForSiri;
+(id)newWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)interfaceOrientation;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(int)style;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)entryView;
-(id)statusView;
-(void)setPlaysKeyboardClicks:(BOOL)arg1 ;
-(BOOL)playsKeyboardClicks;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3 ;
-(void)setPasscode:(id)arg1 ;
-(void)deviceLockEntryFieldTextDidChange:(id)arg1 ;
-(void)deviceLockEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)notifyDelegateThatPasscodeDidChange;
-(void)notifyDelegateThatCancelButtonWasPressed;
-(void)notifyDelegateThatEmergencyCallButtonWasPressed;
-(void)notifyDelegateThatPasscodeWasEntered;
-(id)keypadView;
-(BOOL)isKeypadMinimized;
-(void)animateToInterfaceInterfaceOrientation:(int)arg1 ;
-(void)willAnimateToInterfaceOrientation:(int)arg1 ;
-(void)didAnimateToInterfaceOrientation:(int)arg1 ;
-(BOOL)deviceLockEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)deviceLockEntryFieldDidCancelEntry:(id)arg1 ;
-(id)statusTitle;
-(void)setStatusTitle:(id)arg1 ;
-(id)statusSubtitle;
-(void)setStatusSubtitle:(id)arg1 ;
-(BOOL)isShowingStatusWarning;
-(void)setShowingStatusWarning:(BOOL)arg1 ;
-(void)blinkStatusView;
-(BOOL)isShowingEntryStatusWarning;
-(void)setShowingEntryStatusWarning:(BOOL)arg1 ;
-(id)passcode;
@end

