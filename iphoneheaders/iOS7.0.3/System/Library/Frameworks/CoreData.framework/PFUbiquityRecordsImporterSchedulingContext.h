/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {

	NSMutableSet* _scheduledLogLocations;
	NSMutableSet* _pendingLogLocations;
	NSMutableSet* _failedLogLocations;
	NSMutableSet* _ignoredLogLocations;
	NSMutableDictionary* _logLocationsToEncounteredErrors;
	int _lock;

}

@property (nonatomic,readonly) NSSet * pendingLogLocations;                                 //@synthesize pendingLogLocations=_pendingLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * scheduledLogLocations;                               //@synthesize scheduledLogLocations=_scheduledLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * failedLogLocations;                                  //@synthesize failedLogLocations=_failedLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * ignoredLogLocations;                                 //@synthesize ignoredLogLocations=_ignoredLogLocations - In the implementation block
@property (nonatomic,readonly) NSDictionary * logLocationsToEncounteredErrors;              //@synthesize logLocationsToEncounteredErrors=_logLocationsToEncounteredErrors - In the implementation block
-(id)pendingLogLocations;
-(void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2 ;
-(void)transactionLogAtLocationWasIgnored:(id)arg1 ;
-(void)transactionLogAtLocationWasScheduled:(id)arg1 ;
-(id)logLocationsToEncounteredErrors;
-(id)failedLogLocations;
-(id)scheduledLogLocations;
-(void)addPendingLogLocation:(id)arg1 ;
-(void)addPendingLogLocations:(id)arg1 ;
-(id)ignoredLogLocations;
-(id)initWithPendingLogLocations:(id)arg1 ;
-(void)failedTransactionLogAtLocationRecovered:(id)arg1 ;
-(void)unionWithSchedulingContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

