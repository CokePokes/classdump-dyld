/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UILabel, UIToolbarButtonBadge, _UIPressedIndicatorView, UIColor;

@interface UIToolbarButton : UIControl {

	CGRect _hitRect;
	UIView* _info;
	UILabel* _label;
	UIToolbarButtonBadge* _badge;
	_UIPressedIndicatorView* _pressedIndicator;
	int _barStyle;
	int _style;
	UIEdgeInsets _glowAdjust;
	BOOL _onState;
	BOOL _barHeight;
	BOOL _badgeAnimated;
	BOOL _bezel;
	float _minimumWidth;
	float _maximumWidth;
	float _labelHeight;
	UIEdgeInsets _infoInsets;
	UIColor* _toolbarTintColor;
	BOOL _isAnimatedTrashButton;
	id _appearanceStorage;
	BOOL _isInTopBar;
	Class _appearanceGuideClass;

}

@property (assign,getter=isAnimatedTrashButton,nonatomic) BOOL animatedTrashButton;                     //@synthesize isAnimatedTrashButton=_isAnimatedTrashButton - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;              //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
+(id)_defaultLabelFont;
+(id)_defaultLabelColor;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(Class)_appearanceGuideClass;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(void)setBarStyle:(int)arg1 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg1 ;
-(CGSize)_defaultTitleShadowOffsetForState:(unsigned)arg1 ;
-(id)_defaultTitleColorForState:(unsigned)arg1 ;
-(id)_defaultTitleShadowColorForState:(unsigned)arg1 ;
-(void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)_tintColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned)arg2 style:(int)arg3 barMetrics:(int)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned)arg2 style:(int)arg3 barMetrics:(int)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned)arg2 barMetrics:(int)arg3 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(int)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(int)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned)arg2 barMetrics:(int)arg3 ;
-(id)_backgroundImageForState:(unsigned)arg1 barMetrics:(int)arg2 ;
-(id)_titleTextAttributesForState:(unsigned)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned)arg2 barMetrics:(int)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned)arg2 barMetrics:(int)arg3 ;
-(UIOffset)_titlePositionAdjustmentForBarMetrics:(int)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(int)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(int)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(id)_info;
-(void)_sizeView:(id)arg1 toPossibleTitles:(id)arg2 pressedTitle:(id)arg3 ;
-(id)_newButton;
-(void)_adjustPushButtonForMiniBar:(BOOL)arg1 isChangingBarHeight:(BOOL)arg2 ;
-(BOOL)_isBordered;
-(void)_setPressed:(BOOL)arg1 ;
-(BOOL)_infoIsButton;
-(void)_positionBadge;
-(void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_adjustToolbarButtonInfo;
-(BOOL)isAnimatedTrashButton;
-(BOOL)_shouldApplyPadding;
-(void)_animateImage:(float)arg1 withButtonBar:(id)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4 ;
-(BOOL)_useSilverLook;
-(void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)arg1 ;
-(void)_updateInfoTextColorsForState:(unsigned)arg1 ;
-(void)_setInTopBar:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 pressedImage:(id)arg2 label:(id)arg3 labelHeight:(float)arg4 withBarStyle:(int)arg5 withStyle:(int)arg6 withInsets:(UIEdgeInsets)arg7 possibleTitles:(id)arg8 possibleSystemItems:(id)arg9 withToolbarTintColor:(id)arg10 bezel:(BOOL)arg11 imageInsets:(UIEdgeInsets)arg12 glowInsets:(UIEdgeInsets)arg13 landscape:(BOOL)arg14 ;
-(void)setSizesToFitImage:(BOOL)arg1 ;
-(void)_setButtonBarHitRect:(CGRect)arg1 ;
-(CGRect)_buttonBarHitRect;
-(void)_showPressedIndicator:(BOOL)arg1 ;
-(void)setUseSelectedImage:(BOOL)arg1 ;
-(void)_setBadgeValue:(id)arg1 ;
-(void)_setBadgeAnimated:(BOOL)arg1 ;
-(void)_setInfoWidth:(float)arg1 ;
-(void)_setInfoExtremityWidth:(float)arg1 isMin:(BOOL)arg2 ;
-(void)_setInfoFlexibleWidth:(BOOL)arg1 ;
-(BOOL)_canGetPadding;
-(float)_paddingForLeft:(BOOL)arg1 ;
-(void)_setOn:(BOOL)arg1 ;
-(BOOL)_isOn;
-(void)_animateImage:(float)arg1 withButtonBar:(id)arg2 ;
-(void)_setBarHeight:(float)arg1 ;
-(BOOL)_useBarHeight;
-(void)setToolbarTintColor:(id)arg1 ;
-(void)setAnimatedTrashButton:(BOOL)arg1 ;
@end

