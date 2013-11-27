/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, SSAuthenticationResponse, NSData, NSString, SignInResponse;

@interface AuthenticateAttemptOperation : ISOperation <ISStoreURLOperationDelegate> {

	int _attemptNumber;
	SSAuthenticationContext* _authenticationContext;
	SSAuthenticationResponse* _authenticationResponse;
	NSData* _biometricToken;
	BOOL _didFallbackToPassword;
	NSString* _setStoreFrontIdentifier;
	SignInResponse* _signInResponse;

}

@property (readonly) int attemptNumber; 
@property (readonly) SSAuthenticationContext * authenticationContext; 
@property (readonly) SSAuthenticationResponse * authenticationResponse; 
@property (readonly) NSData * biometricToken; 
@property (readonly) BOOL didFallbackToPassword;                                     //@synthesize didFallbackToPassword=_didFallbackToPassword - In the implementation block
@property (readonly) SignInResponse * signInResponse; 
-(id)_newURLOperation;
-(void)_setSignInResponse:(id)arg1 ;
-(int)attemptNumber;
-(id)signInResponse;
-(id)initWithAttemptNumber:(int)arg1 context:(id)arg2 ;
-(int)_biometricAvailability;
-(id)_promptForBiometricMatchWithReason:(int)arg1 error:(id*)arg2 ;
-(BOOL)_shouldPromptAfterBiometricMatch:(id)arg1 ;
-(BOOL)_promptForCredentialsWithReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)_sendAuthenticateRequest:(id*)arg1 ;
-(void)_updateBiometricsWithAccountID:(id)arg1 token:(id)arg2 canPromptUser:(BOOL)arg3 ;
-(void)_setAuthenticationResponse:(id)arg1 ;
-(void)_setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2 ;
-(id)_newURLRequestProperties;
-(id)_newAuthenticateAccountRequestParameters;
-(id)_newAuthenticateSrvRequestBody;
-(BOOL)_shouldUseHeadlessRequest;
-(id)_newAuthenticateSrvURLOperation;
-(id)_newAuthenticateAccountURLOperation;
-(BOOL)_handleResponseFromOperation:(id)arg1 error:(id*)arg2 ;
-(id)biometricToken;
-(void)dealloc;
-(id)init;
-(void)run;
-(BOOL)didFallbackToPassword;
-(id)_account;
-(id)authenticationContext;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2 ;
-(BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2 ;
-(id)authenticationResponse;
@end

