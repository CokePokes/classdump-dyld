/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKExpiringCacheObject.h>

@class NSString, NSNumber;

@interface GKGameRatingCacheObject : GKExpiringCacheObject

@property (nonatomic,@dynamic,retain) NSString * bundleID; 
@property (nonatomic,@dynamic,retain) NSString * bundleVersion; 
@property (nonatomic,@dynamic,retain) NSNumber * rating; 
+(id)ratingForGameDescriptor:(id)arg1 context:(id)arg2 ;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
@end

