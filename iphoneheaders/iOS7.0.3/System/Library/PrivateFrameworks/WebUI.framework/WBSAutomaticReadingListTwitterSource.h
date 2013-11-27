/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebUI/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListTwitterSource : WBSAutomaticReadingListSocialSource {

	unsigned _numberOfRequestsAllowedInRateLimitWindow;

}

@property (assign,nonatomic) unsigned numberOfRequestsAllowedInRateLimitWindow;              //@synthesize numberOfRequestsAllowedInRateLimitWindow=_numberOfRequestsAllowedInRateLimitWindow - In the implementation block
+(id)sharedSource;
-(id)serviceName;
-(Class)itemClass;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(double)minimumTimeBetweenRequests;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1 ;
-(id)repostResourceURLStringForItem:(id)arg1 ;
-(unsigned)numberOfRequestsAllowedInRateLimitWindow;
-(void)setNumberOfRequestsAllowedInRateLimitWindow:(unsigned)arg1 ;
@end

