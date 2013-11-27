/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIPDFSelectionWidgetNSObject;
#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPageView, ;

@interface UIPDFSelectionController : NSObject {

	UIPDFPageView* _pageView;
	BOOL _rangeMode;
	<UIPDFSelectionWidget><NSObject>* _selectionWidget;
	BOOL _resizingWidget;
	CGPoint _selectionFixedPoint;
	CGRect _selectionBounds;
	BOOL _preceeds;
	BOOL _isTracking;
	CGPoint _adjustedPoint;
	BOOL _hiding;
	long _firstIndex;
	long _lastIndex;
	CGPoint _startPoint;
	BOOL _needsLayout;
	BOOL _cancelled;
	BOOL _instantModeIsSuspended;
	BOOL _instantHighlightMode;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                                //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) BOOL rangeMode;                                        //@synthesize rangeMode=_rangeMode - In the implementation block
@property (nonatomic,readonly) <UIPDFSelectionWidget> * selectionWidget;              //@synthesize selectionWidget=_selectionWidget - In the implementation block
@property (nonatomic,readonly) BOOL isTracking;                                       //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) CGPoint adjustedPoint;                                 //@synthesize adjustedPoint=_adjustedPoint - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPoint; 
@property (nonatomic,readonly) CGPoint currentSelectionPoint; 
@property (assign,nonatomic) BOOL instantHighlightMode;                               //@synthesize instantHighlightMode=_instantHighlightMode - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isTracking;
-(void)clearSelection;
-(id)pageView;
-(void)layoutSelections;
-(void)hideWidget;
-(void)addSelectionWidget:(id)arg1 ;
-(void)setInstantHighlightMode:(BOOL)arg1 ;
-(void)suspendInstantHighlightMode;
-(void)setPageView:(id)arg1 ;
-(void)selectionHideFromAncestor:(id)arg1 ;
-(void)selectionShowToAncestor:(id)arg1 ;
-(void)selectionHide:(id)arg1 ;
-(void)selectionShowDelayed:(id)arg1 ;
-(void)selectionShow:(id)arg1 ;
-(void)setSelectionFor:(CGPoint)arg1 ;
-(BOOL)useParagraphMode;
-(void)startSelectingAt:(CGPoint)arg1 ;
-(void)adjustSelection:(CGPoint)arg1 ;
-(void)extendSelectionToParagraph;
-(BOOL)shouldTrackAt:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 showMagnifier:(BOOL*)arg2 ;
-(void)tracking:(CGPoint)arg1 showMagnifier:(BOOL*)arg2 ;
-(void)endTracking:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(void)tracking:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(CGPoint)selectedPointOffset;
-(CGPoint)initialSelectionPoint;
-(CGPoint)currentSelectionPoint;
-(BOOL)rangeMode;
-(id)selectionWidget;
-(CGPoint)adjustedPoint;
-(BOOL)instantHighlightMode;
@end

