/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class SSDatabaseCache, NSMutableSet, NSString, NSObject;

@interface SSCacheObjectStore : NSObject {

	SSDatabaseCache* _databaseCache;
	NSMutableSet* _factories;
	NSString* _sessionIdentifier;
	NSObject<OS_dispatch_queue>* _serialQueue;

}
-(void)dealloc;
-(id)description;
-(id)_factoryForTypeIdentifier:(id)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(void)clearSession;
-(BOOL)addObject:(id)arg1 withItemIdentifier:(id)arg2 ;
-(BOOL)removeObjectWithItemIdentifier:(id)arg1 ;
-(id)cacheObjectWithItemIdentifier:(id)arg1 ;
-(void)addCacheObjectFactory:(id)arg1 ;
-(void)removeCacheObjectFactory:(id)arg1 ;
@end

