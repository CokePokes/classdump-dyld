/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
#import <ApplePushService/ApplePushService-Structs.h>
@class CUTWeakReference, NSObject, NSString, NSData, NSArray, NSMutableDictionary, NSMutableArray;

@interface APSConnection : NSObject {

	CUTWeakReference* _delegateReference;
	NSObject<OS_dispatch_queue>* _ivarQueue;
	NSString* _environmentName;
	NSData* _publicToken;
	unsigned _messageSize;
	NSString* _connectionPortName;
	unsigned _connectionPort;
	unsigned _connectionServerPort;
	CFMachPortRef _connectionSeverCFMachPort;
	NSArray* _enabledTopics;
	NSArray* _ignoredTopics;
	NSArray* _opportunisticTopics;
	BOOL _enableCriticalReliability;
	BOOL _enableStatusNotifications;
	BOOL _isConnected;
	BOOL _usesAppLaunchStats;
	NSMutableDictionary* _idsToOutgoingMessages;
	unsigned _nextOutgoingMessageID;
	NSObject<OS_dispatch_queue>* _machQueue;
	NSObject<OS_dispatch_source>* _mach_source;
	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	BOOL _everHadDelegate;
	NSMutableArray* _queuedDelegateBlocks;

}

@property (nonatomic,readonly) NSData * publicToken; 
@property (assign,nonatomic) unsigned messageSize; 
@property (assign,nonatomic) <APSConnectionDelegate> * delegate; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * ivarQueue;                  //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (assign,nonatomic) BOOL usesAppLaunchStats; 
+(void)_blockingXPCCallWithArgumentBlock:(/*^block*/ id)arg1 resultHandler:(/*^block*/ id)arg2 ;
+(void)_setTokenState;
+(BOOL)isValidEnvironment:(id)arg1 ;
+(void)invalidateDeviceIdentity;
+(double)keepAliveIntervalForEnvironmentName:(id)arg1 ;
+(id)connectionsDebuggingState;
+(void)notifySafeToSendFilter;
+(SecIdentityRef)copyIdentity;
+(void)requestCourierConnection;
-(BOOL)isConnected;
-(void)scheduleInRunLoop:(id)arg1 ;
-(id)delegateQueue;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)_connectIfNecessary;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
-(void)_connectIfNecessaryOnIvarQueue;
-(void)_disconnectOnIvarQueue;
-(void)_shutdownOnIvarQueue;
-(void)_disconnectFromDealloc;
-(void)_shutdownFromDealloc;
-(void)setEnableStatusNotifications:(BOOL)arg1 ;
-(void)_noteDisconnectedFromDaemonOnIvarQueue;
-(void)_deliverOutgoingMessageResultWithID:(unsigned)arg1 error:(id)arg2 ;
-(void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1 ;
-(void)_addEnableStatusNotificationsToXPCMessage:(id)arg1 ;
-(void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1 ;
-(void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4 ;
-(void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)_setUsesAppLaunchStats:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2 ;
-(void)_deliverPublicTokenOnIvarQueue:(id)arg1 ;
-(void)_deliverConnectionStatusChange:(BOOL)arg1 ;
-(void)_cancelConnectionOnIvarQueue;
-(void)_handleEvent:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4 ;
-(id)_listForIdentifierOnIvarQueue:(unsigned)arg1 ;
-(void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2 ;
-(void)moveTopic:(id)arg1 fromList:(unsigned)arg2 toList:(unsigned)arg3 ;
-(void)setUsesAppLaunchStats:(BOOL)arg1 ;
-(BOOL)usesAppLaunchStats;
-(void)_deliverMessage:(id)arg1 ;
-(void)_deliverPublicToken:(id)arg1 ;
-(void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(BOOL)hasIdentity;
-(void)sendFakeMessage:(id)arg1 ;
-(void)requestTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(id)ivarQueue;
-(id)initWithEnvironmentName:(id)arg1 queue:(id)arg2 ;
-(id)publicToken;
-(void)removeFromRunLoop;
-(id)initWithEnvironmentName:(id)arg1 ;
-(void)setEnabledTopics:(id)arg1 ;
-(void)cancelOutgoingMessage:(id)arg1 ;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 ;
-(void)sendOutgoingMessage:(id)arg1 ;
-(void)_cancelConnection;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 ;
-(unsigned)messageSize;
-(void)setMessageSize:(unsigned)arg1 ;
-(void)shutdown;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/ id)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(void)_disconnect;
@end

