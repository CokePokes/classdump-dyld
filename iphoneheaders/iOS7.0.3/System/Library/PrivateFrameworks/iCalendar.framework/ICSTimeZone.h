/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iCalendar/ICSComponent.h>

@class NSString;

@interface ICSTimeZone : ICSComponent {

	id _systemTimeZone;

}

@property (retain) NSString * tzid; 
+(id)name;
+(id)timeZoneWithSystemTimeZoneName:(id)arg1 ;
+(id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3 ;
-(id)tzid;
-(void)dealloc;
-(id)systemTimeZoneForDate:(id)arg1 ;
-(id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(id)getNSTimeZone:(id)arg1 ;
-(void)setTzid:(id)arg1 ;
-(id)initWithSystemTimeZone:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2 ;
@end

