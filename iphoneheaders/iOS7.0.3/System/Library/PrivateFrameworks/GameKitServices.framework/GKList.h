/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKList : NSObject {

	unsigned* _items;
	unsigned long _count;
	unsigned long _size;
	opaque_pthread_mutex_t _lock;

}

@property (readonly) unsigned long count;              //@synthesize count=_count - In the implementation block
-(void)dealloc;
-(unsigned long)count;
-(id)init;
-(id)initWithSize:(unsigned long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)addID:(unsigned)arg1 ;
-(void)copyItemsInto:(id)arg1 ;
-(BOOL)hasID:(unsigned)arg1 ;
-(void)addIDsFromList:(id)arg1 ;
-(void)removeID:(unsigned)arg1 ;
-(void)removeAllIDs;
-(id)allMatchingObjectsFromTable:(id)arg1 ;
-(void)print;
@end

