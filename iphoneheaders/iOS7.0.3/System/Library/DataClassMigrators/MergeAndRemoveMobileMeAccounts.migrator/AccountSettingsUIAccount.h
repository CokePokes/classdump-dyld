/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AccountSettingsUIAccount <NSObject>
@optional
+(Class)syncControllerClass;
+(Class)detailControllerClass;
-(void*)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2;
-(BOOL)supportsPushForDataclass:(id)arg1;
-(id)accountInfoUsername;
-(id)localizedDetailString;

@required
+(void*)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
-(BOOL)otherAccountEnabledForDataclass:(id)arg1;
-(id)uniqueId;
-(id)displayName;
-(BOOL)supportsPush;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
-(id)enabledDataclasses;
-(id)syncStoreIdentifier;
-(BOOL)isEnabledForDataclass:(id)arg1;
@end

