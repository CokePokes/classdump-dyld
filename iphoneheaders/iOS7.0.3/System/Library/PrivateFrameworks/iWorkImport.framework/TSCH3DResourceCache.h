/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DProtectResourceDelegate.h>

@class TSCH3DDictionaryOfSet, NSMutableDictionary, NSCountedSet;

@interface TSCH3DResourceCache : NSObject <TSCH3DProtectResourceDelegate> {

	TSCH3DDictionaryOfSet* mResourceKeyedEntries;
	NSMutableDictionary* mHandles;
	NSCountedSet* mProtectedResources;
	NSMutableDictionary* mMemoryUsage;
	unsigned mMemoryUsedInBytes;
	unsigned mMemoryLimitInBytes;
	NSCountedSet* mUsageCounts;

}

@property (nonatomic,readonly) unsigned memoryUsedInBytes; 
@property (assign,nonatomic) unsigned memoryLimitInBytes; 
-(void)flushMemoryForResources:(id)arg1 ;
-(id)flushAllResourcesForContext:(id)arg1 ;
-(void)garbageCollectResources:(id)arg1 context:(id)arg2 ;
-(void)garbageCollectAllResourcesForContext:(id)arg1 ;
-(id)flushResources:(id)arg1 context:(id)arg2 ;
-(id)keyForKey:(id)arg1 ;
-(float)debug_totalMemoryUsageMB;
-(id)p_keysForResource:(id)arg1 ;
-(id)handleForKey:(id)arg1 ;
-(id)debug_string;
-(BOOL)isProtectedResource:(id)arg1 ;
-(void)p_flushHandleForKey:(id)arg1 context:(id)arg2 ;
-(void)p_removeHandleForKey:(id)arg1 ;
-(id)p_allResourceKeys;
-(id)p_flushResourceKeys:(id)arg1 context:(id)arg2 ;
-(id)p_keysForResources:(id)arg1 ;
-(id)p_unretainedResourcesFromResources:(id)arg1 ;
-(id)debug_stats;
-(id)debug_countedMemory;
-(id)debug_countedClasses;
-(id)debug_usageCounts;
-(id)debug_details;
-(void)protectResource:(id)arg1 ;
-(void)unprotectResource:(id)arg1 ;
-(BOOL)hasEnoughFreeMemoryOfBytes:(unsigned)arg1 ;
-(id)keyForLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3 ;
-(void)setBytesUploaded:(unsigned)arg1 forKey:(id)arg2 ;
-(void)setHandle:(id)arg1 forKey:(id)arg2 ;
-(void)updateUsageCountForResourceSet:(id)arg1 fromPreviousResourceSet:(id)arg2 ;
-(unsigned)memoryUsedForResource:(id)arg1 ;
-(unsigned)memoryUsedInBytes;
-(unsigned)memoryLimitInBytes;
-(void)setMemoryLimitInBytes:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
@end

