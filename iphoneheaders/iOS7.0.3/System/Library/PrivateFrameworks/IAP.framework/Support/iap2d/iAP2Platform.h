/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface iAP2Platform : NSObject {

	bool _IAPLoggingEnabled;

}

@property (nonatomic,readonly) bool IAPLoggingEnabled;              //@synthesize IAPLoggingEnabled=_IAPLoggingEnabled - In the implementation block
+(id)GetInstance;
+(id)accessoryHomeDirectory;
+(bool)IsiPad;
-(bool)IAPLoggingEnabled;
-(bool)SupportsDisplayPort;
-(bool)SupportRestoreVolumeOnExit;
-(bool)SupportNestedPlaylist;
-(bool)SupportsGeniusMixes;
-(bool)SupportsITunesU;
-(bool)SupportsVideoBrowsing;
-(bool)SupportsDisplayPortToHDMI;
-(bool)SupportsApplicationAutolaunch;
-(bool)SupportsAccessibilityOverIap;
-(bool)SupportsAccessibilityPreference;
-(bool)SupportsAccessibilityAssistiveTouch;
-(bool)SupportsGeniusPlaylist;
-(bool)HasE75;
-(bool)HasVideoOut;
-(bool)HasLineIn;
-(bool)HasLineOut;
-(bool)HasUSBDigitalAudioIn;
-(bool)HasUSBDigitalAudioOut;
-(bool)SupportsUSBHostMode;
-(bool)SupportsUSBHostModeAudioOutput;
-(bool)SupportsUSBHostModeAudioInput;
-(void)dealloc;
-(id)init;
-(id)OSVersion;
@end

