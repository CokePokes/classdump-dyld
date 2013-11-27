/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class UIColor, _UILegibilitySettings;

@interface _SBFVibrantSettings : NSObject {

	int _style;
	UIColor* _referenceColor;
	_UILegibilitySettings* _legibilitySettings;
	float _backgroundColorRedComponent;
	float _backgroundColorGreenComponent;
	float _backgroundColorBlueComponent;

}

@property (nonatomic,readonly) UIColor * referenceColor;                                //@synthesize referenceColor=_referenceColor - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) int style;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) float backgroundColorRedComponent;                       //@synthesize backgroundColorRedComponent=_backgroundColorRedComponent - In the implementation block
@property (nonatomic,readonly) float backgroundColorGreenComponent;                     //@synthesize backgroundColorGreenComponent=_backgroundColorGreenComponent - In the implementation block
@property (nonatomic,readonly) float backgroundColorBlueComponent;                      //@synthesize backgroundColorBlueComponent=_backgroundColorBlueComponent - In the implementation block
+(id)vibrantSettingsWithReferenceColor:(id)arg1 legibilitySettings:(id)arg2 ;
+(id)computeVibrantColorDodgeColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 factor:(float)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)style;
-(int)_style;
-(id)legibilitySettings;
-(id)colorCompositingViewWithFrame:(CGRect)arg1 ;
-(id)darkTintViewWithFrame:(CGRect)arg1 ;
-(id)lightTintViewWithFrame:(CGRect)arg1 ;
-(float)backgroundColorRedComponent;
-(float)backgroundColorGreenComponent;
-(float)backgroundColorBlueComponent;
-(id)initWithReferenceColor:(id)arg1 legibilitySettings:(id)arg2 ;
-(id)_colorDodgeColor;
-(id)_lightStyleColorCompositingViewWithFrame:(CGRect)arg1 ;
-(id)_darkStyleColorCompositingViewWithFrame:(CGRect)arg1 ;
-(id)_lightStyleTintViewWithFrame:(CGRect)arg1 ;
-(id)_mixedStyleTintViewWithFrame:(CGRect)arg1 ;
-(id)_darkStyleTintViewWithFrame:(CGRect)arg1 ;
-(id)referenceColor;
@end

