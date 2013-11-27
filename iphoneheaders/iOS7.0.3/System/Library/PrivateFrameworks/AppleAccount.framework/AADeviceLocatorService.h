/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AADeviceLocatorService : NSObject {

	int _lastKnownState;
	BOOL _hasAttemptedToFetchState;
	BOOL _wantsToEnable;
	NSObject<OS_dispatch_queue>* _stateUpdateQueue;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_updateStateAndNotify:(BOOL)arg1 ;
-(BOOL)isChangingState;
-(void)setShouldEnable:(BOOL)arg1 ;
-(BOOL)shouldEnable;
-(void)enableInContext:(int)arg1 ;
-(void)disableInContext:(int)arg1 withWipeToken:(id)arg2 ;
-(void).cxx_destruct;
@end

