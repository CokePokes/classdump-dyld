/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Books/BCPlistProducer.h>

@class NSArray;

@interface BCRemovePersistentIDPlistProducer : BCPlistProducer {

	NSArray* _persistentIDs;

}
-(id)initWithPath:(id)arg1 persistentIDs:(id)arg2 ;
-(id)produceData;
-(void)dealloc;
-(BOOL)shouldRetry;
@end

