/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/CLLocationManagerDelegate.h>

@class NSDictionary, AOSFindBaseServiceProvider, CLLocation, CLLocationManager, AOSLocator, PCPersistentTimer, NSDate, AOSTrackedLocationsStore;

@interface AOSLocationTracker : NSObject <CLLocationManagerDelegate> {

	BOOL _trackNotifyEnabled;
	BOOL _trackingStarted;
	NSDictionary* _locateParams;
	int _trackingStatus;
	int _maxLocations;
	int _locationTrackerType;
	AOSFindBaseServiceProvider* _provider;
	CLLocation* _lastLocation;
	CLLocationManager* _locManager;
	AOSLocator* _locator;
	PCPersistentTimer* _fallbackRetryTimer;
	NSDate* _lastFallbackRetryTime;
	AOSTrackedLocationsStore* _trackedLocationsStore;
	double _minSLCAccuracyThreshold;
	double _keepAlive;
	double _periodicCheckInterval;
	double _minDistanceBetweenLocations;
	double _minTimeBetweenLocations;
	double _minTimeBetweenServerCalls;

}

@property (assign,nonatomic) double minSLCAccuracyThreshold;                                //@synthesize minSLCAccuracyThreshold=_minSLCAccuracyThreshold - In the implementation block
@property (nonatomic,retain) NSDictionary * locateParams;                                   //@synthesize locateParams=_locateParams - In the implementation block
@property (assign,nonatomic) int trackingStatus;                                            //@synthesize trackingStatus=_trackingStatus - In the implementation block
@property (assign,nonatomic) BOOL trackNotifyEnabled;                                       //@synthesize trackNotifyEnabled=_trackNotifyEnabled - In the implementation block
@property (assign,nonatomic) int maxLocations;                                              //@synthesize maxLocations=_maxLocations - In the implementation block
@property (assign,nonatomic) double keepAlive;                                              //@synthesize keepAlive=_keepAlive - In the implementation block
@property (assign,nonatomic) double periodicCheckInterval;                                  //@synthesize periodicCheckInterval=_periodicCheckInterval - In the implementation block
@property (assign,nonatomic) double minDistanceBetweenLocations;                            //@synthesize minDistanceBetweenLocations=_minDistanceBetweenLocations - In the implementation block
@property (assign,nonatomic) double minTimeBetweenLocations;                                //@synthesize minTimeBetweenLocations=_minTimeBetweenLocations - In the implementation block
@property (assign,nonatomic) double minTimeBetweenServerCalls;                              //@synthesize minTimeBetweenServerCalls=_minTimeBetweenServerCalls - In the implementation block
@property (assign,nonatomic) int locationTrackerType;                                       //@synthesize locationTrackerType=_locationTrackerType - In the implementation block
@property (assign,nonatomic,__weak) AOSFindBaseServiceProvider * provider;                  //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL trackingStarted;                                          //@synthesize trackingStarted=_trackingStarted - In the implementation block
@property (nonatomic,copy) CLLocation * lastLocation;                                       //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) CLLocationManager * locManager;                                //@synthesize locManager=_locManager - In the implementation block
@property (nonatomic,retain) AOSLocator * locator;                                          //@synthesize locator=_locator - In the implementation block
@property (nonatomic,retain) PCPersistentTimer * fallbackRetryTimer;                        //@synthesize fallbackRetryTimer=_fallbackRetryTimer - In the implementation block
@property (nonatomic,retain) NSDate * lastFallbackRetryTime;                                //@synthesize lastFallbackRetryTime=_lastFallbackRetryTime - In the implementation block
@property (nonatomic,retain) AOSTrackedLocationsStore * trackedLocationsStore;              //@synthesize trackedLocationsStore=_trackedLocationsStore - In the implementation block
+(id)locationTrackerOfType:(int)arg1 ;
+(id)stringForLocationTrackerType:(int)arg1 ;
-(id)locator;
-(void)setLocator:(id)arg1 ;
-(void)registerServiceProvider:(id)arg1 ;
-(void)deregisterServiceProvider:(id)arg1 ;
-(void)deleteLocationTrackingInfoAndStopTracking;
-(int)trackingStatus;
-(BOOL)trackNotifyEnabled;
-(id)newLocationManager;
-(id)locManager;
-(void)setLocManager:(id)arg1 ;
-(void)recordLocation:(id)arg1 ofType:(int)arg2 ;
-(void)actOnTrackedLocationsUsingBlock:(/*^block*/ id)arg1 ;
-(void)didAddNewTrackedLocation:(id)arg1 ;
-(void)updateLocationTrackingInfoWithTrackingStatus:(int)arg1 minSLCAccuracyThreshold:(double)arg2 locateParams:(id)arg3 trackNotifyEnabled:(BOOL)arg4 maxLocations:(int)arg5 keepAlive:(double)arg6 periodicCheckInterval:(double)arg7 minDistanceBetweenLocations:(double)arg8 minTimeBetweenLocations:(double)arg9 minTimeBetweenServerCalls:(double)arg10 ;
-(void)setLocationTrackerType:(int)arg1 ;
-(void)_loadTrackingInfo;
-(void)setTrackedLocationsStore:(id)arg1 ;
-(void)_stopFallbackRetryTimer;
-(void)_startTracking;
-(void)_stopTracking;
-(void)setMinSLCAccuracyThreshold:(double)arg1 ;
-(void)setLocateParams:(id)arg1 ;
-(void)setTrackingStatus:(int)arg1 ;
-(void)setTrackNotifyEnabled:(BOOL)arg1 ;
-(void)setMaxLocations:(int)arg1 ;
-(void)setPeriodicCheckInterval:(double)arg1 ;
-(void)setMinDistanceBetweenLocations:(double)arg1 ;
-(void)setMinTimeBetweenLocations:(double)arg1 ;
-(void)setMinTimeBetweenServerCalls:(double)arg1 ;
-(void)_storeTrackingInfo;
-(void)_updateFallbackRetryTimer;
-(id)trackedLocationsStore;
-(id)locateParams;
-(double)minSLCAccuracyThreshold;
-(void)_startLocateCycleWithReceivedLocationBlock:(/*^block*/ id)arg1 andStoppedLocatingBlock:(/*^block*/ id)arg2 ;
-(int)locationTrackerType;
-(void)setLastFallbackRetryTime:(id)arg1 ;
-(id)fallbackRetryTimer;
-(void)setFallbackRetryTimer:(id)arg1 ;
-(id)fallbackTimerXPCTransactionName;
-(void)_updateFallbackRetryTimerUsingLocations:(id)arg1 ;
-(double)periodicCheckInterval;
-(id)lastFallbackRetryTime;
-(int)maxLocations;
-(double)minDistanceBetweenLocations;
-(double)minTimeBetweenLocations;
-(double)minTimeBetweenServerCalls;
-(BOOL)trackingStarted;
-(void)setTrackingStarted:(BOOL)arg1 ;
-(void)setProvider:(id)arg1 ;
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
-(void)setKeepAlive:(double)arg1 ;
-(double)keepAlive;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setLastLocation:(id)arg1 ;
-(id)lastLocation;
-(void).cxx_destruct;
-(id)provider;
@end

