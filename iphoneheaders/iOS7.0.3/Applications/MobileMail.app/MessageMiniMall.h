/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MessageSelectionDataSource.h>
#import <MobileMail/MiniMallSourceBulkOperationsDelegate.h>

@class NSMutableSet, NSMutableArray, NSCache, MFActivityMonitor, MessageSelectionStrategy, MFMailMessage, MFMessageCriterion, NSArray, SearchOrderCache;

@interface MessageMiniMall : NSObject <MessageSelectionDataSource, MiniMallSourceBulkOperationsDelegate> {

	NSMutableSet* _sources;
	NSMutableSet* _emptiedSources;
	NSMutableArray* _messageInfos;
	CFDictionaryRef _conversations;
	NSCache* _sendersByConversation;
	unsigned _threadedMessageCount;
	MFActivityMonitor* _fetchActivity;
	BOOL _userRefresh;
	MessageSelectionStrategy* _selectionStrategy;
	MFMailMessage* _currentMessage;
	int _lastChangeDirection;
	MFMessageCriterion* _searchCriterion;
	NSArray* _terms;
	SearchOrderCache* _orderValueCache;
	unsigned _searchOptions;
	/*^block*/ id _comparator;

}

@property (nonatomic,copy) id comparator;              //@synthesize comparator=_comparator - In the implementation block
-(void)_dumpDiagnosticInformation:(id)arg1 ;
-(void)removeAllSources;
-(id)bulletinsContexts;
-(unsigned)messageCountForConversationWithMessage:(id)arg1 ;
-(unsigned)unreadCountForDisplay;
-(BOOL)shouldPopOnZeroMessages;
-(void)setLastViewedMessage:(id)arg1 ;
-(BOOL)archivesByDefault;
-(BOOL)deleteMovesToTrash;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned)arg1 ;
-(id)messageToSelectAfterDeletedMessage:(id)arg1 ;
-(void)markMessages:(id)arg1 asDeletedOrArchived:(unsigned)arg2 ;
-(id)copyAllMessages;
-(void)markAllMessagesAsViewed;
-(void)markAllMessagesAsNotViewed;
-(void)markAllMessagesAsFlagged;
-(void)markAllMessagesAsNotFlagged;
-(void)moveAllMessagesToMailbox:(id)arg1 ;
-(void)transferMessages:(id)arg1 toMailbox:(id)arg2 ;
-(id)messageToSelectAfterDeletedMessages:(id)arg1 ;
-(id)titleWithUnreadCount:(unsigned)arg1 options:(unsigned)arg2 ;
-(BOOL)shouldShowUnreadCount;
-(id)sourceForMailbox:(id)arg1 ;
-(id)currentRemoteIDForMailbox:(id)arg1 ;
-(unsigned)localMessageCount;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)defaultMessageIncludingUnread:(BOOL)arg1 ;
-(void)getSourceStateHasUnread:(BOOL*)arg1 hasUnflagged:(BOOL*)arg2 ;
-(void)setComparator:(/*^block*/ id)arg1 ;
-(void)_protectedDataWillBecomeUnavailable:(id)arg1 ;
-(void)_protectedDataWasReconciled:(id)arg1 ;
-(void)_messageFlagsChanged:(id)arg1 ;
-(void)_messagesAdded:(id)arg1 ;
-(void)_messagesCompacted:(id)arg1 ;
-(void)_checkServerCount:(id)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(void)_sourceDidReload:(id)arg1 ;
-(void)_sourceDidFinishSearch:(id)arg1 ;
-(void)_purgeCachedMessageInfosWithReason:(id)arg1 ;
-(void)setSearchCriterion:(id)arg1 terms:(id)arg2 options:(unsigned)arg3 ;
-(void)_fetchCompleted:(id)arg1 ;
-(void)_checkForNewMailAndNotifyOnFailure:(BOOL)arg1 ;
-(void)_checkForNewMailAndNotifyOnFailureBackground:(BOOL)arg1 userRefresh:(BOOL)arg2 foregroundRequest:(BOOL)arg3 sourcesToCheck:(id)arg4 remoteID:(id)arg5 ;
-(void)_handleFetchCompleted:(id)arg1 ;
-(BOOL)ensureWeHaveLoadedMessages;
-(BOOL)allSourcesThreadMessages;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)_messageForMessageInfo:(id)arg1 cache:(BOOL)arg2 ;
-(void)_nts_getConversationStateFromNewestMessageInfo:(id)arg1 shouldThread:(BOOL)arg2 hasUnread:(BOOL*)arg3 hasUnflagged:(BOOL*)arg4 ;
-(id)_sourceForMessageInfo:(id)arg1 ;
-(unsigned)flattenedIndexOfMessage:(id)arg1 ;
-(unsigned)tableIndexOfConversationWithID:(long long)arg1 ;
-(unsigned)tableIndexOfConversationContainingMessage:(id)arg1 ;
-(id)_copySources;
-(unsigned)tableIndexOfMessage:(id)arg1 ;
-(unsigned)_tableIndexOfMessageOrConversation:(id)arg1 conversationMustContainMessage:(BOOL)arg2 ;
-(unsigned)tableIndexOfMessageOrConversation:(id)arg1 ;
-(id)messageToSelectFromMessage:(id)arg1 withDirection:(int)arg2 ;
-(id)messageAtTableIndex:(unsigned)arg1 ;
-(void)getLastViewedMessage:(id*)arg1 date:(id*)arg2 ;
-(BOOL)isInCombinedMailboxOfType:(int)arg1 ;
-(id)junkMailboxMessagesInMessages:(id)arg1 ;
-(void)_addChangeSetToManager:(id)arg1 ;
-(id)_removeMessages:(id)arg1 ;
-(void)_filterTaskCompletedWithContext:(id)arg1 ;
-(/*^block*/ id)_searchOrderComparator;
-(id)messageForMessageInfo:(id)arg1 ;
-(void)_synchronouslyFilterInMessages:(id)arg1 fromSource:(id)arg2 ;
-(void)_synchronouslyFilterOutMessages:(id)arg1 fromSource:(id)arg2 ;
-(id)_copyAllMessageInfos;
-(id)_cachedMessageForMessageInfo:(id)arg1 ;
-(BOOL)areAnySourcesSearching;
-(unsigned)tableIndexOfCurrentMessage;
-(void)_currentMessageRemovedWithMessageToSelect:(id)arg1 ;
-(CFDictionaryRef)_copyMessageInfosBySourceForTableIndex:(unsigned)arg1 ;
-(BOOL)_hasOnlyThreadedSources;
-(/*^block*/ id)comparatorForMallContainingMessage:(id)arg1 ;
-(int)lastChangeDirection;
-(unsigned)flattenedIndexOfWhereMessageShouldGo:(id)arg1 ;
-(id)messageAtFlattenedIndex:(unsigned)arg1 ;
-(id)conversationContainingMessage:(id)arg1 ;
-(void)didDeleteAllMessagesInSource:(id)arg1 ;
-(void)trackFetchVisibleStoresActivity:(id)arg1 ;
-(void)checkForNewMailAndNotifyOnFailure:(BOOL)arg1 userRefresh:(BOOL)arg2 ;
-(void)updateEntry:(id)arg1 atTableIndex:(unsigned)arg2 addressList:(id*)arg3 ;
-(void)getConversationStateAtTableIndex:(unsigned)arg1 hasUnread:(BOOL*)arg2 hasUnflagged:(BOOL*)arg3 ;
-(id)messagesAtTableIndex:(unsigned)arg1 ;
-(id)sourcesForMessagesAtTableIndex:(unsigned)arg1 ;
-(unsigned)messageCountAtTableIndex:(unsigned)arg1 ;
-(void)getIndex:(unsigned*)arg1 andCount:(unsigned*)arg2 ofMessageInConversation:(id)arg3 ;
-(unsigned)tableIndexOfOldestMessageInSource:(id)arg1 ;
-(unsigned)tableIndexOfFlattenedCurrentMessage;
-(void)setLastChangeDirection:(int)arg1 ;
-(BOOL)deleteMovesToTrashForMessage:(id)arg1 ;
-(BOOL)supportsArchivingForMessage:(id)arg1 ;
-(BOOL)archiveByDefaultForMessage:(id)arg1 ;
-(BOOL)deleteMovesToTrashForTableIndex:(unsigned)arg1 ;
-(BOOL)supportsArchivingForTableIndex:(unsigned)arg1 ;
-(BOOL)shouldArchiveByDefaultForTableIndex:(unsigned)arg1 ;
-(BOOL)isInCombinedInbox;
-(id)_orderValueCache;
-(unsigned)threadedCount;
-(id)fetchActivity;
-(/*^block*/ id)comparator;
-(void)addSource:(id)arg1 ;
-(id)sources;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)removeObserver:(id)arg1 ;
-(void)resume;
-(unsigned)sourceType;
-(void)addObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(unsigned)messageCount;
-(id)currentMessage;
-(unsigned)serverMessageCount;
-(BOOL)supportsArchiving;
-(unsigned)serverUnreadCount;
-(void)flushCaches;
-(void)setCurrentMessage:(id)arg1 ;
@end

