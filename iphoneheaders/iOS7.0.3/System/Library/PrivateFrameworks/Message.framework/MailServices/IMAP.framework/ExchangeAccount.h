/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAPAccount.h>

@interface ExchangeAccount : IMAPAccount
+(id)accountTypeString;
-(void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3 ;
-(void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3 ;
-(BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
-(BOOL)storeDraftsOnServer;
-(BOOL)storeSentMessagesOnServer;
-(Class)connectionClass;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(BOOL)shouldExpungeMessagesOnDelete;
@end

