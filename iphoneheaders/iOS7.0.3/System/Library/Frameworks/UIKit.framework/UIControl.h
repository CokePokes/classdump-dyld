/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface UIControl : UIView {

	NSMutableArray* _targetActions;
	CGPoint _previousPoint;
	double _downTime;
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned delayActions : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 2;
		unsigned horizontalAlignment : 2;
		unsigned wasLastHighlightSuccessful : 1;
		unsigned touchHasHighlighted : 1;
	}  _controlFlags;

}

@property (assign,getter=isEnabled,nonatomic,@dynamic) BOOL enabled; 
@property (assign,getter=isSelected,nonatomic,@dynamic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic,@dynamic) BOOL highlighted; 
@property (assign,nonatomic,@dynamic) int contentVerticalAlignment; 
@property (assign,nonatomic,@dynamic) int contentHorizontalAlignment; 
@property (nonatomic,@dynamic,readonly) unsigned state; 
@property (getter=isTracking,nonatomic,@dynamic,readonly) BOOL tracking; 
@property (getter=isTouchInside,nonatomic,@dynamic,readonly) BOOL touchInside; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned)state;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)cancelMouseTracking;
-(BOOL)isEnabled;
-(BOOL)canBecomeFirstResponder;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned)arg3 ;
-(void)setContentHorizontalAlignment:(int)arg1 ;
-(void)setContentVerticalAlignment:(int)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(void)_cancelDelayedActions;
-(void)_sendActionsForEvents:(int)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)_unhighlight;
-(void)_setLastHighlightSuccessful:(BOOL)arg1 ;
-(BOOL)requiresDisplayOnTracking;
-(BOOL)shouldTrack;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isTouchInside;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(CGRect)_clippedHighlightBounds;
-(void)_sendDelayedActions:(BOOL)arg1 ;
-(void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned)arg3 ;
-(int)contentVerticalAlignment;
-(int)contentHorizontalAlignment;
-(id)allTargets;
-(unsigned)allControlEvents;
-(id)actionsForTarget:(id)arg1 forControlEvent:(unsigned)arg2 ;
-(void)sendActionsForControlEvents:(unsigned)arg1 ;
-(float)_highlightCornerRadius;
-(BOOL)_hasActionForEventMask:(int)arg1 ;
-(void)_setHighlightOnMouseDown:(BOOL)arg1 ;
-(void)_delayActions;
-(void)_sendDelayedActions;
-(BOOL)_wasLastHighlightSuccessful;
-(BOOL)_touchHasHighlighted;
-(BOOL)touchDragged;
-(void)setRequiresDisplayOnTracking:(BOOL)arg1 ;
-(BOOL)hasOneOrMoreTargets;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
-(void)removeTarget:(id)arg1 forEvents:(int)arg2 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
@end

