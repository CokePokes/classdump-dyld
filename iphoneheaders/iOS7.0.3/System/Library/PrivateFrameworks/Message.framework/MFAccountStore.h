/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccountStore;

@interface MFAccountStore : NSObject {

	int _accountStoreLock;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * persistentStore; 
+(id)sharedAccountStore;
+(id)incomingAccountTypeIdentifiers;
+(id)deliveryAccountTypeIdentifiers;
+(BOOL)_shouldUpdateAccountsInPlace;
+(id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(BOOL)arg3 ;
-(id)persistentStore;
-(void)dealloc;
-(id)init;
-(id)existingAccountWithPersistentAccount:(id)arg1 ;
-(id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1 ;
-(id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1 ;
-(void)savePersistentAccountWithAccount:(id)arg1 ;
-(void)removePersistentAccountWithAccount:(id)arg1 ;
-(id)incomingAccountsWithError:(id*)arg1 ;
-(id)deliveryAccountsWithError:(id*)arg1 ;
-(void)setPersistentStore:(id)arg1 ;
-(void)_accountsStoreChanged:(id)arg1 ;
-(id)accountsWithTypeIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_accountWithPersistentAccount:(id)arg1 useExisting:(BOOL)arg2 ;
@end

