/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ACDOAuthSignerProtocol;
@class NSXPCConnection, ACAccount, ;

@interface ACOAuthSigner : NSObject {

	NSXPCConnection* _connection;
	ACAccount* _account;
	<ACDOAuthSignerProtocol>* _proxyShim;
	BOOL _shouldIncludeAppIdInRequest;

}

@property (assign,nonatomic) BOOL shouldIncludeAppIdInRequest;              //@synthesize shouldIncludeAppIdInRequest=_shouldIncludeAppIdInRequest - In the implementation block
-(id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2 ;
-(void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1 ;
-(void)disconnectFromRemoteOAuthSigner;
-(id)signedURLRequestWithURLRequest:(id)arg1 ;
-(BOOL)shouldIncludeAppIdInRequest;
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
-(void).cxx_destruct;
@end

