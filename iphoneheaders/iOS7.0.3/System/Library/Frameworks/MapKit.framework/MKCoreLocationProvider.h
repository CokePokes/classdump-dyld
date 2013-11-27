/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/CLLocationManagerDelegate.h>
#import <MapKit/MKLocationProvider.h>

@protocol MKLocationProviderDelegate;
@class NSBundle, NSString, CLLocationManager, ;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, MKLocationProvider> {

	CLLocationManager* _clLocationManager;
	<MKLocationProviderDelegate>* _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (assign,nonatomic) <MKLocationProviderDelegate> * delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) BOOL airplaneModeBlocksLocation; 
@property (assign,nonatomic) int activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (getter=isMonitoringRegionsAvailable,nonatomic,readonly) BOOL monitoringRegionsAvailable; 
-(double)distanceFilter;
-(double)desiredAccuracy;
-(double)expectedGpsUpdateInterval;
-(int)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)_createCLLocationManager;
-(void)_updateAuthorizationStatus;
-(id)_clLocationManager;
-(void)_resetForNewEffectiveBundle;
-(void)startMonitoringRegion:(id)arg1 ;
-(void)stopMonitoringRegion:(id)arg1 ;
-(id)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(id)arg1 ;
-(BOOL)airplaneModeBlocksLocation;
-(BOOL)usesCLMapCorrection;
-(BOOL)isMonitoringRegionsAvailable;
-(void)setEffectiveBundle:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)effectiveBundle;
-(int)activityType;
-(int)authorizationStatus;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(void)setActivityType:(int)arg1 ;
@end

