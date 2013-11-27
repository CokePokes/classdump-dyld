/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISSingleton.h>

@class ISUniqueOperationContext, NSMutableArray, NSLock, NSMutableDictionary;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {

	ISUniqueOperationContext* _activeContext;
	NSMutableArray* _contexts;
	NSLock* _lock;
	NSMutableDictionary* _lockPool;

}
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)checkInOperation:(id)arg1 ;
-(void)checkOutOperation:(id)arg1 ;
-(id)lockWithIdentifier:(id)arg1 ;
-(id)_activeContext;
-(id)_contextForOperation:(id)arg1 ;
-(id)predecessorForKey:(id)arg1 operation:(id)arg2 ;
-(void)setPredecessorIfNeeded:(id)arg1 forKey:(id)arg2 ;
-(void)uniqueOperationFinished:(id)arg1 forKey:(id)arg2 ;
@end

