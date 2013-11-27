/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UIModalViewDelegate;
@class , UILabel, UIToolbar, UIWindow, NSMutableArray, UIView, NSString;

@interface UIModalView : UIView <UITextFieldDelegate> {

	<UIModalViewDelegate>* _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyTextLabel;
	UILabel* _taglineTextLabel;
	float _startX;
	float _startY;
	id _context;
	int _cancelButton;
	int _defaultButton;
	int _firstOtherButton;
	UIToolbar* _toolbar;
	UIWindow* _originalWindow;
	UIWindow* _dimWindow;
	int _suspendTag;
	int _dismissButtonIndex;
	float _bodyTextHeight;
	NSMutableArray* _buttons;
	NSMutableArray* _textFields;
	UIView* _keyboard;
	UIView* _table;
	UIView* _dimView;
	UIView* _sheetView;
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateCancel : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateDidDismiss : 1;
		unsigned popupFromPoint : 1;
		unsigned extra : 20;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
	}  _modalViewFlags;

}

@property (assign,nonatomic) BOOL groupsTextFields; 
@property (assign,nonatomic) <UIModalViewDelegate> * delegate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) int numberOfButtons; 
@property (assign,nonatomic) int cancelButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
+(void)noteOrientationChangingTo:(int)arg1 ;
+(id)_popupAlertBackground;
+(id)visibleAlert;
+(CGSize)minimumSize;
+(id)topMostAlert;
+(BOOL)atLeastOneAlertVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(int)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2 ;
-(int)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(int)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)context;
-(BOOL)canBecomeFirstResponder;
-(id)title;
-(void)setContext:(id)arg1 ;
-(int)numberOfRows;
-(BOOL)_isAnimating;
-(id)message;
-(int)defaultButtonIndex;
-(void)layout;
-(id)textFieldAtIndex:(int)arg1 ;
-(float)_maxHeight;
-(id)defaultButton;
-(void)setDefaultButton:(id)arg1 ;
-(id)_defaultButton;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)userDidCancelPopoverView:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setMessage:(id)arg1 ;
-(BOOL)isVisible;
-(void)dismiss;
-(id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(void)setNumberOfRows:(int)arg1 ;
-(void)popupAlertAnimated:(BOOL)arg1 ;
-(void)setTitleMaxLineCount:(int)arg1 ;
-(int)numberOfButtons;
-(void)setRunsModal:(BOOL)arg1 ;
-(void)setDefaultButtonIndex:(int)arg1 ;
-(id)textField;
-(id)tableView;
-(id)keyboard;
-(id)buttonTitleAtIndex:(int)arg1 ;
-(id)_addButtonWithTitleText:(id)arg1 ;
-(void)_setDefaultButton:(id)arg1 ;
-(BOOL)requiresPortraitOrientation;
-(void)setAlertSheetStyle:(int)arg1 ;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_alertSheetTextFieldReturn:(id)arg1 ;
-(int)textFieldCount;
-(id)addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(void)_buttonClicked:(id)arg1 ;
-(int)_currentOrientation;
-(id)buttons;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(BOOL)_needsKeyboard;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)_cancelAnimated:(BOOL)arg1 ;
-(void)_temporarilyHideAnimated:(BOOL)arg1 ;
-(BOOL)_canShowAlerts;
-(void)_layoutIfNeeded;
-(void)_growAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_cleanupAfterPopupAnimation;
-(void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_setupInitialFrame;
-(void)_performPopup:(BOOL)arg1 ;
-(void)_repopup;
-(void)_hideAnimated:(BOOL)arg1 ;
-(void)_performPopoutAnimationAnimated:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_rotatingAnimationDidStop:(id)arg1 ;
-(void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_appSuspended:(id)arg1 ;
-(void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2 ;
-(void)_setAlertSheetStyleFromButtonBar:(id)arg1 ;
-(void)_presentSheetStartingFromYCoordinate:(double)arg1 ;
-(void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2 ;
-(id)_dimView;
-(void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_setupTitleStyle;
-(float)_titleHorizontalInset;
-(float)_buttonHeight;
-(float)_titleVerticalTopInset;
-(float)_titleVerticalBottomInset;
-(float)_bottomVerticalInset;
-(void)_truncateViewHeight:(id)arg1 toFitInFrame:(CGRect)arg2 withMinimumHeight:(float)arg3 ;
-(void)presentSheetFromAboveView:(id)arg1 ;
-(void)presentSheetFromBehindView:(id)arg1 ;
-(void)_prepareToBeReplaced;
-(BOOL)groupsTextFields;
-(void)setGroupsTextFields:(BOOL)arg1 ;
-(void)_createTitleLabelIfNeeded;
-(void)setBodyText:(id)arg1 ;
-(void)setTaglineText:(id)arg1 ;
-(id)bodyText;
-(int)titleMaxLineCount;
-(void)setBodyTextMaxLineCount:(int)arg1 ;
-(int)bodyMaxLineCount;
-(void)_setTextFieldsHidden:(BOOL)arg1 ;
-(void)setDestructiveButton:(id)arg1 ;
-(id)destructiveButton;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(id)_addButtonWithTitle:(id)arg1 ;
-(int)buttonCount;
-(BOOL)_isSBAlert;
-(void)setTableShouldShowMinimumContent:(BOOL)arg1 ;
-(BOOL)tableShouldShowMinimumContent;
-(BOOL)_manualKeyboardIsVisible;
-(void)setShowsOverSpringBoardAlerts:(BOOL)arg1 ;
-(BOOL)showsOverSpringBoardAlerts;
-(void)_repopupNoAnimation;
-(BOOL)_dimsBackground;
-(BOOL)isBodyTextTruncated;
-(void)popupAlertAnimated:(BOOL)arg1 fromBarButtonItem:(id)arg2 ;
-(void)presentSheetInView:(id)arg1 ;
-(void)presentSheetToAboveView:(id)arg1 ;
-(void)setDimView:(id)arg1 ;
-(void)_slideSheetOut:(BOOL)arg1 ;
-(CGSize)backgroundSize;
-(int)alertSheetStyle;
-(void)setDimsBackground:(BOOL)arg1 ;
-(BOOL)dimsBackground;
-(void)setSuspendTag:(int)arg1 ;
-(int)suspendTag;
-(void)setBlocksInteraction:(BOOL)arg1 ;
-(BOOL)blocksInteraction;
-(BOOL)runsModal;
-(CGRect)titleRect;
-(int)numberOfLinesInTitle;
-(void)presentSheetFromButtonBar:(id)arg1 ;
-(id)bodyTextView;
-(id)taglineTextView;
-(void)_prepareForDisplay;
-(void)replaceAlert:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(void)_setFirstOtherButtonIndex:(int)arg1 ;
-(int)firstOtherButtonIndex;
@end

