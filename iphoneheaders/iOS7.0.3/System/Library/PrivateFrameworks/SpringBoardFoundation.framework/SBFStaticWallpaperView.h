/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSMutableSet, UIImage, SBFColorBoxes;

@interface SBFStaticWallpaperView : SBFWallpaperView {

	NSMutableSet* _mappedBackdropKeys;
	UIImage* _image;
	SBFColorBoxes* _colorBoxes;

}

@property (nonatomic,retain) SBFColorBoxes * colorBoxes;              //@synthesize colorBoxes=_colorBoxes - In the implementation block
+(BOOL)_allowsParallax;
+(BOOL)_allowsRasterization;
-(void)dealloc;
-(void)setContentsRect:(CGRect)arg1 ;
-(float)_zoomScale;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)wallpaperImage;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 ;
-(id)_computeAverageColor;
-(unsigned)_colorBoxSize;
-(id)colorBoxes;
-(float)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(float*)arg2 contrastBetweenBoxes:(float*)arg3 ;
-(id)_averageColorInContentViewRect:(CGRect)arg1 smudgeRadius:(float)arg2 ;
-(id)_blurredImage;
-(id)_imageForBackdropParameters:(SCD_Struct_SB3)arg1 includeTint:(BOOL)arg2 ;
-(id)_displayedImage;
-(float)contrastInRect:(CGRect)arg1 ;
-(BOOL)isDisplayingWallpaper:(id)arg1 ;
-(void)_resetColorBoxes;
-(id)_createColorBoxes;
-(void)setColorBoxes:(id)arg1 ;
-(id)_wallpaperImageForAnalysis;
-(id)_treatedImage;
-(id)_treatedImageKey;
-(void)_removeMappedBlurs;
-(id)_mappedImageKeyForParameters:(SCD_Struct_SB3)arg1 includingTint:(BOOL)arg2 ;
-(id)_untintedImageForBackdropParameters:(SCD_Struct_SB3)arg1 ;
-(CGSize)_imageSize;
@end

