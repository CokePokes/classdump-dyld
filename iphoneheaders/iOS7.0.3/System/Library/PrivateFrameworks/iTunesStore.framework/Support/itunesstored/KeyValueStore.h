/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSKeyValueStore;

@interface KeyValueStore : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SSKeyValueStore* _keyValueStore;

}
+(void)observeXPCServer:(id)arg1 ;
+(id)defaultKeyValueStore;
+(void)getValuesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeAllValuesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)removeValuesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(id)valueForDomain:(id)arg1 key:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(/*^block*/ id)arg3 ;
-(void)_getValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_removeAllValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_removeValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_setValuesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3 ;
@end

