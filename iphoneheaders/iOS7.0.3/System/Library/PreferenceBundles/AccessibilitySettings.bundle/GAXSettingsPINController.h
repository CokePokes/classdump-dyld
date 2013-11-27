/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/DevicePINController.h>

@interface GAXSettingsPINController : DevicePINController
+(BOOL)settingEnabled;
-(BOOL)requiresKeyboard;
-(BOOL)useProgressiveDelays;
-(BOOL)validatePIN:(id)arg1 ;
-(id)stringsTable;
-(BOOL)simplePIN;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)setPIN:(id)arg1 ;
@end

