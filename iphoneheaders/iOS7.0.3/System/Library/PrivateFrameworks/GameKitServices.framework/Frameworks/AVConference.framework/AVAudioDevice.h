/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSNumber;

@interface AVAudioDevice : NSObject {

	NSString* _deviceName;
	NSNumber* _deviceID;
	BOOL _inputAvailable;
	BOOL _outputAvailable;
	BOOL _isLineIn;

}

@property (nonatomic,readonly) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL inputAvailable;                //@synthesize inputAvailable=_inputAvailable - In the implementation block
@property (nonatomic,readonly) BOOL outputAvailable;               //@synthesize outputAvailable=_outputAvailable - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)createName;
-(BOOL)isSomethingConnectedToJack;
-(id)deviceID;
-(id)initWithDeviceID:(id)arg1 ;
-(void)createNameForScope:(unsigned long)arg1 ;
-(BOOL)isValidDevice;
-(BOOL)isValidInputDevice;
-(BOOL)isStreamAvailableForScope:(unsigned long)arg1 ;
-(id)deviceName;
-(BOOL)inputAvailable;
-(BOOL)outputAvailable;
@end

