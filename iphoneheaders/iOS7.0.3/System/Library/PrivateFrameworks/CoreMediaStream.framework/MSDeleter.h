/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <CoreMediaStream/MSDeleter.h>

@protocol MSDeleter <NSObject>
@property (assign,nonatomic) <MSDeleterDelegate> * delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(void)stop;
-(void)performOutstandingActivities;
-(void)deleteAssetCollections:(id)arg1;
-(void)abort;
@end

#import <CoreMediaStream/MSDeleteStreamsProtocolDelegate.h>

@protocol MSDeleterDelegate;
@class MSDeleteStreamsProtocol, MSObjectQueue, NSMutableArray, , MSMediaStreamDaemon;

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate> {

	MSDeleteStreamsProtocol* _protocol;
	int _state;
	MSObjectQueue* _deleteQueue;
	NSMutableArray* _requestedDeleteWrappers;
	int _batchSize;
	int _maxErrorCount;
	<MSDeleterDelegate>* _delegate;
	MSMediaStreamDaemon* _daemon;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) int batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) <MSDeleterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)nextActivityDate;
+(id)personIDsWithOutstandingActivities;
+(BOOL)isInRetryState;
+(id)deleterForPersonID:(id)arg1 ;
+(id)existingDeleterForPersonID:(id)arg1 ;
+(void)stopAllActivities;
+(void)abortAllActivities;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(id)_clearInstantiatedDeletersByPersonID;
+(void)forgetPersonID:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)deactivate;
-(void)stop;
-(void)_stop;
-(void)setDaemon:(id)arg1 ;
-(void)performOutstandingActivities;
-(void)deleteAssetCollections:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)_isInRetryState;
-(void)_updateMasterManifest;
-(id)_abortedError;
-(void)_abort;
-(void)_forget;
-(id)daemon;
-(BOOL)_isAllowedToDelete;
-(void)_sendDeleteRequest;
-(void)deleteProtocol:(id)arg1 didFinishSuccessfulCollections:(id)arg2 failedCollections:(id)arg3 error:(id)arg4 ;
-(void)deleteProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)setBatchSize:(int)arg1 ;
-(void)abort;
-(int)batchSize;
-(void).cxx_destruct;
@end

