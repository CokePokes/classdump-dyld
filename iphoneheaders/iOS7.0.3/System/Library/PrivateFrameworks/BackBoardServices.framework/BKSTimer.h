/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface BKSTimer : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _source;
	/*^block*/ id _handler;
	double _fireInterval;
	double _repeatInterval;
	double _leewayInterval;

}
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)schedule;
-(id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(/*^block*/ id)arg5 ;
@end

