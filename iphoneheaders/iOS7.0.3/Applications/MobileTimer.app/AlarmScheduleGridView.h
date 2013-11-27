/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSMutableArray, NSCalendar, NSDate, NSDateFormatter, UIImageView;

@interface AlarmScheduleGridView : UIView {

	UIImage* _patternImage;
	float _leftMargin;
	float _columnWidth;
	int _highlightedColumnIndex;
	NSMutableArray* _hourLabels;
	NSCalendar* _calendar;
	NSDate* _baseDate;
	NSDateFormatter* _formatter;
	UIImageView* _backgroundImageView;
	float _preRotationColumnWidth;
	float _preRotationLeftMargin;

}

@property (assign,nonatomic) float leftMargin;                                               //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) float columnWidth;                                              //@synthesize columnWidth=_columnWidth - In the implementation block
@property (assign,nonatomic) int highlightedColumnIndex;                                     //@synthesize highlightedColumnIndex=_highlightedColumnIndex - In the implementation block
@property (assign,getter=isShowingHourLabels,nonatomic) BOOL showingHourLabels; 
+(id)colorForBackground;
+(float)heightForNumberOfHalfHours:(int)arg1 ;
-(void)handleLocaleChange;
-(id)newHourLabel;
-(void)setupWithCurrentLocale;
-(void)updateHourLabelValues;
-(void)rebuildGrid;
-(BOOL)isShowingHourLabels;
-(void)setShowingHourLabels:(BOOL)arg1 ;
-(int)highlightedColumnIndex;
-(void)setHighlightedColumnIndex:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(float)columnWidth;
-(void)setColumnWidth:(float)arg1 ;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
@end

