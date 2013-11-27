/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVConference/AVConference-Structs.h>
@class NSData, NSString, NSDictionary, NSMutableDictionary, SDPMini;

@interface VCCallInfo : NSObject {

	unsigned long callID;
	NSData* connectionData;
	NSData* relayConnectionData;
	NSString* participantID;
	NSDictionary* relayRequest;
	NSMutableDictionary* relayRequestResponse;
	NSDictionary* relayUpdate;
	unsigned long auNumber;
	unsigned long maxBandwidth;
	int cellTech;
	BOOL videoIsPaused;
	BOOL isVideoQualityDegraded;
	double lastGoodVideoQualityTime;
	double lastBadVideoQualityTime;
	double lastVideoQualityDegradedSwitchTime;
	NSString* sdpString;
	SDPMini* sdp;
	BOOL is4x;
	BOOL isIOS;
	BOOL usesInitialFECImplementation;
	BOOL supportsDynamicMaxBitrate;
	BOOL supportsSpecialAACBundle;
	BOOL supportsSKEOptimization;
	unsigned long visibleRectCropping;
	BOOL useNewPLCalc;
	double firstDegradedMeasure;
	double videoDegradedThreshold;
	unsigned char u8Version;

}

@property (assign) unsigned long callID; 
@property (retain) NSData * connectionData; 
@property (retain) NSData * relayConnectionData; 
@property (retain) NSDictionary * relayRequest; 
@property (retain) NSMutableDictionary * relayRequestResponse; 
@property (retain) NSDictionary * relayUpdate; 
@property (assign,nonatomic) unsigned long auNumber; 
@property (assign,nonatomic) unsigned long maxBandwidth; 
@property (nonatomic,copy) NSString * participantID; 
@property (assign,nonatomic) int cellTech; 
@property (assign,nonatomic) BOOL isVideoQualityDegraded; 
@property (assign,nonatomic) BOOL videoIsPaused; 
@property (nonatomic,retain) NSString * sdpString; 
@property (nonatomic,retain) SDPMini * sdp; 
@property (nonatomic,readonly) BOOL requiresImplicitFeatureString; 
@property (nonatomic,readonly) BOOL isIOS; 
@property (nonatomic,readonly) BOOL usesInitialFECImplementation; 
@property (assign,nonatomic) BOOL supportsDynamicMaxBitrate; 
@property (assign,nonatomic) BOOL supportsSKEOptimization; 
@property (nonatomic,readonly) BOOL supportsSpecialAACBundle; 
@property (assign,nonatomic) unsigned long visibleRectCropping; 
@property (nonatomic,readonly) BOOL useNewPLCalc; 
@property (assign,nonatomic) unsigned char u8Version; 
@property (readonly) BOOL supportsDynamicContentsRectWithAspectPreservation; 
-(void)dealloc;
-(id)init;
-(unsigned long)callID;
-(void)setCallID:(unsigned long)arg1 ;
-(unsigned long)maxBandwidth;
-(void)setMaxBandwidth:(unsigned long)arg1 ;
-(id)participantID;
-(void)setParticipantID:(id)arg1 ;
-(void)setSupportsSKEOptimization:(BOOL)arg1 ;
-(BOOL)videoIsPaused;
-(BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4 ;
-(BOOL)isVideoQualityDegraded;
-(BOOL)supportsDynamicMaxBitrate;
-(void)setCellTech:(int)arg1 ;
-(void)resetLastGoodVideoQualityTime:(double)arg1 ;
-(BOOL)supportSDPCompression;
-(id)connectionData;
-(VoiceIOFarEndVersionInfo)audioVersionInfo:(BOOL)arg1 ;
-(void)setVideoIsPaused:(BOOL)arg1 ;
-(id)relayRequestResponse;
-(void)setRelayRequestResponse:(id)arg1 ;
-(void)setRelayUpdate:(id)arg1 ;
-(id)relayUpdate;
-(void)setRelayConnectionData:(id)arg1 ;
-(id)relayConnectionData;
-(BOOL)supportsSKEOptimization;
-(unsigned char)u8Version;
-(void)setConnectionData:(id)arg1 ;
-(void)setUserAgent:(id)arg1 ;
-(BOOL)usesInitialFECImplementation;
-(void)setU8Version:(unsigned char)arg1 ;
-(id)sdp;
-(void)setSdp:(id)arg1 ;
-(void)setSdpString:(id)arg1 ;
-(id)sdpString;
-(void)setSupportsDynamicMaxBitrate:(BOOL)arg1 ;
-(void)setAuNumber:(unsigned long)arg1 ;
-(BOOL)supportsSpecialAACBundle;
-(BOOL)useNewPLCalc;
-(BOOL)isIOS;
-(BOOL)requiresImplicitFeatureString;
-(unsigned long)auNumber;
-(BOOL)supportsDynamicContentsRectWithAspectPreservation;
-(id)relayRequest;
-(void)setRelayRequest:(id)arg1 ;
-(int)cellTech;
-(void)setIsVideoQualityDegraded:(BOOL)arg1 ;
-(unsigned long)visibleRectCropping;
-(void)setVisibleRectCropping:(unsigned long)arg1 ;
@end

