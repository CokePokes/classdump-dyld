/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSSimpleCString : NSString {

	char* bytes;
	int numBytes;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(unsigned)cStringLength;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZoneRef)arg2 ;
-(unsigned)fastestEncoding;
-(unsigned)smallestEncoding;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned)arg2 ;
-(void)dealloc;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(BOOL)hasPrefix:(id)arg1 ;
-(unsigned)length;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(id)stringByAppendingString:(id)arg1 ;
-(int)compare:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned)arg2 usedLength:(unsigned*)arg3 encoding:(unsigned)arg4 options:(unsigned)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(void)finalize;
-(BOOL)canBeConvertedToEncoding:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

