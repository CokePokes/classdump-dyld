/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountSettings/BasicAccount.h>
#import <AccountMigrator/AccountCreationProtocol.h>

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>
+(id)_identifier;
+(id)accountWithBasicAccount:(id)arg1 ;
+(id)typeString;
+(id)basicAccountProperties;
+(id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
+(id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1 ;
+(BOOL)isTetheredSyncingDataclass:(id)arg1 ;
+(id)tetheredSourceForDataClass:(id)arg1 ;
-(id)identifier;
-(id)displayName;
-(id)syncStoreIdentifier;
@end

