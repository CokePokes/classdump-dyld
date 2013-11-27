/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonCalDAV/DAPreferredDaysToSyncDidChangeObserver.h>
#import <DADaemonCalDAV/DAValidityCheckConsumer.h>

@interface CalDAVAgent : DAAgent <DAPreferredDaysToSyncDidChangeObserver, DAValidityCheckConsumer>
-(void)startMonitoring;
-(void)_setupNotifications;
-(void)reallyRefresh;
-(void)refreshDidCompleteWithError:(id)arg1 ;
-(void)_validateAndSync:(BOOL)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)preferredDaysToSyncDidChange;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(BOOL)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(id)initWithAccount:(id)arg1 ;
@end

