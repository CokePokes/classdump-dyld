/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <UIKit/UIView.h>

@class ADSCreativeView, UIImageView;

@interface ADSCreativeContainerView : UIView {

	int _adType;
	ADSCreativeView* _creativeView;
	UIImageView* _brandingFrame;

}

@property (nonatomic,readonly) int adType;                                //@synthesize adType=_adType - In the implementation block
@property (nonatomic,retain) ADSCreativeView * creativeView;              //@synthesize creativeView=_creativeView - In the implementation block
@property (nonatomic,retain) UIImageView * brandingFrame;                 //@synthesize brandingFrame=_brandingFrame - In the implementation block
-(id)creativeView;
-(void)transitionToCreativeView:(id)arg1 ;
-(void)setCreativeView:(id)arg1 ;
-(CGRect)_contentFrame;
-(id)_bannerFrameImageForSize:(CGSize)arg1 ;
-(id)brandingFrame;
-(void)setBrandingFrame:(id)arg1 ;
-(int)adType;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithAdType:(int)arg1 ;
@end

