/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
#import <GameKitServices/GameKitServices-Structs.h>
@class NSObject;

@interface GKSimpleTimer : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject<OS_dispatch_source>* _timerSource;
	id _delegate;
	double _startTime;
	double _interval;
	BOOL _timerSourceSet;

}

@property (assign,nonatomic) <GKSimpleTimerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double interval;                               //@synthesize interval=_interval - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(double)interval;
-(void)setTimer:(double)arg1 ;
-(void)fireIn:(double)arg1 fromNow:(double)arg2 ;
@end

