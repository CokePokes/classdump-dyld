/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol PLEffectSelectionViewControllerDelegate;
@class UICollectionView, UICollectionViewFlowLayout, NSArray, NSIndexPath, , CIFilter;

@interface PLEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	NSArray* _effects;
	NSIndexPath* __selectedIndexPath;
	CGSize _cellSize;
	CGSize _thumbnailSize;
	<PLEffectSelectionViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <PLEffectSelectionViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CIFilter * selectedEffect; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)initWithImageSize:(CGSize)arg1 ;
-(void)setSelectedEffect:(id)arg1 ;
-(void)_generateFilters;
-(void)_resetSelectedToOriginal;
-(void)_setSelectedIndexPath:(id)arg1 ;
-(id)_selectedIndexPath;
-(void)_scrollToSelectedIndexAnimated:(BOOL)arg1 ;
-(id)_textForItemAtIndexPath:(id)arg1 ;
-(void)_notifyEffectSelectedAndScrollIfNecessary;
-(id)selectedEffect;
-(void)_scrollToShowNextFilterNearEdge;
@end

