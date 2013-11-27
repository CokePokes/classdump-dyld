/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DataAccess/ASAccountActor.h>
#import <DataAccess/ASAccountActorMessages.h>

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages> {

	ASClientAccount* _account;

}
+(void)_runActorThreadWithStartupLock:(id)arg1 ;
+(CFRunLoopRef)_actorRunLoop;
-(void)dealloc;
-(void)disable;
-(void)_performSynchronousSerialOnActorQueue:(/*^block*/ id)arg1 ;
-(void)_performAsynchronousSerialOnActorQueue:(/*^block*/ id)arg1 ;
-(oneway void)setMailNumberOfPastDaysToSync:(int)arg1 ;
-(void)_sendFailureToConsumer:(id)arg1 ;
-(oneway void)cancelAllSearchQueries;
-(BOOL)searchQueriesRunning;
-(oneway void)_daemonDiedNotification:(id)arg1 ;
-(oneway void)_folderUpdatedNotification:(id)arg1 ;
-(oneway void)_newASPolicyKeyNotification:(id)arg1 ;
-(oneway void)_folderHierarchyChanged;
-(oneway void)_foldersThatExternalClientsCareAboutChanged;
-(oneway void)startup;
-(BOOL)generatesBulletins;
-(oneway void)setGeneratesBulletins:(BOOL)arg1 ;
-(id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1 ;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5 ;
-(id)initWithDAAccount:(id)arg1 ;
-(id)customSignature;
-(oneway void)setCustomSignature:(id)arg1 ;
-(oneway void)setAccount:(id)arg1 ;
-(id)mailboxes;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(void)performFolderChange:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)mailNumberOfPastDaysToSync;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5 ;
-(int)performMoveRequests:(id)arg1 consumer:(id)arg2 ;
-(oneway void)shutdown;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2 ;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3 ;
-(id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)arg1 withTag:(id*)arg2 ;
-(oneway void)monitorFoldersForUpdates:(id)arg1 ;
-(oneway void)stopMonitoringAllFolders;
-(oneway void)performSearchQuery:(id)arg1 ;
-(oneway void)cancelSearchQuery:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 ;
-(oneway void)stopMonitoringFoldersForUpdates:(id)arg1 ;
-(id)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(id)arg1 ;
-(id)encryptionIdentityPersistentReference;
-(oneway void)setEncryptionIdentityPersistentReference:(id)arg1 ;
-(int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2 ;
-(int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2 ;
-(oneway void)cancelTaskWithID:(int)arg1 ;
-(int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2 ;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 consumer:(id)arg9 context:(void*)arg10 ;
@end

