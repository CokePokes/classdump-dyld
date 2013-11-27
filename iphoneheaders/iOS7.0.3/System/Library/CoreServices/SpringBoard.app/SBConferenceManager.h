/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBConferenceManager : NSObject {

	BOOL _hasFaceTimeCapability;
	MGNotificationTokenStructRef _faceTimeCapabilityUpdateToken;

}
+(id)sharedInstance;
+(void)initialize;
-(BOOL)hasFaceTimeCapability;
-(BOOL)canStartFaceTime;
-(void)_faceTimeStateChanged:(id)arg1 ;
-(void)_faceTimeCapabilityChanged:(id)arg1 ;
-(void)updateStatusBar;
-(id)_faceTimeApp;
-(void)_faceTimeAppActivationStateChanged:(id)arg1 ;
-(id)currentCallStatusDisplayString;
-(void)_updateStatusBar;
-(void)dealloc;
-(id)init;
-(BOOL)inFaceTime;
-(BOOL)faceTimeIsAvailable;
-(void)endFaceTime;
-(BOOL)faceTimeInvitationExists;
-(BOOL)activeFaceTimeCallExists;
-(id)currentCallRemoteUserId;
-(void)invitedToIMAVChat:(id)arg1 ;
@end

