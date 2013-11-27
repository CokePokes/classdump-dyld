/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SCROServerDelegate;
#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSLock, ;

@interface SCROServer : NSObject {

	NSLock* _contentLock;
	<SCROServerDelegate>* _delegate;
	CFRunLoopSourceRef _serverSource;
	CFRunLoopSourceRef _deathSource;
	CFRunLoopTimerRef _deathTimer;
	unsigned _serverPort;
	unsigned _deathPort;
	long _clientCount;
	BOOL _isRegisteredWithMach;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(void)initialize;
+(id)sharedServer;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)delegate;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(CFRunLoopSourceRef)serverSource;
-(void)unregisterWithMach;
-(long)_clientCount;
-(long)_incrementClientCount;
-(void)_setClientCount:(long)arg1 ;
-(CFRunLoopTimerRef)_deathTimer;
-(int)_registerForNotificationOnDeathPort:(unsigned)arg1 ;
-(BOOL)isRegisteredWithMach;
-(BOOL)registerWithMach;
@end

