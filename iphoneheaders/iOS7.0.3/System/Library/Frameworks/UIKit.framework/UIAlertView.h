/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UIAlertViewDelegate;
@class , UILabel, UIToolbar, UIWindow, NSMutableArray, UIView, NSMutableDictionary, NSString, UIViewController, _UIModalItem;

@interface UIAlertView : UIView {

	<UIAlertViewDelegate>* _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyTextLabel;
	UILabel* _taglineTextLabel;
	float _startY;
	CGPoint _center;
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
	UIView* _backgroundImageView;
	UIView* _contentViewNeue;
	UIView* _textFieldBackgroundView;
	UIWindow* _blurWindow;
	UIView* _backdropView;
	NSMutableDictionary* _separatorsViews;
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
		unsigned includesCancel : 1;
		unsigned useUndoStyle : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned delegateShouldEnableFirstOtherButton : 1;
		unsigned forceHorizontalButtonsLayout : 1;
		unsigned suppressKeyboardOnPopup : 1;
		unsigned keyboardShowing : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned manualKeyboardVisible : 1;
		unsigned rotatingManualKeybaord : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned forceKeyboardUse : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned alertViewStyle : 3;
		unsigned isSBAlert : 1;
		unsigned isBeingDismissed : 1;
		unsigned useLookNeue : 1;
	}  _modalViewFlags;
	NSMutableArray* _buttonTitlesNeue;
	NSString* _titleTextNeue;
	NSString* _messageTextNeue;
	UIViewController* _hostingViewControllerNeue;
	UIWindow* _windowFOrSBNeueCompatibility;
	UIView* _accessoryView;
	UIViewController* _accessoryViewController;
	BOOL _textFieldsHidden;
	_UIModalItem* _representedModalItem;

}

@property (nonatomic,copy) id complete; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) int numberOfButtons; 
@property (assign,nonatomic) int cancelButtonIndex; 
@property (nonatomic,readonly) int firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) int alertViewStyle; 
+(id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 ;
+(id)_alertViewForWindow:(id)arg1 ;
+(id)_alertWindow;
+(CGSize)minimumSize;
+(id)_popupAlertBackground:(BOOL)arg1 ;
+(BOOL)_springBoardAlertDisplayingOverApplicationAlert;
+(void)_setSpringBoardAlertDisplayingOverApplicationAlert:(BOOL)arg1 ;
+(void)applyTransformToAllAlerts:(CGAffineTransform)arg1 ;
+(id)_alertViewForSessionWithRemoteViewController:(id)arg1 ;
+(id)_remoteAlertViewWithBlock:(/*^block*/ id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setComplete:(/*^block*/ id)arg1 ;
-(/*^block*/ id)complete;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(int)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2 ;
-(int)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(int)arg1 ;
-(void)_useUndoStyle:(BOOL)arg1 ;
-(void)show;
-(BOOL)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)context;
-(BOOL)canBecomeFirstResponder;
-(void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3 ;
-(id)title;
-(void)setContext:(id)arg1 ;
-(id)titleLabel;
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
-(void)_setAccessoryView:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
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
-(void)setAlertViewStyle:(int)arg1 ;
-(id)textField;
-(id)tableView;
-(void)_keyboardDidHide:(id)arg1 ;
-(id)keyboard;
-(id)buttonTitleAtIndex:(int)arg1 ;
-(void)_passwordFieldDidChangeForItem:(id)arg1 ;
-(void)_loginFieldDidChangeForItem:(id)arg1 ;
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
-(void)_performPopup:(BOOL)arg1 ;
-(void)_repopup;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)_rotatingAnimationDidStop:(id)arg1 ;
-(void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_appSuspended:(id)arg1 ;
-(void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2 ;
-(void)_setAlertSheetStyleFromButtonBar:(id)arg1 ;
-(void)_presentSheetStartingFromYCoordinate:(double)arg1 ;
-(void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2 ;
-(void)_adjustLabelFontSizes;
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
-(void)_prepareForDisplay;
-(void)replaceAlert:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(void)_setFirstOtherButtonIndex:(int)arg1 ;
-(int)firstOtherButtonIndex;
-(id)_firstOtherButton;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3 ;
-(id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2 ;
-(id)buttonAtIndex:(int)arg1 ;
-(id)_buttonAtIndex:(int)arg1 ;
-(void)_alertSheetTextFieldDidStartEditing:(id)arg1 ;
-(id)_addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(id)_textFieldAtIndex:(int)arg1 ;
-(void)_showKeyboard:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_performPopoutAnimationAnimated:(BOOL)arg1 coveredBySpringBoardAlert:(BOOL)arg2 ;
-(void)_setAccessoryViewController:(id)arg1 ;
-(void)_keyboardHiddingAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_alertSheetTextFieldDidChange:(id)arg1 ;
-(void)_updateFrameForDisplay;
-(void)_setupKBWatcher;
-(void)_jiggleStage1AnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_performPopup:(BOOL)arg1 animationType:(int)arg2 revealedBySpringBoardAlert:(BOOL)arg3 ;
-(void)_performPopup:(BOOL)arg1 animationType:(int)arg2 ;
-(void)_jiggleStage2AnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_jiggleStage3AnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_jiggleStage4AnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_jiggleStage5AnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_jiggleStage6AnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_cleanupKBWatcher;
-(int)alertViewStyle;
-(id)_modalItemForNeueCompatibility;
-(void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2 atOffset:(float)arg3 ;
-(void)popupAlertAnimated:(BOOL)arg1 animationType:(int)arg2 ;
-(id)_representedModalItem;
-(void)_showByReplacingAlert:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateButtonTitles;
-(void)setKeyboardShowsOnPopup:(BOOL)arg1 ;
-(void)_updateKeyboardStateForPreviousResponder:(id)arg1 ;
-(void)_setDestructiveButton:(id)arg1 ;
-(id)_destructiveButton;
-(void)_showManualKBIfNecessary;
-(id)_blurMaskImageForBounds:(CGRect)arg1 ;
-(id)bodyTextLabel;
-(id)taglineTextLabel;
-(int)_alertOrientation;
-(void)willPresentModalItem:(id)arg1 ;
-(void)didPresentModalItem:(id)arg1 ;
-(BOOL)modalItem:(id)arg1 shouldDismissForButtonAtIndex:(int)arg2 ;
-(void)modalItem:(id)arg1 tappedButtonAtIndex:(int)arg2 ;
-(void)modalItem:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)modalItem:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setForceHorizontalButtonsLayout:(BOOL)arg1 ;
-(BOOL)forceHorizontalButtonsLayout;
-(void)_nukeOldTextFields;
-(id)_representedModalItemView;
-(void)_showByReplacingPreviousAlertAnimated:(BOOL)arg1 ;
-(void)_addTextEntryFieldsWithStyle:(int)arg1 ;
-(void)showWithAnimationType:(int)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(BOOL)_shouldUseUndoStyle;
-(void)_useLegacyUI:(BOOL)arg1 ;
-(void)_willRotateKeyboard;
@end

