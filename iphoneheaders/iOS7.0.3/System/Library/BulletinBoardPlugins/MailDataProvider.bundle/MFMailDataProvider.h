/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/MailDataProvider.bundle/MailDataProvider
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MailDataProvider/MSNotificationDelegate.h>
#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, MFDelayedMessagesPresenter, NSObject, NSLock, NSArray, MSNotificationObserver;

@interface MFMailDataProvider : NSObject <MSNotificationDelegate, BBDataProvider> {

	NSMutableSet* _accountsUsingExternalSync;
	MFDelayedMessagesPresenter* _delayedMessages;
	int _launchToken;
	NSObject<OS_dispatch_queue>* _queue;
	NSLock* _lock;
	NSArray* _accounts;
	MSNotificationObserver* _service;

}

@property (retain) MSNotificationObserver * service;              //@synthesize service=_service - In the implementation block
@property (retain) NSArray * accounts;                            //@synthesize accounts=_accounts - In the implementation block
-(void)_nts_setService:(id)arg1 ;
-(void)_nts_setAccounts:(id)arg1 shouldCache:(BOOL)arg2 ;
-(id)_copyCachedAccounts;
-(void)_nts_recalculateAccountsUsingExternalSync;
-(void)_cacheAccounts:(id)arg1 ;
-(unsigned)previewNumberOfLines;
-(BOOL)usingExternalSyncForAccountWithID:(id)arg1 ;
-(id)bulletinRequestForMessage:(id)arg1 showsLoading:(BOOL)arg2 ;
-(id)service;
-(void)dealloc;
-(id)init;
-(id)sectionIdentifier;
-(BOOL)syncsBulletinDismissal;
-(id)sectionParameters;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)bulletinsFilteredBy:(unsigned)arg1 enabledSectionIDs:(id)arg2 count:(unsigned)arg3 lastCleared:(id)arg4 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(id)accounts;
-(void)notificationServiceDidShutdown:(id)arg1 withError:(id)arg2 ;
-(void)notificationService:(id)arg1 didFetchMessages:(id)arg2 ;
-(void)notificationService:(id)arg1 didFetchSummaryForMessages:(id)arg2 ;
-(void)notificationService:(id)arg1 didRemoveMessageIds:(id)arg2 ;
-(void)notificationService:(id)arg1 didChangeAccounts:(id)arg2 hadError:(BOOL)arg3 ;
-(void)messagesInvalidatedForNotificationService:(id)arg1 ;
-(void)protectedDataBecameAvailableForNotificationService:(id)arg1 ;
-(void)_invalidateSectionParametersForNotificationService:(id)arg1 ;
-(void)setService:(id)arg1 ;
-(id)sortDescriptors;
-(void)setAccounts:(id)arg1 ;
@end

