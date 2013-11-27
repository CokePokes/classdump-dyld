/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface JaliscoStartLoadArtworkOperation : CloudLibraryOperation {

	NSArray* _purchaseHistoryIDs;
	BOOL _insertIntoLibrary;
	/*^block*/ id _artworkLoadedCompletionHandler;

}

@property (assign,nonatomic) BOOL insertIntoLibrary;                       //@synthesize insertIntoLibrary=_insertIntoLibrary - In the implementation block
@property (nonatomic,copy) id artworkLoadedCompletionHandler;              //@synthesize artworkLoadedCompletionHandler=_artworkLoadedCompletionHandler - In the implementation block
-(id)initWithPurchaseHistoryIDs:(id)arg1 ;
-(void)_onGlobalQueueSetIsDownloading:(BOOL)arg1 cacheID:(id)arg2 ;
-(void)_performOnGlobalSchedulingQueue:(/*^block*/ id)arg1 ;
-(void)_determineItemArtworkDownloadItemsByHistoryID:(id)arg1 screenshotDownloadItemsByHistoryID:(id)arg2 ;
-(BOOL)_onGlobalQueueAlreadyDownloadingCacheID:(id)arg1 ;
-(void)_onGlobalQueueDetermineItemArtworkDownloadItemsByHistoryID:(id)arg1 screenshotDownloadItemsByHistoryID:(id)arg2 ;
-(BOOL)insertIntoLibrary;
-(void)setInsertIntoLibrary:(BOOL)arg1 ;
-(/*^block*/ id)artworkLoadedCompletionHandler;
-(void)setArtworkLoadedCompletionHandler:(/*^block*/ id)arg1 ;
-(void)main;
-(void).cxx_destruct;
@end

