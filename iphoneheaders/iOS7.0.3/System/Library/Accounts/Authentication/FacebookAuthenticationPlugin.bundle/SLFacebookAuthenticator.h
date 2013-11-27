/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Authentication/FacebookAuthenticationPlugin.bundle/FacebookAuthenticationPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccount, ACAccountStore, NSString;

@interface SLFacebookAuthenticator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/ id _completionHandler;
	NSString* _machineId;
	int _retryCount;

}
-(id)_machineId;
-(void)_processResponseDictionary:(id)arg1 ;
-(BOOL)_isErrorTemporary:(int)arg1 ;
-(BOOL)_isLoginApprovalRequired:(int)arg1 ;
-(id)_machineIdFromResponseDictionary:(id)arg1 ;
-(id)_fetchMeInfoForAccount:(id)arg1 ;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(void)signInWithCompletion:(/*^block*/ id)arg1 ;
-(void)_setMachineId:(id)arg1 ;
-(id)_errorForErrorCode:(int)arg1 ;
-(id)_sanitizeResponseForLogging:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void).cxx_destruct;
@end

