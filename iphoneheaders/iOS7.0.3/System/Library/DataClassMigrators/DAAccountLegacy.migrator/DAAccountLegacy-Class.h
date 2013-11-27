/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountLegacy : DataClassMigrator {

	unsigned _numAccountsMigrated;
	unsigned _numAccountsNeedingMigration;

}
-(id)_oldAccountsPlistPath;
-(BOOL)_isKnownDAPayloadType:(id)arg1 ;
-(void)_fillOutManagedConfigurationInfo;
-(Class)_legacyClassForAccountType:(id)arg1 ;
-(id)_overriddenACAccountTypeIdentifierForInfo:(id)arg1 ;
-(id)_profileUUIDForAccountPersistentUUID:(id)arg1 ;
-(id)_payloadUUIDForAccountPersistentUUID:(id)arg1 ;
-(id)_updateAccountSettings:(id)arg1 ;
-(BOOL)_importAccountsIntoAccountsFramework:(id)arg1 withStore:(id)arg2 ;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(id)init;
@end

