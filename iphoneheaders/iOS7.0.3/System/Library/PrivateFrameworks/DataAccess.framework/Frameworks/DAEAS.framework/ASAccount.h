/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccess/DAAccount.h>

@class ASFolderHierarchy, ASProtocol, NSMutableSet, NSLock, NSError, ASTaskManager, NSString;

@interface ASAccount : DAAccount {

	ASFolderHierarchy* _folderHierarchy;
	ASProtocol* _protocol;
	NSMutableSet* _searchTaskSet;
	NSMutableSet* _autodiscoveryTasks;
	NSLock* _autodiscoverTaskLock;
	NSError* _autodiscovery401Error;
	BOOL _useHTTPForTesting;
	BOOL _useLocalhostForAutodiscoveryTesting;
	BOOL _oneAutodiscoverAtATime;
	BOOL _isValidating;
	int _asAccountVersion;

}

@property (nonatomic,readonly) ASTaskManager * taskManager; 
@property (assign) int mailNumberOfPastDaysToSync; 
@property (readonly) int mailNumberOfPastDaysToSyncUpperLimit; 
@property (setter=setASAccountVersion:) int asAccountVersion;               //@synthesize asAccountVersion=_asAccountVersion - In the implementation block
@property (copy) NSString * deviceManagementID; 
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
-(void)dealloc;
-(id)protocol;
-(void)applyNewAccountProperties:(id)arg1 saveIfDifferent:(BOOL)arg2 ;
-(void)setMailNumberOfPastDaysToSync:(int)arg1 ;
-(id)foldersTag;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)arg1 ;
-(void)cancelAllSearchQueries;
-(BOOL)searchQueriesRunning;
-(id)existingTaskManager;
-(id)policyManager;
-(id)taskManager;
-(void)autodiscoverTask:(id)arg1 completedWithStatus:(int)arg2 accountInfo:(id)arg3 shouldRetryWithEmail:(id)arg4 error:(id)arg5 ;
-(void)fetchAttachmentTask:(id)arg1 completedWithStatus:(int)arg2 dataWasBase64:(BOOL)arg3 error:(id)arg4 ;
-(void)fetchAttachmentTask:(id)arg1 receivedData:(id)arg2 ofContentType:(id)arg3 ;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(void)searchTask:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchTask:(id)arg1 returnedTotalCount:(id)arg2 ;
-(void)searchTask:(id)arg1 finishedWithError:(id)arg2 ;
-(BOOL)itemOperationsTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char*)arg6 dataLength:(int)arg7 ;
-(BOOL)itemOperationsTask:(id)arg1 hasPartialResponses:(id)arg2 ;
-(void)itemOperationsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 responses:(id)arg4 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)_newPolicyManager;
-(id)stateString;
-(BOOL)isGoogleAccount;
-(void)setEnabled:(BOOL)arg1 forDADataclass:(int)arg2 ;
-(id)_folderHierarchy;
-(void)blowAwayFolderCache;
-(void)resetAccountID;
-(id)_visibleASFolders;
-(BOOL)syncDefaultFoldersOnly;
-(id)folderWithId:(id)arg1 ;
-(id)_defaultMailFolderWithDefaultType:(int)arg1 fallbackType:(int)arg2 fallbackName:(id)arg3 ;
-(id)asFolderWithId:(id)arg1 ;
-(id)defaultContactsFolder;
-(id)defaultEventsFolder;
-(id)defaultToDosFolder;
-(id)defaultNotesFolder;
-(void)_getContextElementsForItemChangeType:(int)arg1 dataclass:(int)arg2 nativeContext:(id)arg3 outContext:(id*)arg4 outServerId:(id*)arg5 ;
-(void)_removeInvitationsForMailboxFolderID:(id)arg1 ;
-(void)_fillOutActionsArray:(id)arg1 responseArray:(id)arg2 withTask:(id)arg3 added:(id)arg4 removed:(id)arg5 modified:(id)arg6 perserved:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11 ;
-(void*)_copyExchangeCalendarStore:(BOOL)arg1 ;
-(void)_explodeEmailAddress:(id)arg1 outUsername:(id*)arg2 outEmailAddress:(id*)arg3 ;
-(BOOL)_generateAutodiscoverURLsForEmailAddress:(id)arg1 explicitUsername:(id)arg2 withConsumer:(id)arg3 ;
-(void)_silentlyTearDownAutodiscoveryTasks;
-(int)mailNumberOfPastDaysToSyncUpperLimit;
-(id)lastKnownProtocolVersion;
-(BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;
-(BOOL)_shouldSaveLastKnownProtocolVersion;
-(void)setLastKnownProtocolVersion:(id)arg1 save:(BOOL)arg2 ;
-(void)setLastKnownProtocolVersion:(id)arg1 ;
-(void)accountDidUpdateProtocolVersion;
-(BOOL)_shouldEditNotesSupportOnProtocolChange;
-(id)domainOnly;
-(id)usernameWithoutDomain;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)cleanupAccountFiles;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)getOptionsTask:(id)arg1 completedWithStatus:(int)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5 ;
-(id)deviceManagementID;
-(void)setDeviceManagementID:(id)arg1 ;
-(id)visibleFolders;
-(int)sniffableTypeForFolder:(id)arg1 ;
-(id)contactsFolders;
-(id)eventsFolders;
-(id)toDosFolders;
-(id)notesFolders;
-(id)asFolderHierarchyTaskManager:(id)arg1 ;
-(id)defaultContainerIdentifierForDADataclass:(int)arg1 ;
-(BOOL)shouldFixOnDiskDeviceId;
-(void)folderItemsSyncTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 newSyncKey:(id)arg4 added:(id)arg5 removed:(id)arg6 modified:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11 ;
-(BOOL)folderItemsSyncTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char*)arg6 dataLength:(int)arg7 ;
-(BOOL)folderItemsSyncTask:(id)arg1 hasPartialAdded:(id)arg2 removed:(id)arg3 modified:(id)arg4 addedResponse:(id)arg5 modifiedResponse:(id)arg6 removedResponse:(id)arg7 fetchedResponse:(id)arg8 moreAvailable:(BOOL)arg9 ;
-(void)sendMailTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 ;
-(void*)_copyABAccount:(BOOL)arg1 ;
-(void*)_copyDefaultExchangeEventsCalendar:(BOOL)arg1 ;
-(void)moveItemsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 movedItems:(id)arg4 ;
-(void)setUseHTTPForTesting:(BOOL)arg1 ;
-(void)setUseLocalhostForAutodiscoveryTesting:(BOOL)arg1 ;
-(void)setOneAutodiscoverAtATime:(BOOL)arg1 ;
-(BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1 ;
-(id)savedFolderPathsThatClientsCareAbout;
-(void)setSavedFolderPathsThatClientsCareAbout:(id)arg1 ;
-(void)upgradeWithProtocolVersion:(id)arg1 ;
-(BOOL)isActiveSyncAccount;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(int)asAccountVersion;
-(void)setASAccountVersion:(int)arg1 ;
-(void)setProtocolVersion:(id)arg1 ;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(BOOL)isHotmailAccount;
-(BOOL)enabledForDADataclass:(int)arg1 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)mailNumberOfPastDaysToSync;
-(void)performSearchQuery:(id)arg1 ;
-(void)cancelSearchQuery:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 ;
-(id)signingIdentityPersistentReference;
-(void)setSigningIdentityPersistentReference:(id)arg1 ;
-(id)encryptionIdentityPersistentReference;
-(void)setEncryptionIdentityPersistentReference:(id)arg1 ;
-(void)cancelTaskWithID:(int)arg1 ;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 consumer:(id)arg9 context:(void*)arg10 ;
@end

