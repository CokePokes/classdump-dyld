/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface AVConferenceXPCServer : NSObject {

	NSObject<OS_xpc_object>* listener;
	NSMutableArray* clientConnections;
	NSMutableDictionary* registeredBlocks;
	NSObject<OS_dispatch_queue>* incomingMessageQueue;
	NSObject<OS_dispatch_queue>* outgoingMessageQueue;
	NSObject<OS_dispatch_queue>* clientConnectionsQueue;

}

@property (readonly) NSObject<OS_xpc_object> * listener; 
@property (readonly) NSMutableDictionary * registeredBlocks; 
+(id)AVConferenceXPCServerSingleton;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/ id)arg2 ;
-(void)deregisterFromService:(char*)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 ;
-(void)_xpc_start_listening_for_connections;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 context:(id)arg3 ;
-(id)authorizedTokenData;
-(id)createNSDictionaryFromXPCDictionary:(id)arg1 ;
-(id)createNSErrorFromNSDictionary:(id)arg1 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/ id)arg2 queue:(id)arg3 ;
-(id)createNSDictionaryFromNSError:(id)arg1 ;
-(id)registeredBlocks;
-(void)_xpc_remove_connections_from_list;
-(id)createXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(id)arg2 ;
-(id)_xpc_get_connection_from_list_for_context:(id)arg1 ;
-(id)_xpc_get_connection_from_list_for_connection:(id)arg1 ;
-(void)_xpc_handle_incoming_request:(id)arg1 ;
-(id)createClientDiedDictionary;
-(void)appendPIDToDictionary:(id)arg1 pid:(int)arg2 ;
-(void)appendContextToDictionary:(id)arg1 forConnection:(id)arg2 ;
-(id)listener;
-(void)_xpc_add_connection_to_list:(id)arg1 ;
-(void)_xpc_remove_connection_from_list:(id)arg1 ;
@end

