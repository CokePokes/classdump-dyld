/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITransitionState.h>

@class _UIPageCurl, UIView;

@interface _UIPageCurlState : _UITransitionState {

	_UIPageCurl* _pageCurl;
	int _curlType;
	CGPoint _initialLocation;
	CGPoint _referenceLocation;
	UIView* _frontPageView;
	UIView* _backPageView;
	UIView* _frontView;
	UIView* _backView;
	int _completionCount;
	int _curlState;
	BOOL _finished;
	BOOL _willComplete;
	/*^block*/ id _finally;

}

@property (nonatomic,readonly) _UIPageCurl * pageCurl;                                          //@synthesize pageCurl=_pageCurl - In the implementation block
@property (nonatomic,readonly) int curlType;                                                    //@synthesize curlType=_curlType - In the implementation block
@property (nonatomic,readonly) CGPoint initialLocation;                                         //@synthesize initialLocation=_initialLocation - In the implementation block
@property (nonatomic,readonly) CGPoint referenceLocation;                                       //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) UIView * frontPageView; 
@property (nonatomic,readonly) UIView * backPageView; 
@property (nonatomic,readonly) UIView * frontView;                                              //@synthesize frontView=_frontView - In the implementation block
@property (nonatomic,readonly) UIView * backView;                                               //@synthesize backView=_backView - In the implementation block
@property (nonatomic,readonly) int curlState;                                                   //@synthesize curlState=_curlState - In the implementation block
@property (getter=hasPendingAnimations,nonatomic,readonly) BOOL pendingAnimations; 
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)finally;
-(id)pageCurl;
-(CGRect)_pageViewFrame;
-(void)cleanupWithFinishedState:(BOOL)arg1 completedState:(BOOL)arg2 ;
-(int)curlType;
-(int)curlState;
-(id)initWithPageCurl:(id)arg1 andCurlType:(int)arg2 fromLocation:(CGPoint)arg3 withReferenceLocation:(CGPoint)arg4 inDirection:(int)arg5 withView:(id)arg6 revealingView:(id)arg7 completion:(/*^block*/ id)arg8 finally:(/*^block*/ id)arg9 ;
-(void)invalidatePageCurl;
-(id)frontPageView;
-(id)backPageView;
-(void)addFrontPageContent;
-(void)addBackPageContent;
-(void)setCurlState:(int)arg1 willComplete:(BOOL)arg2 ;
-(BOOL)hasPendingAnimations;
-(void)incrementCompletionCount;
-(void)cleanup;
-(int)_effectiveTransitionDirection;
-(BOOL)isCompatibleWithCurlOfType:(int)arg1 inDirection:(int)arg2 ;
-(CGPoint)initialLocation;
-(CGPoint)referenceLocation;
-(id)frontView;
-(id)backView;
@end

