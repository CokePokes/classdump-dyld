/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface EventDispatcher : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableArray* _eventMonitors;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)eventDispatcher;
+(void)connectEventMonitorWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)postEventWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_addClient:(id)arg1 ;
@end

