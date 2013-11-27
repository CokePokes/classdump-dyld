/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DChartClippingShaderEffect.h>

@interface TSCH3DChartAreaGrowClipShaderEffect : TSCH3DChartClippingShaderEffect {

	BOOL mIsOneSidedClipping;
	BOOL mUseDiscard;
	float mCapFudge;
	float mClipFudge;

}

@property (assign,nonatomic) BOOL isOneSidedClipping; 
@property (assign,nonatomic) BOOL useDiscard; 
@property (assign,nonatomic) float capFudge; 
@property (assign,nonatomic) float clipFudge; 
+(id)variableClipVertex;
+(id)variableIsCap;
+(id)variableClipValues;
+(id)variableZClipValues;
+(id)variableAbsIsCap;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(unsigned)numberOfClippingValues;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableClipVertex;
-(id)variableIsCap;
-(BOOL)useDiscard;
-(void)setUseDiscard:(BOOL)arg1 ;
-(float)capFudge;
-(void)setCapFudge:(float)arg1 ;
-(float)clipFudge;
-(void)setClipFudge:(float)arg1 ;
-(id)variableClipValues;
-(id)variableZClipValues;
-(id)variableAbsIsCap;
-(BOOL)isOneSidedClipping;
-(void)setIsOneSidedClipping:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
@end

