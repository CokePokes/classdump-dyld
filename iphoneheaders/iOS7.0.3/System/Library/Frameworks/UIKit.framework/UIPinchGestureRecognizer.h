/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {

	float _initialTouchDistance;
	float _initialTouchScale;
	double _lastTouchTime;
	float _velocity;
	float _previousVelocity;
	float _scaleThreshold;
	CGAffineTransform _transform;
	CGPoint _anchorPoint;
	UITouch* _touches[2];
	float _hysteresis;
	id _transformAnalyzer;
	unsigned _endsOnSingleTouch : 1;

}

@property (assign,nonatomic) float scale; 
@property (nonatomic,readonly) float velocity; 
@property (assign,nonatomic) float scaleThreshold;                                                    //@synthesize scaleThreshold=_scaleThreshold - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (assign,setter=_setHysteresis:,getter=_hysteresis,nonatomic) float hysteresis;              //@synthesize hysteresis=_hysteresis - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(float)_hysteresis;
-(void)_setHysteresis:(float)arg1 ;
-(float)scale;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)anchorPoint;
-(void)setScale:(float)arg1 ;
-(float)velocity;
-(void)_resetGestureRecognizer;
-(BOOL)_endsOnSingleTouch;
-(void)_setEndsOnSingleTouch:(BOOL)arg1 ;
-(float)scaleThreshold;
-(void)setScaleThreshold:(float)arg1 ;
@end

