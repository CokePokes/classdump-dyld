/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WiFiPicker/WiFiPicker-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WiFiPicker/WFWiFiManagerDelegate.h>

@class NSMutableArray, NSTimer, UITableView, NSString, NSDictionary, SBAlertItem;

@interface WFWiFiAlertItem : SBAlertItem <UITableViewDelegate, UITableViewDataSource, WFWiFiManagerDelegate> {

	NSMutableArray* _networks;
	NSTimer* _scanTimer;
	UITableView* _table;
	CGSize _size;
	int _joinRow;
	NSString* _password;
	NSDictionary* _joinDict;
	SBAlertItem* _childAlert;
	BOOL _selectingRow;
	BOOL _storedPassword;
	BOOL _passwordFailed;
	BOOL _sentResponse;
	NSTimer* _btScanTimer;
	BOOL _btPANSupported;

}
-(void)deviceConnectionFailedHandler:(id)arg1 ;
-(void)_dismissCurrentChildAlert;
-(void)_finishBTScanning;
-(void)_alertViewDismissed:(id)arg1 automatically:(BOOL)arg2 ;
-(void)childAlertDismissed:(id)arg1 ;
-(void)dismissAlertsForApplicationTransition;
-(void)wifiManager:(id)arg1 scanCompleted:(id)arg2 ;
-(void)wifiManager:(id)arg1 joinCompleted:(int)arg2 ;
-(void)passwordEntered:(id)arg1 ;
-(void)sspRequestAllowed:(BOOL)arg1 ;
-(void)registerBTNotificationHandlers;
-(void)_setDelegateForAlert:(id)arg1 delegate:(id)arg2 ;
-(void)stopBTScan;
-(void)scan;
-(int)_joinRow;
-(void)startBTScan:(BOOL)arg1 ;
-(void)_enableTable;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)authenticationRequestHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)deviceDiscoveredHandler:(id)arg1 ;
-(void)deviceUpdatedHandler:(id)arg1 ;
-(void)deviceRemovedHandler:(id)arg1 ;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)setNetworks:(id)arg1 ;
-(void)performUnlockAction;
-(void)willActivate;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)dismissOnLock;
-(void)dismiss:(int)arg1 ;
@end

