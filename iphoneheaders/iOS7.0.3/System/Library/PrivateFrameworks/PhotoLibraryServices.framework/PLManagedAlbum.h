/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAlbum.h>
#import <PhotoLibraryServices/PLUserEditableAlbumProtocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString, PLManagedAsset, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol> {

	BOOL _resolvingConflicts;
	BOOL albumShouldBeAutomaticallyDeleted;

}

@property (nonatomic,@dynamic,retain) NSOrderedSet * assets; 
@property (assign,nonatomic) BOOL resolvingConflicts;                                   //@synthesize resolvingConflicts=_resolvingConflicts - In the implementation block
@property (assign,nonatomic) BOOL albumShouldBeAutomaticallyDeleted; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,readonly) NSURL * groupURL; 
@property (nonatomic,readonly) id sortingComparator; 
@property (nonatomic,readonly) id sectioningComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (nonatomic,readonly) NSMutableOrderedSet * userEditableAssets; 
+(void)clearAssetOrderByAbumUUIDs;
+(id)pathToAssetAlbumOrderStructure;
+(id)assetOrderByAbumUUIDs;
+(id)keyPathsForValuesAffectingApproximateCount;
+(id)keyPathsForValuesAffectingPhotosCount;
+(id)keyPathsForValuesAffectingVideosCount;
-(BOOL)isEmpty;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(id)mutableAssets;
-(BOOL)canPerformEditOperation:(int)arg1 ;
-(unsigned)approximateCount;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(void)addAssetUsingiTunesAlbumOrder:(id)arg1 ;
-(void)refreshAssets;
-(void)persistMetadataToFileSystem;
-(void)didSave;
-(BOOL)albumShouldBeAutomaticallyDeleted;
-(void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4 ;
-(BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1 ;
-(void)_updateKeyAssetsIfNeeded;
-(id)_expectedKeyAssets;
-(id)_keysToBeObserved;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(unsigned)_albumStandInCount;
-(void)_recalculateCachedCounts;
-(id)_assetOrderByAssetUUID;
-(id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2 ;
-(id)userEditableAssets;
-(unsigned)countOfInternalUserEditableAssets;
-(unsigned)indexInInternalUserEditableAssetsOfObject:(id)arg1 ;
-(id)objectInInternalUserEditableAssetsAtIndex:(unsigned)arg1 ;
-(void)getInternalUserEditableAssets:(id*)arg1 range:(NSRange)arg2 ;
-(id)internalUserEditableAssetsAtIndexes:(id)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeInternalUserEditableAssetsAtIndexes:(id)arg1 ;
-(unsigned)_cachedCountForMigration;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)awakeFromSnapshotEvents:(unsigned)arg1 ;
-(void)removePersistedFileSystemData;
-(void)sortAssetsUsingiTunesAlbumOrder;
-(BOOL)resolvingConflicts;
-(void)setResolvingConflicts:(BOOL)arg1 ;
@end

