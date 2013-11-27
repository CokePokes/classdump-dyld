/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreBookkeeper/SBKSyncRequestHandler.h>
#import <StoreBookkeeper/SBKTransactionControllerDelegate.h>
#import <StoreBookkeeper/SBKSyncTransactionProcessing.h>

@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource, SBKUniversalPlaybackPositionTransactionContext;
@class NSObject, , SBKTransactionController, NSMutableDictionary, NSDictionary, SBKSyncTransaction, NSError, NSString, SBKSyncBagContext;

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing> {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _syncOperationQueue;
	BOOL _syncInProgress;
	BOOL _canceled;
	<SBKUniversalPlaybackPositionDataSource>* _dataSource;
	SBKTransactionController* _kvsController;
	<SBKUniversalPlaybackPositionTransactionContext>* _dataSourceTransactionContext;
	NSMutableDictionary* _metadataItemsFromDataSource;
	NSDictionary* _metadataItemsToCommitToDataSource;
	NSDictionary* _metadataItemsToCommitToKVSStorage;
	NSMutableDictionary* _responseMetadataItemsToCommitToDataSource;
	NSMutableDictionary* _responseMetadataItemsMergedToCommitBackToKVSStorage;
	SBKSyncTransaction* _currentKVSTransaction;
	NSError* _fatalSyncError;
	NSString* _overrideSyncAnchor;

}

@property (retain) <SBKUniversalPlaybackPositionDataSource> * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) SBKSyncBagContext * bagContext; 
@property (retain) SBKTransactionController * kvsController;                                                     //@synthesize kvsController=_kvsController - In the implementation block
@property (retain) <SBKUniversalPlaybackPositionTransactionContext> * dataSourceTransactionContext;              //@synthesize dataSourceTransactionContext=_dataSourceTransactionContext - In the implementation block
@property (retain) NSMutableDictionary * metadataItemsFromDataSource;                                            //@synthesize metadataItemsFromDataSource=_metadataItemsFromDataSource - In the implementation block
@property (retain) NSDictionary * metadataItemsToCommitToDataSource;                                             //@synthesize metadataItemsToCommitToDataSource=_metadataItemsToCommitToDataSource - In the implementation block
@property (retain) NSDictionary * metadataItemsToCommitToKVSStorage;                                             //@synthesize metadataItemsToCommitToKVSStorage=_metadataItemsToCommitToKVSStorage - In the implementation block
@property (retain) NSMutableDictionary * responseMetadataItemsToCommitToDataSource;                              //@synthesize responseMetadataItemsToCommitToDataSource=_responseMetadataItemsToCommitToDataSource - In the implementation block
@property (retain) NSMutableDictionary * responseMetadataItemsMergedToCommitBackToKVSStorage;                    //@synthesize responseMetadataItemsMergedToCommitBackToKVSStorage=_responseMetadataItemsMergedToCommitBackToKVSStorage - In the implementation block
@property (retain) SBKSyncTransaction * currentKVSTransaction;                                                   //@synthesize currentKVSTransaction=_currentKVSTransaction - In the implementation block
@property (assign) BOOL syncInProgress;                                                                          //@synthesize syncInProgress=_syncInProgress - In the implementation block
@property (assign) BOOL canceled;                                                                                //@synthesize canceled=_canceled - In the implementation block
@property (retain) NSError * fatalSyncError;                                                                     //@synthesize fatalSyncError=_fatalSyncError - In the implementation block
@property (retain) NSString * overrideSyncAnchor;                                                                //@synthesize overrideSyncAnchor=_overrideSyncAnchor - In the implementation block
-(void)synchronizeWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)timeout;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(void)cancel;
-(BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3 ;
-(void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3 ;
-(void)transactionController:(id)arg1 transactionDidFinish:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 bagContext:(id)arg2 ;
-(void)setMetadataItemsFromDataSource:(id)arg1 ;
-(void)setMetadataItemsToCommitToDataSource:(id)arg1 ;
-(void)setMetadataItemsToCommitToKVSStorage:(id)arg1 ;
-(void)setResponseMetadataItemsToCommitToDataSource:(id)arg1 ;
-(void)setResponseMetadataItemsMergedToCommitBackToKVSStorage:(id)arg1 ;
-(void)setKvsController:(id)arg1 ;
-(void)setDataSourceTransactionContext:(id)arg1 ;
-(void)setCurrentKVSTransaction:(id)arg1 ;
-(id)metadataItemsFromDataSource;
-(id)responseMetadataItemsToCommitToDataSource;
-(id)responseMetadataItemsMergedToCommitBackToKVSStorage;
-(void)clearTransactionResponseData;
-(id)dataSourceTransactionContext;
-(BOOL)syncInProgress;
-(void)setSyncInProgress:(BOOL)arg1 ;
-(BOOL)_shouldStop;
-(void)_dataSourceCancelTransaction;
-(id)metadataItemsToCommitToKVSStorage;
-(id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(BOOL)arg2 ;
-(id)currentKVSTransaction;
-(id)_synchronouslyRunKVSTransaction:(id)arg1 ;
-(void)_mergeMetadataItemsFromSyncResponse;
-(id)metadataItemsToCommitToDataSource;
-(BOOL)canceled;
-(id)fatalSyncError;
-(void)setCanceled:(BOOL)arg1 ;
-(id)kvsController;
-(void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)_synchronize:(id*)arg1 ;
-(void)setFatalSyncError:(id)arg1 ;
-(void)_signalKVSTransactionCompletion:(id)arg1 ;
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5 ;
-(int)_mergeConflictedItemFromSyncResponse:(id)arg1 ;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3 ;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2 ;
-(id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2 ;
-(id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2 ;
-(id)overrideSyncAnchor;
-(void)setOverrideSyncAnchor:(id)arg1 ;
-(void).cxx_destruct;
@end

