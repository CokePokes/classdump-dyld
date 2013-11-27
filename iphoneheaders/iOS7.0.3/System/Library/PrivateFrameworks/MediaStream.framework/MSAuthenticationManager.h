/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MSAlertManager;

@interface MSAuthenticationManager : NSObject {

	int _state;
	MSAlertManager* _alertManager;
	int _bagRefetchCount;
	BOOL _isListeningToKeybagChanges;
	int _keybagChangeNotifyToken;

}

@property (getter=isWaitingForAuth,nonatomic,readonly) BOOL waitingForAuth; 
@property (assign,nonatomic) BOOL isListeningToKeybagChanges;                            //@synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges - In the implementation block
@property (assign,nonatomic) int keybagChangeNotifyToken;                                //@synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(BOOL)isWaitingForAuth;
-(id)initWithAlertManager:(id)arg1 ;
-(BOOL)isListeningToKeybagChanges;
-(int)keybagChangeNotifyToken;
-(void)_didReceiveAccountConfigChangedNotification;
-(void)setIsListeningToKeybagChanges:(BOOL)arg1 ;
-(id)_accountForPersonID:(id)arg1 ;
-(void)waitForDeviceUnlock;
-(void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2 ;
-(void)didEncounterAuthenticationFailureForPersonID:(id)arg1 ;
-(void)didEncounterAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)rearmAuthenticationAlert;
-(void)setKeybagChangeNotifyToken:(int)arg1 ;
-(void).cxx_destruct;
@end

