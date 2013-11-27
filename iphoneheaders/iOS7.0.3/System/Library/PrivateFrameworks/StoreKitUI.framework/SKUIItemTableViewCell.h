/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUITableViewCell.h>
#import <StoreKitUI/SKUICellLayoutParentView.h>

@class SKUIItemCellLayout;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {

	BOOL _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIItemCellLayout * layout; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)layout;
-(void)setCellLayoutNeedsLayout;
-(void)configureForItem:(id)arg1 rowIndex:(int)arg2 ;
@end

