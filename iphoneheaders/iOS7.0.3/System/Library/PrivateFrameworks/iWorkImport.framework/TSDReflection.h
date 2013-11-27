/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMixing.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	float mOpacity;
	float mFadeAcceleration;

}

@property (nonatomic,readonly) float opacity; 
@property (nonatomic,readonly) float fadeAcceleration; 
+(id)instanceWithArchive:(const ReflectionArchive*)arg1 unarchiver:(id)arg2 ;
+(BOOL)canMixWithNilObjects;
+(id)reflection;
-(void)saveToArchive:(ReflectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ReflectionArchive*)arg1 unarchiver:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(id)initWithOpacity:(float)arg1 ;
-(id)initWithOpacity:(float)arg1 fadeAcceleration:(float)arg2 ;
-(float)fadeAcceleration;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)opacity;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
@end

