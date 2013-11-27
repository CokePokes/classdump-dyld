/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {

	UIKBBackgroundView* _backgroundView;
	UIKBTree* _keyplane;

}
+(id)activeInstance;
+(float)landscapeHeight;
+(float)portraitHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)currentKeyplane;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
-(BOOL)usesAutoShift;
-(BOOL)visible;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg1 ;
-(CGSize)splitLeftSize;
@end

