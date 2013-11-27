/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Reminders/Reminders-Structs.h>
@class _UIDynamicValueAnimation, UIPanGestureRecognizer, UIView;

@interface RemindersCardVerticalPanAnimator : NSObject {

	_UIDynamicValueAnimation* _panningAnimation;
	UIPanGestureRecognizer* _gestureRecognizer;
	UIView* _panningCardView;
	float _panningViewTargetScale;
	CGPoint _panningViewStartPosition;
	CGPoint _panningViewTargetPosition;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * panningCardView;                                //@synthesize panningCardView=_panningCardView - In the implementation block
@property (assign,nonatomic) CGPoint panningViewStartPosition;                        //@synthesize panningViewStartPosition=_panningViewStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint panningViewTargetPosition;                       //@synthesize panningViewTargetPosition=_panningViewTargetPosition - In the implementation block
@property (assign,nonatomic) float panningViewTargetScale;                            //@synthesize panningViewTargetScale=_panningViewTargetScale - In the implementation block
-(void)setPanningCardView:(id)arg1 ;
-(id)initWithCardView:(id)arg1 ;
-(id)panningCardView;
-(CGPoint)panningViewStartPosition;
-(void)layoutViewsWithY:(float)arg1 ;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(float)arg1 ;
-(void)dismissWithStartVelocity:(float)arg1 completion:(/*^block*/ id)arg2 ;
-(id)_dynamicAnimationWithStart:(float)arg1 target:(float)arg2 initialVelocity:(float)arg3 ;
-(CGPoint)panningViewTargetPosition;
-(float)panningViewTargetScale;
-(void)setGestureRecognizer:(id)arg1 ;
-(id)gestureRecognizer;
-(void)stop;
-(void).cxx_destruct;
@end

