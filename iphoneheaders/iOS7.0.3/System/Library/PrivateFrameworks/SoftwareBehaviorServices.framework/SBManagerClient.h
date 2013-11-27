/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SoftwareBehaviorServices/SoftwareBehaviorServices-Structs.h>
#import <SoftwareBehaviorServices/SBManagerClientInterface.h>

@protocol SBManagerClientDelegate;
@class NSXPCConnection, ;

@interface SBManagerClient : NSObject <SBManagerClientInterface> {

	NSXPCConnection* _serverConnection;
	<SBManagerClientDelegate>* _delegate;
	BOOL _connected;
	BOOL _serverIsExiting;
	int _clientType;
	dispatch_queue_sRef _queue;

}

@property (assign,nonatomic) <SBManagerClientDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int clientType;                                    //@synthesize clientType=_clientType - In the implementation block
@property (assign) dispatch_queue_sRef queue;                                   //@synthesize queue=_queue - In the implementation block
-(id)_remoteInterface;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(void)_invalidateConnection;
-(dispatch_queue_sRef)queue;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/ id)arg1 ;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/ id)arg2 ;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/ id)arg1 ;
-(id)initWithDelegate:(id)arg1 clientType:(int)arg2 ;
-(void)setClientType:(int)arg1 ;
-(void)connectToServerIfNecessary;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/ id)arg1 connectIfNecessary:(BOOL)arg2 ;
-(void)_setClientType;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/ id)arg1 ;
-(void)noteConnectionDropped;
-(void)noteServerExiting;
-(int)clientType;
@end

