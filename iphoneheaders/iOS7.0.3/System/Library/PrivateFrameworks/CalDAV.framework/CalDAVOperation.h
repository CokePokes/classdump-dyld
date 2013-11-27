/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class , NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	<CalDAVPrincipal>* _principal;
	BOOL _isCancellingTaskGroups;
	NSMutableSet* _outstandingTaskGroups;

}

@property (readonly) <CalDAVPrincipal> * principal;                     //@synthesize principal=_principal - In the implementation block
@property (readonly) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/ id)arg1 ;
-(id)principal;
-(void)bailWithError:(id)arg1 ;
-(void)cancelTaskGroup;
-(id)outstandingTaskGroups;
-(id)initWithPrincipal:(id)arg1 ;
@end

