/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	NSSet* _notificationTypeNamesToFetch;

}

@property (retain) NSSet * notificationTypeNamesToFetch;              //@synthesize notificationTypeNamesToFetch=_notificationTypeNamesToFetch - In the implementation block
-(void)dealloc;
-(id)notificationTypeNamesToFetch;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(void)setNotificationTypeNamesToFetch:(id)arg1 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
@end

