/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SBAppSwitcherServices;

@interface SBAppSwitcherServiceManager : NSObject {

	SBAppSwitcherServices* _services;

}
+(id)sharedInstance;
-(void)unregisterService:(id)arg1 ;
-(id)registeredServicesSnapshot;
-(void)dealloc;
-(void)registerService:(id)arg1 ;
@end

