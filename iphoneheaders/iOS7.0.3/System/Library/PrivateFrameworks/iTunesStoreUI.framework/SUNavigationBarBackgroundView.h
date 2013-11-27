/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView, UIColor, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	BOOL _separatorOnTop;
	BOOL translucent;
	BOOL barWantsAdaptiveBackdrop;
	int barStyle;
	UIColor* barTintColor;
	_UINavigationBarAppearanceStorage* appearanceStorage;
	UIView* _shadowView;
	int _backdropStyle;

}

@property (readonly) _UIBackdropView * backdropView;                                             //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) int backdropStyle;                                                  //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (assign,nonatomic) BOOL separatorOnTop;                                                //@synthesize separatorOnTop=_separatorOnTop - In the implementation block
@property (assign,nonatomic) int barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL barWantsAdaptiveBackdrop; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isTranslucent;
-(void)setAppearanceStorage:(id)arg1 ;
-(id)_shadowView;
-(id)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(int)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(id)barTintColor;
-(BOOL)barWantsAdaptiveBackdrop;
-(void)_setShadowView:(id)arg1 ;
-(int)backdropStyle;
-(id)backdropView;
-(void)setSeparatorOnTop:(BOOL)arg1 ;
-(void)setBackdropStyle:(int)arg1 ;
-(BOOL)separatorOnTop;
@end

