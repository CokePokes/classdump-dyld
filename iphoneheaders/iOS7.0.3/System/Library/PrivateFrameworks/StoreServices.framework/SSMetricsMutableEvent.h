/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSMetricsEvent.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {

	NSMutableDictionary* _mutableBody;

}

@property (nonatomic,readonly) NSDictionary * bodyDictionary;              //@synthesize mutableBody=_mutableBody - In the implementation block
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)initWithBodyDictionary:(id)arg1 ;
-(id)bodyDictionary;
-(void)appendPropertiesToBody:(id)arg1 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
@end

