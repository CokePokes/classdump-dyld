/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/VisualAlerts.bundle/VisualAlerts
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVConference/AXCameraTorchManager.h>

@class AVCaptureDevice;

@interface AXSystemCameraTorchManager : NSObject <AXCameraTorchManager> {

	AVCaptureDevice* _captureDevice;

}
-(BOOL)openTorchDevice;
-(void)closeTorchDevice;
-(void)turnTorchOn;
-(void)turnTorchOff;
@end

