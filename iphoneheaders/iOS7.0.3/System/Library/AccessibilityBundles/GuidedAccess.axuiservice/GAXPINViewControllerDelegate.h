/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GAXPINViewControllerDelegate <NSObject>
@optional
-(void)pinViewController:(id)arg1 pincodeIsVisible:(BOOL)arg2;
-(void)pinViewController:(id)arg1 wasDismissedWithReason:(int)arg2;
-(BOOL)shouldShowCancelButtonForPINViewController:(id)arg1;
-(BOOL)pinViewController:(id)arg1 passcodeIsCorrect:(id)arg2;
-(void)pinViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2;
@end

