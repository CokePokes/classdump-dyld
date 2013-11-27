/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject {

	NSMutableSet* _logEvents;
	int _logLevel;

}

@property (assign) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedEventLogger;
+(void)initialize;
-(int)logLevel;
-(void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3 ;
-(id)createEventTrackingID:(int)arg1 ;
-(id)createCustomEventTrackingID:(id)arg1 ;
-(void)beginEvent:(id)arg1 ;
-(void)logEventData:(id)arg1 message:(id)arg2 ;
-(void)diagnostic:(id)arg1 message:(id)arg2 ;
-(void)debug:(id)arg1 message:(id)arg2 ;
-(void)info:(id)arg1 message:(id)arg2 ;
-(void)warning:(id)arg1 message:(id)arg2 ;
-(void)error:(id)arg1 message:(id)arg2 ;
-(void)fatal:(id)arg1 message:(id)arg2 ;
-(void)endEvent:(id)arg1 ;
-(id)incompleteEvents;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end

