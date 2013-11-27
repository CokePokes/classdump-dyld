/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface ADSAssertionManager : NSObject {

	int _assertionCount;
	NSCountedSet* _objectAssertions;
	NSObject<OS_dispatch_queue>* _queue;
	unsigned _powerAssertionID;
	double _shutdownScheduledTime;

}

@property (nonatomic,readonly) int numberOfActiveAssertions; 
@property (assign,nonatomic) int assertionCount;                                 //@synthesize assertionCount=_assertionCount - In the implementation block
@property (nonatomic,retain) NSCountedSet * objectAssertions;                    //@synthesize objectAssertions=_objectAssertions - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double shutdownScheduledTime;                       //@synthesize shutdownScheduledTime=_shutdownScheduledTime - In the implementation block
@property (assign,nonatomic) unsigned powerAssertionID;                          //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
+(id)sharedInstance;
-(void)takeClientAssertion;
-(void)returnClientAssertion;
-(int)numberOfActiveAssertions;
-(void)takeObjectAssertion:(id)arg1 ;
-(void)returnObjectAssertion:(id)arg1 ;
-(int)assertionCount;
-(void)_takeClientAssertion;
-(void)_returnClientAssertion;
-(unsigned)powerAssertionID;
-(void)setPowerAssertionID:(unsigned)arg1 ;
-(void)setAssertionCount:(int)arg1 ;
-(void)_releasePowerAssertionIfHeld;
-(void)_takePowerAssertionForInterval:(double)arg1 ;
-(void)setShutdownScheduledTime:(double)arg1 ;
-(double)shutdownScheduledTime;
-(void)_shutdown;
-(id)objectAssertions;
-(void)setObjectAssertions:(id)arg1 ;
-(id)init;
-(id)queue;
@end

