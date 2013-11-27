/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class SAWeatherCurrentConditions, NSArray, NSString, SAWeatherUnits, SAWeatherLocation;

@interface SAWeatherObject : SADomainObject

@property (nonatomic,retain) SAWeatherCurrentConditions * currentConditions; 
@property (nonatomic,copy) NSArray * dailyForecasts; 
@property (nonatomic,copy) NSString * extendedForecastUrl; 
@property (nonatomic,copy) NSArray * hourlyForecasts; 
@property (nonatomic,retain) SAWeatherUnits * units; 
@property (nonatomic,copy) NSString * view; 
@property (nonatomic,retain) SAWeatherLocation * weatherLocation; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)view;
-(void)setView:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)currentConditions;
-(id)weatherLocation;
-(void)setWeatherLocation:(id)arg1 ;
-(void)setCurrentConditions:(id)arg1 ;
-(id)dailyForecasts;
-(void)setDailyForecasts:(id)arg1 ;
-(id)extendedForecastUrl;
-(void)setExtendedForecastUrl:(id)arg1 ;
-(id)hourlyForecasts;
-(void)setHourlyForecasts:(id)arg1 ;
-(id)units;
-(void)setUnits:(id)arg1 ;
@end

