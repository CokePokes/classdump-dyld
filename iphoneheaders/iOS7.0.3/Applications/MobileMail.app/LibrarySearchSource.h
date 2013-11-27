/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>
#import <MobileMail/SearchManagerDelegate.h>
#import <MobileMail/MiniMallSearchWrapper.h>

@protocol OS_dispatch_queue;
@class MFMailMessageLibrary, NSString, NSMutableSet, NSObject, NSArray, SearchManager, NSNumber, MFMessageCriterion;

@interface LibrarySearchSource : GenericSource <SearchManagerDelegate, MiniMallSearchWrapper> {

	MFMailMessageLibrary* _library;
	NSString* _uniqueID;
	NSMutableSet* _messages;
	CFDictionaryRef _messageCache;
	CFDictionaryRef _mailboxCache;
	NSObject<OS_dispatch_queue>* _queue;
	NSArray* _primarySources;
	SearchManager* _searchManager;
	NSNumber* _searchIdentifier;
	MFMessageCriterion* _criterion;
	MFMessageCriterion* _baseCriterion;
	unsigned _isProtectedDataAvailable : 1;
	unsigned _shouldThread : 1;

}

@property (getter=isProtectedDataAvailable) BOOL protectedDataAvailable; 
@property (getter=isSearching,readonly) BOOL searching; 
-(BOOL)representsMailboxUid:(id)arg1 ;
-(BOOL)supportsSearch;
-(id)mailboxUid_internal;
-(BOOL)supportsDeleteAll;
-(BOOL)deleteMovesToTrash;
-(BOOL)supportsMoveAll;
-(BOOL)supportsMarkAll;
-(id)diagnosticDescription;
-(BOOL)shouldCompactOnFetch;
-(id)uniqueIDForStorage;
-(id)initWithLibrary:(id)arg1 primarySources:(id)arg2 ;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)_messageFlagsChanged:(id)arg1 ;
-(void)_messagesAdded:(id)arg1 ;
-(BOOL)shouldPlayNewMailSound;
-(id)uniqueIDForStatus;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(BOOL)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(BOOL)representsMailboxID:(unsigned)arg1 ;
-(void)applyChanges;
-(void)searchForMessagesMatchingCriterion:(id)arg1 ;
-(BOOL)shouldThreadConversations;
-(id)copyMessageInfos;
-(BOOL)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(BOOL)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(BOOL)supportsArchivingForMessageInfos:(id)arg1 ;
-(void)_messagesWillBeCompacted:(id)arg1 ;
-(BOOL)supportsFlagging;
-(BOOL)canLoadOlderMessages;
-(void)_messagesWereCompacted:(id)arg1 ;
-(id)_baseCriterionFromSources:(id)arg1 ;
-(id)_copyMessageInfosFromMessages:(id)arg1 ;
-(id)_applyCriterion:(id)arg1 toMessages:(id)arg2 ;
-(void)_cancelOutstandingSearches;
-(id)_performSearchUsingManager:(id)arg1 withCriterion:(id)arg2 ;
-(void)_notifyMallWithAddedMessages:(id)arg1 modified:(id)arg2 removedMessages:(id)arg3 group:(id)arg4 ;
-(void)_addMessages:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_setMessages:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_notifyMallSearchFinished;
-(id)_mailboxForMessage:(id)arg1 ;
-(void)_purgeCachedMessages:(id)arg1 ;
-(void)_cacheMessages:(id)arg1 ;
-(id)_nts_unknownMessagesFromArray:(id)arg1 ;
-(id)_nts_knownMessagesFromArray:(id)arg1 ;
-(void)_updateMessages:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)_nts_effectiveCriterion;
-(void)_filterInMessages:(id)arg1 usingCriterion:(id)arg2 ;
-(void)_updateMessages:(id)arg1 usingCriterion:(id)arg2 ;
-(void)_removeMessages:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)_copyPrimarySources;
-(id)_sourceForMessageInfo:(id)arg1 sources:(id)arg2 ;
-(void)searchManager:(id)arg1 foundMessages:(id)arg2 keepExistingMessages:(BOOL)arg3 forSearchWithIdentifier:(id)arg4 shouldWait:(BOOL)arg5 ;
-(void)searchManager:(id)arg1 finishedSearchWithIdentifier:(id)arg2 ;
-(BOOL)isSearching;
-(/*function pointer*/ void*)comparator;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(BOOL)isProtectedDataAvailable;
-(void)close;
-(unsigned)messageCount;
-(BOOL)supportsArchiving;
-(BOOL)shouldArchiveByDefault;
-(BOOL)canFetchSearchResults;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(void)flushCaches;
-(void)open;
@end

