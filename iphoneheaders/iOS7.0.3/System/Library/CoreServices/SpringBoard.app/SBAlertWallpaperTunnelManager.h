/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBAlertManagerObserver.h>

@class SBAlertManager, NSMapTable, NSMutableSet;

@interface SBAlertWallpaperTunnelManager : NSObject <SBAlertManagerObserver> {

	SBAlertManager* _alertManager;
	NSMapTable* _hiderToHideeMap;
	NSMutableSet* _hiddenAlerts;

}
+(void)registerAlertManager:(id)arg1 forScreen:(id)arg2 ;
+(id)sharedInstance;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)pushTunnelToWallpaperForAlert:(id)arg1 ;
-(void)popTunnelToWallpaperForAlert:(id)arg1 ;
-(void)_setAlertManager:(id)arg1 ;
-(void)_hideAlerts:(id)arg1 onBehalfOfAlert:(id)arg2 ;
-(void)_stopHidingAlertsForAlert:(id)arg1 ;
-(void)_adjustHiddenAlerts;
-(id)dumpTunnelState;
-(void)_showAlert:(id)arg1 ;
-(void)_hideAlert:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

