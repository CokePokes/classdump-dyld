/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/MapsSyncedClient.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, MapsSyncManager, NSObject, NSMutableArray;

@interface History : NSObject <MapsSyncedClient> {

	MapsSyncManager* _syncManager;
	NSObject<OS_dispatch_queue>* _saveQ;
	NSMutableArray* _history;
	NSMutableArray* _syncedHistory;
	NSMutableArray* _failedSearches;
	BOOL _shouldSendHistoryDidChangeNotifications;

}

@property (nonatomic,readonly) NSArray * orderedHistory; 
@property (nonatomic,readonly) unsigned orderedHistoryCount; 
@property (nonatomic,readonly) NSArray * allHistory; 
@property (assign,nonatomic) BOOL shouldSendHistoryDidChangeNotifications;              //@synthesize shouldSendHistoryDidChangeNotifications=_shouldSendHistoryDidChangeNotifications - In the implementation block
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
+(id)sharedHistoryCreatingIfMissing:(BOOL)arg1 ;
+(id)sharedHistory;
+(void)beginPrecachingHistoryIfNeeded;
+(id)beginHoldingUIInterferingTasks;
-(id)syncIdentifier;
-(void)holdingStateDidChange;
-(BOOL)_holdingUIInterferingTasksIsUseful;
-(void)setShouldSendHistoryDidChangeNotifications:(BOOL)arg1 ;
-(void)_startSyncIfNotYetStarted;
-(void)_updateHistory;
-(void)_saveHistory;
-(BOOL)shouldSendHistoryDidChangeNotifications;
-(void)_madeChanges;
-(void)_startSyncIfPossible;
-(BOOL)_isValidHistoryItem:(id)arg1 ;
-(void)_dedupeAndSortHistory;
-(BOOL)syncInvertedOrdering;
-(void)_saveFailedSearches;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeSyncedItemsAtIndexes:(id)arg1 ;
-(void)updateSyncedItemAtIndexes:(id)arg1 ;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1 ;
-(id)syncedItems;
-(BOOL)syncSupportsKVO;
-(BOOL)syncShouldUseItemPositions;
-(BOOL)syncShouldUseCustomStore;
-(void)_removeInvalidItems;
-(void)addHistoryItem:(id)arg1 ;
-(void)updateHistoryItem:(id)arg1 withTransportType:(int)arg2 ;
-(void)updateAddressForSearchResult:(id)arg1 ;
-(unsigned)orderedHistoryCount;
-(id)allHistory;
-(id)orderedHistory;
-(void)removeAllItems;
-(void)dealloc;
-(id)init;
@end

