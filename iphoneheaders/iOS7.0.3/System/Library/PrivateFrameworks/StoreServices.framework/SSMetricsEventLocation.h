/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface SSMetricsEventLocation : NSObject {

	int _position;
	NSString* _type;
	NSMutableDictionary* _values;

}

@property (assign,nonatomic) int locationPosition;                              //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * locationType;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * reportingDictionary; 
-(void)setLocationPosition:(int)arg1 ;
-(void)setLocationType:(id)arg1 ;
-(void)setValue:(id)arg1 forLocationKey:(id)arg2 ;
-(id)reportingDictionary;
-(id)valueForLocationKey:(id)arg1 ;
-(int)locationPosition;
-(id)locationType;
-(void).cxx_destruct;
@end

