/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Authentication/FlickrAuthenticationPlugin.bundle/FlickrAuthenticationPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsDaemon/ACDAccountAuthenticationPlugin.h>

@interface SLFlickrAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>
+(BOOL)supportsAccountType:(id)arg1 ;
-(void)_logInToAccount:(id)arg1 withPWToken:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_handleLoginCompletionForAccount:(id)arg1 withResponseData:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_authorizeTCookie:(id)arg1 yCookie:(id)arg2 forAccount:(id)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(void)_handleCookieAuthorizationCompletionForAccount:(id)arg1 withResponseData:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_unscrambleString:(id)arg1 ;
-(void)_requestPWTokenForAccount:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)_errorFromResponseData:(id)arg1 httpResponse:(id)arg2 ;
-(void)_handlePWTokenGetCompletionForAccount:(id)arg1 withResponseData:(id)arg2 HTTPResponse:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)_dictionaryWithResponseString:(id)arg1 ;
-(id)_queryDictionaryFromString:(id)arg1 ;
-(id)_consumerSecret;
-(id)_consumerKey;
-(id)_urlEncodedString:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/ id)arg4 ;
@end

