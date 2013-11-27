/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

@interface UIInputSwitcherShadowView : UIView {

	int m_mode;
	float m_pointerOffset;
	NSArray* m_gradientColors;
	UIKeyboardMenuView* _menu;
	_UIBackdropView* _blurView;
	CGRect _keyRect;

}

@property (assign,nonatomic) CGRect keyRect;                          //@synthesize keyRect=_keyRect - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;               //@synthesize menu=_menu - In the implementation block
@property (assign,nonatomic) int mode; 
@property (assign,nonatomic) float pointerOffset; 
@property (nonatomic,retain) NSArray * gradientColors; 
@property (nonatomic,retain) _UIBackdropView * blurView;              //@synthesize blurView=_blurView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)menu;
-(void)setMenu:(id)arg1 ;
-(void)setBlurView:(id)arg1 ;
-(id)blurView;
-(CGRect)keyRect;
-(id)gradientColors;
-(float)pointerOffset;
-(void)setPointerOffset:(float)arg1 ;
-(void)setGradientColors:(id)arg1 ;
-(void)setKeyRect:(CGRect)arg1 ;
@end

