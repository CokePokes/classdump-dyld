/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@class SBStarkScreenController, SBAlertManager;

@interface SBStarkWorkspaceTransaction : SBWorkspaceTransaction <SBAlertManagerObserver> {

	SBStarkScreenController* _starkScreenController;
	SBAlertManager* _starkScreenAlertManager;
	SBAlertManager* _mainScreenAlertManager;

}

@property (nonatomic,@dynamic,readonly) SBAlertManager * mainScreenAlertManager; 
@property (nonatomic,readonly) SBStarkScreenController * starkScreenController; 
@property (nonatomic,readonly) SBAlertManager * starkScreenAlertManager;                      //@synthesize starkScreenAlertManager=_starkScreenAlertManager - In the implementation block
-(id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 ;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(id)starkScreenAlertManager;
-(id)starkScreenController;
-(BOOL)selfStarkAlertWillActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfStarkAlertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfStarkAlertDidDeactivate:(id)arg1 ;
-(BOOL)selfStarkAlertWillDeactivate:(id)arg1 ;
-(id)mainScreenAlertManager;
-(void)dealloc;
@end

