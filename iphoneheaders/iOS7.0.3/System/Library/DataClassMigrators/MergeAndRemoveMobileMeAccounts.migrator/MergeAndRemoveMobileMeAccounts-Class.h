/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@class ASSAccountsManager;

@interface MergeAndRemoveMobileMeAccounts : DataClassMigrator {

	ASSAccountsManager* _manager;

}
-(BOOL)_mergeAccountDataToLocalStore:(id)arg1 ;
-(id)dataClassName;
-(BOOL)performMigration;
-(BOOL)_removeAccount:(id)arg1 ;
-(void).cxx_destruct;
@end

