/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPStorageObserver.h>
#import <iWorkImport/TSWPTextStatisticsTracking.h>

@protocol TSWPStatisticsControlling;
@class , TSWPStorage, TSWPTextStatistics, NSMutableArray;

@interface TSWPTextStatisticsTracker : NSObject <TSWPStorageObserver, TSWPTextStatisticsTracking> {

	<TSWPStatisticsControlling>* _statisticsController;
	TSWPStorage* _storage;
	TSWPTextStatistics* _storageStatistics;
	NSMutableArray* _paragraphStatistics;
	NSRange _modifiedRange;
	int _modifiedDelta;

}

@property (nonatomic,readonly) TSWPTextStatistics * statistics;              //@synthesize storageStatistics=_storageStatistics - In the implementation block
-(id)initWithController:(id)arg1 andObject:(id)arg2 ;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(int)arg3 broadcastKind:(int)arg4 ;
-(void)incrementallyUpdateStatisticsUntil:(id)arg1 ;
-(void)p_processStorageChanges;
-(void)p_updateStatisticsInRangedStatistic:(id)arg1 ;
-(unsigned)p_indexOfRangedStatisticForLocation:(unsigned)arg1 ;
-(void)p_insertTrackers:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)p_removeTrackersInRange:(NSRange)arg1 ;
-(void)p_invalidateTrackersInRange:(NSRange)arg1 ;
-(void)p_applyTextRangeOffset:(int)arg1 startingAtParagraphIndex:(unsigned)arg2 ;
-(void)tearDown;
-(void)dealloc;
-(id)statistics;
@end

