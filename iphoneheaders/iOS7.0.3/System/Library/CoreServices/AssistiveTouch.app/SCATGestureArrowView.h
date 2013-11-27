/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIControl.h>

@interface SCATGestureArrowView : UIControl {

	CGPathRef _arrowPath;
	CGPathRef _arrowPathInBoundingBoxAtOrigin;
	BOOL _pressed;
	BOOL _shouldClearFingerCircle;
	float _tailAngle;
	float _curvature;
	float _distance;
	unsigned _style;
	CGPoint _tailPoint;

}

@property (assign,nonatomic) CGPoint tailPoint;                             //@synthesize tailPoint=_tailPoint - In the implementation block
@property (assign,nonatomic) float tailAngle;                               //@synthesize tailAngle=_tailAngle - In the implementation block
@property (assign,nonatomic) float curvature;                               //@synthesize curvature=_curvature - In the implementation block
@property (assign,nonatomic) float distance;                                //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) unsigned style;                                //@synthesize style=_style - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                 //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) BOOL shouldClearFingerCircle;                  //@synthesize shouldClearFingerCircle=_shouldClearFingerCircle - In the implementation block
@property (nonatomic,readonly) float actualDistanceForPreview; 
+(void)getCurveArcCenter:(CGPoint*)arg1 startAngle:(float*)arg2 endAngle:(float*)arg3 updatedFingerAngle:(float*)arg4 updatedFingerCenter:(CGPoint*)arg5 withFingerAngle:(float)arg6 fingerCenter:(CGPoint)arg7 curveRadius:(float)arg8 distanceToMove:(float)arg9 onLeft:(BOOL)arg10 ;
-(CGPathRef)scatPath;
-(CGRect)scatFrame;
-(void)setStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 ;
-(void)setTailPoint:(CGPoint)arg1 ;
-(void)setTailAngle:(float)arg1 ;
-(void)setCurvature:(float)arg1 ;
-(void)_propertyDidChange;
-(float)_distanceForPreview;
-(BOOL)_isGrayArrow;
-(void)_drawLineOfCirclesInContext:(CGContextRef)arg1 ;
-(void)_drawGrayArrowInContext:(CGContextRef)arg1 ;
-(CGPathRef)_arrowPath;
-(void)_fillArrowPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)_fingerCircleImage;
-(void)_uncacheArrowPaths;
-(CGRect)_frameNeeded;
-(CGPoint)tailPoint;
-(float)tailAngle;
-(float)curvature;
-(void)_getCurveRadius:(float*)arg1 onLeft:(BOOL*)arg2 ;
-(float)_distanceForCurveWithRadius:(float)arg1 onLeft:(BOOL)arg2 ;
-(CGPathRef)_newGrayArrowOutlinePath;
-(CGPathRef)_newDefaultArrowPath;
-(void)_addGrayArrowHeadLineToPath:(CGPathRef)arg1 bottomPoint:(CGPoint)arg2 tipPoint:(CGPoint)arg3 sideAngle:(float)arg4 sideLength:(float)arg5 outlineThickness:(float)arg6 innerThickness:(float)arg7 ;
-(void)_addGrayArrowHeadToPath:(CGPathRef)arg1 tipAngle:(float)arg2 tipPoint:(CGPoint)arg3 ;
-(void)_drawStraightLineInIntervals:(unsigned)arg1 spacingBetweenIntervals:(float)arg2 drawingBlock:(/*^block*/ id)arg3 ;
-(void)_addGrayFingerIfNecessaryToPath:(CGPathRef)arg1 ;
-(void)_drawCurvedLineInIntervals:(unsigned)arg1 spacingBetweenIntervals:(float)arg2 drawingBlock:(/*^block*/ id)arg3 ;
-(CGPathRef)_newStraightGrayArrowOutlinePath;
-(CGPathRef)_newCurvedGrayArrowOutlinePath;
-(void)_clearCircleWithRadius:(float)arg1 inContext:(CGContextRef)arg2 ;
-(void)_addCircleWithRadius:(float)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)shouldClearFingerCircle;
-(CGPathRef)_newStraightArrowPathWithIntervals:(unsigned)arg1 ;
-(CGPathRef)_newCurvedArrowPathWithIntervals:(unsigned)arg1 ;
-(void)_addArrowHeadToPath:(CGPathRef)arg1 baseLeftPoint:(CGPoint)arg2 baseRightPoint:(CGPoint)arg3 tipPoint:(CGPoint)arg4 ;
-(CGPathRef)_arrowPathInBoundingBoxAtOrigin;
-(float)actualDistanceForPreview;
-(void)setShouldClearFingerCircle:(BOOL)arg1 ;
-(BOOL)isPressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStyle:(unsigned)arg1 ;
-(unsigned)style;
-(void)setPressed:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDistance:(float)arg1 ;
-(float)distance;
@end

