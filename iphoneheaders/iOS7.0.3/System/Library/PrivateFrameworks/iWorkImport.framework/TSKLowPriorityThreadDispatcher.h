/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKThreadDispatcher.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {

	NSObject<OS_dispatch_queue>* _queue;
	int _suspendCount;

}

@property (getter=isSuspended,readonly) BOOL suspended; 
+(id)sharedLowPriorityDispatcher;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
-(id)p_dispatchQueue;
-(oneway void)release;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(BOOL)isSuspended;
-(void)suspend;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)resume;
@end

