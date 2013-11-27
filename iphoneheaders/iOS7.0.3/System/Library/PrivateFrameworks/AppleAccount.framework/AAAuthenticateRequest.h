/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/AARequest.h>

@class NSString, ACAccount;

@interface AAAuthenticateRequest : AARequest {

	NSString* _username;
	NSString* _password;
	NSString* _authToken;
	ACAccount* _account;

}

@property (nonatomic,copy) NSString * username;                //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * authToken;               //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
+(Class)responseClass;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(id)urlString;
-(id)urlRequest;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)urlCredential;
-(id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3 ;
-(id)account;
-(void)setUsername:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(id)username;
-(void).cxx_destruct;
@end

