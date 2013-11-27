/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UICollectionViewDelegate <UIScrollViewDelegate>
@optional
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
@end

