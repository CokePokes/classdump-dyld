/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardUI/SBDeviceLockView.h>

@class UIKeyboard;

@interface SBDeviceLockViewWithKeyboard : SBDeviceLockView {

	UIKeyboard* _keyboard;
	BOOL _isAnimating;
	BOOL _wasMinimizedWhenAnimationStarted;
	BOOL _triedToMinMaxWhileRotating;
	BOOL _previousKeyboardShowedInlineCandidates;

}
-(void)dealloc;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setInterfaceOrientation:(int)arg1 ;
-(void)setMinimized:(BOOL)arg1 ;
-(void)minimize;
-(void)maximize;
-(void)returnKeyPressed:(id)arg1 ;
-(id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3 ;
-(id)keypadView;
-(BOOL)canMinMaxKeyboard;
-(CGRect)keyboardFrameForInterfaceOrientation:(int)arg1 ;
-(void)geometryChanged:(id)arg1 ;
-(BOOL)isKeypadMinimized;
-(void)animateToInterfaceInterfaceOrientation:(int)arg1 ;
-(void)_layoutForCurrentOrientation;
-(void)willAnimateToInterfaceOrientation:(int)arg1 ;
-(void)didAnimateToInterfaceOrientation:(int)arg1 ;
-(void)_layoutEntryView;
-(void)_acceptOrCancelReturnKeyPress;
@end

