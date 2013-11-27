/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@protocol PHVoicemailListMaskViewDelegate;
@class UIControl, UIView, NSArray, UITableView, PHVoicemailCell, ;

@interface PHVoicemailListMaskView : UIView {

	UIControl* _topGrayView;
	UIView* _topLineView;
	UIControl* _bottomGrayView;
	UIView* _bottomLineView;
	NSArray* _cellViewConstraints;
	NSArray* _lineConstraints;
	UITableView* _tableView;
	BOOL _showingGrayLayer;
	PHVoicemailCell* _cellToShow;
	<PHVoicemailListMaskViewDelegate>* _listMaskViewDelegate;

}

@property (nonatomic,retain) PHVoicemailCell * cellToShow;                                //@synthesize cellToShow=_cellToShow - In the implementation block
@property (assign,nonatomic) BOOL showingGrayLayer;                                       //@synthesize showingGrayLayer=_showingGrayLayer - In the implementation block
@property (assign) <PHVoicemailListMaskViewDelegate> * listMaskViewDelegate;              //@synthesize listMaskViewDelegate=_listMaskViewDelegate - In the implementation block
-(void)setListMaskViewDelegate:(id)arg1 ;
-(void)setShowingGrayLayer:(BOOL)arg1 ;
-(void)setCellToShow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tableView:(id)arg2 ;
-(void)recalculateMaskPosition;
-(id)cellToShow;
-(BOOL)showingGrayLayer;
-(void)_grayViewTouchUpInside:(id)arg1 withEvent:(id)arg2 ;
-(id)listMaskViewDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)updateConstraints;
@end

