/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCAVPreviewController.h>

@class RCSavedRecording;

@interface RCSavedRecordingPreviewController : RCAVPreviewController {

	BOOL _postPrepareShouldPlay;
	BOOL _preparing;
	BOOL _preparingToPlay;
	SCD_Struct_RC1 _postPrepareTimeRange;
	double _postPrepareStartTime;
	RCSavedRecording* _savedRecording;

}

@property (nonatomic,retain) RCSavedRecording * savedRecording;              //@synthesize savedRecording=_savedRecording - In the implementation block
+(id)sharedRecordingPreviewController;
-(void)setCurrentTime:(double)arg1 ;
-(void)stop;
-(void)pause;
-(void)playOrRestart;
-(void)playWithTimeRange:(SCD_Struct_RC1)arg1 startTime:(double)arg2 ;
-(void)_updatePreparingToPlay;
-(void)setSavedRecording:(id)arg1 ;
-(id)savedRecording;
-(void).cxx_destruct;
@end

