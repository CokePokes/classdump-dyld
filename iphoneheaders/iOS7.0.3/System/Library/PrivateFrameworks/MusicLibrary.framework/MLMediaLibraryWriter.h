/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, MLMediaLibraryWriterDelegate;
@class NSObject, NSMutableDictionary, NSOperationQueue, NSTimer, ;

@interface MLMediaLibraryWriter : NSObject {

	NSObject<OS_dispatch_queue>* _serialQueue;
	NSMutableDictionary* _mediaLibraries;
	NSMutableDictionary* _transactionMap;
	NSOperationQueue* _templatedOperationsQueue;
	NSTimer* _watchdogTimer;
	<MLMediaLibraryWriterDelegate>* _delegate;
	double _transactionTimeout;

}

@property (assign,nonatomic,__weak) <MLMediaLibraryWriterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double transactionTimeout;                                     //@synthesize transactionTimeout=_transactionTimeout - In the implementation block
@property (assign,nonatomic) BOOL operationQueueEnabled; 
+(id)writerErrorWithCode:(int)arg1 description:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)reset;
-(id)beginTransactionForDatabaseAtPath:(id)arg1 fromXPCConnection:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id*)arg4 ;
-(id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id*)arg5 ;
-(BOOL)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 error:(id*)arg3 ;
-(void)executeTemplatedDatabaseOperation:(unsigned)arg1 withAttributes:(id)arg2 options:(id)arg3 fromXPCConnection:(id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(void)setConnectionsProfilingLevel:(int)arg1 ;
-(void)_setupWatchdogTimer;
-(void)_tearDownWatchdogTimer;
-(void)cancelAllActiveTransactions;
-(id)_newTransactionForDatabaseAtPath:(id)arg1 fromXPCConnection:(id)arg2 ;
-(void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(BOOL)arg2 ;
-(id)_transactionForIdentifier:(id)arg1 ;
-(id)_mediaLibraryForPath:(id)arg1 ;
-(id)_transactionWithExistingLocalWriterConnection:(id)arg1 ;
-(void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(BOOL)arg1 ;
-(void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(BOOL)arg2 ;
-(void)_watchdogTimerFired:(id)arg1 ;
-(BOOL)_shouldWatchdogTransaction:(id)arg1 ;
-(void)setTransactionTimeout:(double)arg1 ;
-(void)setOperationQueueEnabled:(BOOL)arg1 ;
-(BOOL)operationQueueEnabled;
-(void)cancelActiveTransactionForProcess:(int)arg1 ;
-(id)_transactionForProcessIdentifier:(int)arg1 ;
-(double)transactionTimeout;
-(void).cxx_destruct;
@end

