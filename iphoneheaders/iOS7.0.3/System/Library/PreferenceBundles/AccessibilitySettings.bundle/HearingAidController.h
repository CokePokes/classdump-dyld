/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilityListController.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <AccessibilitySettings/CBPeripheralManagerDelegate.h>

@class NSMutableArray, CBPeripheralManager, UIAlertView, NSLock, NSString;

@interface HearingAidController : AccessibilityListController <MFMailComposeViewControllerDelegate, CBPeripheralManagerDelegate> {

	NSMutableArray* _availableDevices;
	BOOL _bluetoothAvailable;
	CBPeripheralManager* _pairingManager;
	UIAlertView* _compressingAlert;
	NSLock* deviceUpdateLock;
	NSString* availableDeviceIdentifier;

}

@property (nonatomic,retain) NSMutableArray * availableDevices;                 //@synthesize availableDevices=_availableDevices - In the implementation block
@property (nonatomic,retain) NSLock * deviceUpdateLock; 
@property (nonatomic,retain) NSString * availableDeviceIdentifier; 
-(void)beginSearching;
-(void)cleanupView;
-(void)bluetoothPowerDidChange:(id)arg1 ;
-(id)accessibilityPreferenceForSpecifier:(id)arg1 ;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(void)setAvailableDevices:(id)arg1 ;
-(void)setDeviceUpdateLock:(id)arg1 ;
-(void)emailLogs:(id)arg1 ;
-(id)availableDevices;
-(void)setBluetoothAvailable:(id)arg1 ;
-(id)bluetoothAvailable;
-(id)deviceUpdateLock;
-(id)availableDeviceIdentifier;
-(void)setAvailableDeviceIdentifier:(id)arg1 ;
-(void)setBluetoothAvailability:(BOOL)arg1 ;
-(void)refreshAvailableDevices;
-(void)_toggleHACSwitch:(BOOL)arg1 ;
-(void)_updateHACSwitchSettingWithStatus:(int)arg1 ;
-(void)viewHearingAidDetailsWithSpecifier:(id)arg1 ;
-(void)prepareHearingReporterEmail;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(id)valueForSpecifier:(id)arg1 ;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(id)compressFile:(id)arg1 ;
-(id)specifiers;
-(void)willResignActive;
-(void)willBecomeActive;
@end

