/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MFNetworkObserver : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _block;

}
-(void)execute;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/ id)arg1 queue:(id)arg2 ;
@end

