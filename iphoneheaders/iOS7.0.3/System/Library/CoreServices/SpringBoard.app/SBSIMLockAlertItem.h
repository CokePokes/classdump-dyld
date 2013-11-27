/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBSIMLockAlertItem : SBAlertItem {

	int _status;
	int _okButtonIndex;
	int _unlockButtonIndex;

}
+(id)alertTitleForStatus:(int)arg1 ;
+(id)alertTitleForStatus:(int)arg1 languageCode:(id)arg2 ;
-(void)_resetButtonIndexes;
-(BOOL)canUnlock;
-(id)alertTitleForLanguageCode:(id)arg1 ;
-(id)alertTextForLanguageCode:(id)arg1 ;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)allowInSetup;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)unlock;
-(int)status;
-(id)initWithStatus:(int)arg1 ;
-(void)performUnlockAction;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)pendInSetupIfNotAllowed;
@end

