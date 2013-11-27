/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVVCAudioBuffer : NSObject {

	void* _impl;

}

@property (readonly) int channels; 
@property (readonly) int bytesCapacity; 
@property (assign) int bytesDataSize; 
@property (readonly) void* data; 
@property (readonly) int packetDescriptionCapacity; 
@property (readonly) int packetDescriptionCount; 
@property (readonly) AudioStreamPacketDescription* packetDescriptions; 
-(id)initWithAudioQueueBuffer:(MyAudioQueueBuffer*)arg1 channels:(int)arg2 ;
-(int)bytesCapacity;
-(int)bytesDataSize;
-(void)setBytesDataSize:(int)arg1 ;
-(int)packetDescriptionCapacity;
-(int)packetDescriptionCount;
-(AudioStreamPacketDescription*)packetDescriptions;
-(void)setPacketDescriptions:(const AudioStreamPacketDescription*)arg1 count:(int)arg2 ;
-(int)channels;
-(void)dealloc;
-(void*)data;
-(void)finalize;
@end

