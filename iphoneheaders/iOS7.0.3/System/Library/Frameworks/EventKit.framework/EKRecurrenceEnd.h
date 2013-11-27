/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {

	NSDate* _endDate;
	unsigned _occurrenceCount;

}

@property (nonatomic,readonly) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned occurrenceCount;              //@synthesize occurrenceCount=_occurrenceCount - In the implementation block
@property (nonatomic,readonly) BOOL usesEndDate; 
+(id)recurrenceEndWithEndDate:(id)arg1 ;
+(id)recurrenceEndWithOccurrenceCount:(unsigned)arg1 ;
-(unsigned)occurrenceCount;
-(id)initWithEndDate:(id)arg1 ;
-(id)initWithOccurrenceCount:(unsigned)arg1 ;
-(BOOL)usesEndDate;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)endDate;
@end

