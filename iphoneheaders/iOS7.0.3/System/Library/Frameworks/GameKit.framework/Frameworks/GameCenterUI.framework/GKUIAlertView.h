/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableDictionary;

@interface GKUIAlertView : UIAlertView <UIAlertViewDelegate, UITextFieldDelegate> {

	/*^block*/ id _dismissHandler;
	int _buttonIndexForReturnKey;
	NSMutableDictionary* _buttonHandlers;

}

@property (nonatomic,copy) id dismissHandler;                                   //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (assign,nonatomic) int buttonIndexForReturnKey;                       //@synthesize buttonIndexForReturnKey=_buttonIndexForReturnKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buttonHandlers;              //@synthesize buttonHandlers=_buttonHandlers - In the implementation block
+(id)_gkAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(/*^block*/ id)arg5 ;
+(id)alertViewWithTitle:(id)arg1 message:(id)arg2 ;
+(id)showError:(id)arg1 withTitle:(id)arg2 defaultMessage:(id)arg3 ;
-(void)setDismissHandler:(/*^block*/ id)arg1 ;
-(void)setButtonIndexForReturnKey:(int)arg1 ;
-(/*^block*/ id)dismissHandler;
-(id)buttonHandlers;
-(int)addButtonWithTitle:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(int)addCancelButtonWithTitle:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(BOOL)shouldRetainSelf;
-(void)setButtonHandlers:(id)arg1 ;
-(int)buttonIndexForReturnKey;
-(int)addCancelButtonWithTitle:(id)arg1 ;
-(void)dealloc;
-(void)show;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end

