/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccess/DAAccount.h>

@class NSData, NSString, NSDictionary, NSURL;

@interface SubCalAccount : DAAccount {

	NSData* _tmpICSData;
	BOOL _didTrySSL;
	BOOL _isManagedCalendar;
	int _subCalAccountVersion;

}

@property (assign) BOOL shouldRemoveAlarms; 
@property (nonatomic,retain) NSString * syncId; 
@property (nonatomic,retain) NSDictionary * externalRepresentation; 
@property (nonatomic,readonly) NSURL * subscriptionURL; 
@property (nonatomic,retain) NSString * calDAVURLString; 
@property (nonatomic,readonly) NSString * calendarExternalId; 
@property (assign,nonatomic) BOOL isManagedCalendar;                             //@synthesize isManagedCalendar=_isManagedCalendar - In the implementation block
@property (assign) int subCalAccountVersion;                                     //@synthesize subCalAccountVersion=_subCalAccountVersion - In the implementation block
-(int)subCalAccountVersion;
-(void)setHost:(id)arg1 ;
-(void)dealloc;
-(id)subscriptionURL;
-(void)removeDBSyncData;
-(BOOL)isSubscribedCalendarAccount;
-(id)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(id)externalRepresentation;
-(void)setExternalRepresentation:(id)arg1 ;
-(void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 ;
-(id)tmpICSData;
-(void)setTmpICSData:(id)arg1 ;
-(id)calendarExternalId;
-(BOOL)isManagedCalendar;
-(void)refreshAllCalendars;
-(id)calDAVURLString;
-(BOOL)shouldRemoveAlarms;
-(void)clearTmpICSData;
-(void)saveTmpICSData;
-(void)quickValidate:(id)arg1 ;
-(BOOL)hasSubscribedCalendarAtURL:(id)arg1 ;
-(void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2 forceSSL:(BOOL)arg3 ;
-(void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2 ;
-(id)_tmpICSCalendarPath;
-(id)syncId;
-(void)setCalDAVURLString:(id)arg1 ;
-(void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 calendarData:(id)arg4 ;
-(void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3 ;
-(void)setSyncId:(id)arg1 ;
-(void)setShouldRemoveAlarms:(BOOL)arg1 ;
-(void)setIsManagedCalendar:(BOOL)arg1 ;
-(void)setSubCalAccountVersion:(int)arg1 ;
-(id)accountDescription;
-(void)setAccountDescription:(id)arg1 ;
@end

