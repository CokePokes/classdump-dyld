/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <OfficeImport/TSUFlushable.h>

@protocol TSCH3DSharegroupDelegate;
@class NSThread, TSCH3DResourceCache, TSCH3DShaderCache, NSMutableSet, , TSCH3DSharegroupToken;

@interface TSCH3DSharegroup : NSObject <TSUFlushable> {

	NSThread* mOwningThread;
	TSCH3DResourceCache* mResourceCache;
	TSCH3DShaderCache* mShaderCache;
	NSMutableSet* mPurgeableResourceSet;
	int mPerformance;
	BOOL mDidReceiveFlush;
	<TSCH3DSharegroupDelegate>* mDelegate;
	TSCH3DSharegroupToken* mToken;

}

@property (assign,nonatomic) int performance; 
@property (assign,nonatomic) <TSCH3DSharegroupDelegate> * delegate; 
@property (nonatomic,readonly) TSCH3DResourceCache * resourceCache; 
@property (nonatomic,readonly) TSCH3DShaderCache * shaderCache; 
@property (nonatomic,readonly) TSCH3DSharegroupToken * token; 
+(id)uniqueSharegroupWithOwningThread:(id)arg1 token:(id)arg2 ;
-(void)nonThreadOwnedFlushCache;
-(void)setPerformance:(int)arg1 ;
-(void)flushIfNecessary;
-(id)initWithOwningThread:(id)arg1 token:(id)arg2 ;
-(BOOL)isOneShot;
-(BOOL)mustRunOnMainThread;
-(FlushResult)p_flushCacheIfNecessary;
-(void)p_flushInTargetThread;
-(BOOL)owningThreadIsNil;
-(BOOL)isCurrentThreadOwner;
-(void)flushMemoryForResourceSet:(id)arg1 ;
-(void)flushResourceSet:(id)arg1 ;
-(void)forceFlushResourceSet:(id)arg1 ;
-(void)setIfIsMoreDemandingPerformance:(int)arg1 ;
-(void)flushInTargetThread;
-(int)performance;
-(id)shaderCache;
-(id)resourceCache;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)flush;
-(id)token;
-(void)setOwningThread:(id)arg1 ;
@end

