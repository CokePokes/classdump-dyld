/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UIAlertViewDelegate.h>

@class SBApplicationIcon;

@interface SBAppProfileNotTrustedAlertItem : SBAlertItem <UIAlertViewDelegate> {

	SBApplicationIcon* _icon;
	BOOL _launchApp;

}
-(id)initWithIcon:(id)arg1 ;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)dismissOnLock;
@end

