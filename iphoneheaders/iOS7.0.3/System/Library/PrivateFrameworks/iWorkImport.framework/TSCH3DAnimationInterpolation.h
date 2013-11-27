/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface TSCH3DAnimationInterpolation : NSObject

@property (nonatomic,readonly) NSString * name; 
+(id)linear;
+(id)quadratic;
+(id)pow24;
+(id)cubic;
+(id)quartic;
+(id)easeOutQuadratic;
+(id)easeOutPow24;
+(id)easeOutCubic;
+(id)easeOutQuartic;
+(id)easeInEaseOut;
+(id)easeInQuarticEaseOut;
+(id)easeOutSine;
+(id)exponential;
+(id)rotatingGrowEaseOut;
+(id)allNamedFunctionInterpolations;
+(void)injectAnimationInterpolationFunctions:(id)arg1 ;
-(id)name;
@end

