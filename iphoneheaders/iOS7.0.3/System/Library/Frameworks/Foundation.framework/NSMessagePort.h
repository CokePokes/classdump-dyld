/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort {

	void* _port;
	id _delegate;

}
+(BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned)arg7 ;
+(void)_fixNSMessagePortLeak;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned)arg4 ;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned)arg5 ;
-(BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(id)initWithRemoteName:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(unsigned)retainCount;
-(id)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)setName:(id)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void)finalize;
@end

