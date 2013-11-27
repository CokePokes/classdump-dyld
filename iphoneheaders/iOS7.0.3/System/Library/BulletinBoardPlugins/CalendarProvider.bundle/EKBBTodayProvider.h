/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CalendarProvider/EKBBDataProvider.h>
#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, EKEventDescriptionGenerator, NSArray, NSTimer;

@interface EKBBTodayProvider : EKBBDataProvider <BBDataProvider> {

	NSObject<OS_dispatch_queue>* _bulletinRefreshQueue;
	EKEventDescriptionGenerator* _descriptionGenerator;
	NSArray* _birthdayEvents;
	NSArray* _upcomingEvents;
	NSArray* _todayEvents;
	NSArray* _tomorrowEvents;
	NSTimer* _updateCountdownTimer;
	NSTimer* _startCountdownTimer;
	BOOL _isShowingBirthdayBulletin;
	BOOL _isShowingUpcomingEventBulletin;
	BOOL _isShowingTomorrowBulletin;

}
-(id)_todayEvents;
-(id)_tomorrowEvents;
-(BOOL)supportsAlerts;
-(void)_resetTimers;
-(id)_nowComponents;
-(void)_resetAllEvents;
-(id)_dateForNow;
-(id)_createBirthdayBulletin;
-(id)_createUpcomingEventBulletin;
-(id)_createTomorrowBulletin;
-(id)_birthdayEventsForToday;
-(id)_expirationDateForTomorrowSnippet;
-(id)_dateForEndOfToday;
-(BOOL)_isEventFirstForToday:(id)arg1 ;
-(void)_refreshUpcomingEventBulletin;
-(void)_scheduleTimerForUpdatingCountdownForEvent:(id)arg1 ;
-(void)_scheduleTimerForStartingCountdownToEvent:(id)arg1 ;
-(void)_eventDescriptionWasInvalidated:(id)arg1 ;
-(void)_selectedCalendarsChanged:(id)arg1 ;
-(id)_upcomingEvents;
-(id)_loadBirthdayEventsForToday;
-(id)_loadUpcomingEvents;
-(id)_loadTomorrowEvents;
-(id)_loadTodayEvents;
-(id)_selectedCalendars;
-(BOOL)_shouldExcludeEvent:(id)arg1 allowAllDayEvents:(BOOL)arg2 ;
-(id)_dateForBeginningOfTomorrow;
-(id)_dateForEndOfTomorrow;
-(id)_dateForBeginningOfToday;
-(id)_todayComponents;
-(id)_tomorrowComponents;
-(void)_refreshBirthdayBulletin;
-(BOOL)_isListOfEvents:(id)arg1 equivalentToListOfEvents:(id)arg2 ;
-(void)_refreshTomorrowBulletin;
-(void)_releaseAllEvents;
-(BOOL)_doesListOfEvents:(id)arg1 containEquivalentForEvent:(id)arg2 ;
-(BOOL)_isEvent:(id)arg1 equivalentToEvent:(id)arg2 ;
-(void)_startCountdownTimerDidFire:(id)arg1 ;
-(void)_updateCountdownTimerDidFire:(id)arg1 ;
-(void)databaseChanged:(id)arg1 ;
-(void)eventStoreWillClose;
-(void)_localeChanged;
-(void)dealloc;
-(id)init;
-(void)_todayChanged:(id)arg1 ;
-(id)sectionIdentifier;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
-(void)_significantTimeChange:(id)arg1 ;
-(void).cxx_destruct;
@end

