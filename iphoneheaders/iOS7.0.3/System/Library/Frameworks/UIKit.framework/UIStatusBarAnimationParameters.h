/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol _UIBasicAnimationFactory;
@class ;

@interface UIStatusBarAnimationParameters : NSObject {

	double _duration;
	double _delay;
	int _curve;
	<_UIBasicAnimationFactory>* _animationFactory;
	double _startTime;

}

@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                               //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) int curve;                                                  //@synthesize curve=_curve - In the implementation block
@property (nonatomic,retain) <_UIBasicAnimationFactory> * animationFactory;              //@synthesize animationFactory=_animationFactory - In the implementation block
@property (assign,nonatomic) double startTime;                                           //@synthesize startTime=_startTime - In the implementation block
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 animations:(/*^block*/ id)arg3 completion:(/*^block*/ id)arg4 ;
+(void)animateWithParameters:(id)arg1 animations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
+(void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 frameInterval:(float)arg3 animations:(/*^block*/ id)arg4 completion:(/*^block*/ id)arg5 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)initWithDefaultParameters;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setCurve:(int)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(int)curve;
-(double)delay;
-(BOOL)shouldAnimate;
-(id)initWithEmptyParameters;
-(id)animationFactory;
-(void)setAnimationFactory:(id)arg1 ;
-(double)startTime;
@end

