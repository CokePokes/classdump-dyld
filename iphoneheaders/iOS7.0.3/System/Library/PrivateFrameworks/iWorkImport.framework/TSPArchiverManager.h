/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSPArchiverManagerDelegate, OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class , NSMapTable, NSObject;

@interface TSPArchiverManager : NSObject {

	<TSPArchiverManagerDelegate>* _delegate;
	Class _archiverClass;
	NSMapTable* _archivers;
	NSObject<OS_dispatch_queue>* _archiversHighQueue;
	NSObject<OS_dispatch_queue>* _archiversLowQueue;
	NSObject<OS_dispatch_queue>* _archiveHighQueue;
	NSObject<OS_dispatch_queue>* _archiveDefaultQueue;
	NSObject<OS_dispatch_queue>* _archiveLowQueue;
	NSObject<OS_dispatch_queue>* _archiveCompletionQueue;
	struct {
		unsigned isStopped : 1;
		unsigned delegateRespondsToDidCreateArchiver : 1;
		unsigned delegateRespondsToShouldDelayArchivingObject : 1;
	}  _flags;

}
-(void)archiveObjectWithHighPriority:(id)arg1 ;
-(void)archiveObjectWithLowPriority:(id)arg1 ;
-(void)archiverForObject:(id)arg1 queue:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)initWithDelegate:(id)arg1 archiverClass:(Class)arg2 ;
-(id)archiverForObject:(id)arg1 archiveQueue:(id)arg2 archiveCompletion:(/*^block*/ id)arg3 ;
-(void)archiveWithArchiver:(id)arg1 queue:(id)arg2 archiveCompletion:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void)stop;
-(id)initWithDelegate:(id)arg1 ;
-(void).cxx_destruct;
@end

