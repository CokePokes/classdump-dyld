/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureDevice.h>

@class NSDictionary, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {

	NSDictionary* _deviceProperties;
	BOOL _levelMeteringEnabled;
	BOOL _isConnected;
	NSString* _localizedName;
	OpaqueCMClockRef _deviceClock;

}
+(id)_devices;
-(id)devicePropertiesDictionary;
-(BOOL)isConnected;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(id)modelID;
-(BOOL)hasMediaType:(id)arg1 ;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(BOOL)isInUseByAnotherApplication;
-(OpaqueCMClockRef)deviceClock;
-(void)audioInputDevicesDidChangeHandler:(id)arg1 ;
-(void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)localizedName;
-(id)initWithProperties:(id)arg1 ;
-(id)uniqueID;
@end

