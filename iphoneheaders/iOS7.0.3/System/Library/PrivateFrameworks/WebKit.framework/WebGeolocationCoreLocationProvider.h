/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/CLLocationManagerDelegate.h>

@protocol WebGeolocationCoreLocationUpdateListener;
@class ;

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate> {

	<WebGeolocationCoreLocationUpdateListener>* _positionListener;
	RetainPtr<CLLocationManager>* _locationManager;
	BOOL _isWaitingForAuthorization;
	int _lastAuthorizationStatus;

}
-(void)dealloc;
-(void)start;
-(id).cxx_construct;
-(void)stop;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void).cxx_destruct;
-(void)setEnableHighAccuracy:(BOOL)arg1 ;
-(void)createLocationManager;
-(BOOL)handleExternalAuthorizationStatusChange:(int)arg1 ;
-(void)sendLocation:(id)arg1 ;
-(id)initWithListener:(id)arg1 ;
@end

