/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@interface SBVoiceControlAlert : SBAlert {

	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	}  _voiceControlFlags;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;

}
+(id)pendingOrActiveAlert;
+(BOOL)shouldEnterVoiceControl;
+(BOOL)resetVoiceControlIfNecessary:(BOOL)arg1 ;
+(void)unregisterForAlerts;
+(void)bluetoothDeviceRequestedVoiceControl:(id)arg1 ;
+(void)bluetoothDeviceTerminatedVoiceControl:(id)arg1 ;
+(void)setNextRecognitionAudioInputPaths:(id)arg1 ;
+(BOOL)_bluetoothDevicesPickable;
+(void)_configureSession:(id)arg1 forAlert:(id)arg2 ;
+(void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(BOOL)arg2 ;
+(void)registerForAlerts;
-(void)_proximityChanged:(id)arg1 ;
-(void)cancelIfNotActivated;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(double)autoDimTime;
-(BOOL)allowsEventOnlySuspension;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)initFromMenuButton;
-(id)initFromWiredHeadsetButton;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)arg1 ;
-(void)_resign;
-(id)initFromBluetoothDevice:(id)arg1 ;
-(void)_workspaceActivate;
-(void)_makeActive;
-(void)_setRoutingAttributesForWiredHeadset:(BOOL)arg1 ;
-(void)_prime;
-(void)activateWhenReady;
-(void)dealloc;
-(id)init;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2 ;
-(void)setExpectsFaceContact:(BOOL)arg1 ;
-(void)deactivate;
-(void)activate;
-(void)cancel;
-(BOOL)handleMenuButtonTap;
-(BOOL)recognitionSessionWillBeginAction:(id)arg1 ;
-(id)_session;
@end

