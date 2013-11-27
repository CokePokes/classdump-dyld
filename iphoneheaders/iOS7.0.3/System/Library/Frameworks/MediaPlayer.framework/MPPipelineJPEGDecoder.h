/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSObject;

@interface MPPipelineJPEGDecoder : NSObject {

	StackItem* stackTopBGRA;
	StackItem* stackTop420;
	StackItem* stackTopJPEG;
	NSObject<OS_dispatch_queue>* stackQueueBGRA;
	NSObject<OS_dispatch_queue>* stackQueue420;
	NSObject<OS_dispatch_queue>* stackQueueJPEG;
	CFDictionaryRef acceleratorOptions;
	CFDictionaryRef surfaceBGRAOptions;
	CGSize imageSize;
	unsigned requestedImageCount;
	int currentBGRASurfaceCount;
	unsigned maxJPEGSize;

}

@property (assign) unsigned maxJPEGSize; 
+(id)_stackQueueTransferSession;
+(IOSurfaceAcceleratorRef)_createAccelerator;
+(IOSurfaceAcceleratorRef)_popSurfaceAccelerator;
+(void)_pushSurfaceAccelerator:(IOSurfaceAcceleratorRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 cachedCount:(int)arg2 ;
-(id)newImageFromJPEGData:(id)arg1 ;
-(void)setMaxJPEGSize:(unsigned)arg1 ;
-(IOSurfaceRef)_createBGRASurface;
-(void)_pushBGRASurface:(IOSurfaceRef)arg1 ;
-(void)_receivedMemoryWarning:(id)arg1 ;
-(IOSurfaceRef)_pop420Surface;
-(id)_newImageFrom420Surface:(IOSurfaceRef)arg1 ;
-(void)_push420Surface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)_popJPEGSurfaceOfSize:(unsigned)arg1 ;
-(long)_decodeJPEG:(id)arg1 withInputSurface:(IOSurfaceRef)arg2 toIOSurface:(IOSurfaceRef)arg3 ;
-(void)_pushJPEGSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)_popBGRASurface;
-(unsigned)maxJPEGSize;
-(IOSurfaceRef)_create420Surface;
-(IOSurfaceRef)_createJPEGSurface;
-(BOOL)_removeBGRASurface;
-(id)newImageFrom420Data:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end

