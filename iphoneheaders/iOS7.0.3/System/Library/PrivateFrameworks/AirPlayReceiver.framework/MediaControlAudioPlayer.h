/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPlayReceiver/AVAudioPlayerDelegate.h>

@class AVAudioPlayer;

@interface MediaControlAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	AVAudioPlayer* _audioPlayer;

}
-(void)dealloc;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)audioPlayerBeginInterruption:(id)arg1 ;
-(int)playPath:(id)arg1 ;
@end

