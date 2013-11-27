/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBTwirlFilter : PBFilter {

	bool firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputAngle;
	float lastInputRadius;
	float inputRotation;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (@dynamic) float inputAmount; 
@property (assign) float inputRotation; 
-(void)setDefaults;
-(void)setInputAmount:(float)arg1 ;
-(float)inputAmount;
-(CGPoint)inputPoint;
-(void)setInputRotation:(float)arg1 ;
-(float)inputRotation;
-(void)setInputPoint:(CGPoint)arg1 ;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
@end

