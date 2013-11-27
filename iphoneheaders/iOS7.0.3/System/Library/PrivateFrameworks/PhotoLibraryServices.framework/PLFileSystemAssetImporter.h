/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PLPhotoLibrary, NSString, NSMutableIndexSet, NSMutableSet, NSMutableDictionary;

@interface PLFileSystemAssetImporter : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSString* _photoLibraryStoreUUID;
	NSMutableIndexSet* _thumbIndexes;
	BOOL _hasProcessedAnyAssets;
	NSMutableSet* _existingUUIDs;
	NSMutableDictionary* _existingUUIDsByPath;
	NSMutableDictionary* _existingOIDsByUUID;
	unsigned _thumbnailBatchFetchSize;

}

@property (nonatomic,retain) NSMutableSet * existingUUIDs;                           //@synthesize existingUUIDs=_existingUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingUUIDsByPath;              //@synthesize existingUUIDsByPath=_existingUUIDsByPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingOIDsByUUID;               //@synthesize existingOIDsByUUID=_existingOIDsByUUID - In the implementation block
@property (assign,nonatomic) unsigned thumbnailBatchFetchSize;                       //@synthesize thumbnailBatchFetchSize=_thumbnailBatchFetchSize - In the implementation block
-(void)dealloc;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setExistingUUIDs:(id)arg1 ;
-(void)setExistingUUIDsByPath:(id)arg1 ;
-(void)setExistingOIDsByUUID:(id)arg1 ;
-(id)addAssetWithURLs:(id)arg1 forceInsert:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(void)setThumbnailBatchFetchSize:(unsigned)arg1 ;
-(id)assetURLisInDatabase:(id)arg1 ;
-(id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2 ;
-(BOOL)setupPhotoAsset:(id)arg1 withURL:(id)arg2 ;
-(BOOL)setupVideoAsset:(id)arg1 withURL:(id)arg2 ;
-(void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2 ;
-(unsigned)nextThumbnailIndex;
-(unsigned)thumbnailBatchFetchSize;
-(id)addAssetWithURLs:(id)arg1 ;
-(void)addAvailableThumbnailIndex:(unsigned)arg1 ;
-(id)existingUUIDs;
-(id)existingUUIDsByPath;
-(id)existingOIDsByUUID;
@end

