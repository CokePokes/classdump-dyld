/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol OS_dispatch_queue;
@class ML3QueryResultSet_BackingStore, ML3Query, NSMutableArray, NSObject;

@interface ML3QueryResultSet : NSObject <NSCopying> {

	ML3QueryResultSet_BackingStore* _backingStore;
	ML3Query* _query;
	long long _revision;
	BOOL _supportsIncrementalUpdate;
	NSMutableArray* _updateToLibraryCurrentRevisionCompletionBlocks;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _fixedPriorityQueue;

}

@property (nonatomic,readonly) ML3Query * query;                //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) long long revision;              //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) unsigned count; 
-(void)enumerateSectionHeadersUsingBlock:(/*^block*/ id)arg1 ;
-(id)sectionIndexTitles;
-(unsigned)count;
-(id)query;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/ id)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/ id)arg1 ;
-(long long)persistentIDAtIndex:(unsigned)arg1 ;
-(id)_initWithQuery:(id)arg1 supportsIncrementalUpdate:(BOOL)arg2 ;
-(id)initWithQuery:(id)arg1 ;
-(unsigned)entityLimit;
-(void)_onQueueAddUpdateFinishedBlock:(/*^block*/ id)arg1 ;
-(BOOL)_updateToLibraryCurrentRevision;
-(void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)arg1 ;
-(void)_loadCurrentFullResults;
-(void)_mergeChangesWithFromNewPIDs:(const vector<long long, std::__1::allocator<long long> >*)arg1 changedPIDs:(unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg2 ;
-(BOOL)updateToLibraryCurrentRevision;
-(long long)revision;
-(void).cxx_destruct;
@end

