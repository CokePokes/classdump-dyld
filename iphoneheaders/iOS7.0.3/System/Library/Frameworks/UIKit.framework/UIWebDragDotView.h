/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface UIWebDragDotView : UIView {

	UIColor* m_insertionPointColor;
	UIColor* m_selectionBarColor;
	UIImageView* m_dot;
	int m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}

@property (assign,nonatomic) BOOL showsBall; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isPointedDown;
-(BOOL)isPointedUp;
-(BOOL)isPointedRight;
-(BOOL)isPointedLeft;
-(BOOL)isVertical;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(int)arg3 ;
-(void)setEdge:(CGRect)arg1 ;
-(void)setShowsBall:(BOOL)arg1 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(float)arg2 ;
-(BOOL)showsBall;
@end

