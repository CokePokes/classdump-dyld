/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UsageBundles/PassbookUsageBundle.bundle/PassbookUsageBundle
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CalendarUsageBundle/PSStorageReporting.h>

@class NSArray, NSDictionary;

@interface PassbookUsageBundleStorageReporter : NSObject <PSStorageReporting> {

	NSArray* _usageBundleApps;
	NSDictionary* _categorySizes;

}
-(void)_populateUsageBundleApps;
-(void)dealloc;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
@end

