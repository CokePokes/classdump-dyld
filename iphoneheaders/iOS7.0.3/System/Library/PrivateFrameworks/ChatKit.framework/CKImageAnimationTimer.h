/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet, CADisplayLink;

@interface CKImageAnimationTimer : NSObject {

	unsigned _frame;
	NSMutableSet* _observers;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) NSMutableSet * observers;                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
+(id)sharedTimer;
-(void)dealloc;
-(id)init;
-(unsigned)frame;
-(void)setDisplayLink:(id)arg1 ;
-(id)displayLink;
-(void)setObservers:(id)arg1 ;
-(id)observers;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(void)animationTimerFired;
@end

