/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UIView, UITextInputTraits;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,readonly) UITextInputTraits * textInputTraits; 
-(void)dealloc;
-(void)layoutSubviews;
-(id)textInputTraits;
-(id)initWithDefaultSize;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/ id)arg1 ;
-(void)notePasscodeFieldTextDidChange;
@end

