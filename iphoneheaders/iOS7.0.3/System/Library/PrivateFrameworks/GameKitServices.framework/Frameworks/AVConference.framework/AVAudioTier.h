/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AVAudioPayload;

@interface AVAudioTier : NSObject {

	unsigned long networkBitrate;
	unsigned long audioBitrate;
	unsigned long packetsPerBundle;
	AVAudioPayload* payload;

}

@property (readonly) unsigned long networkBitrate; 
@property (readonly) unsigned long audioBitrate; 
@property (readonly) unsigned long packetsPerBundle; 
@property (readonly) AVAudioPayload * payload; 
-(id)payload;
-(unsigned long)packetsPerBundle;
-(unsigned long)audioBitrate;
-(unsigned long)networkBitrate;
-(id)initWithNetworkBitrate:(unsigned long)arg1 audioBitrate:(unsigned long)arg2 packetsPerBundle:(unsigned long)arg3 payload:(id)arg4 ;
@end

