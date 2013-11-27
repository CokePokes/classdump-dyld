/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/Endpointer.h>

@interface SpeexEndpointer : NSObject <Endpointer> {

	double mStartWaitTime;
	double mInterspeechWaitTime;
	double mEndWaitTime;
	int mEndpointMode;
	unsigned long mFrameRate;
	int mLastStatus;
	void* _impl;

}

@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
-(int)getStatus:(float*)arg1 count:(unsigned long)arg2 ;
-(void)setEndpointMode:(int)arg1 ;
-(void)setStartWaitTime:(double)arg1 ;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(void)setEndWaitTime:(double)arg1 ;
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2 ;
-(int)getStatus:(AudioQueueBuffer*)arg1 ;
-(int)endpointMode;
-(double)startWaitTime;
-(double)interspeechWaitTime;
-(double)endWaitTime;
-(void)dealloc;
-(id)init;
-(void)reset;
@end

