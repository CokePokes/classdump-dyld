/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MSTrackListHeaderDelegate;
@class , UIImage, SUItem, UILabel, SUReflectionImageView, SUItemOfferButton, SUTouchCaptureView;

@interface MSTrackListHeaderView : UIView {

	<MSTrackListHeaderDelegate>* _delegate;
	UIImage* _artworkImage;
	SUItem* _item;
	UILabel* _albumLabel;
	UILabel* _artistLabel;
	UILabel* _disclaimerLabel;
	UILabel* _itemCountLabel;
	UILabel* _releaseDateLabel;
	SUReflectionImageView* _artworkView;
	SUItemOfferButton* _offerButton;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,retain) UIImage * artworkImage;                              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) <MSTrackListHeaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SUItem * item;                                       //@synthesize item=_item - In the implementation block
-(void)setItem:(id)arg1 ;
-(void)reloadView;
-(id)artworkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)sizeToFit;
-(id)item;
-(void)_purchasesChangedNotification:(id)arg1 ;
-(void)_reloadAlbumLabel;
-(void)_reloadArtistLabel;
-(void)_reloadArtworkView;
-(void)_reloadDisclaimerLabel;
-(void)_reloadItemCountLabel;
-(void)_reloadOfferButton;
-(void)_reloadReleaseDateLabel;
-(CGSize)_sizeThatFitsLabel:(id)arg1 size:(CGSize)arg2 numberOfLines:(int)arg3 ;
-(void)_showPurchaseConfirmation;
-(void)_hidePurchaseConfirmation;
-(void)_performPurchaseAnimation;
-(void)_setShowingPurchaseConfirmation:(BOOL)arg1 ;
-(id)_newGenericSmallFontLabel;
-(void)_offerButtonAction:(id)arg1 ;
-(void)setArtworkImage:(id)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
@end

