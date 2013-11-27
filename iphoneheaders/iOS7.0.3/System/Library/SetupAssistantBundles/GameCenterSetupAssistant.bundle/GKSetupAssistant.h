/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SetupAssistantBundles/GameCenterSetupAssistant.bundle/GameCenterSetupAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CommunicationsSetupUI/AASetupAssistantDelegateService.h>

@interface GKSetupAssistant : NSObject <AASetupAssistantDelegateService> {

	BOOL _cancelled;

}

@property (assign) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)setupOperationFailed;
@end

