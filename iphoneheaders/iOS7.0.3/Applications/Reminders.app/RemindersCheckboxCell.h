/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Reminders/Reminders-Structs.h>
#import <Reminders/RemindersListCell.h>
#import <Reminders/RemindersCheckboxViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol RemindersCheckboxCell, UITextViewDelegate;
@class UILabel, UIButton, RemindersCheckboxView, UIView, UILongPressGestureRecognizer, NSString, UIColor, , EKExpandingTextView, NSURL, NSDictionary;

@interface RemindersCheckboxCell : RemindersListCell <RemindersCheckboxViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {

	UILabel* _titleLabel;
	UILabel* _deadlineLabel;
	UILabel* _locationLabel;
	UILabel* _notesLabel;
	UILabel* _calendarLabel;
	UIButton* _clearButton;
	RemindersCheckboxView* _checkboxView;
	UIView* _linkHighlightView;
	UILongPressGestureRecognizer* _actionPressRecognizer;
	CGSize _titleLabelSize;
	CGSize _notesLabelSize;
	BOOL _titleLabelSizeValid;
	BOOL _notesLabelSizeValid;
	BOOL _representsHighlightedReminder;
	int _appearance;
	BOOL _completed;
	BOOL _overdue;
	BOOL _checkboxHidden;
	BOOL _checkboxEnabled;
	NSString* _title;
	NSString* _location;
	NSString* _deadline;
	NSString* _notes;
	NSString* _calendarName;
	UIColor* _calendarColor;
	int _priorityLevel;
	<RemindersCheckboxCell>* _delegate;
	<UITextViewDelegate>* _textViewDelegate;
	EKExpandingTextView* _textView;
	unsigned _positionOfDeadline;
	int _clearButtonPosition;
	float _maxLayoutHeight;
	NSURL* _actionURL;
	NSString* _matchingSearchTerm;
	int _style;
	NSDictionary* _titleAttributes;

}

@property (nonatomic,copy) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * location;                                           //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * deadline;                                           //@synthesize deadline=_deadline - In the implementation block
@property (nonatomic,copy) NSString * notes;                                              //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSString * calendarName;                                       //@synthesize calendarName=_calendarName - In the implementation block
@property (nonatomic,copy) UIColor * calendarColor;                                       //@synthesize calendarColor=_calendarColor - In the implementation block
@property (assign,nonatomic) int priorityLevel;                                           //@synthesize priorityLevel=_priorityLevel - In the implementation block
@property (assign,nonatomic) BOOL completed;                                              //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL overdue;                                                //@synthesize overdue=_overdue - In the implementation block
@property (assign,nonatomic,__weak) <RemindersCheckboxCell> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) <UITextViewDelegate> * textViewDelegate;              //@synthesize textViewDelegate=_textViewDelegate - In the implementation block
@property (nonatomic,readonly) EKExpandingTextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) unsigned positionOfDeadline;                                 //@synthesize positionOfDeadline=_positionOfDeadline - In the implementation block
@property (assign,nonatomic) int clearButtonPosition;                                     //@synthesize clearButtonPosition=_clearButtonPosition - In the implementation block
@property (assign,nonatomic) float maxLayoutHeight;                                       //@synthesize maxLayoutHeight=_maxLayoutHeight - In the implementation block
@property (getter=isChecked,nonatomic,readonly) BOOL checked; 
@property (assign,nonatomic) BOOL checkboxHidden;                                         //@synthesize checkboxHidden=_checkboxHidden - In the implementation block
@property (assign,nonatomic) BOOL checkboxEnabled;                                        //@synthesize checkboxEnabled=_checkboxEnabled - In the implementation block
@property (nonatomic,copy) NSURL * actionURL;                                             //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy) NSString * matchingSearchTerm;                                 //@synthesize matchingSearchTerm=_matchingSearchTerm - In the implementation block
@property (assign,nonatomic) int style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSDictionary * titleAttributes;                              //@synthesize titleAttributes=_titleAttributes - In the implementation block
+(float)cellHeightForTitle:(id)arg1 positionOfDeadline:(unsigned)arg2 deadlineString:(id)arg3 hasLocation:(BOOL)arg4 notes:(id)arg5 priorityLevel:(int)arg6 showsCalendar:(BOOL)arg7 width:(float)arg8 editing:(BOOL)arg9 ;
+(id)whiteColorForDetailsWithAppearance:(int)arg1 completed:(BOOL)arg2 ;
+(void)_styleDetailLabel:(id)arg1 completed:(BOOL)arg2 appearance:(int)arg3 ;
+(void)_styleNotesLabel:(id)arg1 completed:(BOOL)arg2 appearance:(int)arg3 ;
+(id)whiteColorForTitleWithAppearance:(int)arg1 completed:(BOOL)arg2 ;
+(id)_cacheKeyForTitle:(id)arg1 priorityLevel:(int)arg2 maxTextWidth:(float)arg3 lineHeight:(float)arg4 ;
+(id)_titleLabelHeightCache;
+(id)_newNotesLabel:(int)arg1 ;
+(float)_maxTextWidthForCellWidth:(float)arg1 ;
+(float)_heightForTitle:(id)arg1 priorityLevel:(int)arg2 maxTextWidth:(float)arg3 lineHeight:(float)arg4 ;
+(float)_heightForNotes:(id)arg1 maxTextWidth:(float)arg2 ;
+(id)_newDetailLabel:(int)arg1 ;
+(void)_styleTitleLabel:(id)arg1 withTitle:(id)arg2 completed:(BOOL)arg3 appearance:(int)arg4 ;
+(float)cellHeightIfCachedForTitle:(id)arg1 positionOfDeadline:(unsigned)arg2 deadlineString:(id)arg3 hasLocation:(BOOL)arg4 notes:(id)arg5 priorityLevel:(int)arg6 showsCalendar:(BOOL)arg7 width:(float)arg8 editing:(BOOL)arg9 ;
+(float)lineSpacing;
+(float)rightMargin;
+(float)topMargin;
+(float)bottomMargin;
-(void)_clearButtonTapped:(id)arg1 ;
-(void)_fontSizeChanged:(id)arg1 ;
-(void)setMatchingSearchTerm:(id)arg1 ;
-(void)setDeadline:(id)arg1 ;
-(void)setCheckboxHidden:(BOOL)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 ;
-(void)setTextViewDelegate:(id)arg1 ;
-(void)setPositionOfDeadline:(unsigned)arg1 ;
-(float)layoutHeight;
-(void)setOverdue:(BOOL)arg1 ;
-(float)maxWidthForTitle;
-(id)titleAttributes;
-(id)matchingSearchTerm;
-(id)priorityImageForLevel:(int)arg1 ;
-(void)updateLabelColors;
-(id)newDetailLabel;
-(id)newNotesLabel;
-(float)maxWidthForLabels;
-(void)_updateTextViewText;
-(void)updateCalendarLabel;
-(BOOL)overdue;
-(BOOL)isDisplayingEditControl;
-(int)clearButtonPosition;
-(CGSize)notesLabelSize;
-(CGSize)editingTitleLabelSize;
-(CGSize)titleLabelSize;
-(CGPoint)layoutTitleWithDetailHeight:(float)arg1 distanceFromLeftEdge:(float)arg2 maxContentX:(float)arg3 ;
-(void)layoutDetailLabelsStartingAtPoint:(CGPoint)arg1 deadlineHeight:(float)arg2 locationHeight:(float)arg3 hasNotesLabel:(BOOL)arg4 maxContentX:(float)arg5 ;
-(void)_tap:(id)arg1 ;
-(void)_textViewTextChanged:(id)arg1 ;
-(id)plainTextTitle;
-(void)_addTextView;
-(void)setClearButtonPosition:(int)arg1 ;
-(void)_removeTextView;
-(void)checkboxTapped;
-(void)vibrantize;
-(void)resetTextViewAttributes;
-(void)setCheckboxEnabled:(BOOL)arg1 ;
-(void)setMaxLayoutHeight:(float)arg1 ;
-(void)setActionURL:(id)arg1 ;
-(id)deadline;
-(id)textViewDelegate;
-(unsigned)positionOfDeadline;
-(float)maxLayoutHeight;
-(BOOL)checkboxHidden;
-(BOOL)checkboxEnabled;
-(void)setTitleAttributes:(id)arg1 ;
-(void)_updateClearButton;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(void)setCalendarName:(id)arg1 ;
-(id)calendarName;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(void)setStyle:(int)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(int)style;
-(id)title;
-(void)prepareForReuse;
-(void)beginEditing;
-(void)endEditing;
-(id)titleAttributedString;
-(id)location;
-(id)textView;
-(BOOL)isChecked;
-(void)setCalendarColor:(id)arg1 ;
-(id)calendarColor;
-(void)_updateTitleLabel;
-(void)setPriorityLevel:(int)arg1 ;
-(int)priorityLevel;
-(id)actionURL;
-(void).cxx_destruct;
-(void)setLocation:(id)arg1 ;
@end

