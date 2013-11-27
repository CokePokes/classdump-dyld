/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyPasscodeInput.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField;

@interface BuddyComplexPasscodeInputView : BuddyPasscodeInput <UITextFieldDelegate> {

	UITextField* _passcodeField;

}

@property (nonatomic,retain) UITextField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setPasscodeField:(id)arg1 ;
-(id)passcodeField;
-(void)setPasscode:(id)arg1 ;
-(id)passcode;
@end

