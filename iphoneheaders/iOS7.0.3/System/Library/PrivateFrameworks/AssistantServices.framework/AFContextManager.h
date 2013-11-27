/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(void)removeContextProvider:(id)arg1 ;
-(BOOL)addContextProvider:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)nothing;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)_shutdownServer;
-(id)_collateContexts;
-(void)startCenter:(id)arg1 ;
-(void).cxx_destruct;
@end

