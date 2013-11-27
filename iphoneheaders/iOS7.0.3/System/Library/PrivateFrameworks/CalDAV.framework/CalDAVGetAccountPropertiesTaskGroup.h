/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet, NSURL, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _calendarHomes;
	NSSet* _userAddresses;
	NSSet* _originalUserAddresses;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropboxURL;
	NSURL* _notificationURL;
	NSURL* _delegatePrincipalURL;
	NSURL* _updatedPrincipalURL;
	BOOL _supportsCalendarUserSearch;
	CalDAVServerVersion* _serverVersion;

}

@property (retain) NSURL * delegatePrincipalURL;                       //@synthesize delegatePrincipalURL=_delegatePrincipalURL - In the implementation block
@property (readonly) NSSet * calendarHomes;                            //@synthesize calendarHomes=_calendarHomes - In the implementation block
@property (readonly) NSSet * userAddresses;                            //@synthesize userAddresses=_userAddresses - In the implementation block
@property (readonly) NSSet * originalUserAddresses;                    //@synthesize originalUserAddresses=_originalUserAddresses - In the implementation block
@property (readonly) NSURL * inboxURL;                                 //@synthesize inboxURL=_inboxURL - In the implementation block
@property (readonly) NSURL * outboxURL;                                //@synthesize outboxURL=_outboxURL - In the implementation block
@property (readonly) NSURL * dropboxURL;                               //@synthesize dropboxURL=_dropboxURL - In the implementation block
@property (readonly) NSURL * notificationURL;                          //@synthesize notificationURL=_notificationURL - In the implementation block
@property (readonly) NSURL * updatedPrincipalURL;                      //@synthesize updatedPrincipalURL=_updatedPrincipalURL - In the implementation block
@property (readonly) CalDAVServerVersion * serverVersion;              //@synthesize serverVersion=_serverVersion - In the implementation block
@property (readonly) BOOL supportsCalendarUserSearch;                  //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
-(void)dealloc;
-(id)description;
-(id)delegatePrincipalURL;
-(id)calendarHomes;
-(void)setDelegatePrincipalURL:(id)arg1 ;
-(id)dropboxURL;
-(id)notificationURL;
-(id)userAddresses;
-(id)originalUserAddresses;
-(id)updatedPrincipalURL;
-(BOOL)supportsCalendarUserSearch;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
-(void)startTaskGroup;
-(BOOL)forceOptionsRequest;
-(void)processPrincipalHeaders:(id)arg1 ;
-(id)serverVersion;
-(id)inboxURL;
-(id)outboxURL;
@end

