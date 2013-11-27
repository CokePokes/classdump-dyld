/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSTimer, CADisplayLink, NSObject;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	CADisplayLink* _caDisplayLink;
	unsigned _mode;
	BOOL _paused;
	BOOL _asynchronous;
	int _frameInterval;
	double _previousFrameTime;
	/*^block*/ id _block;
	NSObject<OS_dispatch_queue>* _queue;
	float _averageFrameTime;
	int _frameCount;
	double _frameCountBeginTime;
	int _queuedFrameCount;
	unsigned _maxQueuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) int frameInterval; 
@property (assign,nonatomic) unsigned mode; 
@property (assign,nonatomic) BOOL asynchronous; 
@property (assign) unsigned maxQueuedFrameCount;                       //@synthesize maxQueuedFrameCount=_maxQueuedFrameCount - In the implementation block
+(id)displayLinkWithBlock:(/*^block*/ id)arg1 queue:(id)arg2 ;
-(BOOL)isPaused;
-(void)setMaxQueuedFrameCount:(unsigned)arg1 ;
-(void)_teardown;
-(void)_caDisplayLinkCallback;
-(void)_nsTimerCallback;
-(unsigned)maxQueuedFrameCount;
-(void)_restart;
-(void)_callbackForNextFrame:(double)arg1 ;
-(BOOL)asynchronous;
-(void)dealloc;
-(id)init;
-(void)setFrameInterval:(int)arg1 ;
-(void)_start;
-(int)frameInterval;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setPaused:(BOOL)arg1 ;
-(void)_setup;
-(id)initWithBlock:(/*^block*/ id)arg1 queue:(id)arg2 ;
-(void)setAsynchronous:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

