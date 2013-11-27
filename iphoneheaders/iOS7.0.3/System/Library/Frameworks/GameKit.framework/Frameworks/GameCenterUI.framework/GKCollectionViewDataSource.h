/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewDataSourceDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol GKCollectionViewDataSourceDelegate;
@class , NSString, GKGridLayoutMetrics, GKSectionMetrics, NSMutableDictionary, NSHashTable;

@interface GKCollectionViewDataSource : NSObject <GKCollectionViewDataSourceDelegate, UICollectionViewDataSource> {

	<GKCollectionViewDataSourceDelegate>* _delegate;
	NSString* _defaultSearchKey;
	GKGridLayoutMetrics* _dataSourceMetricsInternal;
	GKSectionMetrics* _defaultSectionMetricsInternal;
	NSMutableDictionary* _kindsToFactories;
	NSHashTable* _listeners;
	NSMutableDictionary* _sectionsToMetrics;
	NSMutableDictionary* _sectionsToSearchKeys;

}

@property (nonatomic,retain) NSString * defaultSearchKey;                                   //@synthesize defaultSearchKey=_defaultSearchKey - In the implementation block
@property (nonatomic,@dynamic,copy) GKSectionMetrics * defaultSectionMetrics; 
@property (nonatomic,@dynamic,copy) GKGridLayoutMetrics * dataSourceMetrics; 
@property (assign,nonatomic) <GKCollectionViewDataSourceDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGridLayoutMetrics * dataSourceMetricsInternal;               //@synthesize dataSourceMetricsInternal=_dataSourceMetricsInternal - In the implementation block
@property (nonatomic,retain) GKSectionMetrics * defaultSectionMetricsInternal;              //@synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal - In the implementation block
@property (nonatomic,readonly) BOOL isRootDataSource; 
@property (nonatomic,retain) NSMutableDictionary * kindsToFactories;                        //@synthesize kindsToFactories=_kindsToFactories - In the implementation block
@property (nonatomic,retain) NSHashTable * listeners;                                       //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionsToMetrics;                       //@synthesize sectionsToMetrics=_sectionsToMetrics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionsToSearchKeys;                    //@synthesize sectionsToSearchKeys=_sectionsToSearchKeys - In the implementation block
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)dataSourceMetrics;
-(void)setMetrics:(id)arg1 forSection:(int)arg2 ;
-(void)registerSupplementaryViewKind:(id)arg1 withFactory:(/*^block*/ id)arg2 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(void)notifySectionsInserted:(id)arg1 ;
-(void)notifySectionsRemoved:(id)arg1 ;
-(void)notifySectionsRefreshed:(id)arg1 ;
-(void)notifyItemsRemovedAtIndexPaths:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/ id)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)resetViewFactories;
-(BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(int)arg3 ;
-(void)enumerateItemsAndIndexPathsUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)isRootDataSource;
-(id)searchKeyForSection:(int)arg1 ;
-(void)setSectionsToSearchKeys:(id)arg1 ;
-(void)setDataSourceMetricsInternal:(id)arg1 ;
-(void)setDefaultSectionMetricsInternal:(id)arg1 ;
-(id)defaultSectionMetrics;
-(id)defaultSectionMetricsInternal;
-(id)metricsForSectionInternal:(int)arg1 ;
-(id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4 ;
-(id)collectionView:(id)arg1 defaultViewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(/*^block*/ id)supplementaryViewFactoryForKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)localDescription;
-(id)dataSourceForSection:(unsigned)arg1 ;
-(unsigned)sectionForDataSource:(id)arg1 ;
-(BOOL)containsDataSource:(id)arg1 ;
-(void)setSearchKey:(id)arg1 forSection:(int)arg2 ;
-(void)setDataSourceMetrics:(id)arg1 ;
-(void)setDefaultSectionMetrics:(id)arg1 ;
-(id)metricsForSection:(int)arg1 ;
-(id)createMetricsTreeWithGridLayout:(id)arg1 ;
-(int)totalItemCount;
-(void)notifyItemsInsertedAtIndexPaths:(id)arg1 ;
-(void)notifyItemsRefreshedAtIndexPaths:(id)arg1 ;
-(void)notifyItemMovedFromIndexPath:(id)arg1 toIndexPaths:(id)arg2 ;
-(void)notifySectionMovedFrom:(int)arg1 to:(int)arg2 ;
-(void)notifySectionsMovedWithItems;
-(void)notifyDidReloadData;
-(void)notifyPlaceholderUpdated:(BOOL)arg1 ;
-(void)notifyBatchUpdate:(/*^block*/ id)arg1 ;
-(void)notifyBatchUpdate:(/*^block*/ id)arg1 complete:(/*^block*/ id)arg2 ;
-(id)defaultSearchKey;
-(void)setDefaultSearchKey:(id)arg1 ;
-(id)dataSourceMetricsInternal;
-(id)kindsToFactories;
-(void)setKindsToFactories:(id)arg1 ;
-(id)listeners;
-(void)setListeners:(id)arg1 ;
-(id)sectionsToMetrics;
-(void)setSectionsToMetrics:(id)arg1 ;
-(id)sectionsToSearchKeys;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
@end

