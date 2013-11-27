/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/MSAlbumSharingDaemon.h>
#import <mstreamd/XPCNSServiceListenerDelegate.h>
#import <IDSFoundation/APSConnectionDelegate.h>
#import <mstreamd/MSPowerBudgetDelegate.h>
#import <BulletinBoard/IDSServiceDelegate.h>

@class XPCNSServiceListener, APSConnection, NSMutableDictionary, NSDictionary, NSTimer, IDSService;

@interface MSIOSAlbumSharingDaemon : MSAlbumSharingDaemon <XPCNSServiceListenerDelegate, APSConnectionDelegate, MSPowerBudgetDelegate, IDSServiceDelegate> {

	XPCNSServiceListener* _serviceListener;
	XPCNSServiceListener* noWakeServiceListener;
	APSConnection* _apsConnection;
	NSMutableDictionary* _personIDToPowerBudgetMap;
	NSDictionary* _powerBudgetPersistedParameters;
	NSTimer* _busyPingTimer;
	IDSService* _idsService;

}

@property (nonatomic,retain) XPCNSServiceListener * serviceListener;                      //@synthesize serviceListener=_serviceListener - In the implementation block
@property (nonatomic,retain) XPCNSServiceListener * noWakeServiceListener; 
@property (nonatomic,retain) APSConnection * apsConnection;                               //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personIDToPowerBudgetMap;              //@synthesize personIDToPowerBudgetMap=_personIDToPowerBudgetMap - In the implementation block
@property (nonatomic,retain) NSTimer * busyPingTimer;                                     //@synthesize busyPingTimer=_busyPingTimer - In the implementation block
@property (nonatomic,retain) NSDictionary * powerBudgetPersistedParameters;               //@synthesize powerBudgetPersistedParameters=_powerBudgetPersistedParameters - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                     //@synthesize idsService=_idsService - In the implementation block
-(void)setApsConnection:(id)arg1 ;
-(id)apsConnection;
-(id)personIDToPowerBudgetMap;
-(void)_updatePushNotificationTopicsOutListenToProduction:(BOOL*)arg1 outListenToDevelopment:(BOOL*)arg2 ;
-(void)_readPowerBudgetParametersForPersonID:(id)arg1 ;
-(void)didBeginForegroundFocusForPersonID:(id)arg1 ;
-(void)didEndForegroundFocusForPersonID:(id)arg1 ;
-(void)setPersonIDToPowerBudgetMap:(id)arg1 ;
-(id)noWakeServiceListener;
-(void)setNoWakeServiceListener:(id)arg1 ;
-(id)busyPingTimer;
-(void)setBusyPingTimer:(id)arg1 ;
-(id)powerBudgetPersistedParameters;
-(void)setPowerBudgetPersistedParameters:(id)arg1 ;
-(void)_busyPingTimerDidExpire:(id)arg1 ;
-(id)serviceListener;
-(id)init;
-(void)start;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(id)idsService;
-(void)setIdsService:(id)arg1 ;
-(void)didReceivePushNotificationForPersonID:(id)arg1 ;
-(void)didIdle;
-(void)didUnidle;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)forgetEverythingAboutPersonID:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)didDestroyStateMachineForPersonID:(id)arg1 ;
-(void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceiveAuthFailureForPersonID:(id)arg1 ;
-(void)didReceiveAuthSuccessForPersonID:(id)arg1 ;
-(BOOL)isWaitingForAuth;
-(void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg1 ;
-(void)forgetEverythingCompletionBlock:(/*^block*/ id)arg1 ;
-(void)stabilizedDidUnidle;
-(void)stabilizedDidIdle;
-(id)MSPowerBudgetDidRequestPersistedValues:(id)arg1 ;
-(void)MSPowerBudget:(id)arg1 didRequestStorageOfPersistedValues:(id)arg2 ;
-(void)MSPowerBudgetGotSignificantEvent:(id)arg1 ;
-(id)powerBudgetForPersonID:(id)arg1 ;
-(BOOL)isPersonIDAllowedToDownloadAssets:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2 ;
-(void).cxx_destruct;
-(void)setServiceListener:(id)arg1 ;
-(BOOL)XPCNSServiceListener:(id)arg1 shouldReceiveNewConnection:(id)arg2 ;
-(void)XPCNSServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2 ;
@end

