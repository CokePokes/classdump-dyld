/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Accounts/Accounts-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>

@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, NSMutableSet, NSDictionary, NSSet;

@interface ACAccount : NSObject <NSSecureCoding> {

	ACAccountStore* _store;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	BOOL _haveCheckedForClientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	BOOL _accountAccessAvailable;
	BOOL _authenticated;
	BOOL _active;
	BOOL _supportsAuthentication;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	ACAccount* _parentAccount;
	BOOL _haveCheckedForParentAccount;
	NSString* _parentAccountIdentifier;
	BOOL _haveCheckedForChildAccounts;
	NSArray* _childAccounts;
	NSMutableSet* _enabledDataclasses;
	NSMutableSet* _provisionedDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	id _credentialsDidChangeObserver;
	/*^block*/ id _accountPropertiesTransformer;
	BOOL _creatingFromManagedObject;

}

@property (nonatomic,readonly) NSString * aa_personID; 
@property (nonatomic,readonly) NSString * aa_firstName; 
@property (nonatomic,readonly) NSString * aa_lastName; 
@property (nonatomic,readonly) NSString * aa_primaryEmail; 
@property (nonatomic,readonly) NSString * aa_appleId; 
@property (nonatomic,readonly) NSArray * aa_appleIDAliases; 
@property (nonatomic,readonly) BOOL aa_needsRegistration; 
@property (nonatomic,readonly) BOOL aa_needsEmailConfiguration; 
@property (nonatomic,readonly) BOOL aa_serviceUnavailable; 
@property (nonatomic,readonly) NSDictionary * aa_serviceUnavailableInfo; 
@property (nonatomic,readonly) NSString * aa_protocolVersion; 
@property (nonatomic,readonly) NSString * aa_displayName; 
@property (nonatomic,readonly) NSString * aa_syncStoreIdentifier; 
@property (nonatomic,readonly) NSString * aa_accountTypeString; 
@property (nonatomic,readonly) ACAccount * aa_fmipAccount; 
@property (nonatomic,readonly) NSString * aa_fmipToken; 
@property (nonatomic,readonly) NSString * aa_mapsToken; 
@property (nonatomic,readonly) NSString * aa_accountFooterText; 
@property (nonatomic,readonly) NSDictionary * aa_accountFooterButton; 
@property (nonatomic,readonly) NSDictionary * aa_accountFirstDisplayAlert; 
@property (nonatomic,readonly) ACAccount * aa_liverpoolAccount; 
@property (nonatomic,readonly) ACAccount * aa_childMailAccount; 
@property (assign,setter=aa_setPrimaryAccount:,nonatomic) BOOL aa_isPrimaryAccount; 
@property (assign,setter=aa_setPrimaryEmailVerified:,nonatomic) BOOL aa_isPrimaryEmailVerified; 
@property (assign,setter=aa_setSyncedAccount:,nonatomic) BOOL aa_isSyncedAccount; 
@property (assign,setter=aa_setNeedsToVerifyTerms:,nonatomic) BOOL aa_needsToVerifyTerms; 
@property (setter=aa_setPassword:,nonatomic,copy) NSString * aa_password; 
@property (setter=aa_setAuthToken:,nonatomic,copy) NSString * aa_authToken; 
@property (nonatomic,retain) NSString * mcProfileUUID; 
@property (nonatomic,retain) NSString * mcPayloadUUID; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,retain) ACAccountType * accountType; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * userFullName; 
@property (nonatomic,retain) ACAccountCredential * credential; 
@property (nonatomic,readonly) NSURL * objectID; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
@property (nonatomic,retain) ACAccount * parentAccount; 
@property (nonatomic,readonly) NSString * parentAccountIdentifier; 
@property (nonatomic,readonly) NSArray * childAccounts; 
@property (nonatomic,retain) NSMutableSet * enabledDataclasses; 
@property (nonatomic,retain) NSMutableSet * provisionedDataclasses; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (nonatomic,readonly) NSDictionary * accountProperties; 
@property (nonatomic,readonly) ACAccount * displayAccount; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) NSSet * dirtyProperties;                                                      //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dirtyAccountProperties;                                               //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (nonatomic,readonly) NSString * authenticationType; 
@property (nonatomic,readonly) NSString * credentialType; 
@property (nonatomic,readonly) BOOL supportsPush; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (nonatomic,readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                                            //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
+(id)aa_dataclassesBoundToPrimaryAppleAccount;
+(id)aa_dataclassesBoundToSingleAppleAccount;
+(id)_createNewAccountUID;
+(BOOL)supportsSecureCoding;
-(void)aa_configureCerts;
-(void)aa_removeCerts;
-(id)aa_appleId;
-(void)aa_setPassword:(id)arg1 ;
-(void)aa_setAuthToken:(id)arg1 ;
-(void)aa_updateWithProvisioningResponse:(id)arg1 ;
-(BOOL)aa_isPrimaryAccount;
-(int)mobileMeAccountStatus;
-(void)aa_setNeedsToVerifyTerms:(BOOL)arg1 ;
-(id)aa_fmipAccount;
-(void)aa_setMapsToken:(id)arg1 ;
-(id)aa_childMailAccount;
-(id)aa_displayName;
-(id)aa_accountTypeString;
-(BOOL)aa_isPrimaryEmailVerified;
-(id)aa_protocolVersion;
-(id)aa_fmipToken;
-(id)aa_mapsToken;
-(id)aa_accountFooterText;
-(id)aa_accountFooterButton;
-(id)aa_accountFirstDisplayAlert;
-(BOOL)aa_serviceUnavailable;
-(id)aa_serviceUnavailableInfo;
-(BOOL)aa_isSyncedAccount;
-(BOOL)aa_useCellularForDataclass:(id)arg1 ;
-(void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)aa_needsEmailConfiguration;
-(id)aa_syncStoreIdentifier;
-(id)aa_liverpoolAccount;
-(BOOL)aa_needsToVerifyTerms;
-(id)aa_authTokenWithError:(id*)arg1 ;
-(id)aa_authToken;
-(BOOL)aa_needsRegistration;
-(void)aa_setPrimaryAccount:(BOOL)arg1 ;
-(void)aa_setPrimaryEmailVerified:(BOOL)arg1 ;
-(void)aa_setSyncedAccount:(BOOL)arg1 ;
-(id)aa_firstName;
-(id)aa_lastName;
-(id)aa_personID;
-(id)aa_primaryEmail;
-(id)aa_appleIDAliases;
-(id)aa_password;
-(void)storeOriginalUsername;
-(id)appleID;
-(id)initWithAppleID:(id)arg1 password:(id)arg2 ;
-(id)_registeredBundles;
-(void)setDSID:(id)arg1 ;
-(BOOL)canRemoveAccount;
-(id)dsid;
-(id)mcProfileUUID;
-(void)setMcProfileUUID:(id)arg1 ;
-(id)mcPayloadUUID;
-(void)setMcPayloadUUID:(id)arg1 ;
-(id)mcBackingPayload;
-(void)_clearCachedChildAccounts;
-(void)_clearDirtyProperties;
-(void)_clearCachedCredentials;
-(void)_installCredentialsChangedObserver;
-(void)_markPropertyDirty:(id)arg1 ;
-(void)credentialsChanged:(id)arg1 ;
-(/*^block*/ id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)enabledAndSyncableDataclasses;
-(BOOL)_useParentForCredentials;
-(void)_markCredentialDirty;
-(void)setAccountProperties:(id)arg1 ;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(void)setDataclassProperties:(id)arg1 ;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(void)setCreatingFromManagedObject:(BOOL)arg1 ;
-(void)setAccountPropertiesTransformer:(/*^block*/ id)arg1 ;
-(id)displayAccount;
-(id)accountStore;
-(void)_setObjectID:(id)arg1 ;
-(id)dirtyProperties;
-(BOOL)isPropertyDirty:(id)arg1 ;
-(id)userFullName;
-(BOOL)isAuthenticated;
-(id)credentialType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)reload;
-(BOOL)isActive;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)identifier;
-(void)setActive:(BOOL)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(BOOL)supportsAuthentication;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)shortDebugName;
-(void)_setAccountStore:(id)arg1 ;
-(void)setOwningBundleID:(id)arg1 ;
-(void)_loadAllCachedProperties;
-(id)owningBundleID;
-(id)diffAccount:(id)arg1 ;
-(void)setParentAccount:(id)arg1 ;
-(id)dirtyAccountProperties;
-(void)setEnabledDataclasses:(id)arg1 ;
-(void)markAllPropertiesDirty;
-(id)initWithManagedAccount:(id)arg1 ;
-(id)childAccounts;
-(void)setLastCredentialRenewalRejectionDate:(id)arg1 ;
-(id)accountByCleaningThirdPartyTransformations;
-(id)lastCredentialRenewalRejectionDate;
-(id)clientToken;
-(BOOL)authenticated;
-(BOOL)isEnabledToSyncDataclass:(id)arg1 ;
-(id)dataclassProperties;
-(BOOL)addClientToken:(id)arg1 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(BOOL)supportsPush;
-(id)provisionedDataclasses;
-(id)authenticationType;
-(void)setAuthenticationType:(id)arg1 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(void)setProvisionedDataclasses:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(id)parentAccount;
-(id)parentAccountIdentifier;
-(id)accountProperties;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)accountDescription;
-(void)setUsername:(id)arg1 ;
-(void)setAccountDescription:(id)arg1 ;
-(id)credentialWithError:(id*)arg1 ;
-(void)setCredential:(id)arg1 ;
-(id)enabledDataclasses;
-(void)refresh;
-(id)initWithAccountType:(id)arg1 ;
-(void)setCredentialType:(id)arg1 ;
-(id)objectID;
-(id)creationDate;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(void)setCreationDate:(id)arg1 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(id)username;
-(BOOL)isDirty;
-(void).cxx_destruct;
-(void)setAccountType:(id)arg1 ;
-(id)accountType;
-(id)credential;
@end

