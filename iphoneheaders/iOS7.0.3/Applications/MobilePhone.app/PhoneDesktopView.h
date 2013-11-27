/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage, _UIBackdropView, UITransitionView;

@interface PhoneDesktopView : UIView {

	UIImageView* _imageView;
	UIImage* _wallpaperImage;
	UIImage* _queuedImage;
	BOOL _animatingTransition;
	_UIBackdropView* _backdropView;
	UITransitionView* _wallpaperContainer;

}

@property (getter=isAnimatingTransition,readonly) BOOL animatingTransition;              //@synthesize animatingTransition=_animatingTransition - In the implementation block
@property (retain) _UIBackdropView * backdropView;                                       //@synthesize backdropView=_backdropView - In the implementation block
@property (retain) UITransitionView * wallpaperContainer;                                //@synthesize wallpaperContainer=_wallpaperContainer - In the implementation block
-(void)transitionToQueuedImage;
-(void)setWallpaperContainer:(id)arg1 ;
-(id)wallpaperContainer;
-(void)transitionToImage:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAnimatingTransition;
-(void)reallyTransitionToImage:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
@end

