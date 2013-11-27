/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/CompassCalibrationViewService.app/CompassCalibrationViewService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <WebKit/CLLocationManagerDelegate.h>
#import <CompassUI/CalibrationPresentationService.h>

@class CalibrationViewController, CMMotionManager, CLLocationManager, UIButton, NSTimer;

@interface CalibrationViewServiceController : UIViewController <CLLocationManagerDelegate, CalibrationPresentationService> {

	CalibrationViewController* _calibrationViewController;
	CMMotionManager* _motionManager;
	CLLocationManager* _locationManager;
	UIButton* _button;
	NSTimer* _maximumTimer;
	NSTimer* _minimumTimer;
	BOOL _minTimeElapsed;
	BOOL _calibrated;
	BOOL _maxTimeElapsed;
	BOOL _hasPresented;
	int _finalOrientation;

}

@property (nonatomic,readonly) CalibrationViewController * calibrationViewController; 
@property (nonatomic,readonly) CMMotionManager * motionManager; 
@property (nonatomic,readonly) CLLocationManager * locationManager; 
@property (nonatomic,retain) NSTimer * maximumTimer;                                               //@synthesize maximumTimer=_maximumTimer - In the implementation block
@property (nonatomic,retain) NSTimer * minimumTimer;                                               //@synthesize minimumTimer=_minimumTimer - In the implementation block
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(id)motionManager;
-(void)finishedCalibrating;
-(void)setMaximumTimer:(id)arg1 ;
-(void)minimumTimeElapsed;
-(void)setMinimumTimer:(id)arg1 ;
-(id)calibrationViewController;
-(id)minimumTimer;
-(void)tryToDismissCalibration;
-(id)maximumTimer;
-(void)maximumTimeElapsed;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)reset;
-(void)_hostApplicationDidEnterBackground;
-(id)locationManager;
@end

