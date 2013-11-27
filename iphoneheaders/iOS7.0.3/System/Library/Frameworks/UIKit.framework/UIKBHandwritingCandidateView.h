/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol UIKeyboardCandidateListDelegate;
@class , TIKeyboardCandidateResultSet, UIKBCandidateCollectionView, UIKeyboardCandidatePocketShadow, UIKeyboardCandidateLogButton, NSArray;

@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	BOOL _usesCandidateSelection;
	<UIKeyboardCandidateListDelegate>* _delegate;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	UIKBCandidateCollectionView* _candidatesCollectionView;
	UIKeyboardCandidatePocketShadow* _pocketShadow;
	SCD_Struct_UI30 _visualStyling;
	UIKeyboardCandidateLogButton* _logButton;

}

@property (assign,nonatomic) <UIKeyboardCandidateListDelegate> * delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) <UIKeyboardCandidateList> * candidateList; 
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                   //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,retain) UIKBCandidateCollectionView * candidatesCollectionView;              //@synthesize candidatesCollectionView=_candidatesCollectionView - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * pocketShadow;                      //@synthesize pocketShadow=_pocketShadow - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI30 visualStyling;                                       //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) BOOL usesCandidateSelection;                                         //@synthesize usesCandidateSelection=_usesCandidateSelection - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateLogButton * logButton;                            //@synthesize logButton=_logButton - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(void)_setRenderConfig:(id)arg1 ;
-(BOOL)hasCandidates;
-(BOOL)usesCandidateSelection;
-(BOOL)hasNextPage;
-(void)setUsesCandidateSelection:(BOOL)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI30)arg1 ;
-(id)_inheritedRenderConfig;
-(SCD_Struct_UI30)visualStyling;
-(void)updatePocketShadowForKeyplane:(id)arg1 ;
-(id)candidates;
-(id)candidatesCollectionView;
-(id)logButton;
-(id)pocketShadow;
-(void)setPocketShadow:(id)arg1 ;
-(void)reloadDataByAppendingAtEnd:(BOOL)arg1 ;
-(unsigned)dummyCellsCount;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5 ;
-(void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCandidatesCollectionView:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned)arg1 ;
-(void)showCandidate:(id)arg1 ;
-(void)showNextCandidate;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned)selectedSortIndex;
-(BOOL)hasPreviousPage;
-(void)jumpToCompositions;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)candidateList;
-(void)setLogButton:(id)arg1 ;
@end

