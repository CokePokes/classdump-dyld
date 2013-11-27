/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage, UIImageView;

@interface TPLegacyLCDBar : UIImageView {

	UIImage* _barBackground;
	UIImageView* _shadowView;

}

@property (nonatomic,retain) UIImage * barBackground;              //@synthesize barBackground=_barBackground - In the implementation block
@property (readonly) UIImageView * shadowView;                     //@synthesize shadowView=_shadowView - In the implementation block
+(float)defaultHeightForOrientation:(int)arg1 ;
+(id)backgroundImage;
+(id)shadowImage;
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)shadowView;
-(id)initWithDefaultSize;
-(void)setOrientation:(int)arg1 ;
-(id)initWithDefaultSizeForOrientation:(int)arg1 ;
-(void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2 ;
-(CGRect)contentStretchRect;
-(id)barBackground;
-(void)setBarBackground:(id)arg1 ;
@end

