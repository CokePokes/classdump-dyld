/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class , UIView;

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	int _transition;
	<UIViewControllerContextTransitioning>* _transitionContext;
	BOOL _removeFromView;
	id _delegate;
	UIView* _toView;
	UIView* _fromView;

}

@property (assign,nonatomic) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIView * toView;                  //@synthesize toView=_toView - In the implementation block
@property (assign,nonatomic) UIView * fromView;                //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) BOOL removeFromView;              //@synthesize removeFromView=_removeFromView - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidStart:(id)arg1 ;
-(BOOL)transitionViewShouldUseViewControllerCallbacks;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2 ;
-(id)fromView;
-(id)toView;
-(id)initWithTransition:(int)arg1 ;
-(void)setToView:(id)arg1 ;
-(void)setFromView:(id)arg1 ;
-(void)setRemoveFromView:(BOOL)arg1 ;
-(BOOL)removeFromView;
@end

