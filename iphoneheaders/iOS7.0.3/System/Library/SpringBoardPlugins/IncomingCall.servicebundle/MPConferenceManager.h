/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Conference/TUAudioPlayerDelegateProtocol.h>

@protocol SBUIUserAgent;
@class CNFConferenceController, , TUAudioPlayer;

@interface MPConferenceManager : NSObject <TUAudioPlayerDelegateProtocol> {

	CNFConferenceController* _conferenceController;
	<SBUIUserAgent>* _sbUserAgent;
	TUAudioPlayer* _player;

}

@property (readonly) CNFConferenceController * conferenceController; 
+(id)sharedInstance;
-(void)_handleInvitation:(id)arg1 ;
-(void)_faceTimeStateChanged:(id)arg1 ;
-(void)_faceTimeCapabilityChanged:(id)arg1 ;
-(void)stopAudioPlayer;
-(id)conferenceController;
-(BOOL)isPlaying;
-(void)dealloc;
-(id)init;
-(void)endFaceTime;
-(BOOL)faceTimeInvitationExists;
-(BOOL)activeFaceTimeCallExists;
-(void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(float)arg3 ;
-(void)audioPlayerDidStopPlaying:(id)arg1 ;
@end

