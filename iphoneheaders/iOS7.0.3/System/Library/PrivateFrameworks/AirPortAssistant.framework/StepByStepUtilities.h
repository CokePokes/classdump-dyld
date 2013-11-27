/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface StepByStepUtilities : NSObject
+(id)getProductLocalizedStringWithFormat:(id)arg1 fromParamDict:(id)arg2 ;
+(int)selectorChoiceToMatrixTag:(int)arg1 ;
+(int)autoGuessRecommendationToMatrixTag:(id)arg1 ;
+(int)matrixTagToSelectorChoice:(int)arg1 ;
+(id)nameForNetworkOrDevice:(id)arg1 ;
+(id)productIDForNetworkOrDevice:(id)arg1 ;
+(id)selectorChoiceToReplaceOption:(int)arg1 ;
+(void)formatRecommendation:(id)arg1 fromParamDict:(id)arg2 forStep:(int)arg3 restoreString:(id*)arg4 restoreSpecificString:(id*)arg5 dontRecommendString:(id*)arg6 ;
+(unsigned)getProductIDFromParamDict:(id)arg1 ;
+(int)getDeviceKindFromParamDict:(id)arg1 ;
+(id)findSourceBaseByName:(id)arg1 fromParamDict:(id)arg2 ;
+(id)findSourceBaseByRadioName:(id)arg1 fromParamDict:(id)arg2 ;
+(id)findSourceNetworkByName:(id)arg1 fromParamDict:(id)arg2 ;
+(id)findSourceConfigByName:(id)arg1 fromParamDict:(id)arg2 ;
@end

