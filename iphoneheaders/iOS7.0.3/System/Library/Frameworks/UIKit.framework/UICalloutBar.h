/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, UICalloutBarButton, UICalloutBarBackground, NSArray, NSString, UIResponder;

@interface UICalloutBar : UIView {

	id m_delegate;
	CGPoint m_pointBelowControls;
	CGPoint m_pointAboveControls;
	CGPoint m_pointLeftOfControls;
	CGPoint m_pointRightOfControls;
	CGPoint m_targetPoint;
	int m_targetDirection;
	BOOL m_targetHorizontal;
	BOOL m_fadeAfterCommand;
	BOOL m_recalcVisibleItems;
	BOOL m_shouldAppear;
	int m_pageCount;
	int m_currentPage;
	BOOL m_supressesHorizontalMovement;
	CGRect m_controlFrame;
	CGRect m_targetRect;
	CGRect m_supressesHorizontalMovementFrame;
	float m_supressedHorizontalMovementX;
	int m_arrowDirection;
	NSMutableArray* m_systemButtons;
	NSMutableArray* m_extraButtons;
	UICalloutBarButton* m_nextButton;
	UICalloutBarButton* m_previousButton;
	NSMutableArray* m_rectsToEvade;
	UICalloutBarBackground* m_overlay;
	double m_fadedTime;
	id m_responderTarget;
	NSArray* m_replacements;
	NSArray* m_extraItems;
	NSString* m_untruncatedString;
	BOOL m_didPromptForReplace;
	BOOL m_ignoringEvents;
	BOOL m_showAllReplacements;
	BOOL m_ignoreFade;

}

@property (assign,nonatomic) CGPoint targetPoint; 
@property (assign,nonatomic) int targetDirection; 
@property (assign,nonatomic) CGRect targetRect; 
@property (assign,nonatomic) CGRect controlFrame; 
@property (nonatomic,readonly) NSArray * rectsToEvade; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) UIResponder * responderTarget; 
@property (nonatomic,copy) NSArray * replacements; 
@property (assign,nonatomic) BOOL showAllReplacements; 
@property (nonatomic,copy) NSArray * extraItems; 
@property (nonatomic,copy) NSString * untruncatedString; 
@property (assign,nonatomic) BOOL supressesHorizontalMovement; 
@property (assign,nonatomic) CGPoint pointAboveControls; 
@property (assign,nonatomic) CGPoint pointBelowControls; 
@property (assign,nonatomic) CGPoint pointLeftOfControls; 
@property (assign,nonatomic) CGPoint pointRightOfControls; 
@property (assign,nonatomic) BOOL targetHorizontal; 
@property (assign,nonatomic) int arrowDirection; 
+(void)fadeSharedCalloutBar;
+(void)hideSharedCalloutBar;
+(void)fadeSharedCalloutBarIfNeededForTouchInView:(id)arg1 window:(id)arg2 ;
+(id)sharedCalloutBar;
+(id)activeCalloutBar;
+(void)_releaseSharedInstance;
+(BOOL)sharedCalloutBarIsVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(id)delegate;
-(void)show;
-(void)setSupressesHorizontalMovement:(BOOL)arg1 ;
-(void)clearSupressesHorizontalMovementFrame;
-(void)setUntruncatedString:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)hide;
-(BOOL)hasReplacements;
-(BOOL)visible;
-(id)extraItems;
-(void)setExtraItems:(id)arg1 ;
-(void)update;
-(void)setResponderTarget:(id)arg1 ;
-(void)fade;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(BOOL)recentlyFaded;
-(void)clearEvadeRects;
-(void)addRectToEvade:(CGRect)arg1 ;
-(void)setTargetRect:(CGRect)arg1 pointBelowControls:(CGPoint)arg2 pointAboveControls:(CGPoint)arg3 ;
-(void)setReplacements:(id)arg1 ;
-(void)appear;
-(void)clearReplacements;
-(id)replacements;
-(CGRect)controlFrame;
-(int)targetDirection;
-(CGPoint)targetPoint;
-(void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(void)_showPreviousItems:(id)arg1 ;
-(void)_showNextItems:(id)arg1 ;
-(void)flattenForAlertOrResignActive:(id)arg1 ;
-(void)expandAfterAlertOrBecomeActive:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 ;
-(void)_fadeAfterCommand:(SEL)arg1 ;
-(BOOL)_updateVisibleItemsAnimated:(BOOL)arg1 ;
-(CGRect)textEffectsWindowBoundsWithoutStatusBar;
-(id)rectsToEvade;
-(BOOL)supressesHorizontalMovement;
-(float)supressHorizontalXMovementIfNeededForPoint:(CGPoint)arg1 proposedX:(float)arg2 ;
-(BOOL)rectClear:(CGRect)arg1 ;
-(int)arrowDirection;
-(BOOL)calculateControlFrameForCalloutSize:(CGSize)arg1 below:(BOOL)arg2 ;
-(void)setTargetDirection:(int)arg1 ;
-(BOOL)calculateControlFrameForCalloutSize:(CGSize)arg1 right:(BOOL)arg2 ;
-(BOOL)calculateControlFrameInsideTargetRect:(CGSize)arg1 ;
-(CGPoint)pointBelowControls;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(CGPoint)pointAboveControls;
-(void)setControlFrame:(CGRect)arg1 ;
-(void)updateAvailableButtons;
-(BOOL)setFrameForSize:(CGSize)arg1 ;
-(void)configureButtons:(float)arg1 ;
-(void)updateForCurrentPage;
-(void)setArrowDirection:(int)arg1 ;
-(void)setTargetHorizontal:(BOOL)arg1 ;
-(void)setPointBelowControls:(CGPoint)arg1 ;
-(void)setPointAboveControls:(CGPoint)arg1 ;
-(void)setPointLeftOfControls:(CGPoint)arg1 ;
-(void)setPointRightOfControls:(CGPoint)arg1 ;
-(void)appearAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)hideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)resetPage;
-(void)setTargetRect:(CGRect)arg1 pointLeftOfControls:(CGPoint)arg2 pointRightOfControls:(CGPoint)arg3 ;
-(void)setTargetRect:(CGRect)arg1 arrowDirection:(int)arg2 ;
-(void)updateAnimated:(BOOL)arg1 ;
-(CGPoint)pointLeftOfControls;
-(CGPoint)pointRightOfControls;
-(BOOL)targetHorizontal;
-(id)responderTarget;
-(BOOL)showAllReplacements;
-(void)setShowAllReplacements:(BOOL)arg1 ;
-(id)untruncatedString;
@end

