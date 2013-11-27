/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBStarkAlertToAppWorkspaceTransaction.h>

@class SBAlert, SBApplication, SBUIAnimationController;

@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction {

	SBAlert* _fromAlert;
	SBAlert* _toAlert;
	SBApplication* _toApplication;
	SBUIAnimationController* _animation;

}
-(int)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)selfStarkAlertWillActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfStarkAlertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 alert:(id)arg4 toApplication:(id)arg5 ;
-(void)_activateAlert;
-(void)_beginAnimation;
-(id)_newAnimationControllerFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)selfStarkAlertDidDeactivate:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
@end

