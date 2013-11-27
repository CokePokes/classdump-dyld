/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <aosnotifyd/AOSFindBaseServiceProvider.h>
#import <aosnotifyd/FMFFencesMgrDelegate.h>
#import <aosnotifyd/AOSAPSDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface AOSFMFServiceProvider : AOSFindBaseServiceProvider <FMFFencesMgrDelegate, AOSAPSDelegate> {

	BOOL _hasCompletedInitialSetup;
	BOOL _haveCachedGlobalBackgroundAppRefreshState;
	BOOL _haveCachedFmfBackgroundAppRefreshState;
	BOOL _cachedGlobalBackgroundAppRefreshState;
	BOOL _cachedFmfBackgroundAppRefreshState;
	NSObject<OS_dispatch_semaphore>* _locationManagerSemaphore;

}

@property (assign,nonatomic) BOOL hasCompletedInitialSetup;                                           //@synthesize hasCompletedInitialSetup=_hasCompletedInitialSetup - In the implementation block
@property (assign,nonatomic) BOOL haveCachedGlobalBackgroundAppRefreshState;                          //@synthesize haveCachedGlobalBackgroundAppRefreshState=_haveCachedGlobalBackgroundAppRefreshState - In the implementation block
@property (assign,nonatomic) BOOL haveCachedFmfBackgroundAppRefreshState;                             //@synthesize haveCachedFmfBackgroundAppRefreshState=_haveCachedFmfBackgroundAppRefreshState - In the implementation block
@property (assign,nonatomic) BOOL cachedGlobalBackgroundAppRefreshState;                              //@synthesize cachedGlobalBackgroundAppRefreshState=_cachedGlobalBackgroundAppRefreshState - In the implementation block
@property (assign,nonatomic) BOOL cachedFmfBackgroundAppRefreshState;                                 //@synthesize cachedFmfBackgroundAppRefreshState=_cachedFmfBackgroundAppRefreshState - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_semaphore> * locationManagerSemaphore;              //@synthesize locationManagerSemaphore=_locationManagerSemaphore - In the implementation block
+(BOOL)_isFMFAppRestrictionSet;
-(void)accountDidChange;
-(void)registerCommonNotifications;
-(void)deinitializeProvider;
-(void)deregisterCommonNotifications;
-(void)buddyDidComplete:(id)arg1 ;
-(void)accountDeactivated;
-(id)_constructVolatileFullDeviceInfo;
-(void)didReceiveAuthFailureForRequest:(id)arg1 ;
-(id)newLocationManager;
-(void)flushBackgroundAppRefreshStateCache;
-(void)setLocationManagerSemaphore:(id)arg1 ;
-(void)performInitialSetup;
-(BOOL)hasCompletedInitialSetup;
-(void)_fmfAppInstalled;
-(void)setHasCompletedInitialSetup:(BOOL)arg1 ;
-(void)fmfAppUpdated:(id)arg1 ;
-(void)_fmfAppUninstalled;
-(void)fmfLocationServicesSettingsChanged:(id)arg1 ;
-(void)fmfPushNotificationSettingsChanged:(id)arg1 ;
-(void)fmfRestrictionsChanged:(id)arg1 ;
-(id)locationManagerSemaphore;
-(id)_constructStandardDeviceContext;
-(BOOL)globalBackgroundAppRefreshState;
-(BOOL)fmfBackgroundAppRefreshState;
-(id)_constructNonVolatileFullDeviceInfo;
-(void)setHaveCachedGlobalBackgroundAppRefreshState:(BOOL)arg1 ;
-(void)setHaveCachedFmfBackgroundAppRefreshState:(BOOL)arg1 ;
-(BOOL)cachedGlobalBackgroundAppRefreshState;
-(BOOL)haveCachedGlobalBackgroundAppRefreshState;
-(void)setCachedGlobalBackgroundAppRefreshState:(BOOL)arg1 ;
-(BOOL)cachedFmfBackgroundAppRefreshState;
-(BOOL)haveCachedFmfBackgroundAppRefreshState;
-(void)setCachedFmfBackgroundAppRefreshState:(BOOL)arg1 ;
-(void)sendTriggeredFence:(id)arg1 withTriggerLocation:(id)arg2 ;
-(void)fenceTriggered:(id)arg1 atLocation:(id)arg2 ;
-(void)didReceiveAPSMessage:(id)arg1 ;
-(void)didReceiveAPSToken:(id)arg1 ;
-(id)serviceIdentifierInURL;
-(id)copyHandlerForCommand:(id)arg1 params:(id)arg2 ;
-(BOOL)isProviderEnabledForLocations;
-(BOOL)locatesAllowed;
-(void)ackFencesCommand:(id)arg1 ;
-(BOOL)effectiveBackgroundAppRefreshState;
-(id)serviceName;
-(id)init;
-(void)start;
-(void)stop;
-(void).cxx_destruct;
@end

