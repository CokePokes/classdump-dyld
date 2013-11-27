/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebCore/WebCore-Structs.h>
@class CMMotionManager, CLLocationManager, NSTimer;

@interface WebCoreMotionManager : NSObject {

	CMMotionManager* m_motionManager;
	CLLocationManager* m_locationManager;
	HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> >* m_deviceMotionClients;
	HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> >* m_deviceOrientationClients;
	NSTimer* m_updateTimer;
	BOOL m_gyroAvailable;
	BOOL m_headingAvailable;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)update;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)addMotionClient:(DeviceMotionClientIOS*)arg1 ;
-(void)removeMotionClient:(DeviceMotionClientIOS*)arg1 ;
-(BOOL)gyroAvailable;
-(void)addOrientationClient:(DeviceOrientationClientIOS*)arg1 ;
-(void)removeOrientationClient:(DeviceOrientationClientIOS*)arg1 ;
-(void)initializeOnMainThread;
-(void)checkClientStatus;
-(BOOL)headingAvailable;
-(void)sendMotionData:(id)arg1 withHeading:(id)arg2 ;
-(void)sendAccelerometerData:(id)arg1 ;
@end

