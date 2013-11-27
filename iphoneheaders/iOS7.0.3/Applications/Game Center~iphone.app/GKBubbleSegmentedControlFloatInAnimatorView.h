/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <UIKit/UIView.h>

@class GKBubbleSegmentedControlContext, _UIBackdropView, UIView;

@interface GKBubbleSegmentedControlFloatInAnimatorView : UIView {

	GKBubbleSegmentedControlContext* _context;
	_UIBackdropView* _backdropView;
	UIView* _knockoutView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) GKBubbleSegmentedControlContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                         //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * knockoutView;                                  //@synthesize knockoutView=_knockoutView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                   //@synthesize dimmingView=_dimmingView - In the implementation block
+(id)animatorForContext:(id)arg1 ;
-(float)ez;
-(void)updateTargetBubblesAnimations;
-(void)floatInGamesBubble;
-(void)floatInPointsBubble;
-(void)floatInFriendsBubble;
-(void)setKnockoutView:(id)arg1 ;
-(void)animateWithHandler:(/*^block*/ id)arg1 ;
-(id)knockoutView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)dimmingView;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
-(void)setDimmingView:(id)arg1 ;
@end

