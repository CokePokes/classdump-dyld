/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <CoreFoundation/NSCopying.h>

@interface OADLineEnd : OADProperties <NSCopying> {

	unsigned char mType;
	unsigned char mWidth;
	unsigned char mLength;
	unsigned mIsTypeOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsLengthOverridden : 1;

}
+(id)defaultProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)length;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(void)setLength:(int)arg1 ;
-(BOOL)isWidthOverridden;
-(id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3 ;
-(id)initWithDefaults;
-(BOOL)isTypeOverridden;
-(BOOL)isLengthOverridden;
@end

