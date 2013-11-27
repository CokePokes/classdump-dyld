/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Radio/Radio-Structs.h>
@class NSOperationQueue;

@interface RadioImageCache : NSObject {

	NSOperationQueue* _imageRequestQueue;

}
+(id)sharedCache;
+(CFURLCacheRef)_sharedCFURLCache;
+(CFURLStorageSessionRef)_newSharedCacheStorageSession;
-(id)cachedImageDataForStation:(id)arg1 withExactSize:(CGSize)arg2 ;
-(void)loadImageForStation:(id)arg1 withSize:(CGSize)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)_requestForStation:(id)arg1 withSize:(CGSize)arg2 isExactSizeMatch:(BOOL*)arg3 ;
-(void)_removeAllCachedImages;
-(void).cxx_destruct;
-(id)_cachedResponseForRequest:(id)arg1 ;
@end

