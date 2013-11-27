/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@interface __NSCFOutputStream : NSOutputStream
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned)streamStatus;
-(id)streamError;
-(BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/ void*)arg2 context:(SCD_Struct_NS4*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned)arg2 ;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
-(BOOL)hasSpaceAvailable;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(id)delegate;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)close;
-(id)initToFileAtPath:(id)arg1 append:(BOOL)arg2 ;
-(void)finalize;
-(void)open;
@end

