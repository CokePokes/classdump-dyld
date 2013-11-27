/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUIEditorialCellLayout, UIView, SKUILockupItemCellLayout, SKUICellLayoutView, SKUITextBoxView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout {

	UIEdgeInsets _contentInsets;
	SKUIEditorialCellLayout* _editorialCellLayout;
	UIView* _editorialContainerView;
	float _editorialHeight;
	int _layoutStyle;
	SKUILockupItemCellLayout* _lockupLayout;
	SKUICellLayoutView* _lockupView;
	SKUITextBoxView* _textBoxView;
	unsigned _visibleFields;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) unsigned visibleFields;                                     //@synthesize visibleFields=_visibleFields - In the implementation block
@property (nonatomic,readonly) SKUILockupItemCellLayout * lockupCellLayout; 
@property (nonatomic,readonly) SKUITextBoxView * textBoxView; 
+(float)editorialWidthForCellWidth:(float)arg1 lockupStyle:(SKUILockupStyle)arg2 ;
+(float)_imagePaddingForArtworkSize:(int)arg1 ;
-(int)layoutStyle;
-(void)setLayoutStyle:(int)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)iconImage;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)iconImageView;
-(void)setIconImage:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setVisibleFields:(unsigned)arg1 ;
-(unsigned)visibleFields;
-(void)setItemOffer:(id)arg1 ;
-(id)itemOffer;
-(id)itemState;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(void)applyEditorialLayout:(id)arg1 withOrientation:(int)arg2 ;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setIconImageHidden:(BOOL)arg1 ;
-(id)textBoxView;
-(id)lockupCellLayout;
-(void)setItemOfferButtonAppearance:(id)arg1 ;
-(BOOL)isIconImageHidden;
-(void)layoutForItemOfferChange;
-(BOOL)_isItemOfferButtonHidden;
-(id)_editorialContainerView;
-(id)_editorialCellLayout;
-(id)_lockupView;
-(BOOL)_showsItemOfferUnderEditorial;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

