/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSXPCCoding.h>

@protocol SSRequestDelegate, OS_dispatch_queue;
@class , NSObject, SSXPCConnection;

@interface SSRequest : NSObject <SSXPCCoding> {

	int _backgroundTaskIdentifier;
	BOOL _cancelAfterTaskExpiration;
	<SSRequestDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SSXPCConnection* _requestConnection;
	SSXPCConnection* _responseConnection;

}

@property (assign,nonatomic) <SSRequestDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelAfterTaskExpiration; 
-(void)_endBackgroundTask;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)cancel;
-(BOOL)start;
-(void)disconnect;
-(void)_shutdownRequest;
-(void)_startWithMessageID:(long long)arg1 messageBlock:(/*^block*/ id)arg2 ;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_initSSRequest;
-(void)_shutdownRequestWithMessageID:(long long)arg1 ;
-(void)__beginBackgroundTask;
-(void)__endBackgroundTask;
-(void)setShouldCancelAfterTaskExpiration:(BOOL)arg1 ;
-(BOOL)shouldCancelAfterTaskExpiration;
-(void)_beginBackgroundTask;
@end

