/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SSSQLiteDatabase, NSNumber;

@interface SSWishlist : NSObject {

	long long _accountIdentifier;
	SSSQLiteDatabase* _database;

}

@property (nonatomic,readonly) long long accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * lastSyncTime; 
+(BOOL)existsForAccountIdentifier:(long long)arg1 ;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(void)dealloc;
-(long long)accountIdentifier;
-(void)performTransactionWithBlock:(/*^block*/ id)arg1 ;
-(void)setLastSyncTime:(id)arg1 ;
-(id)lastSyncTime;
-(BOOL)deleteBackingStore;
@end

