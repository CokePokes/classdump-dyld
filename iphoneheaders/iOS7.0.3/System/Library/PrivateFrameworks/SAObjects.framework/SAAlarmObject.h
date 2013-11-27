/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSArray, NSString;

@interface SAAlarmObject : SADomainObject

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSNumber * relativeOffsetMinutes; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setEnabled:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)frequency;
-(void)setFrequency:(id)arg1 ;
-(void)setHour:(id)arg1 ;
-(id)hour;
-(id)minute;
-(id)enabled;
-(void)setMinute:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)relativeOffsetMinutes;
-(void)setRelativeOffsetMinutes:(id)arg1 ;
@end

