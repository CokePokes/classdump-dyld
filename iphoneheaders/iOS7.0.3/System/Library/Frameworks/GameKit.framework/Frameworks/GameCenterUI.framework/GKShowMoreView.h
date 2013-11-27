/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class GKLabel, NSLayoutConstraint, UICollectionView;

@interface GKShowMoreView : UICollectionReusableView {

	BOOL _showShowAll;
	SEL _showMoreAction;
	GKLabel* _label;
	int _sectionIndex;
	NSLayoutConstraint* _horizontalContraint;
	NSLayoutConstraint* _verticalContraint;
	int _numberToShow;
	UICollectionView* _collectionView;
	float _textAlignmentOffset;

}

@property (assign,nonatomic) SEL showMoreAction;                                    //@synthesize showMoreAction=_showMoreAction - In the implementation block
@property (nonatomic,retain) GKLabel * label;                                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int sectionIndex;                                      //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalContraint;              //@synthesize horizontalContraint=_horizontalContraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalContraint;                //@synthesize verticalContraint=_verticalContraint - In the implementation block
@property (assign,nonatomic) BOOL showShowAll;                                      //@synthesize showShowAll=_showShowAll - In the implementation block
@property (assign,nonatomic) int numberToShow;                                      //@synthesize numberToShow=_numberToShow - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                     //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) float textAlignmentOffset;                             //@synthesize textAlignmentOffset=_textAlignmentOffset - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setShowMoreAction:(SEL)arg1 ;
-(void)setHorizontalContraint:(id)arg1 ;
-(void)setTextAlignmentOffset:(float)arg1 ;
-(void)updateLabel;
-(SEL)showMoreAction;
-(id)horizontalContraint;
-(id)verticalContraint;
-(void)setVerticalContraint:(id)arg1 ;
-(BOOL)showShowAll;
-(void)setShowShowAll:(BOOL)arg1 ;
-(int)numberToShow;
-(void)setNumberToShow:(int)arg1 ;
-(float)textAlignmentOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)collectionView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setCollectionView:(id)arg1 ;
-(int)sectionIndex;
-(void)setSectionIndex:(int)arg1 ;
@end

