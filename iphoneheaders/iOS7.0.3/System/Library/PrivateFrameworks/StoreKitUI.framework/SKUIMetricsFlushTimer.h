/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
@class NSHashTable, NSObject;

@interface SKUIMetricsFlushTimer : NSObject {

	NSHashTable* _metricsControllers;
	NSObject<OS_dispatch_source>* _timer;
	unsigned long long _timerStartTime;

}
+(id)sharedTimer;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addMetricsController:(id)arg1 ;
-(void)removeMetricsController:(id)arg1 ;
-(void)flushAllMetricsControllers;
-(void)reloadFlushInterval;
-(void)_performFlush;
-(void).cxx_destruct;
@end

