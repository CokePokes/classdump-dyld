/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantCallbackController.h>
#import <AirPortAssistant/AutoGuessSetup.h>
#import <AirPortAssistant/StepByStepUIDelegateResult.h>

@class NSDictionary;

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {

	StepByStepContextRef _stepByStepContext;
	id _delegate;
	NSDictionary* _restoreRecommendation;

}

@property (assign) <StepByStepUIDelegate> * delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSDictionary * restoreRecommendation;              //@synthesize restoreRecommendation=_restoreRecommendation - In the implementation block
+(id)stepByStepController;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(long)resume;
-(long)subclassAssistantCallback:(AssistantCallbackContext*)arg1 ;
-(long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2 ;
-(void)setRestoreRecommendation:(id)arg1 ;
-(long)cancelStepByStep;
-(void)stepByStepNextStepResult:(long)arg1 withOptions:(id)arg2 ;
-(id)restoreRecommendation;
@end

