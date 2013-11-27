/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebCache : NSObject
+(CGImageRef)imageForURL:(id)arg1 ;
+(void)removeImageFromCacheForURL:(id)arg1 ;
+(void)initialize;
+(void)setDisabled:(BOOL)arg1 ;
+(BOOL)isDisabled;
+(void)empty;
+(id)statistics;
+(bool)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2 forFrame:(id)arg3 ;
+(void)removeImageFromCacheForURL:(id)arg1 forFrame:(id)arg2 ;
+(void)emptyInMemoryResources;
+(void)sizeOfDeadResources:(int*)arg1 ;
+(void)clearCachedCredentials;
+(bool)addImageToCache:(CGImageRef)arg1 forURL:(id)arg2 ;
@end

