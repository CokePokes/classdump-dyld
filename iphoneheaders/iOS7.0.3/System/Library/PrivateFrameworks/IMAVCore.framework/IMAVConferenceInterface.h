/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <IMAVCore/IMAVInterface.h>
#import <IMAVCore/AVConferenceDelegate.h>

@class NSMutableArray, NSMutableDictionary, NSLock, AVConference;

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate> {

	NSMutableArray* _avConferencesToCleanup;
	NSMutableDictionary* _avConferences;
	NSLock* _avConferencesLock;
	BOOL _duringInit;
	BOOL _pendingCleanup;

}

@property (nonatomic,readonly) AVConference * controller; 
+(BOOL)_useMultipleAVConference;
+(void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned)arg6 orentation:(unsigned)arg7 aspect:(CGSize)arg8 ;
+(void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 contentRectChanged:(BOOL)arg5 cameraWillSwitch:(BOOL)arg6 camera:(unsigned)arg7 orentation:(unsigned)arg8 aspect:(CGSize)arg9 contentRect:(CGRect)arg10 ;
-(void)dealloc;
-(id)init;
-(id)controller;
-(void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3 ;
-(void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 ;
-(void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(int)arg3 ;
-(void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 withCallID:(int)arg2 remoteMediaStalled:(BOOL)arg3 ;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(int)arg2 ;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3 ;
-(void)conference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4 ;
-(void)conference:(id)arg1 withCallID:(int)arg2 networkHint:(BOOL)arg3 ;
-(void)conference:(id)arg1 didChangeLocalVariablesForCallID:(int)arg2 ;
-(void)serverDiedForConference:(id)arg1 ;
-(BOOL)stopPreview;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2 ;
-(void)_notifyAboutPotentialCallForChat:(id)arg1 ;
-(void)_avChatDealloc:(id)arg1 ;
-(void)chatStateUpdated;
-(int)endConferenceForAVChat:(id)arg1 ;
-(BOOL)isAVInterfaceReady;
-(void)initAVInterface;
-(void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2 ;
-(id)natTypeForAVChat:(id)arg1 ;
-(void)endAVConferenceWithChat:(id)arg1 callID:(int)arg2 ;
-(void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2 ;
-(BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5 ;
-(void)_conferenceEnded:(id)arg1 ;
-(BOOL)isMuteForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setMute:(BOOL)arg2 ;
-(BOOL)isPausedForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setPaused:(BOOL)arg2 ;
-(BOOL)isSendingAudioForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2 ;
-(BOOL)isSendingVideoForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2 ;
-(unsigned long long)capabilitiesOfNetwork;
-(unsigned long long)capabilitiesOfCPU;
-(BOOL)startPreviewWithError:(id*)arg1 ;
-(int)avChat:(id)arg1 endConferenceForUserID:(id)arg2 ;
-(id)getNatIPFromICEData:(id)arg1 ;
-(BOOL)supportsLayers;
-(void*)remoteVideoLayerForChat:(id)arg1 ;
-(void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)remoteVideoBackLayerForChat:(id)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(BOOL)supportsRelay;
-(void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(id)_controller;
-(void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(CGSize)arg2 localPortraitAspectRatio:(CGSize)arg3 ;
-(BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2 ;
-(BOOL)_submitEndCallMetric:(id)arg1 forCallID:(int)arg2 ;
-(void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 ;
-(void)_setAudioSessionPropertiesForChat:(id)arg1 ;
-(id)_existingConferenceForAVChat:(id)arg1 ;
-(void)_configureAVConference:(id)arg1 forChat:(id)arg2 ;
-(id)_avChatForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3 ;
-(id)_avChatForConference:(id)arg1 ;
-(void)_cleanupAVInterface;
-(void)_queueAVConferenceForCleanup:(id)arg1 ;
-(id)_conferenceForAVChat:(id)arg1 ;
-(id)_existingConferenceForAVChatGUID:(id)arg1 ;
-(BOOL)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1 ;
-(id)_imAVChatParticipantForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3 ;
-(unsigned long long)capabilities;
@end

