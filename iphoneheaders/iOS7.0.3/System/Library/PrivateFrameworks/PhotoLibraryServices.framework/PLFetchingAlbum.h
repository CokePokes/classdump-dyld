/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/_PLFetchingAlbum.h>
#import <PhotoLibraryServices/PLAlbumProtocolDisplayCount.h>

@class NSArray, NSFetchRequest, NSOrderedSet;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLAlbumProtocolDisplayCount> {

	unsigned _countForDisplay;
	unsigned _photosCount;
	unsigned _videosCount;
	int _emptyState;
	NSArray* _cachedKeyAssets;

}

@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
@property (nonatomic,readonly) BOOL hasAssetsCache; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * fetchedAssets; 
@property (nonatomic,readonly) unsigned countForDisplay; 
+(id)_panoramasAlbumPredicate;
+(BOOL)contextShouldIgnoreChangesForFetchedAssets;
+(BOOL)contextShouldIgnoreChangesForFetchedAssetsSet;
+(BOOL)contextShouldIgnoreChangesForFetchRequest;
-(void)dealloc;
-(unsigned)count;
-(BOOL)isEmpty;
-(void)batchFetchAssets:(id)arg1 ;
-(id)mutableAssets;
-(BOOL)canPerformEditOperation:(int)arg1 ;
-(id)assets;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(void)awakeFromInsert;
-(id)primitiveAssets;
-(void)awakeFromFetch;
-(void)updateSnapshotAndClearCaches:(id)arg1 ;
-(void)didTurnIntoFault;
-(unsigned)batchSize;
-(void)setupFetchRequest;
-(id)fetchRequest;
-(unsigned)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(id)_cachedKeyAssets;
-(unsigned)countForDisplay;
-(void)setFetchRequest:(id)arg1 ;
-(void)setAssets:(id)arg1 ;
-(unsigned)countForAssetsOfKind:(short)arg1 ;
-(BOOL)hasAssetsCache;
-(id)fastPointerAccessSetForAssets:(id)arg1 ;
-(BOOL)mayHaveAssetsInCommon:(id)arg1 ;
@end

