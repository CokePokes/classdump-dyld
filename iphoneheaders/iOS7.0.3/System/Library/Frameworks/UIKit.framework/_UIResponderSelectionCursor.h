/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImageView, UIPanGestureRecognizer, NSArray, UIResponder, NSMutableArray, UIScrollView, NSMapTable, UIWindow;

@interface _UIResponderSelectionCursor : NSObject {

	UIImageView* _responderSelectionView;
	CGPoint _responderSelectionStartLocation;
	UIPanGestureRecognizer* _panResponderSelectionRecognizer;
	NSArray* _remoteGestures;
	BOOL _isFlick;
	double _timeOnTouchDown;
	float _consecutiveWithinRowAccumulator;
	BOOL _isKeepingCompetitiveFarDiagonalResiduals;
	UIResponder* _selectedItemOnTouchDown;
	NSMutableArray* _selectableItems;
	UIScrollView* _scrollingScrollView;
	CGPoint _scrollingOffset;
	CGPoint _activeFirstResponderScrollViewOffset;
	NSMapTable* _selectionThresholdDictionary;
	NSMapTable* _selectionAccumulationDictionary;
	BOOL _dirtyGeometry;
	UIWindow* _targetWindow;
	UIResponder* _mostLikelyToBeSelectedItem;
	UIScrollView* _activeFirstResponderScrollView;

}

@property (assign,nonatomic) UIWindow * targetWindow;                                    //@synthesize targetWindow=_targetWindow - In the implementation block
@property (nonatomic,retain) UIResponder * mostLikelyToBeSelectedItem;                   //@synthesize mostLikelyToBeSelectedItem=_mostLikelyToBeSelectedItem - In the implementation block
@property (nonatomic,retain) UIScrollView * activeFirstResponderScrollView;              //@synthesize activeFirstResponderScrollView=_activeFirstResponderScrollView - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)setTargetWindow:(id)arg1 ;
-(void)updateFirstResponder:(id)arg1 ;
-(void)_responderGeometryDidChange;
-(id)directionalGestureRecognizers;
-(void)setSelectedItem:(id)arg1 ;
-(id)targetWindow;
-(void)reset;
-(void)panResponderSelection:(id)arg1 ;
-(void)moveSelection:(id)arg1 ;
-(void)scrollingToFirstResponderDidFinish:(id)arg1 ;
-(void)updateResponderSelectionRect;
-(id)activeFirstResponderScrollView;
-(void)setActiveFirstResponderScrollView:(id)arg1 ;
-(void)resetIfNecessary;
-(void)panTouchDown;
-(void)accumulateWithDelta:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)panTouchUp;
-(id)responderForPoint:(CGPoint)arg1 possibleResponders:(id)arg2 ;
-(void)loadFirstResponderScrollViewContentInDirection:(CGSize)arg1 ;
-(id)respondersInDirection:(CGSize)arg1 inView:(id)arg2 ;
-(void)updateResponderSelectionWithPoint:(CGPoint)arg1 possibleResponders:(id)arg2 ;
-(CGPoint)centerForResponder:(id)arg1 ;
-(float)selectionAccumulationForResponder:(id)arg1 ;
-(id)possibleResponders;
-(void)setSelectionAccumulation:(float)arg1 forResponder:(id)arg2 ;
-(BOOL)inSelectedRow:(id)arg1 ;
-(void)keepSecondaryResidualsCompetitiveTo:(id)arg1 ;
-(float)horizontalSpacingFromItem:(id)arg1 ;
-(float)verticalSpacingFromItem:(id)arg1 ;
-(void)setMostLikelyToBeSelectedItem:(id)arg1 ;
-(id)itemsInDirectionOfVector:(CGPoint)arg1 withConeOfDegrees:(float)arg2 fromItem:(id)arg3 ;
-(void)longFlick;
-(void)setSelectionThreshold:(float)arg1 forResponder:(id)arg2 ;
-(float)selectionThresholdForResponder:(id)arg1 ;
-(void)moveResponderSelectionInDirection:(CGSize)arg1 ;
-(id)mostLikelyToBeSelectedItem;
@end

