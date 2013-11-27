/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
#import <MusicUI/MusicUI-Structs.h>
@class MPAudioDeviceController, NSObject, RadioStation, NSDictionary, NSDate;

@interface MusicRadioPlaybackCoordinator : NSObject {

	MPAudioDeviceController* _audioDeviceController;
	BOOL _deviceIsDocked;
	BOOL _deviceIsLocked;
	BOOL _didPresentNotificationForCurrentItem;
	int _lockStateNotifyToken;
	BOOL _lockStateNotifyTokenIsValid;
	void* _mediaRemoteCommandObserver;
	NSObject<OS_dispatch_source>* _pauseTimeoutTimerSource;
	RadioStation* _playbackNotificationStation;
	NSDictionary* _pickedRoute;
	BOOL _playbackIsPaused;
	NSDate* _playbackTimeoutBeginDate;
	double _playbackTimeoutDuration;
	CFUserNotificationRef _playbackTimeoutNotification;
	BOOL _playbackTimeoutNotificationDidExpire;
	NSObject<OS_dispatch_source>* _playbackTimeoutNotificationExpirationTimerSource;
	CFRunLoopSourceRef _playbackTimeoutNotificationRunLoopSource;
	RadioStation* _currentStation;

}

@property (nonatomic,retain) RadioStation * currentStation;              //@synthesize currentStation=_currentStation - In the implementation block
+(id)sharedCoordinator;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)_itemWillChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)currentStation;
-(void)requestPlaybackForStation:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)_resetPlaybackTimeoutInformation;
-(void)_updatePlaybackTimerForDeviceStateChangeAllowingExpiredPlaybackTimeoutNotificationDismissal:(BOOL)arg1 ;
-(void)_effectiveVolumeDidChangeNotification:(id)arg1 ;
-(void)_playbackContentsDidChangeNotification:(id)arg1 ;
-(void)_itemIsBannedDidChangeNotification:(id)arg1 ;
-(void)_itemIsInWishListDidChangeNotification:(id)arg1 ;
-(void)_itemIsLikedDidChangeNotification:(id)arg1 ;
-(void)_itemDurationDidBecomeAvailableNotification:(id)arg1 ;
-(void)_cancelPlaybackTimeoutNotification;
-(void)_cancelPauseTimeoutTimer;
-(void)setCurrentStation:(id)arg1 ;
-(BOOL)_isRadioRelevantItem:(id)arg1 ;
-(void)_presentPlaybackTimeoutNotificationForCurrentItemIfNeeded;
-(void)_schedulePlaybackTimeoutNotificationExpirationTimerIfNeeded;
-(void)_cancelPlaybackTimeoutNotificationExpirationTimer;
-(void)_fullMuteDidChangeNotification:(id)arg1 ;
-(void)_receivedUserNotificationResponseForUserNotification:(CFUserNotificationRef)arg1 withResponseFlags:(unsigned long)arg2 ;
-(void).cxx_destruct;
@end

