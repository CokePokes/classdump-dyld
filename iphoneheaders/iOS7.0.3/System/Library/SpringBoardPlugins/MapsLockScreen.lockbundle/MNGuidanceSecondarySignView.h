/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MNGuidanceManeuverView, MNGuidanceSignInstructionsLabel, UIImageView, MNGuidanceSignBackgroundView, MNSignStyle, NSArray, UIImage;

@interface MNGuidanceSecondarySignView : UIView {

	float _maximumWidth;
	UIView* _containerView;
	CGRect _pendingContainerFrame;
	BOOL _disallowMutation;
	MNGuidanceManeuverView* _maneuverView;
	MNGuidanceSignInstructionsLabel* _instructionsLabel;
	UIImageView* _shieldView;
	CGPoint _shieldCenter;
	MNGuidanceSignBackgroundView* _backgroundView;
	UIImageView* _borderView;
	MNSignStyle* _style;
	int _variant;
	NSArray* _instructionsTextAlternatives;
	UIView* _separatorView;

}

@property (assign,nonatomic) float maximumWidth;                                   //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,retain) MNSignStyle * style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSArray * instructionsTextAlternatives;                 //@synthesize instructionsTextAlternatives=_instructionsTextAlternatives - In the implementation block
@property (nonatomic,readonly) MNGuidanceManeuverView * maneuverView;              //@synthesize maneuverView=_maneuverView - In the implementation block
@property (nonatomic,@dynamic,retain) UIImage * shieldImage; 
@property (assign,nonatomic) CGPoint shieldCenter;                                 //@synthesize shieldCenter=_shieldCenter - In the implementation block
@property (assign,nonatomic) int variant;                                          //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                             //@synthesize separatorView=_separatorView - In the implementation block
+(BOOL)canDisplayJunction:(id)arg1 ;
-(id)maneuverView;
-(id)shieldImage;
-(void)setShieldImage:(id)arg1 ;
-(void)finalizePosition;
-(void)setInstructionStartingX:(float)arg1 ;
-(void)setContentFrameX:(float)arg1 ;
-(void)willAnimateStyleValuesFromTheme;
-(void)didAnimateStyleValuesFromTheme;
-(void)updateStyleValuesFromTheme;
-(void)textLinesShouldAnimateFromHeight:(float)arg1 ;
-(void)animateTextUp;
-(void)animateTextDown;
-(id)instructionsTextAlternatives;
-(void)setInstructionsTextAlternatives:(id)arg1 ;
-(void)setInstructionsText:(id)arg1 shorterAlternatives:(id)arg2 ;
-(void)setShieldCenter:(CGPoint)arg1 ;
-(void)disallowMutation;
-(void)transformSublayersByPercentComplete:(float)arg1 ;
-(CGPoint)shieldCenter;
-(void)_showBounds:(id)arg1 ;
-(int)variant;
-(CGRect)contentFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(void)setMaximumWidth:(float)arg1 ;
-(float)maximumWidth;
-(id)separatorView;
-(void)setVariant:(int)arg1 ;
@end

