/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIImageView, UIImage;

@interface SKUISlideshowImageScrollView : UIScrollView {

	UIImageView* _imageView;
	CGPoint _centerPointBeforeResize;
	float _scaleBeforeResize;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(CGRect)visibleRect;
-(id)imageView;
-(void)_prepareToResize;
-(void)_recoverFromResize;
-(void)_resetMinMaxZoomScales;
-(float)_computeMinimumZoomScale;
-(void)resetZoomScale;
-(void)zoomIntoPoint:(CGPoint)arg1 ;
-(void).cxx_destruct;
@end

