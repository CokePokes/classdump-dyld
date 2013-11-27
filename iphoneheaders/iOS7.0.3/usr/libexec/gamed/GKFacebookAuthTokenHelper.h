/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccountStore, ACAccountType, ACAccount, NSString;

@interface GKFacebookAuthTokenHelper : NSObject {

	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	ACAccount* _account;
	NSString* _authToken;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccountType * accountType;                //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * authToken;                       //@synthesize authToken=_authToken - In the implementation block
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(void)fetchMeObjectWithHandler:(/*^block*/ id)arg1 ;
-(void)requestAccessToAccountWithHandler:(/*^block*/ id)arg1 ;
-(void)requestAuthTokenWithHandler:(/*^block*/ id)arg1 ;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)setAccountType:(id)arg1 ;
-(id)accountType;
@end

