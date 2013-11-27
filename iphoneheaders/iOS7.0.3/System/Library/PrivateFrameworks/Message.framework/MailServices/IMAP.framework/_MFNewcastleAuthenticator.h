/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/MFSASLAuthenticator.h>

@class CastleIMAPAccount;

@interface _MFNewcastleAuthenticator : MFSASLAuthenticator {

	BOOL _sentResponse;
	CastleIMAPAccount* _castleAccount;

}

@property (nonatomic,retain) CastleIMAPAccount * castleAccount;              //@synthesize castleAccount=_castleAccount - In the implementation block
-(void)dealloc;
-(id)castleAccount;
-(void)setCastleAccount:(id)arg1 ;
-(id)saslName;
-(id)responseForServerData:(id)arg1 ;
-(BOOL)justSentPlainTextPassword;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(BOOL)supportsInitialClientResponse;
@end

