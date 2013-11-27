/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIButton.h>

@interface ASTRecorderButton : UIButton {

	int _color;

}
+(void)preloadImagesForColor:(int)arg1 ;
+(float)defaultHeight;
+(float)defaultHeightForColor:(int)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(int)buttonColor;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(CGRect)arg4 ;
-(void)setTitleVerticalOffset:(float)arg1 ;
-(void)setButtonColor:(int)arg1 ;
-(void)setTitleImagePadding:(float)arg1 ;
-(void)setIconVerticalOffset:(float)arg1 ;
-(void)setDisabledButtonColor:(int)arg1 ;
-(void)_setButtonColor:(int)arg1 ;
-(void)_adjustIconColor;
-(void)_setDisabledButtonColor:(int)arg1 ;
@end

