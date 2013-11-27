/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UITableViewController;

@interface UITableViewControllerKeyboardSupport : NSObject {

	UITableViewController* _tableViewController;
	float _adjustmentForKeyboard;
	unsigned _viewIsDisappearing : 1;
	unsigned _registeredForNotifications : 1;

}

@property (assign,nonatomic) float adjustmentForKeyboard;                  //@synthesize adjustmentForKeyboard=_adjustmentForKeyboard - In the implementation block
@property (assign,nonatomic) BOOL viewIsDisappearing; 
@property (assign,nonatomic) BOOL registeredForNotifications; 
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setViewIsDisappearing:(BOOL)arg1 ;
-(BOOL)viewIsDisappearing;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(BOOL)registeredForNotifications;
-(id)initWithTableViewController:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(float)adjustmentForKeyboard;
-(void)setAdjustmentForKeyboard:(float)arg1 ;
@end

