/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PUPhotosGridViewControllerSpec;

@interface PUZoomableGridViewControllerSpec : NSObject {

	BOOL _canDisplayMultipleRightBarButtonItems;
	PUPhotosGridViewControllerSpec* _gridSpec;
	int _magnifiedImageFormat;
	float _magnifiedYOffset;
	int _fullMomentsLevelThumbnailFormat;
	int _fullMomentsSectionHeaderStyle;
	int _collectionsSectionHeaderStyle;
	int _yearsSectionHeaderStyle;
	CGSize _magnifiedImageSize;
	UIEdgeInsets _magnifiedDragEdgeInsets;
	UIEdgeInsets _fullMomentsLevelSectionHeaderContentInset;
	UIEdgeInsets _fullMomentsLevelSectionHeaderHighlightInset;
	UIEdgeInsets _collectionsLevelSectionHeaderContentInset;
	UIEdgeInsets _collectionsLevelSectionHeaderHighlightInset;
	UIEdgeInsets _yearsLevelSectionHeaderContentInset;
	UIEdgeInsets _yearsLevelSectionHeaderHighlightInset;

}

@property (nonatomic,retain) PUPhotosGridViewControllerSpec * gridSpec;                               //@synthesize gridSpec=_gridSpec - In the implementation block
@property (nonatomic,readonly) BOOL canDisplayMultipleRightBarButtonItems;                            //@synthesize canDisplayMultipleRightBarButtonItems=_canDisplayMultipleRightBarButtonItems - In the implementation block
@property (nonatomic,readonly) int magnifiedImageFormat;                                              //@synthesize magnifiedImageFormat=_magnifiedImageFormat - In the implementation block
@property (nonatomic,readonly) CGSize magnifiedImageSize;                                             //@synthesize magnifiedImageSize=_magnifiedImageSize - In the implementation block
@property (assign,nonatomic) float magnifiedYOffset;                                                  //@synthesize magnifiedYOffset=_magnifiedYOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets magnifiedDragEdgeInsets;                                    //@synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets - In the implementation block
@property (nonatomic,readonly) int fullMomentsLevelThumbnailFormat;                                   //@synthesize fullMomentsLevelThumbnailFormat=_fullMomentsLevelThumbnailFormat - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets fullMomentsLevelSectionHeaderContentInset;                //@synthesize fullMomentsLevelSectionHeaderContentInset=_fullMomentsLevelSectionHeaderContentInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets fullMomentsLevelSectionHeaderHighlightInset;              //@synthesize fullMomentsLevelSectionHeaderHighlightInset=_fullMomentsLevelSectionHeaderHighlightInset - In the implementation block
@property (nonatomic,readonly) int fullMomentsSectionHeaderStyle;                                     //@synthesize fullMomentsSectionHeaderStyle=_fullMomentsSectionHeaderStyle - In the implementation block
@property (nonatomic,readonly) unsigned fullMomentsSectionHeaderBackgroundStyle; 
@property (nonatomic,readonly) int collectionsLevelThumbnailFormat; 
@property (nonatomic,readonly) UIEdgeInsets collectionsLevelSectionHeaderContentInset;                //@synthesize collectionsLevelSectionHeaderContentInset=_collectionsLevelSectionHeaderContentInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets collectionsLevelSectionHeaderHighlightInset;              //@synthesize collectionsLevelSectionHeaderHighlightInset=_collectionsLevelSectionHeaderHighlightInset - In the implementation block
@property (nonatomic,readonly) int collectionsSectionHeaderStyle;                                     //@synthesize collectionsSectionHeaderStyle=_collectionsSectionHeaderStyle - In the implementation block
@property (nonatomic,readonly) unsigned collectionsSectionHeaderBackgroundStyle; 
@property (nonatomic,readonly) int yearsLevelThumbnailFormat; 
@property (nonatomic,readonly) UIEdgeInsets yearsLevelSectionHeaderContentInset;                      //@synthesize yearsLevelSectionHeaderContentInset=_yearsLevelSectionHeaderContentInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets yearsLevelSectionHeaderHighlightInset;                    //@synthesize yearsLevelSectionHeaderHighlightInset=_yearsLevelSectionHeaderHighlightInset - In the implementation block
@property (nonatomic,readonly) int yearsSectionHeaderStyle;                                           //@synthesize yearsSectionHeaderStyle=_yearsSectionHeaderStyle - In the implementation block
@property (nonatomic,readonly) unsigned yearsSectionHeaderBackgroundStyle; 
-(id)gridSpec;
-(CGSize)magnifiedImageSize;
-(UIEdgeInsets)magnifiedDragEdgeInsets;
-(void)setMagnifiedDragEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(float)arg2 ;
-(int)fullMomentsSectionHeaderStyle;
-(unsigned)fullMomentsSectionHeaderBackgroundStyle;
-(UIEdgeInsets)fullMomentsLevelSectionHeaderContentInset;
-(UIEdgeInsets)fullMomentsLevelSectionHeaderHighlightInset;
-(int)fullMomentsLevelThumbnailFormat;
-(int)yearsLevelThumbnailFormat;
-(void)configureYearsLevelGridLayout:(id)arg1 forWidth:(float)arg2 ;
-(int)yearsSectionHeaderStyle;
-(unsigned)yearsSectionHeaderBackgroundStyle;
-(UIEdgeInsets)yearsLevelSectionHeaderContentInset;
-(UIEdgeInsets)yearsLevelSectionHeaderHighlightInset;
-(int)collectionsLevelThumbnailFormat;
-(void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(float)arg2 ;
-(int)collectionsSectionHeaderStyle;
-(unsigned)collectionsSectionHeaderBackgroundStyle;
-(UIEdgeInsets)collectionsLevelSectionHeaderContentInset;
-(UIEdgeInsets)collectionsLevelSectionHeaderHighlightInset;
-(id)newGridSpec;
-(id)mapViewControllerSpec;
-(void)_setGridSpec:(id)arg1 ;
-(BOOL)canDisplayMultipleRightBarButtonItems;
-(int)magnifiedImageFormat;
-(float)magnifiedYOffset;
-(void)setMagnifiedYOffset:(float)arg1 ;
-(void).cxx_destruct;
@end

