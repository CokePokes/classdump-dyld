/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewController.h>
#import <PhotosUI/PUMagnfiedViewControllerDelegate.h>

@class NSArray, PUZoomableGridViewControllerSpec, PUMomentsZoomLevelManager, PUGridZoomLevelInfo, PUZoomableGridTransition, NSIndexPath, UITapGestureRecognizer, PUGridPinchGestureRecognizer, PUGridMagnifiedImageViewController;

@interface PUZoomableGridViewController : PUPhotosGridViewController <PUMagnfiedViewControllerDelegate> {

	NSArray* __syncProgressAlbums;
	PUZoomableGridViewControllerSpec* _zoomableGridSpec;
	PUMomentsZoomLevelManager* _zoomLevelManager;
	unsigned _zoomLevel;
	PUGridZoomLevelInfo* __zoomLevelInfo;
	PUZoomableGridTransition* _currentGridZoomTransitionInfo;
	NSIndexPath* __transitionExplicitAnchorIndexPath;
	NSIndexPath* __lastZoomInTransitionAnchorIndexPath;
	UITapGestureRecognizer* __tapGestureRecognizer;
	PUGridPinchGestureRecognizer* __gridPinchGestureRecognizer;
	PUGridMagnifiedImageViewController* _magnifiedImageViewController;

}

@property (nonatomic,readonly) PUZoomableGridTransition * currentGridZoomTransitionInfo; 
@property (nonatomic,retain) PUZoomableGridViewControllerSpec * zoomableGridSpec;                                                                     //@synthesize zoomableGridSpec=_zoomableGridSpec - In the implementation block
@property (nonatomic,readonly) PUMomentsZoomLevelManager * zoomLevelManager;                                                                          //@synthesize zoomLevelManager=_zoomLevelManager - In the implementation block
@property (nonatomic,readonly) unsigned zoomLevel;                                                                                                    //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) PUGridZoomLevelInfo * _zoomLevelInfo;                                                                                  //@synthesize _zoomLevelInfo=__zoomLevelInfo - In the implementation block
@property (setter=_setCurrentGridZoomTransitionInfo:,nonatomic,retain) PUZoomableGridTransition * currentGridZoomTransitionInfo;                      //@synthesize currentGridZoomTransitionInfo=_currentGridZoomTransitionInfo - In the implementation block
@property (setter=_setTransitionExplicitAnchorIndexPath:,nonatomic,retain) NSIndexPath * _transitionExplicitAnchorIndexPath;                          //@synthesize _transitionExplicitAnchorIndexPath=__transitionExplicitAnchorIndexPath - In the implementation block
@property (setter=_setLastZoomInTransitionAnchorIndexPath:,nonatomic,retain) NSIndexPath * _lastZoomInTransitionAnchorIndexPath;                      //@synthesize _lastZoomInTransitionAnchorIndexPath=__lastZoomInTransitionAnchorIndexPath - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                                         //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (setter=_setGridPinchGestureRecognizer:,nonatomic,retain) PUGridPinchGestureRecognizer * _gridPinchGestureRecognizer;                       //@synthesize _gridPinchGestureRecognizer=__gridPinchGestureRecognizer - In the implementation block
@property (setter=_setMagnifiedImageViewController:,nonatomic,retain) PUGridMagnifiedImageViewController * magnifiedImageViewController;              //@synthesize magnifiedImageViewController=_magnifiedImageViewController - In the implementation block
@property (nonatomic,readonly) NSArray * _syncProgressAlbums;                                                                                         //@synthesize _syncProgressAlbums=__syncProgressAlbums - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(void)installGestureRecognizers;
-(void)uninstallGestureRecognizers;
-(void)_handleTapGesture:(id)arg1 ;
-(id)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(id)arg1 ;
-(BOOL)_collectionView:(id)arg1 shouldApplyTransitionContentOffset:(CGPoint)arg2 contentSize:(CGSize)arg3 ;
-(id)_zoomLevelInfo;
-(void)_reclaimCollectionView;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)_invalidateSyncProgressAlbums;
-(void)setPhotoCollections:(id)arg1 ;
-(BOOL)shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2 ;
-(void)processPendingModelChangeNotifications;
-(void)_setLastZoomInTransitionAnchorIndexPath:(id)arg1 ;
-(void)updateInterfaceForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2 ;
-(id)_tapGestureRecognizer;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(id)_gridPinchGestureRecognizer;
-(void)_handleGridPinchGestureRecognizer:(id)arg1 ;
-(void)_setGridPinchGestureRecognizer:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 itemsAtIndexes:(id)arg2 inSection:(int)arg3 animated:(BOOL)arg4 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(BOOL)_disallowNavigationToHigherZoomLevel;
-(BOOL)canDisplayEditButton;
-(BOOL)canBeginZoomIntoPhotoTransition;
-(id)currentGridZoomTransitionInfo;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(CGPoint)contentOffsetForPreheating;
-(CGSize)contentSizeForPreheating;
-(id)_syncProgressAlbums;
-(id)preheatManager;
-(id)bestTransitionReferenceItemIndexPathOutIsFromLastTransition:(BOOL*)arg1 outIsExplicit:(BOOL*)arg2 ;
-(BOOL)isTransitionAutoAdjustContentOffsetEnabled;
-(BOOL)collectionViewPointInSectionHeader:(CGPoint)arg1 ;
-(id)_beginInteractiveTransitionWithReferenceItemPath:(id)arg1 zoomingOut:(BOOL)arg2 ;
-(void)_navigateToLowerZoomLevelWithReferenceItemPath:(id)arg1 ;
-(void)handleLongPressGesture:(id)arg1 ;
-(id)_itemPathForLocationInGesture:(id)arg1 ;
-(id)magnifiedImageViewControllerCreatingIfNecessary:(BOOL)arg1 ;
-(CGRect)_frameForItemAtIndexPath:(id)arg1 ;
-(void)tearDownMagnifiedImageViewController;
-(id)magnifiedImageViewController;
-(void)_setMagnifiedImageViewController:(id)arg1 ;
-(void)prepareForTransitionToZoomableViewController:(id)arg1 anchorItemIndexPath:(id)arg2 anchorShiftsColumns:(BOOL)arg3 animated:(BOOL)arg4 interactive:(BOOL)arg5 ;
-(void)_setTransitionExplicitAnchorIndexPath:(id)arg1 ;
-(BOOL)zoomTransition:(id)arg1 getFrame:(CGRect*)arg2 contentMode:(int*)arg3 forPhotoToken:(id)arg4 operation:(int)arg5 ;
-(id)initWithSpec:(id)arg1 zoomLevelManager:(id)arg2 zoomLevel:(unsigned)arg3 ;
-(BOOL)pu_shouldActAsTabRootViewController;
-(void)updateVisibleSectionHeadersAtIndexes:(id)arg1 ;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(BOOL)canBeginStackCollapseTransition;
-(BOOL)wantsGlobalFooter;
-(void)configureGlobalFooterView:(id)arg1 ;
-(BOOL)allowSlideshowButton;
-(void)zoomTransition:(id)arg1 willBeginAnimationForOperation:(int)arg2 ;
-(void)zoomTransition:(id)arg1 didFinishAnimationForOperation:(int)arg2 ;
-(id)imageWithFormat:(int)arg1 forIndexPath:(id)arg2 ;
-(id)zoomableGridSpec;
-(void)setZoomableGridSpec:(id)arg1 ;
-(id)zoomLevelManager;
-(unsigned)zoomLevel;
-(void)_setCurrentGridZoomTransitionInfo:(id)arg1 ;
-(id)_transitionExplicitAnchorIndexPath;
-(id)_lastZoomInTransitionAnchorIndexPath;
-(void)gridZoomTransitionDidFinish:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

