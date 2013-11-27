/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURLSessionTask, NSString;

@interface NDPendingTask : NSObject {

	NSURLSessionTask* _task;
	NSString* _sessionID;
	NSString* _bundleID;
	int _priority;

}

@property (readonly) NSURLSessionTask * task;              //@synthesize task=_task - In the implementation block
@property (readonly) NSString * sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) int priority;                         //@synthesize priority=_priority - In the implementation block
-(id)initWithTask:(id)arg1 sessionID:(id)arg2 bundleID:(id)arg3 priority:(int)arg4 ;
-(id)bundleID;
-(int)priority;
-(id)task;
-(id)sessionID;
-(void).cxx_destruct;
@end

