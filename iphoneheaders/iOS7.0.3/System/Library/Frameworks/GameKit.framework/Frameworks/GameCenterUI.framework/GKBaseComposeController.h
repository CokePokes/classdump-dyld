/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLoadableContentViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UIScrollView, NSArray, GKTextView, UIView, GKContiguousContainerView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {

	UIScrollView* _backgroundView;
	NSArray* _composeHeaderFields;
	GKTextView* _messageField;
	UIView* _intendedFirstResponder;
	GKContiguousContainerView* _headerFieldContainer;
	float _scrollContentInsetAdjustY;
	CGRect _lastKnownKeyboardFrame;

}

@property (nonatomic,retain) UIScrollView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * composeHeaderFields;                                 //@synthesize composeHeaderFields=_composeHeaderFields - In the implementation block
@property (nonatomic,retain) GKTextView * messageField;                                     //@synthesize messageField=_messageField - In the implementation block
@property (assign,nonatomic) UIView * intendedFirstResponder;                               //@synthesize intendedFirstResponder=_intendedFirstResponder - In the implementation block
@property (assign,nonatomic) CGRect lastKnownKeyboardFrame;                                 //@synthesize lastKnownKeyboardFrame=_lastKnownKeyboardFrame - In the implementation block
@property (nonatomic,retain) GKContiguousContainerView * headerFieldContainer;              //@synthesize headerFieldContainer=_headerFieldContainer - In the implementation block
@property (assign,nonatomic) float scrollContentInsetAdjustY;                               //@synthesize scrollContentInsetAdjustY=_scrollContentInsetAdjustY - In the implementation block
-(void)didEnterLoadingState;
-(void)didEnterLoadedState;
-(void)setIntendedFirstResponder:(id)arg1 ;
-(void)keyboardWillHideShow:(id)arg1 ;
-(id)headerFieldContainer;
-(void)setLastKnownKeyboardFrame:(CGRect)arg1 ;
-(void)_adjustContentInsetForShowingKeyboard:(BOOL)arg1 ;
-(id)viewMetricsForContainerView:(id)arg1 ;
-(id)messageField;
-(void)messageFieldTextDidChange;
-(void)_scrollSelectedTextToVisible;
-(id)intendedFirstResponder;
-(void)setComposeHeaderFields:(id)arg1 ;
-(void)setMessageFieldText:(id)arg1 ;
-(id)composeHeaderFields;
-(void)setMessageField:(id)arg1 ;
-(CGRect)lastKnownKeyboardFrame;
-(void)setHeaderFieldContainer:(id)arg1 ;
-(float)scrollContentInsetAdjustY;
-(void)setScrollContentInsetAdjustY:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)updateViewConstraints;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
@end

