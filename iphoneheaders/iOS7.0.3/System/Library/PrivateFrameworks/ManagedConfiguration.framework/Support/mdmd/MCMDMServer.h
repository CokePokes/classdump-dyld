/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/mdmd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <mdmd/mdmd-Structs.h>
#import <MDM/MCJobQueueObserver.h>
#import <IDSFoundation/APSConnectionDelegate.h>

@protocol MCMDMServerDelegate, OS_dispatch_queue;
@class , CPDistributedMessagingCenter, NSObject, APSConnection, NSString, NSURL, NSDictionary, NSData, MCTimerContext, MCJobQueue;

@interface MCMDMServer : NSObject <MCJobQueueObserver, APSConnectionDelegate> {

	BOOL _memberQueueIsMDMConfigurationValid;
	BOOL _memberQueueUseDevelopmentAPNS;
	BOOL _memberQueueSignMessage;
	BOOL _memberQueueIsWaitingForPushToken;
	BOOL _memberQueuePollRequested;
	BOOL _memberQueueLastResponseWasNotNow;
	BOOL _executionQueueIsCheckinInProgress;
	<MCMDMServerDelegate>* _delegate;
	CPDistributedMessagingCenter* _messageCenter;
	NSObject<OS_dispatch_queue>* _memberQueue;
	APSConnection* _memberQueueDevAPSConnection;
	APSConnection* _memberQueueProdAPSConnection;
	NSString* _memberQueueManagingProfileIdentifier;
	SecIdentityRef _memberQueueIdentity;
	NSString* _memberQueueTopic;
	NSURL* _memberQueueServerURL;
	NSURL* _memberQueueCheckInURL;
	NSDictionary* _memberQueueOrganizationInfo;
	NSDictionary* _memberQueueMDMOptions;
	int _memberQueueAccessRights;
	NSString* _memberQueuePushMagic;
	NSData* _memberQueuePushToken;
	int _memberQueueMKBLockStatusNotifyToken;
	MCTimerContext* _memberQueueTimerContext;
	int _memberQueuePowerAssertionAssertedNotificationToken;
	int _memberQueuePowerAssertionDeassertedNotificationToken;
	NSString* _memberQueueCommandUUID;
	MCJobQueue* _jobQueue;
	/*^block*/ id _executionQueuePushTokenWaitContinuationBlock;
	int _eventQueueBusyCount;

}

@property (assign,nonatomic,__weak) <MCMDMServerDelegate> * delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,copy) NSDictionary * organizationInfo; 
@property (nonatomic,readonly) BOOL lastResponseWasNotNow; 
@property (nonatomic,copy) NSDictionary * MDMOptions; 
@property (nonatomic,retain) CPDistributedMessagingCenter * messageCenter;                          //@synthesize messageCenter=_messageCenter - In the implementation block
@property (assign,nonatomic) int MKBLockStatusNotifyToken; 
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * memberQueue;                             //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) APSConnection * memberQueueDevAPSConnection;                           //@synthesize memberQueueDevAPSConnection=_memberQueueDevAPSConnection - In the implementation block
@property (nonatomic,retain) APSConnection * memberQueueProdAPSConnection;                          //@synthesize memberQueueProdAPSConnection=_memberQueueProdAPSConnection - In the implementation block
@property (assign,nonatomic) BOOL memberQueueIsMDMConfigurationValid;                               //@synthesize memberQueueIsMDMConfigurationValid=_memberQueueIsMDMConfigurationValid - In the implementation block
@property (nonatomic,retain) NSString * memberQueueManagingProfileIdentifier;                       //@synthesize memberQueueManagingProfileIdentifier=_memberQueueManagingProfileIdentifier - In the implementation block
@property (assign,nonatomic) SecIdentityRef memberQueueIdentity;                                    //@synthesize memberQueueIdentity=_memberQueueIdentity - In the implementation block
@property (nonatomic,retain) NSString * memberQueueTopic;                                           //@synthesize memberQueueTopic=_memberQueueTopic - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueServerURL;                                          //@synthesize memberQueueServerURL=_memberQueueServerURL - In the implementation block
@property (nonatomic,retain) NSURL * memberQueueCheckInURL;                                         //@synthesize memberQueueCheckInURL=_memberQueueCheckInURL - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueOrganizationInfo;                            //@synthesize memberQueueOrganizationInfo=_memberQueueOrganizationInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * memberQueueMDMOptions;                                  //@synthesize memberQueueMDMOptions=_memberQueueMDMOptions - In the implementation block
@property (assign,nonatomic) int memberQueueAccessRights;                                           //@synthesize memberQueueAccessRights=_memberQueueAccessRights - In the implementation block
@property (assign,nonatomic) BOOL memberQueueUseDevelopmentAPNS;                                    //@synthesize memberQueueUseDevelopmentAPNS=_memberQueueUseDevelopmentAPNS - In the implementation block
@property (nonatomic,retain) NSString * memberQueuePushMagic;                                       //@synthesize memberQueuePushMagic=_memberQueuePushMagic - In the implementation block
@property (assign,nonatomic) BOOL memberQueueSignMessage;                                           //@synthesize memberQueueSignMessage=_memberQueueSignMessage - In the implementation block
@property (assign,nonatomic) BOOL memberQueueIsWaitingForPushToken;                                 //@synthesize memberQueueIsWaitingForPushToken=_memberQueueIsWaitingForPushToken - In the implementation block
@property (nonatomic,retain) NSData * memberQueuePushToken;                                         //@synthesize memberQueuePushToken=_memberQueuePushToken - In the implementation block
@property (assign,nonatomic) int memberQueueMKBLockStatusNotifyToken;                               //@synthesize memberQueueMKBLockStatusNotifyToken=_memberQueueMKBLockStatusNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL memberQueuePollRequested;                                         //@synthesize memberQueuePollRequested=_memberQueuePollRequested - In the implementation block
@property (nonatomic,retain) MCTimerContext * memberQueueTimerContext;                              //@synthesize memberQueueTimerContext=_memberQueueTimerContext - In the implementation block
@property (assign,nonatomic) int memberQueuePowerAssertionAssertedNotificationToken;                //@synthesize memberQueuePowerAssertionAssertedNotificationToken=_memberQueuePowerAssertionAssertedNotificationToken - In the implementation block
@property (assign,nonatomic) int memberQueuePowerAssertionDeassertedNotificationToken;              //@synthesize memberQueuePowerAssertionDeassertedNotificationToken=_memberQueuePowerAssertionDeassertedNotificationToken - In the implementation block
@property (nonatomic,retain) NSString * memberQueueCommandUUID;                                     //@synthesize memberQueueCommandUUID=_memberQueueCommandUUID - In the implementation block
@property (nonatomic,retain) MCJobQueue * jobQueue;                                                 //@synthesize jobQueue=_jobQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * executionQueueCachedResponse; 
@property (assign,nonatomic) BOOL memberQueueLastResponseWasNotNow;                                 //@synthesize memberQueueLastResponseWasNotNow=_memberQueueLastResponseWasNotNow - In the implementation block
@property (nonatomic,copy) id executionQueuePushTokenWaitContinuationBlock;                         //@synthesize executionQueuePushTokenWaitContinuationBlock=_executionQueuePushTokenWaitContinuationBlock - In the implementation block
@property (assign,nonatomic) BOOL executionQueueIsCheckinInProgress;                                //@synthesize executionQueueIsCheckinInProgress=_executionQueueIsCheckinInProgress - In the implementation block
@property (assign,nonatomic) int eventQueueBusyCount;                                               //@synthesize eventQueueBusyCount=_eventQueueBusyCount - In the implementation block
-(BOOL)startOutError:(id*)arg1 ;
-(BOOL)lastResponseWasNotNow;
-(SecIdentityRef)memberQueueIdentity;
-(int)eventQueueBusyCount;
-(void)setEventQueueBusyCount:(int)arg1 ;
-(id)memberQueueTimerContext;
-(void)setMemberQueueTimerContext:(id)arg1 ;
-(id)memberQueueServerURL;
-(void)setMemberQueueServerURL:(id)arg1 ;
-(id)memberQueueOrganizationInfo;
-(void)setMemberQueueOrganizationInfo:(id)arg1 ;
-(id)memberQueueMDMOptions;
-(void)setMemberQueueMDMOptions:(id)arg1 ;
-(BOOL)memberQueueLastResponseWasNotNow;
-(void)setMemberQueueDevAPSConnection:(id)arg1 ;
-(void)setMemberQueueProdAPSConnection:(id)arg1 ;
-(void)setMemberQueueIsMDMConfigurationValid:(BOOL)arg1 ;
-(void)setMemberQueueIdentity:(SecIdentityRef)arg1 ;
-(void)setMemberQueueCheckInURL:(id)arg1 ;
-(void)setMemberQueueManagingProfileIdentifier:(id)arg1 ;
-(void)setMemberQueueAccessRights:(int)arg1 ;
-(void)setMemberQueueUseDevelopmentAPNS:(BOOL)arg1 ;
-(void)setMemberQueuePushMagic:(id)arg1 ;
-(void)memberQueueForgetCurrentConfiguration;
-(id)memberQueueManagingProfileIdentifier;
-(void)setMemberQueueTopic:(id)arg1 ;
-(id)memberQueueTopic;
-(void)setMemberQueueSignMessage:(BOOL)arg1 ;
-(id)memberQueuePushMagic;
-(id)memberQueueDevAPSConnection;
-(id)memberQueueProdAPSConnection;
-(BOOL)memberQueueUseDevelopmentAPNS;
-(void)setMemberQueuePushToken:(id)arg1 ;
-(id)memberQueuePushToken;
-(void)setMemberQueueIsWaitingForPushToken:(BOOL)arg1 ;
-(/*^block*/ id)executionQueuePushTokenWaitContinuationBlock;
-(void)setExecutionQueuePushTokenWaitContinuationBlock:(/*^block*/ id)arg1 ;
-(void)_notifyNewConfiguration:(id)arg1 params:(id)arg2 ;
-(void)_scheduleTokenUpdate:(id)arg1 params:(id)arg2 ;
-(void)_simulatePush:(id)arg1 params:(id)arg2 ;
-(void)_retryNotNow:(id)arg1 params:(id)arg2 ;
-(void)_removeManagedAppsAccordingToFlags:(id)arg1 params:(id)arg2 ;
-(BOOL)readConfigurationOutError:(id*)arg1 ;
-(void)executionQueueCheckForOutstandingActivityIsReachabilityEvent:(BOOL)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_networkReachabilityDidChange;
-(void)_keybagStateDidChange;
-(void)setMKBLockStatusNotifyToken:(int)arg1 ;
-(id)executionQueueCachedResponse;
-(void)schedulePollingServerForCommand;
-(BOOL)memberQueueIsMDMConfigurationValid;
-(BOOL)tokenUpdate;
-(void)_executionQueueCheckForOutstandingActivityIsReachabilityEvent:(BOOL)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)executionQueueTellServerAboutDeviceTokenCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)memberQueueIsWaitingForPushToken;
-(void)executionQueuePollServerForCommandCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setTokenUpdate:(BOOL)arg1 ;
-(void)setExecutionQueueCachedResponse:(id)arg1 ;
-(BOOL)executionQueueIsCheckinInProgress;
-(void)setExecutionQueueIsCheckinInProgress:(BOOL)arg1 ;
-(int)memberQueueAccessRights;
-(id)memberQueueCheckInURL;
-(BOOL)memberQueueSignMessage;
-(void)executionQueueRemoveMDMProfile;
-(id)unauthorizedByServerError;
-(void)pushTokenCompletionBlock:(/*^block*/ id)arg1 ;
-(void)sendResponse:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)setMemberQueuePollRequested:(BOOL)arg1 ;
-(id)_idleResponse;
-(void)setMemberQueueLastResponseWasNotNow:(BOOL)arg1 ;
-(void)executionQueueHandleRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)memberQueueCommandUUID;
-(void)setMemberQueueCommandUUID:(id)arg1 ;
-(int)MKBLockStatusNotifyToken;
-(void)setMessageCenter:(id)arg1 ;
-(int)memberQueueMKBLockStatusNotifyToken;
-(void)setMemberQueueMKBLockStatusNotifyToken:(int)arg1 ;
-(BOOL)memberQueuePollRequested;
-(int)memberQueuePowerAssertionAssertedNotificationToken;
-(void)setMemberQueuePowerAssertionAssertedNotificationToken:(int)arg1 ;
-(int)memberQueuePowerAssertionDeassertedNotificationToken;
-(void)setMemberQueuePowerAssertionDeassertedNotificationToken:(int)arg1 ;
-(id)organizationName;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setServerURL:(id)arg1 ;
-(id)retainBusy;
-(BOOL)hasOutstandingActivity;
-(id)memberQueue;
-(void)setMemberQueue:(id)arg1 ;
-(id)serverURL;
-(id)serverName;
-(id)responseFromBasicResponse:(id)arg1 ;
-(id)sendResponseSynchronously:(id)arg1 outStatusCode:(int*)arg2 outError:(id*)arg3 ;
-(id)organizationInfo;
-(id)MDMOptions;
-(void)setOrganizationInfo:(id)arg1 ;
-(void)setMDMOptions:(id)arg1 ;
-(void)releaseBusy:(id)arg1 ;
-(id)messageCenter;
-(void)jobQueueDidRetainBusy:(id)arg1 ;
-(id)jobQueue;
-(void)jobQueueDidReleaseBusy:(id)arg1 ;
-(void)setJobQueue:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)deviceIsLocked;
-(void).cxx_destruct;
@end

