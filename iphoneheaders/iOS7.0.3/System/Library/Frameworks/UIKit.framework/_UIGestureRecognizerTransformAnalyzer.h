/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface _UIGestureRecognizerTransformAnalyzer : NSObject {

	float _lowPassTranslationMagnitudeDelta;
	float _lowPassScaleDelta;
	float _lowPassRotationDelta;
	float _translationWeight;
	float _pinchingWeight;
	float _rotationWeight;
	int _dominantComponent;

}

@property (nonatomic,readonly) int dominantComponent;              //@synthesize dominantComponent=_dominantComponent - In the implementation block
@property (assign,nonatomic) float translationWeight;              //@synthesize translationWeight=_translationWeight - In the implementation block
@property (assign,nonatomic) float pinchingWeight;                 //@synthesize pinchingWeight=_pinchingWeight - In the implementation block
@property (assign,nonatomic) float rotationWeight;                 //@synthesize rotationWeight=_rotationWeight - In the implementation block
-(id)init;
-(void)reset;
-(void)analyzeTouches:(id)arg1 ;
-(float)translationWeight;
-(void)setTranslationWeight:(float)arg1 ;
-(float)pinchingWeight;
-(void)setPinchingWeight:(float)arg1 ;
-(float)rotationWeight;
-(void)setRotationWeight:(float)arg1 ;
-(int)dominantComponent;
@end

