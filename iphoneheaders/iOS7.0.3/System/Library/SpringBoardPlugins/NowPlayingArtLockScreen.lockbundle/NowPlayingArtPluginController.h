/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/NowPlayingArtLockScreen.lockbundle/NowPlayingArtLockScreen
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <NowPlayingArtLockScreen/MPUSystemMediaControlsDelegate.h>
#import <NowPlayingArtLockScreen/SBLockScreenBundleController.h>

@class MPUSystemMediaControlsViewController;

@interface NowPlayingArtPluginController : SBAwayViewPluginController <MPUSystemMediaControlsDelegate, SBLockScreenBundleController> {

	MPUSystemMediaControlsViewController* _systemMediaController;

}
+(id)rootViewController;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(BOOL)showDateView;
-(BOOL)viewWantsFullscreenLayout;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)wantsAutomaticFullscreenTimer;
-(void).cxx_destruct;
-(BOOL)_tapHandler:(id)arg1 ;
@end

