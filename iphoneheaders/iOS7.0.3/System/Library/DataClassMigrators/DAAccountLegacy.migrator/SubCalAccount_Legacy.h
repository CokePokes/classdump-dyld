/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAAccountLegacy/DALegacyAccount.h>

@interface SubCalAccount_Legacy : DALegacyAccount
-(BOOL)upgradeAccountWithParent:(id)arg1 ;
-(id)_oldURLsForKeychain;
-(BOOL)_upgradeSelfFromVersion:(int)arg1 superClassUpgraded:(BOOL)arg2 ;
-(int)subCalAccountVersion;
@end

