/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AVConferenceXPCClient : NSObject {

	NSObject<OS_xpc_object>* connection;
	NSMutableDictionary* registeredBlocks;
	NSObject<OS_dispatch_queue>* replyQueue;
	NSObject<OS_dispatch_queue>* connectionQueue;

}

@property (readonly) NSObject<OS_xpc_object> * connection; 
@property (readonly) NSMutableDictionary * registeredBlocks; 
+(id)AVConferenceXPCClientSingleton;
-(void)dealloc;
-(id)init;
-(id)connection;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/ id)arg2 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)deregisterFromService:(char*)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 ;
-(id)createServerDiedDictionary;
-(void)closeConnectionToServer;
-(id)createNSDictionaryFromXPCDictionary:(id)arg1 ;
-(id)createNSErrorFromNSDictionary:(id)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/ id)arg3 queue:(id)arg4 ;
-(void)createConnectionToServer;
-(id)createXPCDictionaryFromNSDictionary:(id)arg1 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 timeout:(unsigned)arg3 ;
-(id)createTimeoutDictionary;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/ id)arg2 queue:(id)arg3 ;
-(id)createNSDictionaryFromNSError:(id)arg1 ;
-(id)registeredBlocks;
@end

