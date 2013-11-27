/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVRecorder : NSObject {

	AVRecorderPrivate* _priv;

}
-(BOOL)isRecording;
-(double)recordedDuration;
-(BOOL)takePhoto;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)deactivate;
-(BOOL)start;
-(void)stop;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(void)implNotification:(id)arg1 ;
-(BOOL)activate:(id*)arg1 ;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3 ;
-(BOOL)autoFocusAtPoint:(CGPoint)arg1 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
@end

