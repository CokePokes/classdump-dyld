/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBUIUserAgent <NSObject>
@required
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
-(BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
-(void)undimScreen;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 andDimScreen:(BOOL)arg2;
-(void)playRingtoneAtPath:(id)arg1 vibrationPattern:(id)arg2;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
-(id)foregroundDisplayID;
-(id)topSuspendedEventsOnlyDisplayID;
-(id)localizedDisplayNameForDisplayID:(id)arg1;
-(BOOL)applicationInstalledForDisplayID:(id)arg1;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsTethered;
-(BOOL)lockScreenIsShowing;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg1;
-(BOOL)canUserLaunchIcon;
-(BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3;
-(BOOL)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
-(BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4;
-(BOOL)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2;
-(BOOL)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4;
-(CGRect*)defaultContentRegionForAwayViewPlugin:(id)arg1 withOrientation:(int)arg2;
-(void)updateLockScreenInterfaceIfNecessary;
-(void)dimScreen:(BOOL)arg1;
-(BOOL)isIdleTimerDisabledForReason:(id)arg1;
-(void)lockAndDimDevice;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1;
-(void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
-(void)playRingtoneAtPath:(id)arg1;
-(void)stopRinging;
-(void)prepareToAnswerCall;
-(void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)arg1;
-(BOOL)launchDisplayWithURL:(id)arg1 forCall:(BOOL)arg2 sender:(id)arg3;
-(id)modalBulletinAlertHandlerRegistry;
-(void)activateModalBulletinAlert:(id)arg1;
-(void)addActiveInterfaceOrientationObserver:(id)arg1;
-(void)removeActiveInterfaceOrientationObserver:(id)arg1;
-(void)setMinimumBacklightLevel:(float)arg1 animated:(BOOL)arg2;
-(void)activateStarkRemoteAlertService:(id)arg1 ofType:(id)arg2;
-(void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
-(void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
-(BOOL)isUsingLegacyStyle;
-(int)activeInterfaceOrientation;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
-(BOOL)deviceIsLocked;
-(void)setWallpaperTunnelActive:(BOOL)arg1 forFullscreenAlertController:(id)arg2;
-(void)updateInterfaceOrientationIfNecessary;
-(BOOL)springBoardIsActive;
-(BOOL)canLaunchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2;
-(BOOL)launchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(BOOL)arg3 animate:(BOOL)arg4 launchOrigin:(int)arg5;
-(BOOL)launchFromPushOrLocalBulletin:(id)arg1 origin:(int)arg2;
-(BOOL)isSBUILoggingEnabled;
-(void)notifyOnNextUserEvent;
-(id)foregroundApplicationDisplayID;
-(BOOL)alertIsActive;
-(void)setIdleText:(id)arg1;
-(void)openURL:(id)arg1 animateIn:(BOOL)arg2 scale:(float)arg3 start:(double)arg4 duration:(float)arg5 animateOut:(BOOL)arg6;
@end

