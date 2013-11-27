/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)UUID;
-(unsigned long)_cfTypeID;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
-(CFStringRef)_cfUUIDString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)UUIDString;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(id)initWithUUIDString:(id)arg1 ;
@end

