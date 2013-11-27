/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>

@class MFMailMessageStore, NSString;

@interface MailboxSource : GenericSource {

	MFMailMessageStore* _store;
	NSString* _uniqueID;
	NSString* _originalPath;
	CFDictionaryRef _messageCache;
	CFSetRef _messagesRemovedByUser;
	unsigned _protectedDataIsAvailable : 1;
	unsigned _shouldThread : 1;

}

@property (nonatomic,retain) MFMailMessageStore * store;              //@synthesize store=_store - In the implementation block
-(BOOL)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(BOOL)supportsSearch;
-(id)mailboxUid_internal;
-(BOOL)isBaseSource;
-(void)setLastViewedMessage:(id)arg1 ;
-(BOOL)supportsDeleteAll;
-(BOOL)deleteMovesToTrash;
-(BOOL)supportsMarkAll;
-(id)accountForAutoFetch;
-(void)markAllMessagesAsViewed;
-(void)markAllMessagesAsNotViewed;
-(void)markAllMessagesAsFlagged;
-(void)markAllMessagesAsNotFlagged;
-(id)diagnosticDescription;
-(BOOL)shouldShowUnreadCount;
-(BOOL)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(void)emptyTrashAsNeeded;
-(unsigned)currentFetchWindow;
-(int)fetchMobileSynchronously:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)shouldPlayNewMailSound;
-(id)uniqueIDForStatus;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(BOOL)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(BOOL)representsMailboxID:(unsigned)arg1 ;
-(id)bulletinsContext;
-(unsigned)remoteMessageCount;
-(unsigned)onlyRemoteUnreadCount;
-(unsigned)remoteAndLocalUnreadCount;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned)arg1 withObserver:(id)arg2 ;
-(void)applyChanges;
-(BOOL)needsFetch;
-(BOOL)shouldThreadConversations;
-(void)_resetSourceAfterAccountsChange;
-(void)_storeMessageFlagsChanged:(id)arg1 ;
-(void)_storeAddedMessages:(id)arg1 ;
-(void)_storeRemovedMessages:(id)arg1 ;
-(void)_forwardNotification:(id)arg1 ;
-(id)_copyObjectsByApplyingPendingChangesToObjects:(id)arg1 ;
-(id)_copyMessageInfosByApplyingPendingChangesToMessageInfos:(id)arg1 ;
-(id)_messageWithLibraryID:(unsigned)arg1 ;
-(unsigned)_messageCountForFetch;
-(id)_copyMessagesByApplyingPendingChangesToMessages:(id)arg1 ;
-(void)_reallyDeleteAllMessagesWithObserver:(id)arg1 ;
-(void)_addAllMessageChangeSetWithOperation:(id)arg1 ;
-(void)_forwardNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateCachedMessage:(id)arg1 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(int)fetchNumOlderMessages:(unsigned)arg1 preservingUID:(id)arg2 ;
-(id)equivalentCriterion;
-(BOOL)supportsFlagging;
-(id)noMessagesLabelText;
-(BOOL)shouldIncludeWholeThreads;
-(BOOL)canLoadOlderMessages;
-(id)store;
-(void)setStore:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)isProtectedDataAvailable;
-(void)close;
-(id)_store;
-(unsigned)messageCount;
-(id)lastViewedMessageDate;
-(BOOL)supportsArchiving;
-(BOOL)shouldArchiveByDefault;
-(BOOL)shouldGrowFetchWindow;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)canFetchSearchResults;
-(int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
-(void)flushCaches;
-(void)open;
@end

