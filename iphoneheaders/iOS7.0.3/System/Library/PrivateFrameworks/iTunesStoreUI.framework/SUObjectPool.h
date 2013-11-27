/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface SUObjectPool : NSObject {

	NSMutableDictionary* _poolObjects;
	NSMutableArray* _vendedObjects;

}

@property (nonatomic,readonly) NSArray * vendedObjects;              //@synthesize vendedObjects=_vendedObjects - In the implementation block
-(void)dealloc;
-(id)copyPoppedObjectForClass:(Class)arg1 ;
-(id)vendedObjects;
-(id)addObjectsOfClass:(Class)arg1 count:(int)arg2 forClass:(Class)arg3 ;
-(void)addObjects:(id)arg1 forClass:(Class)arg2 ;
@end

