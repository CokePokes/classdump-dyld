/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {

	EDResources* mResources;
	int mSystemColorID;
	unsigned mColorIndex;
	unsigned mThemeIndex;
	double mTint;

}
+(id)colorReferenceWithColorIndex:(unsigned)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithResources:(id)arg1 ;
+(id)colorReferenceWithColor:(id)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithThemeIndex:(unsigned)arg1 tint:(double)arg2 resources:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(bool)isValid;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)color;
-(id)initWithResources:(id)arg1 ;
-(id)initWithColor:(id)arg1 resources:(id)arg2 ;
-(BOOL)isEqualToColorReference:(id)arg1 ;
-(int)systemColorID;
-(unsigned)colorIndex;
-(unsigned)themeIndex;
-(double)tint;
@end

