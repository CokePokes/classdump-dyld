/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@class NSString;

@interface TSCH3DAnimationElementInterpolationShaderEffect : TSCH3DShaderEffect {

	NSString* mFunctionName;

}

@property (nonatomic,readonly) NSString * functionName; 
+(id)effectWithInterpolationFunctionName:(id)arg1 ;
+(void)setInterpolationRange:(box<glm::detail::tvec1<float> >)arg1 effectsStates:(id)arg2 ;
+(id)variableElementInterpolationRange;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableElementInterpolationRange;
-(id)initWithInterpolationFunctionName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)functionName;
@end

