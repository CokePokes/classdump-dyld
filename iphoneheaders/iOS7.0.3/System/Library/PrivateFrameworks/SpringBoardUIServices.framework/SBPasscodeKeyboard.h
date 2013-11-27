/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIKeyboard.h>

@class SBUIPasscodeLockViewWithKeyboard;

@interface SBPasscodeKeyboard : UIKeyboard {

	SBUIPasscodeLockViewWithKeyboard* _lockView;

}
-(BOOL)isActive;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)canDismiss;
-(void)minimize;
-(void)maximize;
-(id)initWithFrame:(CGRect)arg1 lockView:(id)arg2 ;
@end

