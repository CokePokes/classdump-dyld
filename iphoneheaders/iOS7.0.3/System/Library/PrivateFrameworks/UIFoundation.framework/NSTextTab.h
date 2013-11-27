/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	}  _flags;
	float _location;
	id _reserved;

}

@property (readonly) int alignment; 
@property (readonly) float location; 
@property (readonly) NSDictionary * options; 
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(void)initialize;
+(id)columnTerminatorsForLocale:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(int)alignment;
-(float)location;
-(id)options;
-(id)initWithTextAlignment:(int)arg1 location:(float)arg2 options:(id)arg3 ;
-(id)initWithType:(unsigned)arg1 location:(float)arg2 ;
-(unsigned)tabStopType;
-(id)accessibilityRulerMarkerType;
-(id)accessibilityRulerMarkerTypeDescription;
@end

