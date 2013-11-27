/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUGridRenderedStripDataSource.h>
#import <PhotosUI/PUPhotosSectionHeaderViewDelegate.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate.h>

@class NSOrderedSet, PUGridRenderedStrip, PUPreheatManager, PUSectionedGridLayout, PUMomentsZoomLevelManager, PUZoomableGridViewController, NSString;

@interface PUGridZoomLevelInfo : NSObject <PUGridRenderedStripDataSource, PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate> {

	int _currentRenderedStripSection;
	NSOrderedSet* _currentRenderedStripSectionAssets;
	PUGridRenderedStrip* _currentRenderedStrip;
	NSOrderedSet* _currentRenderedStripContainers;
	BOOL _summarizeSections;
	PUPreheatManager* _preheatManager;
	PUSectionedGridLayout* _collectionViewLayout;
	unsigned _zoomLevel;
	PUMomentsZoomLevelManager* _zoomLevelManager;
	PUGridZoomLevelInfo* _baseZoomLevelInfo;
	PUZoomableGridViewController* _zoomableGridViewController;
	NSString* _displayTitle;
	int _maxRowsPerSection;

}

@property (assign,nonatomic) PUZoomableGridViewController * zoomableGridViewController; 
@property (nonatomic,readonly) NSString * renderedStripsElementKind; 
@property (nonatomic,readonly) NSString * sectionHeaderElementKind; 
@property (nonatomic,readonly) int imageFormat; 
@property (nonatomic,readonly) CFStringRef aggregateLevelKey; 
@property (nonatomic,readonly) unsigned zoomLevel;                                                     //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) PUMomentsZoomLevelManager * zoomLevelManager;                           //@synthesize zoomLevelManager=_zoomLevelManager - In the implementation block
@property (nonatomic,readonly) PUGridZoomLevelInfo * baseZoomLevelInfo;                                //@synthesize baseZoomLevelInfo=_baseZoomLevelInfo - In the implementation block
@property (nonatomic,readonly) PUZoomableGridViewController * zoomableGridViewController;              //@synthesize zoomableGridViewController=_zoomableGridViewController - In the implementation block
@property (nonatomic,readonly) PUSectionedGridLayout * collectionViewLayout;                           //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) PUPreheatManager * preheatManager;                                      //@synthesize preheatManager=_preheatManager - In the implementation block
@property (nonatomic,readonly) NSString * displayTitle;                                                //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasEnoughContentToDisplay; 
@property (nonatomic,readonly) int maxRowsPerSection;                                                  //@synthesize maxRowsPerSection=_maxRowsPerSection - In the implementation block
@property (assign,nonatomic) BOOL summarizeSections;                                                   //@synthesize summarizeSections=_summarizeSections - In the implementation block
@property (nonatomic,readonly) double zoomInDuration; 
@property (nonatomic,readonly) double zoomOutDuration; 
-(id)displayTitle;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)collectionViewLayout;
-(int)imageFormat;
-(void)setZoomableGridViewController:(id)arg1 ;
-(void)registerReusableViewClassesForCollectionView:(id)arg1 ;
-(CFStringRef)aggregateLevelKey;
-(id)sectionHeaderElementKind;
-(BOOL)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)supportsIncrementalChangeNotifications;
-(void)modelDidChange;
-(void)updateLayoutMetricsForWidth:(float)arg1 ;
-(BOOL)supportsEditMode;
-(BOOL)configureGridCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)preheatManager;
-(BOOL)wantsMagnifierNavigation;
-(void)willShowMagnifiedViewController:(id)arg1 ;
-(void)willHideMagnifiedViewController:(id)arg1 ;
-(BOOL)hasEnoughContentToDisplay;
-(id)zoomLevelManager;
-(unsigned)zoomLevel;
-(void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)didFinishZoomLevelTransition;
-(void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2 ;
-(id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1 ;
-(BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1 ;
-(id)renderedStripsElementKind;
-(id)zoomableGridViewController;
-(void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2 ;
-(void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2 ;
-(int)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(int)arg2 ;
-(void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(id)sectionedGridLayoutName:(id)arg1 ;
-(void)headerView:(id)arg1 actionButtonPressed:(id)arg2 ;
-(void)didTapHeaderView:(id)arg1 ;
-(double)zoomInDuration;
-(id)newCollectionViewLayout;
-(id)diagnosticsProviderForVisualSection:(int)arg1 ;
-(id)assetsToDisplayInMapForVisualSection:(int)arg1 ;
-(int)maxRowsPerSection;
-(void)renderedStripWillBeginRendering:(id)arg1 ;
-(void)renderedStrip:(id)arg1 didEndRenderingPhotosInSection:(int)arg2 ;
-(void)renderedStrip:(id)arg1 willBeginRenderingPhotosInSection:(int)arg2 ;
-(id)renderedStrip:(id)arg1 imageDataForPhotoAtIndexPath:(PUSimpleIndexPath)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(void)renderedStrip:(id)arg1 enumerateItemIndexPathsForVisualSection:(int)arg2 inVisualItemRange:(NSRange)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(void)renderedStripDidEndRendering:(id)arg1 ;
-(BOOL)summarizeSections;
-(id)initWithZoomLevel:(unsigned)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3 ;
-(double)zoomOutDuration;
-(void)setSummarizeSections:(BOOL)arg1 ;
-(id)baseZoomLevelInfo;
-(void).cxx_destruct;
@end

