/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMLoggingAgent
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDate, NSString, _IMLoggingAgentSessionSortedLogList, NSMutableArray, NSMutableDictionary, NSDateFormatter, NSTimer;

@interface IMLoggingAgentFaceTimeSession : NSObject {

	NSDate* _dateStarted;
	NSDate* _dateEnded;
	NSString* _logBasePath;
	NSString* _sessionType;
	NSString* _initiatorID;
	NSString* _recipientID;
	NSString* _failureReason;
	NSString* _model;
	_IMLoggingAgentSessionSortedLogList* _simpleLogs;
	_IMLoggingAgentSessionSortedLogList* _verboseLogs;
	NSMutableArray* _qualityLogs;
	NSMutableArray* _callInfoCategories;
	NSMutableArray* _callInfoStrings;
	NSMutableDictionary* _qualityMetrics;
	NSMutableDictionary* _filesToCollect;
	NSDateFormatter* _dateFormatter;
	NSTimer* _qualityPulse;
	BOOL _initiator;
	BOOL _active;
	BOOL _logCheckpoints;
	BOOL _logDescriptions;
	unsigned _endFlags;

}

@property (readonly) BOOL isActive;                            //@synthesize active=_active - In the implementation block
@property (readonly) NSString * sessionType;                   //@synthesize sessionType=_sessionType - In the implementation block
@property (assign) BOOL logCheckpointsToConsole;               //@synthesize logCheckpoints=_logCheckpoints - In the implementation block
@property (assign) BOOL isInitiator;                           //@synthesize initiator=_initiator - In the implementation block
@property (assign) BOOL logDescriptionsToConsole;              //@synthesize logDescriptions=_logDescriptions - In the implementation block
@property (copy) NSString * failureReason;                     //@synthesize failureReason=_failureReason - In the implementation block
@property (copy) NSString * initiator;                         //@synthesize initiatorID=_initiatorID - In the implementation block
@property (copy) NSString * recipient;                         //@synthesize recipientID=_recipientID - In the implementation block
@property (assign,nonatomic) unsigned endFlags;                //@synthesize endFlags=_endFlags - In the implementation block
+(id)_timeZoneAbbreviation;
+(id)logPathForDate:(id)arg1 withBasePath:(id)arg2 isInitiator:(BOOL)arg3 ;
+(void)_writeStrings:(id)arg1 toPath:(id)arg2 ;
+(id)logStringForDate:(id)arg1 ;
-(void)_postInactive;
-(void)_cancelInactivityTimer;
-(BOOL)logCheckpointsToConsole;
-(BOOL)logDescriptionsToConsole;
-(void)_addTimeInformation;
-(void)_addCallInfoInformation;
-(void)_addBuildInformation;
-(void)_addFailureInformation;
-(void)_addRecipientInformation;
-(void)_addInitiatorInformation;
-(void)addLogFile:(id)arg1 forSender:(id)arg2 forCategory:(id)arg3 ;
-(id)_metricsForKey:(id)arg1 ;
-(void)beginSessionWithSender:(id)arg1 ;
-(id)_storedMetrics;
-(void)endSessionWithSender:(id)arg1 ;
-(void)writeSessionLog:(BOOL)arg1 ;
-(void)_gatherQualityMetrics:(id)arg1 ;
-(void)_markActive;
-(void)_appendQualityMetrics;
-(void)_addCallInfo:(id)arg1 category:(id)arg2 ;
-(void)_addQualityMetric:(id)arg1 value:(id)arg2 sender:(id)arg3 ;
-(id)initWithSessionType:(id)arg1 logDirectory:(id)arg2 ;
-(void)startPing:(BOOL)arg1 ;
-(void)noteCheckpoint:(id)arg1 checkpointTime:(double)arg2 withSender:(id)arg3 ;
-(void)logCallInfo:(id)arg1 category:(id)arg2 withSender:(id)arg3 ;
-(void)logQualityMetric:(id)arg1 value:(id)arg2 withSender:(id)arg3 ;
-(void)logQualityCategory:(id)arg1 withLog:(id)arg2 withSender:(id)arg3 ;
-(void)logDescription:(id)arg1 withLog:(id)arg2 withSender:(id)arg3 time:(double)arg4 ;
-(void)pulseFromSender:(id)arg1 ;
-(void)noteBadNetworkConditions;
-(void)setFailureReason:(id)arg1 ;
-(void)setLogCheckpointsToConsole:(BOOL)arg1 ;
-(void)setLogDescriptionsToConsole:(BOOL)arg1 ;
-(unsigned)endFlags;
-(void)setEndFlags:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(id)model;
-(id)initiator;
-(id)failureReason;
-(id)recipient;
-(void)setRecipient:(id)arg1 ;
-(BOOL)isInitiator;
-(void)setIsInitiator:(BOOL)arg1 ;
-(void)setInitiator:(id)arg1 ;
-(id)sessionType;
@end

