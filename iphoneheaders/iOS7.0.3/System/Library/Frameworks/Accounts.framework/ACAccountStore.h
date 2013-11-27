/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, ACDAccountStoreProtocol;
@class NSXPCConnection, NSString, NSObject, , NSArray;

@interface ACAccountStore : NSObject {

	NSXPCConnection* _connection;
	NSString* _clientBundleID;
	NSObject<OS_dispatch_queue>* _replyQueue;
	BOOL _shouldSendClientState;
	BOOL _notificationsEnabled;
	id _daemonAccountStoreDidChangeObserver;
	<ACDAccountStoreProtocol>* _remoteAccountStore;

}

@property (nonatomic,readonly) NSArray * accounts; 
@property (readonly) NSString * effectiveBundleID;                                        //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) <ACDAccountStoreProtocol> * remoteAccountStore;              //@synthesize remoteAccountStore=_remoteAccountStore - In the implementation block
+(BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1 ;
+(int)accountsWithAccountTypeIdentifierExist:(id)arg1 ;
+(int)countOfAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(void)da_loadDAAccountsEnabledForDADataclasses:(int)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2 filterOnDataclasses:(BOOL)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(void)da_loadDAAccountsWithCompletion:(/*^block*/ id)arg1 ;
-(void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(id)da_accounts;
-(id)da_accountsEnabledForDADataclasses:(int)arg1 ;
-(id)da_accountsWithAccountTypeIdentifiers:(id)arg1 ;
-(id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2 ;
-(void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(id)aa_appleAccountType;
-(void)_performUpdateRequestWithAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)aa_appleAccounts;
-(id)aa_appleAccountWithUsername:(id)arg1 ;
-(id)aa_appleAccountWithPersonID:(id)arg1 ;
-(id)aa_accountsEnabledForDataclass:(id)arg1 ;
-(void)aa_registerAppleAccount:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)aa_primaryAppleAccount;
-(id)accountsWithAccountType:(id)arg1 appleID:(id)arg2 ;
-(id)accountWithAppleID:(id)arg1 ;
-(id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2 ;
-(void)disconnectFromRemoteAccountStore;
-(void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)credentialForAccount:(id)arg1 error:(id*)arg2 ;
-(id)initWithRemoteEndpoint:(id)arg1 ;
-(void)insertAccountType:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)removeAccountType:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)canSaveAccount:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)promptForWebLoginForAccount:(id)arg1 atURL:(id)arg2 callbackURL:(id)arg3 force:(BOOL)arg4 reason:(id)arg5 completion:(/*^block*/ id)arg6 ;
-(id)allAccountTypes;
-(id)allDataclasses;
-(id)credentialForAccount:(id)arg1 bundleID:(id)arg2 ;
-(id)parentAccountForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2 ;
-(id)enabledDataclassesForAccount:(id)arg1 ;
-(id)provisionedDataclassesForAccount:(id)arg1 ;
-(id)supportedDataclassesForAccountType:(id)arg1 ;
-(id)syncableDataclassesForAccountType:(id)arg1 ;
-(id)accessKeysForAccountType:(id)arg1 ;
-(id)appPermissionsForAccountType:(id)arg1 ;
-(void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 ;
-(void)clearAllPermissionsGrantedForAccountType:(id)arg1 ;
-(BOOL)permissionForAccountType:(id)arg1 ;
-(id)grantedPermissionsForAccountType:(id)arg1 ;
-(void)clearGrantedPermissionsForAccountType:(id)arg1 ;
-(id)typeIdentifierForDomain:(id)arg1 ;
-(id)accountIdentifiersEnabledForDataclass:(id)arg1 ;
-(id)dataclassActionsForAccountSave:(id)arg1 ;
-(id)dataclassActionsForAccountDeletion:(id)arg1 ;
-(BOOL)hasAccountWithDescription:(id)arg1 ;
-(BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1 ;
-(id)tetheredSyncSourceTypeForDataclass:(id)arg1 ;
-(id)remoteAccountStore;
-(void)setRemoteAccountStore:(id)arg1 ;
-(id)displayTypeForAccountWithIdentifier:(id)arg1 ;
-(id)accountIdentifiersEnabledToSyncDataclass:(id)arg1 ;
-(int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_connectToRemoteAccountStoreUsingEndpoint:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(/*^block*/ id)arg3 ;
-(BOOL)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)handleURL:(id)arg1 ;
-(id)_remoteAccountStore;
-(void)saveAccount:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)accounts;
-(void)accountWithIdentifier:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)credentialForAccount:(id)arg1 ;
-(void)verifyCredentialsForAccount:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)addClientToken:(id)arg1 forAccount:(id)arg2 ;
-(id)clientTokenForAccount:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)accountTypeWithAccountTypeIdentifier:(id)arg1 ;
-(void)accountsWithAccountType:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)accountTypeWithIdentifier:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)removeAccount:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void).cxx_destruct;
-(id)accountsWithAccountType:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)initWithEffectiveBundleID:(id)arg1 ;
-(id)effectiveBundleID;
@end

