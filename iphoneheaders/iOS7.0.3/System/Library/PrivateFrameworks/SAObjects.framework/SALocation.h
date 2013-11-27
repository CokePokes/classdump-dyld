/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString, NSArray, SADistance;

@interface SALocation : SADomainObject

@property (nonatomic,copy) NSNumber * accuracy; 
@property (nonatomic,copy) NSString * city; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSArray * entryPoints; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSString * postalCode; 
@property (nonatomic,copy) NSString * regionType; 
@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,copy) NSString * stateCode; 
@property (nonatomic,copy) NSString * street; 
@property (nonatomic,copy) NSString * subThoroughfare; 
@property (nonatomic,copy) NSString * thoroughfare; 
@property (nonatomic,copy) NSString * timezoneId; 
+(id)location;
+(id)locationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)city;
-(id)postalCode;
-(void)setCity:(id)arg1 ;
-(void)setPostalCode:(id)arg1 ;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(id)groupIdentifier;
-(void)setAccuracy:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setCountryCode:(id)arg1 ;
-(void)setThoroughfare:(id)arg1 ;
-(void)setSubThoroughfare:(id)arg1 ;
-(id)subThoroughfare;
-(id)entryPoints;
-(void)setEntryPoints:(id)arg1 ;
-(void)setStreet:(id)arg1 ;
-(id)latitude;
-(id)longitude;
-(id)countryCode;
-(id)thoroughfare;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)timezoneId;
-(void)setTimezoneId:(id)arg1 ;
-(id)relativeDistance;
-(void)setRelativeDistance:(id)arg1 ;
-(id)regionType;
-(void)setRegionType:(id)arg1 ;
-(id)stateCode;
-(void)setStateCode:(id)arg1 ;
-(id)accuracy;
-(id)street;
@end

