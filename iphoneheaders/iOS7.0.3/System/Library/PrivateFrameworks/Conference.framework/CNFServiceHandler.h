/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CNFServiceHandler : NSObject
+(BOOL)isConnected;
+(BOOL)connect;
+(BOOL)disconnect;
+(BOOL)connect:(BOOL)arg1 ;
+(id)faceTimeSourceAccount;
+(BOOL)faceTimeIsSupported;
+(void)updateConferenceCapabilitiesForControllerType:(int)arg1 ;
+(BOOL)faceTimeIsAvailable;
+(int)activationState;
+(void)activateFaceTime;
+(BOOL)_isValidProcess;
+(BOOL)callingIsSupported;
+(void)_daemonConnectedNotification:(id)arg1 ;
+(void)_accountRegistrationStatusChanged:(id)arg1 ;
+(void)setCapabilities:(unsigned)arg1 ;
+(unsigned)capabilities;
@end

