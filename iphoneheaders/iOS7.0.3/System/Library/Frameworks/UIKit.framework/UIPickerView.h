/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPickerTableViewContainerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <CoreFoundation/NSCoding.h>
#import <UIKit/UITableViewDataSource.h>

@protocol UIPickerViewDataSource, UIPickerViewDelegate;
@class NSMutableArray, UIView, , UIImageView, CALayer, UIColor;

@interface UIPickerView : UIView <UIPickerTableViewContainerDelegate, UITableViewDelegate, NSCoding, UITableViewDataSource> {

	NSMutableArray* _tables;
	UIView* _topFrame;
	NSMutableArray* _dividers;
	NSMutableArray* _selectionBars;
	<UIPickerViewDataSource>* _dataSource;
	<UIPickerViewDelegate>* _delegate;
	UIView* _backgroundView;
	int _numberOfComponents;
	UIImageView* _topGradient;
	UIImageView* _bottomGradient;
	UIView* _foregroundView;
	CALayer* _maskGradientLayer;
	UIView* _topLineView;
	UIView* _bottomLineView;
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToAttributedTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
		unsigned skipsBackground : 1;
	}  _pickerViewFlags;
	BOOL _usesModernStyle;
	UIColor* _textColor;
	UIColor* _textShadowColor;
	BOOL _isInLayoutSubviews;
	BOOL _magnifierEnabled;

}

@property (assign,nonatomic) <UIPickerViewDataSource> * dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) <UIPickerViewDelegate> * delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsSelectionIndicator; 
@property (nonatomic,readonly) int numberOfComponents;                                                                   //@synthesize numberOfComponents=_numberOfComponents - In the implementation block
@property (assign,setter=_setMagnifierEnabled:,nonatomic) BOOL _magnifierEnabled;                                        //@synthesize magnifierEnabled=_magnifierEnabled - In the implementation block
@property (setter=_setUsesModernStyle:,getter=_usesModernStyle) BOOL usesModernStyle; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (assign,setter=_setInLayoutSubviews:,nonatomic) BOOL _isInLayoutSubviews;                                      //@synthesize isInLayoutSubviews=_isInLayoutSubviews - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 forInterfaceOrientation:(int)arg2 ;
+(CGSize)defaultSizeForCurrentOrientation;
+(CGSize)sizeForCurrentOrientationThatFits:(CGSize)arg1 ;
+(id)_modernCenterCellFont;
+(id)_modernNonCenterCellFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)pickerImageNamePrefix;
-(id)_orientationImageSuffix;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)_isLandscapeOrientation;
-(BOOL)_shouldDrawWithModernStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(int)numberOfComponents;
-(int)selectedRowInComponent:(int)arg1 ;
-(void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)_updateSound;
-(void)setAlpha:(float)arg1 ;
-(void)didMoveToWindow;
-(void)_updateSelectedRows;
-(void)reloadAllComponents;
-(int)_delegateNumberOfComponents;
-(void)reloadData;
-(void)reloadComponent:(int)arg1 ;
-(id)_selectionBarSuffix;
-(id)_popoverSuffix;
-(id)imageForPickerPiece:(int)arg1 ;
-(CGSize)defaultSize;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(int)columnForTableView:(id)arg1 ;
-(float)_tableRowHeight;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CATransform3D)_perspectiveTransform;
-(void)_setTextColor:(id)arg1 ;
-(float)_delegateRowHeightForComponent:(int)arg1 ;
-(void)layoutSubviews;
-(id)tableViewForColumn:(int)arg1 ;
-(int)numberOfRowsInComponent:(int)arg1 ;
-(BOOL)_drawsBackground;
-(id)_createViewForPickerPiece:(int)arg1 ;
-(float)_delegateWidthForComponent:(int)arg1 ofCount:(int)arg2 withSizeLeft:(float)arg3 ;
-(float)_wheelShift;
-(BOOL)_usesModernStyle;
-(id)createDividerWithFrame:(CGRect)arg1 ;
-(id)_createColumnWithTableFrame:(CGRect)arg1 rowHeight:(float)arg2 ;
-(id)_createTableWithFrame:(CGRect)arg1 forComponent:(int)arg2 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(id)_contentView;
-(CGRect)_selectionBarRectForHeight:(float)arg1 ;
-(BOOL)_magnifierEnabled;
-(void)_addMagnifierLinesForRowHeight:(float)arg1 ;
-(void)_resetSelectionOfTables;
-(int)_delegateNumberOfRowsInComponent:(int)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(void)_updateWithOldSize:(CGSize)arg1 newSize:(CGSize)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_sendSelectionChangedForComponent:(int)arg1 ;
-(void)_sendSelectionChangedFromTable:(id)arg1 ;
-(void)selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 ;
-(id)_textColor;
-(id)_delegateAttributedTitleForRow:(int)arg1 forComponent:(int)arg2 ;
-(id)_delegateTitleForRow:(int)arg1 forComponent:(int)arg2 ;
-(void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(BOOL)arg3 ;
-(BOOL)_soundsEnabled;
-(BOOL)_usesCheckSelection;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSoundsEnabled:(BOOL)arg1 ;
-(void)reload;
-(void)reloadDataForColumn:(int)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)scrollAnimationDuration;
-(CGSize)rowSizeForComponent:(int)arg1 ;
-(int)numberOfRowsInColumn:(int)arg1 ;
-(int)numberOfColumns;
-(id)viewForRow:(int)arg1 forComponent:(int)arg2 ;
-(void)reloadAllPickerPieces;
-(void)setShowsSelectionIndicator:(BOOL)arg1 ;
-(BOOL)showsSelectionIndicator;
-(BOOL)allowsMultipleSelection;
-(void)_setUsesCheckedSelection:(BOOL)arg1 ;
-(BOOL)_usesCheckedSelection;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(NSRange)visibleRowsForColumn:(int)arg1 ;
-(int)selectedRowForColumn:(int)arg1 ;
-(CGRect)_effectiveTableViewFrameForColumn:(int)arg1 ;
-(void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(BOOL)arg3 ;
-(void)_setMagnifierEnabled:(BOOL)arg1 ;
-(void)_setUsesModernStyle:(BOOL)arg1 ;
-(id)_highlightColor;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(BOOL)_isInLayoutSubviews;
-(void)_setInLayoutSubviews:(BOOL)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
@end

