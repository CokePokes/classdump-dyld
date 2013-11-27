/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSString * frequencyTimeUnit; 
@property (assign,nonatomic) int interval; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDaysOfTheWeek:(id)arg1 ;
-(void)setDaysOfTheMonth:(id)arg1 ;
-(void)setMonthsOfTheYear:(id)arg1 ;
-(void)setDaysOfTheYear:(id)arg1 ;
-(void)setWeeksOfTheYear:(id)arg1 ;
-(id)daysOfTheWeek;
-(id)daysOfTheMonth;
-(id)monthsOfTheYear;
-(id)daysOfTheYear;
-(id)weeksOfTheYear;
-(id)groupIdentifier;
-(void)setInterval:(int)arg1 ;
-(int)interval;
-(id)encodedClassName;
-(id)frequencyTimeUnit;
-(void)setFrequencyTimeUnit:(id)arg1 ;
@end

