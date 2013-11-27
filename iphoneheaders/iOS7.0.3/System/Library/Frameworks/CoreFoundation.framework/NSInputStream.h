/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream
+(id)inputStreamWithData:(id)arg1 ;
+(id)inputStreamWithFileAtPath:(id)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(SCD_Struct_NS7)_cfStreamError;
-(unsigned long)_cfTypeID;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(BOOL)hasBytesAvailable;
@end

