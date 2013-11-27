/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class , UIImageView, UIButton, UIActivityIndicatorView;

@interface _MKUserTrackingButtonController : NSObject {

	<MKUserTrackingButtonTarget>* _target;
	<MKUserTrackingView>* _userTrackingView;
	int _state;
	UIImageView* _imageView;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) <MKUserTrackingView> * userTrackingView;              //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int state;                                            //@synthesize state=_state - In the implementation block
-(void)_goToNextMode:(id)arg1 ;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(id)userTrackingView;
-(void)setUserTrackingView:(id)arg1 ;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(id)_imageForState:(int)arg1 ;
-(BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2 ;
-(id)_shrinkAnimation;
-(id)_contentAnimation;
-(id)_activityIndicatorView;
-(id)_expandAnimation;
-(void)_reloadState;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)imageView;
-(void)_updateState;
@end

