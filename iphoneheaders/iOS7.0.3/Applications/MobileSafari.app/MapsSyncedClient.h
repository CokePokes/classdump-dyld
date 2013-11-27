/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MapsSyncedClient <NSObject>
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
@optional
-(BOOL)syncInvertedOrdering;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned)arg2;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;
-(void)removeSyncedItemsAtIndexes:(id)arg1;
-(void)updateSyncedItemAtIndexes:(id)arg1;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1;
-(BOOL)syncShouldUseItemPositions;
-(BOOL)syncShouldUseCustomStore;

@required
-(id)syncIdentifier;
-(id)newSyncedItemForSyncData:(id)arg1;
-(id)syncedItems;
-(BOOL)syncSupportsKVO;
@end

