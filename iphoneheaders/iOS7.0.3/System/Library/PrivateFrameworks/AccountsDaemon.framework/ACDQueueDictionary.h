/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject {

	NSMutableDictionary* _allQueuesByID;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(BOOL)isQueueEmptyForKey:(id)arg1 ;
-(void)addObject:(id)arg1 toQueueForKey:(id)arg2 ;
-(id)dequeueFirstObjectInQueueForKey:(id)arg1 ;
-(id)firstObjectInQueueForKey:(id)arg1 ;
-(id)dequeueAllObjectsInQueueForKey:(id)arg1 ;
-(id)keyForRandomQueue;
-(void).cxx_destruct;
@end

