/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object, BKConnectionListenerHandler, OS_dispatch_queue;
@class NSObject, , NSString;

@interface BKXPCConnectionListener : NSObject {

	NSObject<OS_xpc_object>* _connection;
	<BKConnectionListenerHandler>* _handler;
	NSString* _service;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (readonly) <BKConnectionListenerHandler> * handler;              //@synthesize handler=_handler - In the implementation block
@property (readonly) NSString * service;                                   //@synthesize service=_service - In the implementation block
@property (readonly) NSObject<OS_dispatch_queue> * queue;                  //@synthesize queue=_queue - In the implementation block
-(id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4 ;
-(id)service;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)handler;
-(id)queue;
@end

