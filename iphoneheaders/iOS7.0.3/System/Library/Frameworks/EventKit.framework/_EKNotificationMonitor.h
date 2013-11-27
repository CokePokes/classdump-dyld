/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, PCPersistentTimer, NSDate, NSTimer, NSObject, NSMutableArray, NSArray;

@interface _EKNotificationMonitor : NSObject {

	EKEventStore* _eventStore;
	/*^block*/ id _eventStoreGetter;
	BOOL _running;
	PCPersistentTimer* _timer;
	NSDate* _nextFireTime;
	NSTimer* _syncTimer;
	BOOL _pendingChanges;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _timerQueue;
	unsigned _lastCount;
	NSMutableArray* _notifications;
	NSMutableArray* _recentlyRepliedNotifications;
	NSMutableArray* _culledRecentlyRepliedNotifications;
	BOOL _initialCheck;
	BOOL _shouldInstallPersistentTimer;
	BOOL _useSyncIdleTimer;
	BOOL _loadRecentlyRepliedNotifications;

}

@property (nonatomic,readonly) unsigned notificationCount; 
@property (nonatomic,readonly) NSArray * notifications; 
@property (nonatomic,readonly) NSArray * recentlyRepliedNotifications; 
-(void)_databaseChanged;
-(id)initWithEventStore:(id)arg1 ;
-(void)_killSyncTimer;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_syncDidEnd;
-(void)_resetSyncTimer;
-(void)_syncDidStart;
-(void)_resetTimer;
-(void)_checkForUpdates;
-(void)killTimer;
-(id)_eventStore;
-(unsigned)_checkForRecentlyRepliedNotifications:(id)arg1 ;
-(void)_timerFired;
-(void)adjust;
-(id)_notificationFromEvent:(id)arg1 ;
-(unsigned)_checkForNotifications:(id)arg1 ;
-(void)_notifyForUnalertedNotifications:(id)arg1 ;
-(id)initForBulletinBoardWithEventStoreGetter:(/*^block*/ id)arg1 ;
-(unsigned)notificationCount;
-(id)notifications;
-(id)recentlyRepliedNotifications;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
@end

