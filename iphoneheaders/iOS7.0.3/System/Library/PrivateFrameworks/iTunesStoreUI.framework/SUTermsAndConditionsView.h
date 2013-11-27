/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIAlertView, SUSubtitledButton, SUClientInterface, SULinkControl;

@interface SUTermsAndConditionsView : UIView {

	UIAlertView* _accountButtonAlert;
	SUSubtitledButton* _button;
	SUClientInterface* _clientInterface;
	BOOL _hideAccountButton;
	float _rightMargin;
	int _style;
	SULinkControl* _termsAndConditionsControl;
	SUClientInterface* clientInterface;

}

@property (nonatomic,retain) SUClientInterface * clientInterface; 
@property (assign,nonatomic) BOOL hideAccountButton;                           //@synthesize hideAccountButton=_hideAccountButton - In the implementation block
@property (assign,nonatomic) float rightMargin;                                //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) int style;                                        //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(int)style;
-(void)sizeToFit;
-(void)setRightMargin:(float)arg1 ;
-(id)clientInterface;
-(float)rightMargin;
-(void)_updateButton;
-(id)_button;
-(void)setClientInterface:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(void)setHideAccountButton:(BOOL)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_destroyButton;
-(int)_linkStyleForStyle:(int)arg1 ;
-(float)_buttonHeightForStyle:(int)arg1 ;
-(id)_termsAndConditionsControl;
-(void)_clearButtonSelection:(id)arg1 ;
-(void)_termsAndConditionsAction:(id)arg1 ;
-(BOOL)hideAccountButton;
@end

