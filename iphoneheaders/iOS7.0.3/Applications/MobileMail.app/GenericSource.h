/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MiniMallSource.h>
#import <CoreFoundation/NSCopying.h>

@interface GenericSource : NSObject <MiniMallSource, NSCopying>

@property (getter=isProtectedDataAvailable) BOOL protectedDataAvailable; 
-(BOOL)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(BOOL)supportsSearch;
-(id)mailboxUid_internal;
-(BOOL)isBaseSource;
-(void)setLastViewedMessage:(id)arg1 ;
-(BOOL)supportsDeleteAll;
-(BOOL)deleteMovesToTrash;
-(BOOL)supportsMoveAll;
-(BOOL)supportsMarkAll;
-(id)accountForAutoFetch;
-(id)diagnosticDescription;
-(BOOL)shouldShowUnreadCount;
-(BOOL)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)emptyTrashAsNeeded;
-(unsigned)currentFetchWindow;
-(int)fetchMobileSynchronously:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)shouldPlayNewMailSound;
-(id)uniqueIDForStatus;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)oldestKnownMessage;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(BOOL)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(BOOL)representsMailboxID:(unsigned)arg1 ;
-(id)bulletinsContext;
-(unsigned)remoteMessageCount;
-(unsigned)onlyRemoteUnreadCount;
-(unsigned)remoteAndLocalUnreadCount;
-(void)applyChanges;
-(BOOL)needsFetch;
-(BOOL)shouldThreadConversations;
-(id)copyMessageInfos;
-(BOOL)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(BOOL)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(BOOL)supportsArchivingForMessageInfos:(id)arg1 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(int)fetchNumOlderMessages:(unsigned)arg1 preservingUID:(id)arg2 ;
-(id)equivalentCriterion;
-(BOOL)supportsFlagging;
-(id)noMessagesLabelText;
-(BOOL)shouldIncludeWholeThreads;
-(BOOL)canLoadOlderMessages;
-(/*function pointer*/ void*)comparator;
-(unsigned)type;
-(BOOL)isProtectedDataAvailable;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)close;
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
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
-(void)flushCaches;
-(void)open;
@end

