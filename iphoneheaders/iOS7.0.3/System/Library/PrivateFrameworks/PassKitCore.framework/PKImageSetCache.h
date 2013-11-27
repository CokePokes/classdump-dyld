/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface PKImageSetCache : NSObject {

	NSMutableDictionary* _frontFaceImageSets;
	NSMutableDictionary* _backFaceImageSets;
	NSMutableDictionary* _previewImageSets;
	NSMutableDictionary* _partialFrontFaceImageSets;

}
-(void)dealloc;
-(id)init;
-(id)checkoutImageSet:(int)arg1 forDisplayProfile:(id)arg2 withUniqueID:(id)arg3 ;
-(void)cacheImages:(id)arg1 forDisplayProfile:(id)arg2 ;
-(void)flushUniqueID:(id)arg1 forImageSet:(int)arg2 withDisplayProfile:(id)arg3 purge:(BOOL)arg4 ;
-(id)_dictionaryForImageSet:(int)arg1 ;
-(id)_keyForImageSet:(int)arg1 displayProfile:(id)arg2 ;
-(void)garbageCollectCacheForImageSet:(int)arg1 ;
-(void)purgeAllCaches;
@end

