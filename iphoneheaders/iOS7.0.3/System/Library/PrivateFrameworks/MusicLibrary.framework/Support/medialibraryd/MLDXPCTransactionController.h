/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MLDXPCTransactionController : NSObject {

	NSObject<OS_dispatch_queue>* _serialQueue;
	NSMutableDictionary* _openTransactions;
	BOOL _inTransaction;

}

@property (getter=isInTransaction,nonatomic,readonly) BOOL inTransaction; 
+(id)sharedInstance;
-(BOOL)isTransactionActive:(id)arg1 ;
-(id)activeTransactions;
-(void)addActiveTransaction:(id)arg1 ;
-(void)removeActiveTransaction:(id)arg1 ;
-(void)_onQueueUpdateInternalTransactionState;
-(void)_onQueueCleanupEndedTransactions;
-(id)init;
-(BOOL)isInTransaction;
-(void).cxx_destruct;
@end

