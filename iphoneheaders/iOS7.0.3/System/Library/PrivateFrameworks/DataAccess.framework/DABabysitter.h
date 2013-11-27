/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject {

	NSString* _buildVersion;
	NSMutableDictionary* _refreshingWaiters;
	NSMutableDictionary* _failedWaiters;
	NSMutableDictionary* _restrictedWaiters;

}

@property (nonatomic,retain) NSString * buildVersion;                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshingWaiters;              //@synthesize refreshingWaiters=_refreshingWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * failedWaiters;                  //@synthesize failedWaiters=_failedWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restrictedWaiters;              //@synthesize restrictedWaiters=_restrictedWaiters - In the implementation block
+(id)sharedBabysitter;
-(void)setBuildVersion:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)buildVersion;
-(void)giveAccountWithIDAnotherChance:(id)arg1 ;
-(BOOL)accountWithIDShouldContinue:(id)arg1 ;
-(void)_reloadBabysitterProperties;
-(void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2 ;
-(BOOL)accountShouldContinue:(id)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(id)refreshingWaiters;
-(void)setRefreshingWaiters:(id)arg1 ;
-(id)failedWaiters;
-(void)setFailedWaiters:(id)arg1 ;
-(id)restrictedWaiters;
-(void)setRestrictedWaiters:(id)arg1 ;
@end

