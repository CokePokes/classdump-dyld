/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WDShading, WDBorder;

@interface WDTableCellDescriptor : NSObject {

	WDShading* mShading;
	WDBorder* mTopBorder;
	WDBorder* mLeftBorder;
	WDBorder* mBottomBorder;
	WDBorder* mRightBorder;
	WDBorder* mDiagonalUpBorder;
	WDBorder* mDiagonalDownBorder;
	short mWidth;
	int mWidthType;
	short mTopMargin;
	int mTopMarginType;
	short mBottomMargin;
	int mBottomMarginType;
	short mLeftMargin;
	int mLeftMarginType;
	short mRightMargin;
	int mRightMarginType;
	int mVerticalAlignment;
	unsigned mShadingOverridden : 1;
	unsigned mTopBorderOverridden : 1;
	unsigned mLeftBorderOverridden : 1;
	unsigned mBottomBorderOverridden : 1;
	unsigned mRightBorderOverridden : 1;
	unsigned mDiagonalUpBorderOverridden : 1;
	unsigned mDiagonalDownBorderOverridden : 1;
	unsigned mWidthTypeOverridden : 1;
	unsigned mTopMarginOverridden : 1;
	unsigned mTopMarginTypeOverridden : 1;
	unsigned mBottomMarginOverridden : 1;
	unsigned mBottomMarginTypeOverridden : 1;
	unsigned mLeftMarginOverridden : 1;
	unsigned mLeftMarginTypeOverridden : 1;
	unsigned mRightMarginOverridden : 1;
	unsigned mRightMarginTypeOverridden : 1;
	unsigned mVerticalAlignmentOverridden : 1;
	unsigned mVerticallyMergedCell : 1;
	unsigned mVerticallyMergedCellOverridden : 1;
	unsigned mFirstInSetOfVerticallyMergedCells : 1;
	unsigned mFirstInSetOfVerticallyMergedCellsOverridden : 1;
	unsigned mNoWrap : 1;
	unsigned mNoWrapOverridden : 1;

}
-(void)setWidth:(short)arg1 ;
-(void)setRightMargin:(short)arg1 ;
-(short)leftMargin;
-(short)rightMargin;
-(short)topMargin;
-(short)bottomMargin;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isShadingOverridden;
-(id)shading;
-(BOOL)isBottomBorderOverridden;
-(id)bottomBorder;
-(void)setTopMargin:(short)arg1 ;
-(void)setLeftMargin:(short)arg1 ;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(BOOL)isVerticalAlignmentOverridden;
-(int)verticalAlignment;
-(BOOL)isWidthTypeOverridden;
-(int)widthType;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setLeftBorder:(id)arg1 ;
-(void)setRightBorder:(id)arg1 ;
-(void)setTopBorder:(id)arg1 ;
-(void)setBottomBorder:(id)arg1 ;
-(void)setBottomMargin:(short)arg1 ;
-(void)setWidthType:(int)arg1 ;
-(void)setTopMarginType:(int)arg1 ;
-(void)setBottomMarginType:(int)arg1 ;
-(void)setLeftMarginType:(int)arg1 ;
-(void)setRightMarginType:(int)arg1 ;
-(void)setVerticallyMergedCell:(BOOL)arg1 ;
-(void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1 ;
-(BOOL)isDiagonalDownBorderOverridden;
-(id)diagonalDownBorder;
-(BOOL)isDiagonalUpBorderOverridden;
-(id)diagonalUpBorder;
-(BOOL)isTopMarginTypeOverridden;
-(int)topMarginType;
-(BOOL)isLeftMarginTypeOverridden;
-(int)leftMarginType;
-(BOOL)isBottomMarginTypeOverridden;
-(int)bottomMarginType;
-(BOOL)isRightMarginTypeOverridden;
-(int)rightMarginType;
-(BOOL)isVerticallyMergedCellOverridden;
-(BOOL)verticallyMergedCell;
-(BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
-(BOOL)firstInSetOfVerticallyMergedCells;
-(void)setShading:(id)arg1 ;
-(void)setShadingOverridden:(BOOL)arg1 ;
-(void)setTopBorderOverridden:(BOOL)arg1 ;
-(void)setLeftBorderOverridden:(BOOL)arg1 ;
-(void)setBottomBorderOverridden:(BOOL)arg1 ;
-(void)setRightBorderOverridden:(BOOL)arg1 ;
-(void)setDiagonalUpBorder:(id)arg1 ;
-(void)setDiagonalUpBorderOverridden:(BOOL)arg1 ;
-(void)setDiagonalDownBorder:(id)arg1 ;
-(void)setDiagonalDownBorderOverridden:(BOOL)arg1 ;
-(void)setWidthTypeOverridden:(BOOL)arg1 ;
-(void)setTopMarginOverridden:(BOOL)arg1 ;
-(void)setTopMarginTypeOverridden:(BOOL)arg1 ;
-(void)setBottomMarginOverridden:(BOOL)arg1 ;
-(void)setBottomMarginTypeOverridden:(BOOL)arg1 ;
-(void)setLeftMarginOverridden:(BOOL)arg1 ;
-(void)setLeftMarginTypeOverridden:(BOOL)arg1 ;
-(void)setRightMarginOverridden:(BOOL)arg1 ;
-(void)setRightMarginTypeOverridden:(BOOL)arg1 ;
-(void)setVerticalAlignmentOverridden:(BOOL)arg1 ;
-(void)setVerticallyMergedCellOverridden:(BOOL)arg1 ;
-(void)setFirstInSetOfVerticallyMergedCellsOverridden:(BOOL)arg1 ;
-(BOOL)isNoWrapOverridden;
-(void)setNoWrapOverridden:(BOOL)arg1 ;
-(BOOL)noWrap;
-(void)setNoWrap:(BOOL)arg1 ;
@end

