/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, NSArray, UIImageView;

@interface UIDragger : NSObject {

	/*function pointer*/ void* _interpolator;
	UIView* _target;
	id _delegate;
	SEL _action;
	CGPoint _startLocation;
	CGPoint _stopLocation;
	double _duration;
	BOOL _showFinger;
	unsigned _port;
	NSArray* _modes;
	unsigned long long _startTimestamp;
	unsigned long long _stopTimestamp;
	unsigned long long _lastTimestamp;
	BOOL _waitingForSmoothScrolling;
	UIImageView* _fingerView;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)setDuration:(double)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setStartLocation:(CGPoint)arg1 ;
-(void)run;
-(void)dragDidEnd;
-(void)_postMouseEvent:(int)arg1 timestamp:(unsigned long long)arg2 location:(CGPoint)arg3 ;
-(void)_continueDrag:(id)arg1 ;
-(double)_delayUntilNextEvent;
-(void)_stopDrag:(id)arg1 ;
-(void)setInterpolation:(/*function pointer*/ void*)arg1 ;
-(void)setStopLocation:(CGPoint)arg1 ;
-(void)showFinger;
-(void)_smoothScrollingWillStart:(id)arg1 ;
-(void)_smoothScrollingDidEnd:(id)arg1 ;
@end

