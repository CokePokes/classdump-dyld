/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <StoreKitUI/SKUIComposeReviewHeaderDelegate.h>
#import <UIKit/UITextContentViewDelegate.h>

@protocol SKUIComposeReviewViewDelegate;
@class , SKUIComposeReviewHeaderView, SULoadingView, SKUIReviewMetadata, UIControl, UILabel, UIScrollView, SUTextContentView;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate> {

	int _currentBodyLength;
	<SKUIComposeReviewViewDelegate>* _delegate;
	SKUIComposeReviewHeaderView* _headerView;
	unsigned _loading : 1;
	SULoadingView* _loadingView;
	SKUIReviewMetadata* _review;
	UIControl* _reviewCountControl;
	UILabel* _reviewCountLabel;
	UIScrollView* _scrollView;
	int _style;
	SUTextContentView* _textContentView;

}

@property (nonatomic,readonly) int composeReviewStyle;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) <SKUIComposeReviewViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (assign,nonatomic) float rating; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(void)setLoading:(BOOL)arg1 ;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(BOOL)isValid;
-(void)_updateContentSize;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(BOOL)isLoading;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(id)_body;
-(void)composeHeaderViewValidityDidChange:(id)arg1 ;
-(void)composeHeaderViewValuesDidChange:(id)arg1 ;
-(int)composeReviewStyle;
-(void)_showComposeView;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg1 ;
-(void)_layoutLoadingView;
-(void)_layoutComposeView;
-(id)_reviewCountString;
-(void)_showLoadingView;
-(id)_reviewPlaceholder;
-(void)_delayedUpdateReviewLength;
-(BOOL)_isReviewTextOptional;
-(void)_reviewCountAction:(id)arg1 ;
-(void).cxx_destruct;
-(id)copyReview;
-(void)setReview:(id)arg1 ;
@end

