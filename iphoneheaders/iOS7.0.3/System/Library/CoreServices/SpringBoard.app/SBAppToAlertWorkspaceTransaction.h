/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerDelegate.h>

@class SBApplication, BKSApplicationActivationAssertion, SBAlert, SBUIAnimationController;

@interface SBAppToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate> {

	SBApplication* _topApplication;
	BKSApplicationActivationAssertion* _topApplicationActivationAssertion;
	BOOL _topApplicationSuppressesSpringBoardStatusBar;
	SBAlert* _activatingAlert;
	SBUIAnimationController* _animation;
	/*^block*/ id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
	BOOL _suspendWorkspace;

}

@property (nonatomic,copy) id alertActivationBlock;              //@synthesize alertActivationBlock=_alertActivationBlock - In the implementation block
-(id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 alert:(id)arg3 overTopApplication:(id)arg4 ;
-(void)setAlertActivationBlock:(/*^block*/ id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_transactionComplete;
-(BOOL)selfAlertWillActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(/*^block*/ id)alertActivationBlock;
-(void)_commit;
-(void)dealloc;
-(id)debugDescription;
@end

