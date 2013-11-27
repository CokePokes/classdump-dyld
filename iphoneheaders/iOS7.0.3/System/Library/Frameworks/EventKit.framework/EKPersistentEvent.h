/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@class NSString, NSDate, NSURL, NSArray;

@interface EKPersistentEvent : EKPersistentCalendarItem {

	SCD_Struct_EK16 _cachedDurationUnits;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,readonly) SCD_Struct_EK16 durationUnits; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) int birthdayID; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * responseComment; 
@property (assign,nonatomic) unsigned invitationStatus; 
@property (nonatomic,readonly) unsigned invitationChangedProperties; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int availability; 
@property (assign,nonatomic) unsigned privacyLevel; 
@property (getter=isFloating,nonatomic,readonly) BOOL floating; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isMeeting,nonatomic,readonly) BOOL meeting; 
@property (getter=isInvitation,nonatomic,readonly) BOOL invitation; 
@property (assign,nonatomic) unsigned modifiedProperties; 
@property (assign,nonatomic) BOOL needsOccurrenceCacheUpdate; 
@property (assign,nonatomic) int participationStatus; 
@property (nonatomic,readonly) int pendingParticipationStatus; 
@property (nonatomic,copy) NSDate * originalStartDate; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,readonly) BOOL allowsParticipationStatusModifications; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3 ;
-(BOOL)validate:(id*)arg1 ;
-(unsigned)invitationStatus;
-(void)setInvitationStatus:(unsigned)arg1 ;
-(id)eventIdentifier;
-(id)exportToICS;
-(SCD_Struct_EK16)durationUnits;
-(BOOL)allowsParticipationStatusModifications;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(void)setAvailability:(int)arg1 ;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(int)participationStatus;
-(int)birthdayID;
-(id)organizer;
-(unsigned)invitationChangedProperties;
-(BOOL)responseMustApplyToAll;
-(int)pendingParticipationStatus;
-(void)setParticipationStatus:(int)arg1 ;
-(void)clearExceptionDatesAndUpdateDetachedOriginalDates;
-(void)filterExceptionDates;
-(id)originalStartDate;
-(void)deleteFromOccurrenceDateOnward:(id)arg1 ;
-(id)detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3 ;
-(void)setOriginalStartDate:(id)arg1 ;
-(BOOL)needsOccurrenceCacheUpdate;
-(int)availability;
-(id)responseComment;
-(void)setResponseComment:(id)arg1 ;
-(void)primitiveValueChangedForKey:(id)arg1 ;
-(void)_invalidateCachedDurationUnits;
-(BOOL)_areDurationUnitsCached;
-(BOOL)hasValidEventAction;
-(BOOL)isInvitation;
-(BOOL)_hasExternalIDOrDeliverySource;
-(void)_adjustForNewCalendar;
-(unsigned)privacyLevel;
-(void)setPrivacyLevel:(unsigned)arg1 ;
-(id)committedStartDate;
-(BOOL)isMeeting;
-(int)birthdayId;
-(void)setActions:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)removeAction:(id)arg1 ;
-(int)entityType;
-(void)dealloc;
-(id)description;
-(double)duration;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)initCommon;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)actions;
-(BOOL)refresh;
-(BOOL)isFloating;
-(id)endDate;
-(void)setEndDate:(id)arg1 ;
@end

