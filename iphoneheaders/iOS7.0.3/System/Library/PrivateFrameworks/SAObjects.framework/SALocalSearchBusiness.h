/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSDictionary, NSURL, NSArray, NSString, SALocalSearchRating;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * businessId; 
@property (nonatomic,copy) NSDictionary * businessIds; 
@property (nonatomic,copy) NSURL * businessUrl; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * openingHours; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSURL * photo; 
@property (nonatomic,retain) SALocalSearchRating * rating; 
@property (nonatomic,copy) NSArray * reviews; 
@property (assign,nonatomic) int totalNumberOfReviews; 
+(id)business;
+(id)businessWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)phoneNumbers;
-(void)setPhoneNumbers:(id)arg1 ;
-(id)groupIdentifier;
-(id)extSessionGuid;
-(void)setExtSessionGuid:(id)arg1 ;
-(void)setRating:(id)arg1 ;
-(id)rating;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)categories;
-(void)setCategories:(id)arg1 ;
-(void)setReviews:(id)arg1 ;
-(id)reviews;
-(id)photo;
-(void)setPhoto:(id)arg1 ;
-(id)encodedClassName;
-(id)businessId;
-(void)setBusinessId:(id)arg1 ;
-(id)businessIds;
-(void)setBusinessIds:(id)arg1 ;
-(id)businessUrl;
-(void)setBusinessUrl:(id)arg1 ;
-(id)openingHours;
-(void)setOpeningHours:(id)arg1 ;
-(int)totalNumberOfReviews;
-(void)setTotalNumberOfReviews:(int)arg1 ;
@end

