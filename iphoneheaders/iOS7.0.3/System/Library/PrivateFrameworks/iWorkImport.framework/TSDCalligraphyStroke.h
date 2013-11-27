/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDSmartStroke.h>

@interface TSDCalligraphyStroke : TSDSmartStroke
+(Class)mutableClass;
-(void)applyToContext:(CGContextRef)arg1 insideStroke:(BOOL)arg2 ;
-(CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(float)arg3 withScale:(float)arg4 transform:(CGAffineTransform)arg5 ;
-(id)initWithColor:(id)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(float)arg6 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(BOOL)arg4 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(BOOL)arg6 ;
-(BOOL)canApplyToCAShapeLayer;
-(BOOL)drawsOutsideStrokeBounds;
-(CGRect)boundsForPath:(id)arg1 ;
-(BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
-(BOOL)drawsInOneStep;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(float)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(float)arg7 ;
-(BOOL)chisel;
-(CGAffineTransform)transformInContext:(CGContextRef)arg1 ;
-(float)scale;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)angle;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
@end

