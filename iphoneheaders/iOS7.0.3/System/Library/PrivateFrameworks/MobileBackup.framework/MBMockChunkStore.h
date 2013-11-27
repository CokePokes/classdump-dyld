/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <backupd/MBChunkStore.h>

@protocol OS_dispatch_queue;
@class MBServiceAccount, NSMutableDictionary, NSObject;

@interface MBMockChunkStore : MBChunkStore {

	MBServiceAccount* _serviceAccount;
	NSMutableDictionary* _signaturesByItemID;
	unsigned long long _nextItemID;
	NSObject<OS_dispatch_queue>* _queue;
	BOOL _poison;

}

@property (assign,nonatomic) BOOL poison;              //@synthesize poison=_poison - In the implementation block
-(BOOL)registerItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)putBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)getBatch:(id)arg1 error:(id*)arg2 ;
-(id)_dataForItem:(id)arg1 ;
-(id)_URLForItem:(id)arg1 ;
-(BOOL)poison;
-(void)setPoison:(BOOL)arg1 ;
-(BOOL)isOpen;
-(void)dealloc;
-(void)close;
-(void)remove;
-(id)initWithAccount:(id)arg1 ;
-(void)open;
@end

