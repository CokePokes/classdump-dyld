/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSMutableDictionary;

@interface BluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BOOL _scanningInProgress;
	unsigned _scanningServiceMask;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	BTAccessoryManagerImplRef _accessoryManager;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;

}
+(id)sharedInstance;
+(int)lastInitError;
-(int)localDeviceSupportsService:(unsigned)arg1 ;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(void)resetDeviceScanning;
-(void)showPowerPrompt;
-(id)pairedDevices;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)scanForConnectableDevices:(unsigned)arg1 ;
-(void)scanForServices:(unsigned)arg1 ;
-(void)cancelPairing;
-(void)dealloc;
-(id)init;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotification:(id)arg1 ;
-(BOOL)enabled;
-(void)_powerChanged;
-(id)connectedDevices;
-(BTAccessoryManagerImplRef)_accessoryManager;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)acceptSSP:(int)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(void)startVoiceCommand:(id)arg1 ;
-(void)endVoiceCommand:(id)arg1 ;
-(BOOL)_attach:(id)arg1 ;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(void)_scanForServices:(unsigned)arg1 withMode:(int)arg2 ;
-(void)_setScanState:(int)arg1 ;
-(void)_restartScan;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(BOOL)devicePairingEnabled;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(BOOL)_onlySensorsConnected;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(void)_discoveryStateChanged;
-(void)_advertisingChanged;
-(void)setAudioConnected:(BOOL)arg1 ;
-(BOOL)isAnyoneScanning;
-(BOOL)isAnyoneAdvertising;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(BOOL)deviceScanningEnabled;
-(BOOL)deviceScanningInProgress;
-(BOOL)isDiscoverable;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)connectable;
-(void)setConnectable:(BOOL)arg1 ;
-(id)connectingDevices;
-(BOOL)audioConnected;
-(void)enableTestMode;
-(BOOL)setPowered:(BOOL)arg1 ;
-(BOOL)available;
-(BOOL)powered;
-(void)_postNotification:(id)arg1 ;
-(BOOL)connected;
-(int)powerState;
@end

