/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSArray;

@interface RadioManagedSkipHistory : NSManagedObject

@property (nonatomic,copy) NSString * skipIdentifier; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (nonatomic,copy) NSString * stationHash; 
@property (assign,nonatomic) long long stationID; 
-(long long)stationID;
-(id)stationHash;
-(void)setSkipIdentifier:(id)arg1 ;
-(void)setSkipTimestamps:(id)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setStationHash:(id)arg1 ;
-(id)skipIdentifier;
-(id)skipTimestamps;
@end

