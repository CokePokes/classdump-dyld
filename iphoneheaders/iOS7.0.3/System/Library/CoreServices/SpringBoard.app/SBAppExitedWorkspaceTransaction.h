/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBAppToAppWorkspaceTransaction.h>

@interface SBAppExitedWorkspaceTransaction : SBAppToAppWorkspaceTransaction
-(id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 from:(id)arg3 to:(id)arg4 activationHandler:(/*^block*/ id)arg5 ;
-(int)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(id)_setupAnimationFrom:(id)arg1 to:(id)arg2 ;
-(void)_kickOffActivation;
@end

