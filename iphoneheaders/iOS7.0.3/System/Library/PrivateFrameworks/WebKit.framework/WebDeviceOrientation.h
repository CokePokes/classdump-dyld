/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@class WebDeviceOrientationInternal;

@interface WebDeviceOrientation : NSObject {

	WebDeviceOrientationInternal* m_internal;

}
-(void)dealloc;
-(id)initWithCoreDeviceOrientation:(PassRefPtr<WebCore::DeviceOrientationData>*)arg1 ;
-(id)initWithCanProvideAlpha:(bool)arg1 alpha:(double)arg2 canProvideBeta:(bool)arg3 beta:(double)arg4 canProvideGamma:(bool)arg5 gamma:(double)arg6 ;
@end

