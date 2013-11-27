/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UITextInput;
@class UIView, NSArray, NSMutableArray, UIWebDragDotView;

@interface UIWebTextRangeView : UIView {

	UIView<UITextInput>* m_container;
	NSArray* _rects;
	NSMutableArray* _rectViews;
	UIWebDragDotView* _startDot;
	UIWebDragDotView* _endDot;
	BOOL _magnifying;

}

@property (nonatomic,readonly) UIView<UITextInput> * container; 
@property (nonatomic,copy) NSArray * rects;                                  //@synthesize rects=_rects - In the implementation block
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(id)container;
-(void)setRects:(id)arg1 ;
-(id)rects;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(CGRect)startEdge;
-(CGRect)endEdge;
-(void)updateRectViews;
-(CGRect)boundingRect;
-(void)geometryChanged;
-(BOOL)startIsHorizontal;
-(BOOL)endIsHorizontal;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(CGRect)rectAtIndex:(int)arg1 ;
-(CGPoint)endCorner;
-(CGPoint)startCorner;
-(void)updateDragDots;
-(id)rectViewAtIndex:(int)arg1 ;
@end

