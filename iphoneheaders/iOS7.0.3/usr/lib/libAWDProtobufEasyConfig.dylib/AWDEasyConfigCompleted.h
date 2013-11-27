/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufEasyConfig.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufEasyConfig.dylib/libAWDProtobufEasyConfig.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface AWDEasyConfigCompleted : PBCodable {

	unsigned long long _timestamp;
	unsigned _channelOfDestinationAP;
	unsigned _channelOfSWAP;
	NSString* _eaBundleSeedID;
	NSString* _eaFirmwareRevision;
	NSString* _eaHardwareRevision;
	NSString* _eaManufacturerName;
	NSString* _eaModelName;
	NSMutableArray* _eaProtocolStrings;
	int _easyConfigStoppedReasonError;
	int _rssiOfDestinationAP;
	int _rssiOfSWAP;
	float _secondsToApplyConfig;
	float _secondsToCompleteFullConfig;
	float _secondsToCompleteMFiSAPAuth;
	float _secondsToCompletePostConfigCheck;
	float _secondsToFindPostConfigDevice;
	float _secondsToFindPreConfigDevice;
	float _secondsToGetLinkUpOnDestination;
	float _secondsToGetLinkUpOnSWAP;
	unsigned _snrOfDestinationAP;
	unsigned _snrOfSWAP;
	int _wifiJoinDestinationAPError;
	int _wifiJoinSWAPError;
	BOOL _adminPasswordSet;
	BOOL _destinationNetworkPSKInKeychain;
	BOOL _destinationNetworkRecommendationUsed;
	BOOL _hitJoiningDestinationAPTimeout;
	BOOL _hitJoiningTargetSWAPTimeout;
	BOOL _pauseAfterApply;
	BOOL _playPasswordSet;
	BOOL _userChangedFriendlyName;
	SCD_Struct_AW0 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUserChangedFriendlyName; 
@property (assign,nonatomic) BOOL userChangedFriendlyName;                              //@synthesize userChangedFriendlyName=_userChangedFriendlyName - In the implementation block
@property (assign,nonatomic) BOOL hasPlayPasswordSet; 
@property (assign,nonatomic) BOOL playPasswordSet;                                      //@synthesize playPasswordSet=_playPasswordSet - In the implementation block
@property (assign,nonatomic) BOOL hasAdminPasswordSet; 
@property (assign,nonatomic) BOOL adminPasswordSet;                                     //@synthesize adminPasswordSet=_adminPasswordSet - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationNetworkRecommendationUsed; 
@property (assign,nonatomic) BOOL destinationNetworkRecommendationUsed;                 //@synthesize destinationNetworkRecommendationUsed=_destinationNetworkRecommendationUsed - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToCompleteFullConfig; 
@property (assign,nonatomic) float secondsToCompleteFullConfig;                         //@synthesize secondsToCompleteFullConfig=_secondsToCompleteFullConfig - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToGetLinkUpOnSWAP; 
@property (assign,nonatomic) float secondsToGetLinkUpOnSWAP;                            //@synthesize secondsToGetLinkUpOnSWAP=_secondsToGetLinkUpOnSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasWifiJoinSWAPError; 
@property (assign,nonatomic) int wifiJoinSWAPError;                                     //@synthesize wifiJoinSWAPError=_wifiJoinSWAPError - In the implementation block
@property (assign,nonatomic) BOOL hasHitJoiningTargetSWAPTimeout; 
@property (assign,nonatomic) BOOL hitJoiningTargetSWAPTimeout;                          //@synthesize hitJoiningTargetSWAPTimeout=_hitJoiningTargetSWAPTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasRssiOfSWAP; 
@property (assign,nonatomic) int rssiOfSWAP;                                            //@synthesize rssiOfSWAP=_rssiOfSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasSnrOfSWAP; 
@property (assign,nonatomic) unsigned snrOfSWAP;                                        //@synthesize snrOfSWAP=_snrOfSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasChannelOfSWAP; 
@property (assign,nonatomic) unsigned channelOfSWAP;                                    //@synthesize channelOfSWAP=_channelOfSWAP - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToGetLinkUpOnDestination; 
@property (assign,nonatomic) float secondsToGetLinkUpOnDestination;                     //@synthesize secondsToGetLinkUpOnDestination=_secondsToGetLinkUpOnDestination - In the implementation block
@property (assign,nonatomic) BOOL hasWifiJoinDestinationAPError; 
@property (assign,nonatomic) int wifiJoinDestinationAPError;                            //@synthesize wifiJoinDestinationAPError=_wifiJoinDestinationAPError - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationNetworkPSKInKeychain; 
@property (assign,nonatomic) BOOL destinationNetworkPSKInKeychain;                      //@synthesize destinationNetworkPSKInKeychain=_destinationNetworkPSKInKeychain - In the implementation block
@property (assign,nonatomic) BOOL hasHitJoiningDestinationAPTimeout; 
@property (assign,nonatomic) BOOL hitJoiningDestinationAPTimeout;                       //@synthesize hitJoiningDestinationAPTimeout=_hitJoiningDestinationAPTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasRssiOfDestinationAP; 
@property (assign,nonatomic) int rssiOfDestinationAP;                                   //@synthesize rssiOfDestinationAP=_rssiOfDestinationAP - In the implementation block
@property (assign,nonatomic) BOOL hasSnrOfDestinationAP; 
@property (assign,nonatomic) unsigned snrOfDestinationAP;                               //@synthesize snrOfDestinationAP=_snrOfDestinationAP - In the implementation block
@property (assign,nonatomic) BOOL hasChannelOfDestinationAP; 
@property (assign,nonatomic) unsigned channelOfDestinationAP;                           //@synthesize channelOfDestinationAP=_channelOfDestinationAP - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToFindPreConfigDevice; 
@property (assign,nonatomic) float secondsToFindPreConfigDevice;                        //@synthesize secondsToFindPreConfigDevice=_secondsToFindPreConfigDevice - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToCompleteMFiSAPAuth; 
@property (assign,nonatomic) float secondsToCompleteMFiSAPAuth;                         //@synthesize secondsToCompleteMFiSAPAuth=_secondsToCompleteMFiSAPAuth - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToApplyConfig; 
@property (assign,nonatomic) float secondsToApplyConfig;                                //@synthesize secondsToApplyConfig=_secondsToApplyConfig - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToFindPostConfigDevice; 
@property (assign,nonatomic) float secondsToFindPostConfigDevice;                       //@synthesize secondsToFindPostConfigDevice=_secondsToFindPostConfigDevice - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsToCompletePostConfigCheck; 
@property (assign,nonatomic) float secondsToCompletePostConfigCheck;                    //@synthesize secondsToCompletePostConfigCheck=_secondsToCompletePostConfigCheck - In the implementation block
@property (assign,nonatomic) BOOL hasPauseAfterApply; 
@property (assign,nonatomic) BOOL pauseAfterApply;                                      //@synthesize pauseAfterApply=_pauseAfterApply - In the implementation block
@property (assign,nonatomic) BOOL hasEasyConfigStoppedReasonError; 
@property (assign,nonatomic) int easyConfigStoppedReasonError;                          //@synthesize easyConfigStoppedReasonError=_easyConfigStoppedReasonError - In the implementation block
@property (nonatomic,readonly) BOOL hasEaBundleSeedID; 
@property (nonatomic,retain) NSString * eaBundleSeedID;                                 //@synthesize eaBundleSeedID=_eaBundleSeedID - In the implementation block
@property (nonatomic,retain) NSMutableArray * eaProtocolStrings;                        //@synthesize eaProtocolStrings=_eaProtocolStrings - In the implementation block
@property (nonatomic,readonly) BOOL hasEaManufacturerName; 
@property (nonatomic,retain) NSString * eaManufacturerName;                             //@synthesize eaManufacturerName=_eaManufacturerName - In the implementation block
@property (nonatomic,readonly) BOOL hasEaModelName; 
@property (nonatomic,retain) NSString * eaModelName;                                    //@synthesize eaModelName=_eaModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasEaFirmwareRevision; 
@property (nonatomic,retain) NSString * eaFirmwareRevision;                             //@synthesize eaFirmwareRevision=_eaFirmwareRevision - In the implementation block
@property (nonatomic,readonly) BOOL hasEaHardwareRevision; 
@property (nonatomic,retain) NSString * eaHardwareRevision;                             //@synthesize eaHardwareRevision=_eaHardwareRevision - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setEaBundleSeedID:(id)arg1 ;
-(void)setEaProtocolStrings:(id)arg1 ;
-(void)setEaManufacturerName:(id)arg1 ;
-(void)setEaModelName:(id)arg1 ;
-(void)setEaFirmwareRevision:(id)arg1 ;
-(void)setEaHardwareRevision:(id)arg1 ;
-(void)addEaProtocolStrings:(id)arg1 ;
-(BOOL)hasUserChangedFriendlyName;
-(BOOL)userChangedFriendlyName;
-(void)setUserChangedFriendlyName:(BOOL)arg1 ;
-(BOOL)hasPlayPasswordSet;
-(BOOL)playPasswordSet;
-(void)setPlayPasswordSet:(BOOL)arg1 ;
-(BOOL)hasAdminPasswordSet;
-(BOOL)adminPasswordSet;
-(void)setAdminPasswordSet:(BOOL)arg1 ;
-(BOOL)hasDestinationNetworkRecommendationUsed;
-(BOOL)destinationNetworkRecommendationUsed;
-(void)setDestinationNetworkRecommendationUsed:(BOOL)arg1 ;
-(BOOL)hasSecondsToCompleteFullConfig;
-(float)secondsToCompleteFullConfig;
-(void)setSecondsToCompleteFullConfig:(float)arg1 ;
-(BOOL)hasSecondsToGetLinkUpOnSWAP;
-(float)secondsToGetLinkUpOnSWAP;
-(void)setSecondsToGetLinkUpOnSWAP:(float)arg1 ;
-(BOOL)hasWifiJoinSWAPError;
-(int)wifiJoinSWAPError;
-(void)setWifiJoinSWAPError:(int)arg1 ;
-(BOOL)hasHitJoiningTargetSWAPTimeout;
-(BOOL)hitJoiningTargetSWAPTimeout;
-(void)setHitJoiningTargetSWAPTimeout:(BOOL)arg1 ;
-(BOOL)hasRssiOfSWAP;
-(int)rssiOfSWAP;
-(void)setRssiOfSWAP:(int)arg1 ;
-(BOOL)hasSnrOfSWAP;
-(unsigned)snrOfSWAP;
-(void)setSnrOfSWAP:(unsigned)arg1 ;
-(BOOL)hasChannelOfSWAP;
-(unsigned)channelOfSWAP;
-(void)setChannelOfSWAP:(unsigned)arg1 ;
-(BOOL)hasSecondsToGetLinkUpOnDestination;
-(float)secondsToGetLinkUpOnDestination;
-(void)setSecondsToGetLinkUpOnDestination:(float)arg1 ;
-(BOOL)hasWifiJoinDestinationAPError;
-(int)wifiJoinDestinationAPError;
-(void)setWifiJoinDestinationAPError:(int)arg1 ;
-(BOOL)hasDestinationNetworkPSKInKeychain;
-(BOOL)destinationNetworkPSKInKeychain;
-(void)setDestinationNetworkPSKInKeychain:(BOOL)arg1 ;
-(BOOL)hasHitJoiningDestinationAPTimeout;
-(BOOL)hitJoiningDestinationAPTimeout;
-(void)setHitJoiningDestinationAPTimeout:(BOOL)arg1 ;
-(BOOL)hasRssiOfDestinationAP;
-(int)rssiOfDestinationAP;
-(void)setRssiOfDestinationAP:(int)arg1 ;
-(BOOL)hasSnrOfDestinationAP;
-(unsigned)snrOfDestinationAP;
-(void)setSnrOfDestinationAP:(unsigned)arg1 ;
-(BOOL)hasChannelOfDestinationAP;
-(unsigned)channelOfDestinationAP;
-(void)setChannelOfDestinationAP:(unsigned)arg1 ;
-(BOOL)hasSecondsToFindPreConfigDevice;
-(float)secondsToFindPreConfigDevice;
-(void)setSecondsToFindPreConfigDevice:(float)arg1 ;
-(BOOL)hasSecondsToCompleteMFiSAPAuth;
-(float)secondsToCompleteMFiSAPAuth;
-(void)setSecondsToCompleteMFiSAPAuth:(float)arg1 ;
-(BOOL)hasSecondsToApplyConfig;
-(float)secondsToApplyConfig;
-(void)setSecondsToApplyConfig:(float)arg1 ;
-(BOOL)hasSecondsToFindPostConfigDevice;
-(float)secondsToFindPostConfigDevice;
-(void)setSecondsToFindPostConfigDevice:(float)arg1 ;
-(BOOL)hasSecondsToCompletePostConfigCheck;
-(float)secondsToCompletePostConfigCheck;
-(void)setSecondsToCompletePostConfigCheck:(float)arg1 ;
-(BOOL)hasPauseAfterApply;
-(BOOL)pauseAfterApply;
-(void)setPauseAfterApply:(BOOL)arg1 ;
-(BOOL)hasEasyConfigStoppedReasonError;
-(int)easyConfigStoppedReasonError;
-(void)setEasyConfigStoppedReasonError:(int)arg1 ;
-(BOOL)hasEaBundleSeedID;
-(id)eaBundleSeedID;
-(unsigned)eaProtocolStringsCount;
-(void)clearEaProtocolStrings;
-(id)eaProtocolStringsAtIndex:(unsigned)arg1 ;
-(BOOL)hasEaManufacturerName;
-(id)eaManufacturerName;
-(BOOL)hasEaModelName;
-(id)eaModelName;
-(BOOL)hasEaFirmwareRevision;
-(id)eaFirmwareRevision;
-(BOOL)hasEaHardwareRevision;
-(id)eaHardwareRevision;
-(void)setHasUserChangedFriendlyName:(BOOL)arg1 ;
-(void)setHasPlayPasswordSet:(BOOL)arg1 ;
-(void)setHasAdminPasswordSet:(BOOL)arg1 ;
-(void)setHasDestinationNetworkRecommendationUsed:(BOOL)arg1 ;
-(void)setHasSecondsToCompleteFullConfig:(BOOL)arg1 ;
-(void)setHasSecondsToGetLinkUpOnSWAP:(BOOL)arg1 ;
-(void)setHasWifiJoinSWAPError:(BOOL)arg1 ;
-(void)setHasHitJoiningTargetSWAPTimeout:(BOOL)arg1 ;
-(void)setHasRssiOfSWAP:(BOOL)arg1 ;
-(void)setHasSnrOfSWAP:(BOOL)arg1 ;
-(void)setHasChannelOfSWAP:(BOOL)arg1 ;
-(void)setHasSecondsToGetLinkUpOnDestination:(BOOL)arg1 ;
-(void)setHasWifiJoinDestinationAPError:(BOOL)arg1 ;
-(void)setHasDestinationNetworkPSKInKeychain:(BOOL)arg1 ;
-(void)setHasHitJoiningDestinationAPTimeout:(BOOL)arg1 ;
-(void)setHasRssiOfDestinationAP:(BOOL)arg1 ;
-(void)setHasSnrOfDestinationAP:(BOOL)arg1 ;
-(void)setHasChannelOfDestinationAP:(BOOL)arg1 ;
-(void)setHasSecondsToFindPreConfigDevice:(BOOL)arg1 ;
-(void)setHasSecondsToCompleteMFiSAPAuth:(BOOL)arg1 ;
-(void)setHasSecondsToApplyConfig:(BOOL)arg1 ;
-(void)setHasSecondsToFindPostConfigDevice:(BOOL)arg1 ;
-(void)setHasSecondsToCompletePostConfigCheck:(BOOL)arg1 ;
-(void)setHasPauseAfterApply:(BOOL)arg1 ;
-(void)setHasEasyConfigStoppedReasonError:(BOOL)arg1 ;
-(id)eaProtocolStrings;
@end

