/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/SMTPAccount.h>
#import <IMAP/MFGmailAccountClientTokenProtocol.h>

@class GmailAccount;

@interface MFGmailSMTPAccount : SMTPAccount <MFGmailAccountClientTokenProtocol> {

	GmailAccount* _account;

}

@property (getter=mailAccountIfAvailable,nonatomic,retain) GmailAccount * mailAccount;              //@synthesize account=_account - In the implementation block
+(id)accountTypeIdentifier;
-(id)password;
-(void)dealloc;
-(id)clientToken;
-(void)setMailAccount:(id)arg1 ;
-(id)_urlFromResponse:(id)arg1 ;
-(BOOL)usesSSL;
-(id)preferredAuthScheme;
-(unsigned)portNumber;
-(BOOL)shouldUseAuthentication;
-(id)mailAccountIfAvailable;
-(id)displayHostname;
-(id)errorForResponse:(id)arg1 ;
-(id)username;
-(id)hostname;
@end

