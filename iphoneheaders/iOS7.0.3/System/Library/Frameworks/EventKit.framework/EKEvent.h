/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKCalendarItem.h>

@class EKCalendarDate, NSNumber, NSString, NSDate, EKParticipant, NSURL, EKEventStore, NSArray;

@interface EKEvent : EKCalendarItem {

	BOOL _occurrenceIsAllDay;
	BOOL _requiresDetachDueToSnoozedAlarm;
	EKCalendarDate* _occurrenceStartDate;
	EKCalendarDate* _occurrenceEndDate;
	EKCalendarDate* _originalOccurrenceStartDate;
	EKCalendarDate* _originalOccurrenceEndDate;
	NSNumber* _originalOccurrenceIsAllDay;
	int _attendeeCount;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,readonly) EKParticipant * organizer; 
@property (assign,nonatomic) int availability; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) BOOL isDetached; 
@property (nonatomic,readonly) int birthdayPersonID; 
@property (nonatomic,readonly) NSDate * occurrenceDate; 
@property (readonly) int attendeeCount;                                               //@synthesize attendeeCount=_attendeeCount - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (assign,nonatomic) int participationStatus; 
@property (assign,nonatomic) unsigned invitationStatus; 
@property (nonatomic,readonly) BOOL dateChanged; 
@property (nonatomic,readonly) BOOL timeChanged; 
@property (nonatomic,readonly) BOOL titleChanged; 
@property (nonatomic,readonly) BOOL locationChanged; 
@property (nonatomic,readonly) SCD_Struct_EK11 startDateGr; 
@property (nonatomic,readonly) SCD_Struct_EK11 endDateGr; 
@property (readonly) NSDate * initialStartDate; 
@property (readonly) NSDate * initialEndDate; 
@property (copy) NSString * responseComment; 
@property (readonly) BOOL isEditable; 
@property (readonly) BOOL isStatusDirty; 
@property (readonly) BOOL isStartDateDirty; 
@property (readonly) BOOL isEndDateDirty; 
@property (readonly) BOOL isAllDayDirty; 
@property (readonly) double duration; 
@property (nonatomic,readonly) BOOL canBeRespondedTo; 
@property (nonatomic,readonly) BOOL canSetAvailability; 
@property (nonatomic,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) int pendingParticipationStatus; 
@property (nonatomic,readonly) NSDate * participationStatusModifiedDate; 
@property (nonatomic,readonly) unsigned modifiedProperties; 
@property (readonly) BOOL canDetachSingleOccurrence; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDate; 
@property (nonatomic,readonly) EKCalendarDate * endCalendarDate; 
@property (nonatomic,readonly) BOOL responseMustApplyToAll; 
@property (nonatomic,copy) EKCalendarDate * occurrenceStartDate;                      //@synthesize occurrenceStartDate=_occurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * occurrenceEndDate;                        //@synthesize occurrenceEndDate=_occurrenceEndDate - In the implementation block
@property (assign,nonatomic) BOOL occurrenceIsAllDay;                                 //@synthesize occurrenceIsAllDay=_occurrenceIsAllDay - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceStartDate;              //@synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceEndDate;                //@synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate - In the implementation block
@property (nonatomic,copy) NSNumber * originalOccurrenceIsAllDay;                     //@synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay - In the implementation block
@property (assign,nonatomic) BOOL requiresDetachDueToSnoozedAlarm;                    //@synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm - In the implementation block
+(id)eventWithEventStore:(id)arg1 ;
-(BOOL)isAllDay;
-(BOOL)canSetAvailability;
-(id)initWithPersistentObject:(id)arg1 ;
-(id)eventStore;
-(void)didCommit;
-(id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2 ;
-(BOOL)validateWithSpan:(int)arg1 error:(id*)arg2 ;
-(BOOL)commitWithSpan:(int)arg1 error:(id*)arg2 ;
-(BOOL)removeWithSpan:(int)arg1 error:(id*)arg2 ;
-(void)clearInvitationStatus;
-(unsigned)invitationStatus;
-(void)setInvitationStatus:(unsigned)arg1 ;
-(id)externalURI;
-(id)initWithEventStore:(id)arg1 ;
-(void)setOccurrenceStartDate:(id)arg1 ;
-(void)setOccurrenceEndDate:(id)arg1 ;
-(BOOL)_isAllDay;
-(void)setOccurrenceIsAllDay:(BOOL)arg1 ;
-(id)_persistentEvent;
-(id)eventIdentifier;
-(id)externalURL;
-(id)exportToICS;
-(id)originalOccurrenceStartDate;
-(id)occurrenceStartDate;
-(id)originalOccurrenceEndDate;
-(id)committedValueForKey:(id)arg1 ;
-(int)birthdayPersonID;
-(id)initialStartDate;
-(id)startCalendarDate;
-(void)setOriginalOccurrenceIsAllDay:(id)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setOriginalOccurrenceStartDate:(id)arg1 ;
-(id)occurrenceEndDate;
-(void)setOriginalOccurrenceEndDate:(id)arg1 ;
-(id)_effectiveTimeZone;
-(SCD_Struct_EK11)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2 ;
-(SCD_Struct_EK11)startDateGr;
-(SCD_Struct_EK11)endDateGr;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(void)setAvailability:(int)arg1 ;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(int)participationStatus;
-(id)attendees;
-(id)organizer;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateDurationConstrainedToRecurrenceInterval;
-(BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1 ;
-(BOOL)isDetached;
-(BOOL)allowsCalendarModifications;
-(BOOL)responseMustApplyToAll;
-(BOOL)isDirtyIgnoringCalendar;
-(BOOL)requiresDetach;
-(BOOL)isAllDayDirty;
-(int)pendingParticipationStatus;
-(id)participationStatusModifiedDate;
-(BOOL)allowsAlarmModifications;
-(void)_sendModifiedNote;
-(void)setRequiresDetachDueToSnoozedAlarm:(BOOL)arg1 ;
-(BOOL)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id*)arg2 ;
-(BOOL)allowsRecurrenceModifications;
-(BOOL)requiresDetachDueToSnoozedAlarm;
-(BOOL)_isInitialOccurrenceDate:(id)arg1 ;
-(void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3 ;
-(void)setParticipationStatus:(int)arg1 ;
-(BOOL)occurrenceIsAllDay;
-(id)originalOccurrenceIsAllDay;
-(BOOL)_checkStartDateConstraintAgainstDate:(SCD_Struct_EK11)arg1 timeZone:(id)arg2 error:(id*)arg3 ;
-(BOOL)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2 ;
-(SCD_Struct_EK11)startDatePinnedForAllDay;
-(SCD_Struct_EK11)endDatePinnedForAllDay;
-(void)_deleteThisOccurrence;
-(BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)arg1 ;
-(BOOL)_cancelWithSpan:(int)arg1 error:(id*)arg2 ;
-(BOOL)_shouldDeclineInsteadOfDelete;
-(BOOL)_deleteWithSpan:(int)arg1 error:(id*)arg2 ;
-(BOOL)isStatusDirty;
-(BOOL)isStartDateDirty;
-(BOOL)isEndDateDirty;
-(id)endCalendarDate;
-(id)occurrenceDate;
-(id)initialEndDate;
-(BOOL)needsOccurrenceCacheUpdate;
-(int)_parentParticipationStatus;
-(id)recurrenceRule;
-(void)setRecurrenceRule:(id)arg1 ;
-(int)availability;
-(id)responseComment;
-(void)setResponseComment:(id)arg1 ;
-(BOOL)dateChanged;
-(BOOL)timeChanged;
-(BOOL)titleChanged;
-(BOOL)locationChanged;
-(BOOL)isTentative;
-(int)compareStartDateWithEvent:(id)arg1 ;
-(BOOL)canDetachSingleOccurrence;
-(BOOL)changingAllDayPropertyIsAllowed;
-(BOOL)hasSelfAttendee;
-(BOOL)canBeRespondedTo;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)dirtyPropertiesToSkip;
-(void)revert;
-(id)_dateForNextOccurrence;
-(int)attendeeCount;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(void)setTimeZone:(id)arg1 ;
-(id)title;
-(id)uniqueId;
-(int)status;
-(id)attachments;
-(BOOL)refresh;
-(id)startDate;
-(id)endDate;
-(void)rollback;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
@end

