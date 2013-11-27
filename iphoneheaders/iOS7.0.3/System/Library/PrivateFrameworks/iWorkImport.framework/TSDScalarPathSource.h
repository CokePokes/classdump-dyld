/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSDSmartPathSource.h>

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {

	int mType;
	float mScalar;
	CGSize mNaturalSize;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) float scalar; 
@property (nonatomic,readonly) float maxScalar; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (readonly) unsigned numberOfControlKnobs; 
+(id)roundedRectangleWithScalar:(float)arg1 naturalSize:(CGSize)arg2 ;
+(id)regularPolygonWithScalar:(float)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithType:(int)arg1 scalar:(float)arg2 naturalSize:(CGSize)arg3 ;
+(id)rectangleWithNaturalSize:(CGSize)arg1 ;
+(id)chevronWithScalar:(float)arg1 naturalSize:(CGSize)arg2 ;
-(float)scalar;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(void)setControlKnobPosition:(unsigned)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned)arg1 ;
-(unsigned)numberOfControlKnobs;
-(CGSize)scaleFactorForInscribedRectangle;
-(id)initWithType:(int)arg1 scalar:(float)arg2 naturalSize:(CGSize)arg3 ;
-(void)setScalar:(float)arg1 ;
-(CGPoint)p_getControlKnobPointForRoundedRect;
-(CGPoint)p_getControlKnobPointForRegularPolygon;
-(CGPoint)p_getControlKnobPointForChevron;
-(void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForRegularPolygon:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForChevron:(CGPoint)arg1 ;
-(void)setScalarValue:(id)arg1 ;
-(CGPathRef)p_newRoundedRectPath;
-(CGPathRef)p_newRegularPolygonPath;
-(CGPathRef)p_newChevronPath;
-(float)maxScalar;
-(void)setNaturalSize:(CGSize)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(CGSize)naturalSize;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
@end

