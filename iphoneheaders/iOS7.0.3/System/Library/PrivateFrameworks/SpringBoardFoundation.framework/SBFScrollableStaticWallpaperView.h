/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBFCancelable;
@class UIImageView, UIScrollView, SBFLockScreenWallpaperParallaxSettings, SBFSubject, , UIColor;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {

	UIImageView* _imageView;
	UIScrollView* _scrollView;
	SBFLockScreenWallpaperParallaxSettings* _parallaxSettings;
	SBFSubject* _scrollViewObserver;
	<SBFCancelable>* _cancelToken;
	UIColor* _averageColor;

}

@property (readonly) UIColor * averageColor;              //@synthesize averageColor=_averageColor - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(id)wallpaperImage;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 ;
-(void)_setupScrollView;
-(void)_setupScrollViewObserver;
-(CGRect)_cropRect;
-(id)_wallpaperImageForAnalysis;
-(id)averageColor;
-(CGSize)_imageSize;
@end

