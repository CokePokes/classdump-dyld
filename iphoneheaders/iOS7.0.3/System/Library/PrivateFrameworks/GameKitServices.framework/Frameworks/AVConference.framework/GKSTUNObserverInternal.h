/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/GKSTUNObserver.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface GKSTUNObserverInternal : GKSTUNObserver {

	SCDynamicStoreRef _dynamicStore;
	NSObject<OS_dispatch_queue>* _stunDiscoveryQueue;
	BOOL _fStunDiscoveryQueued;

}
-(void)dealloc;
-(id)init;
-(BOOL)initialize;
-(void)cleanUp;
-(void)registerForNetworkChanges;
-(void)trySTUNDiscovery;
-(void)deregisterForNetworkChanges;
@end

