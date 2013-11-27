/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol DARefreshManagerDelegate
@optional
-(id)password;
-(void)interfaceWentUp;
-(void)interfaceWentDown;
-(id)serverTokenRegistrationURL;
-(id)username;

@required
-(id)scheduleIdentifier;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2;
-(id)onBehalfOfBundleIdentifier;
@end

