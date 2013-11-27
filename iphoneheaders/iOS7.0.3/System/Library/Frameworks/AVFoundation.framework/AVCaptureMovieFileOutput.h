/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureFileOutput.h>

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {

	AVCaptureMovieFileOutputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_CM4 movieFragmentInterval; 
@property (nonatomic,copy) NSArray * metadata; 
+(id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1 ;
+(void)initialize;
+(BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2 ;
+(BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3 ;
-(SCD_Struct_CM4)movieFragmentInterval;
-(void)setMovieFragmentInterval:(SCD_Struct_CM4)arg1 ;
-(long)_stopRecording;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(id)connectionMediaTypes;
-(void)handleEnabledChangedForConnection:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)outputFileURL;
-(BOOL)isRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2 ;
-(long)_startRecording:(id)arg1 ;
-(void)_handleStartRecordingError:(long)arg1 info:(id)arg2 ;
-(id)_avErrorUserInfoDictionaryForError:(long)arg1 wrapper:(id)arg2 ;
-(void)setSendsLastVideoPreviewFrame:(BOOL)arg1 ;
-(BOOL)sendsLastVideoPreviewFrame;
-(id)outputSettingsForConnection:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopRecording;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
@end

