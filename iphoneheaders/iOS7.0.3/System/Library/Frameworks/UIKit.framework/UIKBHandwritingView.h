/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIKBHandwritingStrokeView, NSMutableArray, UIBezierPath, UIKBHandwritingStrokePointFIFO, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingQuadCurvePointFIFO;

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate> {

	UIKBHandwritingStrokeView* _strokeView;
	float _inkWidth;
	CGColorRef _inkColor;
	CGImageRef _inkMask;
	NSMutableArray* _interpolatedPaths;
	UIBezierPath* _currentPath;
	UIKBHandwritingStrokePointFIFO* _strokeFIFO;
	UIKBHandwritingBoxcarFilterPointFIFO* _smoothingFIFO;
	UIKBHandwritingQuadCurvePointFIFO* _interpolatingFIFO;

}

@property (assign,nonatomic) float inkWidth;                                                     //@synthesize inkWidth=_inkWidth - In the implementation block
@property (assign,nonatomic) CGColorRef inkColor;                                                //@synthesize inkColor=_inkColor - In the implementation block
@property (assign,nonatomic) CGImageRef inkMask;                                                 //@synthesize inkMask=_inkMask - In the implementation block
@property (nonatomic,retain) NSMutableArray * interpolatedPaths;                                 //@synthesize interpolatedPaths=_interpolatedPaths - In the implementation block
@property (nonatomic,retain) UIBezierPath * currentPath;                                         //@synthesize currentPath=_currentPath - In the implementation block
@property (nonatomic,retain) UIKBHandwritingStrokePointFIFO * strokeFIFO;                        //@synthesize strokeFIFO=_strokeFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingBoxcarFilterPointFIFO * smoothingFIFO;               //@synthesize smoothingFIFO=_smoothingFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingQuadCurvePointFIFO * interpolatingFIFO;              //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (nonatomic,retain) UIKBHandwritingStrokeView * strokeView;                             //@synthesize strokeView=_strokeView - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelTouchTracking;
-(void)log;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(BOOL)shouldCache;
-(void)clearAndNotify:(BOOL)arg1 ;
-(void)deleteStrokesAtIndexes:(id)arg1 ;
-(CGColorRef)inkColor;
-(CGImageRef)inkMask;
-(float)inkWidth;
-(id)interpolatedPaths;
-(id)currentPath;
-(void)setInkMask:(CGImageRef)arg1 ;
-(void)setInkWidth:(float)arg1 ;
-(void)updateInkColor;
-(void)setStrokeView:(id)arg1 ;
-(void)setInterpolatedPaths:(id)arg1 ;
-(id)strokeView;
-(void)setInterpolatingFIFO:(id)arg1 ;
-(id)interpolatingFIFO;
-(void)setSmoothingFIFO:(id)arg1 ;
-(id)smoothingFIFO;
-(void)setStrokeFIFO:(id)arg1 ;
-(id)strokeFIFO;
-(void)setInkColor:(CGColorRef)arg1 ;
-(void)setCurrentPath:(id)arg1 ;
-(void)addInkPoint:(CGPoint)arg1 ;
-(void)send;
@end

