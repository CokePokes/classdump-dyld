/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EKObjectID, NSDate, NSTimeZone, NSString;

@interface EKAlarmOccurrence : NSObject {

	EKObjectID* _alarmID;
	EKObjectID* _ownerID;
	NSDate* _ownerDate;
	NSTimeZone* _ownerTimeZone;
	NSDate* _fireDate;
	NSString* _externalID;
	NSDate* _acknowledgedDate;

}

@property (nonatomic,readonly) EKObjectID * alarmID;                    //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) EKObjectID * ownerID;                    //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,readonly) NSDate * ownerDate;                      //@synthesize ownerDate=_ownerDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * ownerTimeZone;              //@synthesize ownerTimeZone=_ownerTimeZone - In the implementation block
@property (nonatomic,readonly) NSDate * fireDate;                       //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSDate * acknowledgedDate;               //@synthesize acknowledgedDate=_acknowledgedDate - In the implementation block
+(id)alarmOccurrenceWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 fireDate:(id)arg5 externalID:(id)arg6 acknowledgedDate:(id)arg7 ;
-(id)acknowledgedDate;
-(id)ownerID;
-(id)ownerDate;
-(id)ownerTimeZone;
-(id)alarmID;
-(id)initWithAlarmID:(id)arg1 ownerID:(id)arg2 ownerDate:(id)arg3 ownerTimeZone:(id)arg4 fireDate:(id)arg5 externalID:(id)arg6 acknowledgedDate:(id)arg7 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)fireDate;
-(id)externalID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

