/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier {

	UIGradient* _gradient;
	float _reflectionHeight;

}

@property (nonatomic,retain) UIGradient * gradient;               //@synthesize gradient=_gradient - In the implementation block
@property (assign,nonatomic) float reflectionHeight;              //@synthesize reflectionHeight=_reflectionHeight - In the implementation block
-(void)dealloc;
-(void)setGradient:(id)arg1 ;
-(id)gradient;
-(float)reflectionHeight;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)setReflectionHeight:(float)arg1 ;
@end

