/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackBoardServices/BKSBaseXPCServer.h>

@protocol BKApplicationDataStoreRepository;
@class ;

@interface BKApplicationDataStoreRepositoryServer : BKSBaseXPCServer {

	<BKApplicationDataStoreRepository>* _dataStore;

}

@property (nonatomic,retain) <BKApplicationDataStoreRepository> * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)sharedInstance;
-(id)dataStore;
-(void)_handleConnect:(id)arg1 ;
-(void)_handleSetPrefetchedKeys:(id)arg1 client:(id)arg2 ;
-(void)_handleSynchronize:(id)arg1 ;
-(void)_handleGetAvailableDataStores:(id)arg1 ;
-(void)_handleGetObjectForKey:(id)arg1 ;
-(void)_handleSetObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveAllObjects:(id)arg1 ;
-(void)setDataStore:(id)arg1 ;
-(id)init;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
@end

