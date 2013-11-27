/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary;

@interface PLDupeManager : NSObject {

	NSMutableArray* _normalAssetsObjectIDsToAnalyze;
	NSMutableDictionary* _cloudAssetsToAnalyze;
	NSMutableArray* _assetsWithUpdatedVisibility;
	BOOL _doneWithCloudAssets;
	BOOL _isRebuilding;
	NSMutableSet* _normalInserts;
	NSMutableSet* _cloudInserts;
	PLPhotoLibrary* _photoLibrary;
	long _once;
	int _pauseCount;
	double _rebuildStartTime;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
+(id)sharedInstance;
+(id)hashForAsset:(id)arg1 ;
+(BOOL)resetDupesAnalysisForOfflineStore:(id)arg1 resetHashes:(BOOL)arg2 ;
+(id)placeholderHash;
+(BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg1 resetHashes:(BOOL)arg2 ;
+(id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2 ;
+(void)_setPlaceHolderHashOnAsset:(id)arg1 ;
+(BOOL)_computeHashForAsset:(id)arg1 ;
-(void)dealloc;
-(void)pauseAnalysis;
-(void)resumeAnalysis;
-(id)photoLibrary;
-(void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)launchDupeAnalysisIfNeeded;
-(void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2 ;
-(void)_noteAssetVisibilityDidChange:(id)arg1 ;
-(id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2 ;
-(void)_removeCloudAssetFromAnalysis:(id)arg1 ;
-(BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1 ;
-(void)_analyzeDupeForNormalAsset:(id)arg1 ;
-(void)_analyzeDupesForRebuild;
-(void)_continueAnalysisForRebuild;
-(short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysisForRebuildOrPause;
-(short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1 ;
-(short)_computeAssetHashesForManagedObjectContext:(id)arg1 ;
-(short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1 ;
-(void)_performAnalysisTransaction:(/*^block*/ id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3 ;
-(void)_analyzeDupes;
-(short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysis;
-(short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1 ;
-(void)resetDupesAnalysisResetHashes:(BOOL)arg1 ;
@end

