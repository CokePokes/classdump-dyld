/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface __NSCFData : NSMutableData {

	unsigned char _cfinfo[4];
	long _length;
	long _capacity;
	CFAllocatorRef _bytesDeallocator;
	char* _bytes;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)setLength:(unsigned)arg1 ;
-(void*)mutableBytes;
-(void)finalize;
@end

