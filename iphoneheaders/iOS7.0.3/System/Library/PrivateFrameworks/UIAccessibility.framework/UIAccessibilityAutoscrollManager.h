/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject {

	BOOL _autoscrolling;
	UIScrollView* _scrollView;
	int _scrollDirection;
	float _autoscrollSpeed;

}

@property (nonatomic,retain) UIScrollView * scrollView;                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isAutoscrolling,nonatomic) BOOL autoscrolling;              //@synthesize autoscrolling=_autoscrolling - In the implementation block
@property (assign,nonatomic) int scrollDirection;                                    //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) float autoscrollSpeed;                                  //@synthesize autoscrollSpeed=_autoscrollSpeed - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)setScrollView:(id)arg1 ;
-(void)setScrollDirection:(int)arg1 ;
-(id)scrollView;
-(void)pause;
-(int)scrollDirection;
-(void)autoscrollInDirection:(int)arg1 ;
-(void)scrollToBottom;
-(void)scrollToTop;
-(int)availableAutoscrollDirections;
-(void)incrementAutoscrollSpeed;
-(void)decrementAutoscrollSpeed;
-(void)setAutoscrollSpeed:(float)arg1 ;
-(void)setAutoscrolling:(BOOL)arg1 ;
-(float)autoscrollSpeed;
-(BOOL)isAutoscrolling;
-(void)_autoscroll;
@end

