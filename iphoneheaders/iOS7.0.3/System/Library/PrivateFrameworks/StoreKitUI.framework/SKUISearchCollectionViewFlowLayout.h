/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView, NSMutableArray;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {

	UICollectionView* _collectionView;
	int _numberOfRows;
	int _numberOfColumns;
	NSMutableArray* _sectionCounts;
	CGSize _headerSize;

}
-(id)init;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_indexPathForGlobalIndex:(int)arg1 ;
-(int)_globalIndexForIndexPath:(id)arg1 ;
-(void).cxx_destruct;
@end

