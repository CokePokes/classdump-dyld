/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/SCATDelayPickerViewController.h>

@interface SCATActionRepeatPickerViewController : SCATDelayPickerViewController
-(double)maximumTime;
-(double)minimumTime;
-(double)delayFromPreferences;
-(BOOL)userCanDisableDelay;
-(id)localizedFooterText;
-(BOOL)delayEnabledFromPreferences;
-(void)setDelayFromUser:(double)arg1 ;
-(void)setDelayEnabledFromUser:(BOOL)arg1 ;
-(id)localizedTitle;
@end

