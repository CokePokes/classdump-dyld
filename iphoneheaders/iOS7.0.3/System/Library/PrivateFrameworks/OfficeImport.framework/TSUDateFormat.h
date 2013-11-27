/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <OfficeImport/TSUDataFormat.h>

@class NSString;

@interface TSUDateFormat : NSObject <NSCopying, TSUDataFormat> {

	NSString* mFormat;
	NSString* mName;

}
+(id)formatWithFormat:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithFormat:(id)arg1 name:(id)arg2 ;
-(id)formatName;
-(void)setFormatName:(id)arg1 ;
-(id)format;
@end

