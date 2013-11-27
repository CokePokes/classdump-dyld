/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccessExpress/DADisableableObject.h>
#import <DALDAP/DATask.h>

@protocol OS_ldap_connection;
@class LDAPTaskManager, NSObject, NSDate;

@interface LDAPTask : DADisableableObject <DATask> {

	LDAPTaskManager* _taskManager;
	id _delegate;
	BOOL _isFinished;
	NSObject<OS_ldap_connection>* _ldConnection;
	NSDate* _dateConnectionWentOut;

}

@property (assign) LDAPTaskManager * taskManager;              //@synthesize taskManager=_taskManager - In the implementation block
@property (assign) id delegate; 
@property (assign) BOOL isFinished;                            //@synthesize isFinished=_isFinished - In the implementation block
-(void)setIsFinished:(BOOL)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isFinished;
-(void)disable;
-(id)taskManager;
-(int)taskStatusForError:(id)arg1 ;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(BOOL)shouldHoldPowerAssertion;
-(void)setTaskManager:(id)arg1 ;
-(int)numDownloadedElements;
-(void)reportStatusWithError:(id)arg1 ;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)_performQuery;
-(void)initializeConnection;
@end

