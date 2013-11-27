/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <CoreFoundation/NSCoding.h>

@protocol _UISwitchInternalViewProtocol;
@class UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView, UIColor, UIImage;

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding> {

	UILongPressGestureRecognizer* _pressGesture;
	UIPanGestureRecognizer* _panGesture;
	UIView<_UISwitchInternalViewProtocol>* _control;
	BOOL _onStateChangedByLongPressGestureRecognizer;
	BOOL _onStateChangedByPanGestureRecognizer;
	BOOL _on;
	float _enabledAlpha;

}

@property (setter=_setOnColor:,getter=_onColor,nonatomic,retain) UIColor * onColor; 
@property (assign,setter=_setAlwaysShowsOnOffLabel:,getter=_alwaysShowOnOffLabel,nonatomic) BOOL alwaysShowOnOffLabel; 
@property (nonatomic,retain) UIColor * onTintColor; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * thumbTintColor; 
@property (nonatomic,retain) UIImage * onImage; 
@property (nonatomic,retain) UIImage * offImage; 
@property (assign,getter=isOn,nonatomic) BOOL on;                                                                                   //@synthesize on=_on - In the implementation block
@property (assign,nonatomic) float enabledAlpha;                                                                                    //@synthesize enabledAlpha=_enabledAlpha - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_encodeFrameWithCoder:(id)arg1 ;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_scriptingInfo;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setThumbTintColor:(id)arg1 ;
-(id)thumbTintColor;
-(void)_setOnTintColor:(id)arg1 ;
-(void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(id)onTintColor;
-(void)setOnTintColor:(id)arg1 ;
-(id)onImage;
-(void)setOnImage:(id)arg1 ;
-(id)offImage;
-(void)setOffImage:(id)arg1 ;
-(void)setOn:(BOOL)arg1 ;
-(id)_onTintColor;
-(void)setEnabledAlpha:(float)arg1 ;
-(void)_handlePanNL:(id)arg1 ;
-(void)_handleTapNL:(id)arg1 ;
-(void)_handleLongPressNL:(id)arg1 ;
-(BOOL)_handleTranslationInPanGestureRecognizer:(id)arg1 ;
-(void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3 ;
-(BOOL)_useOldSize;
-(void)_commonInitNewLook;
-(void)_commonInitNewLookNeue1;
-(BOOL)_shouldAlterCodedFrame;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setOnColor:(id)arg1 ;
-(id)_onColor;
-(void)_setAlwaysShowsOnOffLabel:(BOOL)arg1 ;
-(BOOL)_alwaysShowOnOffLabel;
-(float)enabledAlpha;
-(void)setAlternateColors:(BOOL)arg1 ;
-(void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(float)_knobBounceDuration;
-(void)_setKnobBounceDuration:(float)arg1 ;
-(float)_knobBounceDamping;
-(void)_setKnobBounceDamping:(float)arg1 ;
-(float)_knobBounceStiffness;
-(void)_setKnobBounceStiffness:(float)arg1 ;
-(float)_knobBounceMass;
-(void)_setKnobBounceMass:(float)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

