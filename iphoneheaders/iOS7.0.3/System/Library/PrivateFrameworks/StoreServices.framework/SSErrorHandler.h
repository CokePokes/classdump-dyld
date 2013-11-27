/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SSErrorHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, , NSObject, NSArray;

@interface SSErrorHandler : NSObject {

	SSXPCConnection* _controlConnection;
	<SSErrorHandlerDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSArray* _failureTypes;
	SSXPCConnection* _observerConnection;

}

@property (assign) <SSErrorHandlerDelegate> * delegate; 
@property (copy) NSArray * failureTypes; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendDisconnectMessage;
-(void)_tearDownConnections;
-(void)_reconnectToDaemonWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_openSessionWithMessage:(id)arg1 ;
-(void)_dispatchToDelegate:(/*^block*/ id)arg1 ;
-(id)failureTypes;
-(void)setFailureTypes:(id)arg1 ;
-(void)stopWithCompletionBlock:(/*^block*/ id)arg1 ;
@end

