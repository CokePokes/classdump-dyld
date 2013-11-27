/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol BKSAccelerometerDelegate;
#import <BackBoardServices/BackBoardServices-Structs.h>
@class , NSLock, NSThread;

@interface BKSAccelerometer : NSObject {

	<BKSAccelerometerDelegate>* _delegate;
	CFRunLoopSourceRef _accelerometerEventsSource;
	CFRunLoopRef _accelerometerEventsRunLoop;
	double _interval;
	NSLock* _lock;
	BOOL _orientationEventsEnabled;
	int _orientationCheckToken;
	int _orientationNotificationsToken;
	NSThread* _orientationEventsThread;
	float _xThreshold;
	float _yThreshold;
	float _zThreshold;

}

@property (assign,nonatomic) BOOL accelerometerEventsEnabled; 
@property (assign,nonatomic) double updateInterval; 
@property (assign,nonatomic) float xThreshold; 
@property (assign,nonatomic) float yThreshold; 
@property (assign,nonatomic) float zThreshold; 
@property (assign,nonatomic) BOOL orientationEventsEnabled; 
@property (assign,nonatomic) <BKSAccelerometerDelegate> * delegate; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)_checkIn;
-(void)_checkOut;
-(void)_orientationDidChange;
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(void)_serverWasRestarted;
-(BOOL)orientationEventsEnabled;
-(id)_orientationEventsThread;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(int)currentDeviceOrientation;
@end

