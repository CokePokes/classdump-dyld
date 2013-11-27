/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLAssetContainer;
@class , NSMutableSet, NSMutableIndexSet, NSIndexSet, NSArray;

@interface PUPhotoSelectionEntry : NSObject {

	BOOL _hasValidAssetIndexes;
	<PLAssetContainer>* _container;
	NSMutableSet* _selectedAssets;
	NSMutableIndexSet* _selectedIndexes;

}

@property (nonatomic,readonly) <PLAssetContainer> * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSIndexSet * selectedIndexes; 
@property (nonatomic,readonly) NSArray * selectedAssets; 
-(id)container;
-(id)selectedAssets;
-(void)invalidateAllAssetIndexes;
-(id)initWithContainer:(id)arg1 uniqueSelectedAssets:(id)arg2 ;
-(void)selectAssetsAtIndexes:(id)arg1 ;
-(void)deselectAssetsAtIndexes:(id)arg1 ;
-(BOOL)isIndexSelected:(unsigned)arg1 ;
-(id)selectedIndexes;
-(void)enumerateSelectedAssetsWithBlock:(/*^block*/ id)arg1 ;
-(void)handleCollectionChangeNotification:(id)arg1 ;
-(void)_ensureValidAssetIndexes;
-(void)setSelectedAssetsSet:(id)arg1 ;
-(void).cxx_destruct;
@end

