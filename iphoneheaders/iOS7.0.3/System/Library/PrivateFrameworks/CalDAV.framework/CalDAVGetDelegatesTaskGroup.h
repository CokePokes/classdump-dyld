/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	int _state;
	NSMutableArray* _nestedGroupPrincipalURLs;

}

@property (assign) int state;                                              //@synthesize state=_state - In the implementation block
@property (retain) NSMutableArray * nestedGroupPrincipalURLs;              //@synthesize nestedGroupPrincipalURLs=_nestedGroupPrincipalURLs - In the implementation block
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)setNestedGroupPrincipalURLs:(id)arg1 ;
-(id)nestedGroupPrincipalURLs;
-(void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2 ;
-(void)_expandProperties;
-(void)_getChildProperties;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
@end

