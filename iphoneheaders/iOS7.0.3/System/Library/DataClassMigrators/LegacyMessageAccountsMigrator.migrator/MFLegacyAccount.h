/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/LegacyMessageAccountsMigrator.migrator/LegacyMessageAccountsMigrator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccount, NSDictionary, NSString;

@interface MFLegacyAccount : NSObject {

	ACAccount* _migratedAccount;
	NSDictionary* _legacyProperties;
	NSString* _parentAccountIdentifier;
	BOOL _parentAccountIsActive;

}

@property (nonatomic,readonly) NSDictionary * legacyProperties;              //@synthesize legacyProperties=_legacyProperties - In the implementation block
@property (nonatomic,copy) NSString * parentAccountIdentifier;               //@synthesize parentAccountIdentifier=_parentAccountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL parentAccountIsActive;                     //@synthesize parentAccountIsActive=_parentAccountIsActive - In the implementation block
+(id)legacyAccountsWithAccountSettings:(id)arg1 ;
+(id)_copyLegacyAccountsWithAccountSettings:(id)arg1 allowedLegacyAccountTypes:(id)arg2 ;
+(BOOL)_isActiveWithLegacyProperties:(id)arg1 ;
-(BOOL)isValidDefaultSendingAccount;
-(id)legacyProperties;
-(id)performMigrationWithAccountStore:(id)arg1 ;
-(id)initWithLegacyProperties:(id)arg1 allowedLegacyAccountTypes:(id)arg2 ;
-(id)_accountTypeIdentifier;
-(void)_setActiveForAccount:(id)arg1 ;
-(void)_configurePersistentAccount:(id)arg1 withParentAccount:(id)arg2 ;
-(BOOL)_isMailAccountClass:(id)arg1 ;
-(void)setParentAccountIdentifier:(id)arg1 ;
-(void)setParentAccountIsActive:(BOOL)arg1 ;
-(id)initWithLegacyProperties:(id)arg1 ;
-(BOOL)parentAccountIsActive;
-(BOOL)_isActive;
-(void)dealloc;
-(id)description;
-(id)parentAccountIdentifier;
@end

