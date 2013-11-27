/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AVCaptureAudioChannelInternal;

@interface AVCaptureAudioChannel : NSObject {

	AVCaptureAudioChannelInternal* _internal;

}

@property (nonatomic,readonly) float averagePowerLevel; 
@property (nonatomic,readonly) float peakHoldLevel; 
-(float)averagePowerLevel;
-(float)peakHoldLevel;
-(void)dealloc;
-(void)invalidate;
-(id)initWithConnection:(id)arg1 ;
@end

