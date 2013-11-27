/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVWeakReference, AVPlayer;

@interface AVPlayerTimelyCaller : NSObject {

	NSObject<OS_dispatch_queue>* _timerQueue;
	AVWeakReference* _weakReference;
	AVPlayer* _player;
	NSObject<OS_dispatch_source>* _timerSource;
	BOOL _isInvalidated;
	BOOL _timerQueueIsPlayerStateDispatchQueue;
	OpaqueCMTimebaseRef _timebase;
	double _lastRate;
	double _currentRate;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
-(id)_weakReference;
-(void)_startObservingTimebaseNotificationsForCurrentItem;
-(void)_stopObservingTimebaseNotifications;
-(long)_removeCurrentTimebaseFromTimerSource;
-(void)_stopRespondingToPlayerStateChanges;
-(void)_effectiveRateChanged;
-(void)_timebaseDidChange:(id)arg1 ;
-(void)_handleTimeDiscontinuity;
-(id)initWithPlayer:(id)arg1 queue:(id)arg2 ;
-(void)_resetNextFireTime;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)finalize;
-(id)player;
@end

