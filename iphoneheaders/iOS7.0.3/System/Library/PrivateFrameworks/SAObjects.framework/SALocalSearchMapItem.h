/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SADistance, NSNumber, SALocation;

@interface SALocalSearchMapItem : SADomainObject

@property (nonatomic,copy) NSArray * attributions; 
@property (nonatomic,retain) <SAAceSerializable> * detail; 
@property (nonatomic,copy) NSString * detailType; 
@property (nonatomic,copy) NSString * directionRole; 
@property (nonatomic,retain) SADistance * distance; 
@property (nonatomic,copy) NSNumber * distanceInMiles; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * localSearchProviderId; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSNumber * placeId; 
+(id)mapItem;
+(id)mapItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setDetail:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)location;
-(void)setDistance:(id)arg1 ;
-(id)distance;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)detailType;
-(void)setDetailType:(id)arg1 ;
-(id)directionRole;
-(void)setDirectionRole:(id)arg1 ;
-(id)distanceInMiles;
-(void)setDistanceInMiles:(id)arg1 ;
-(id)localSearchProviderId;
-(void)setLocalSearchProviderId:(id)arg1 ;
-(id)placeId;
-(void)setPlaceId:(id)arg1 ;
-(id)attributions;
-(void)setAttributions:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(id)detail;
@end

