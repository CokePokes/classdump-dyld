/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAPAccount.h>
#import <IMAP/MFGmailAccountClientTokenProtocol.h>

@class NSURLConnection, NSURLCredential, NSString;

@interface GmailAccount : IMAPAccount <MFGmailAccountClientTokenProtocol> {

	NSURLConnection* _enablingConnection;
	NSURLCredential* _credential;
	NSString* _clientToken;
	unsigned _isEnabling : 1;
	unsigned _didEnable : 1;

}
+(BOOL)setupIsAutomated;
+(id)descriptionPlaceholder;
+(int)advancedSpecifiersOptions;
+(id)userInfoForAccountTopLevelSpecifier;
+(id)emailAddressHostPart;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
+(id)imapNotEnabledPrefix;
+(id)accountTypeIdentifier;
+(id)displayedAccountTypeString;
+(id)authSchemesForAccountClass;
+(BOOL)isPredefinedAccountType;
+(BOOL)usernameIsEmailAddress;
+(id)hostname;
-(id)accountStore;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)clientToken;
-(id)_consumeExistingPreAuthToken;
-(BOOL)_isOurConnection:(id)arg1 ;
-(id)_URLFromUncleanString:(id)arg1 ;
-(id)_webLoginErrorWithURL:(id)arg1 ;
-(void)_removeCredential:(id)arg1 ;
-(id)permanentTagForType:(int)arg1 ;
-(BOOL)xListSupportedOnConnection:(id)arg1 ;
-(BOOL)supportsArchiving;
-(BOOL)shouldArchiveByDefault;
-(int)archiveDestinationForMailbox:(id)arg1 ;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(id)preferredAuthScheme;
-(BOOL)shouldEnableAfterError:(id)arg1 ;
-(BOOL)enableAccount;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(id)emailAddresses;
-(void)_deleteHook;
-(id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2 ;
-(id)_childOfMailbox:(id)arg1 withComponentName:(id)arg2 ;
-(int)emptyFrequencyForMailboxType:(int)arg1 ;
-(id)allMailMailboxUid;
-(BOOL)archiveSentMessages;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1 ;
-(id)statisticsKind;
-(id)iconString;
-(id)errorForResponse:(id)arg1 ;
-(id)hostname;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end

