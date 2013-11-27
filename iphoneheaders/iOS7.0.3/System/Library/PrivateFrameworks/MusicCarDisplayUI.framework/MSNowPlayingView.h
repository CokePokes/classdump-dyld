/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MSNowPlayingViewDelegate;
@class UIImageView, , UILabel, UIButton;

@interface MSNowPlayingView : UIView {

	UIImageView* _backgroundGradientView;
	<MSNowPlayingViewDelegate>* _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _backgroundImageView;
	UIButton* _backButton;
	UIButton* _menuButton;
	UIButton* _seekMusicButton;

}

@property (assign,nonatomic,__weak) <MSNowPlayingViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * backgroundImageView;                       //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) UIButton * backButton;                                   //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,readonly) UIButton * menuButton;                                   //@synthesize menuButton=_menuButton - In the implementation block
@property (nonatomic,readonly) UIButton * seekMusicButton;                              //@synthesize seekMusicButton=_seekMusicButton - In the implementation block
-(id)backgroundImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(id)titleLabel;
-(id)subtitleLabel;
-(void)_backButtonTouchUpInside:(id)arg1 ;
-(void)_menuButtonTouchUpInside:(id)arg1 ;
-(id)backButton;
-(id)menuButton;
-(id)seekMusicButton;
-(void).cxx_destruct;
@end

