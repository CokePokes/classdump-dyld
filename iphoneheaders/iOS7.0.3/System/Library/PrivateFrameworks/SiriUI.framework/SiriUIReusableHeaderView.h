/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, SiriUIKeyline, UIImageView, SiriUISnippetViewController, NSString, UIButton;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	UIEdgeInsets _contentInsets;
	SiriUIKeyline* _keyline;
	UIImageView* _chevronView;
	SiriUISnippetViewController* _snippetViewController;
	NSString* _titleText;
	UIButton* _headerAreaButton;
	int _keylineType;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) UIButton * headerAreaButton;                                           //@synthesize headerAreaButton=_headerAreaButton - In the implementation block
@property (assign,nonatomic) int keylineType;                                                         //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;              //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(id)reuseIdentifier;
+(float)defaultHeight;
+(id)elementKind;
-(float)desiredHeightForWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleText:(id)arg1 ;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
-(void)setKeylineType:(int)arg1 ;
-(int)keylineType;
-(void)_configureHeaderLabelForBounds:(CGRect)arg1 ;
-(id)headerAreaButton;
-(id)titleText;
-(void).cxx_destruct;
@end

