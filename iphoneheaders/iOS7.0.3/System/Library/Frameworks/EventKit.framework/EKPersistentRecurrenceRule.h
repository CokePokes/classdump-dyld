/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <CoreFoundation/NSCopying.h>

@class EKRecurrenceEnd, NSString, NSDate, NSArray, EKPersistentCalendarItem;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {

	id _helper;
	EKRecurrenceEnd* _recurrenceEnd;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) int frequency; 
@property (assign,nonatomic) int interval; 
@property (assign,nonatomic) int firstDayOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
@property (nonatomic,readonly) NSDate * cachedEndDate; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
@property (nonatomic,readonly) BOOL shouldPinMonthDays; 
+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)validate:(id*)arg1 ;
-(SCD_Struct_EK16)gregorianUnits;
-(void)setDaysOfTheWeek:(id)arg1 ;
-(void)setDaysOfTheMonth:(id)arg1 ;
-(void)setSetPositions:(id)arg1 ;
-(void)setMonthsOfTheYear:(id)arg1 ;
-(void)setDaysOfTheYear:(id)arg1 ;
-(void)setWeeksOfTheYear:(id)arg1 ;
-(id)daysOfTheWeek;
-(id)daysOfTheMonth;
-(id)setPositions;
-(id)monthsOfTheYear;
-(id)daysOfTheYear;
-(id)weeksOfTheYear;
-(void)setFirstDayOfTheWeek:(int)arg1 ;
-(id)cachedEndDate;
-(BOOL)shouldPinMonthDays;
-(int)firstDayOfTheWeek;
-(id)_helper;
-(int)entityType;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)UUID;
-(void)setCount:(unsigned)arg1 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(id)calendarIdentifier;
-(void)setInterval:(int)arg1 ;
-(int)interval;
-(id)owner;
-(id)endDate;
-(void)setEndDate:(id)arg1 ;
-(BOOL)isDirty;
-(void)setOwner:(id)arg1 ;
@end

