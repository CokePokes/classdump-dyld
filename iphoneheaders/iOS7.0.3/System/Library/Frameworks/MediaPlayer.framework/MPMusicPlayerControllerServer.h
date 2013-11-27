/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {

	MPMusicPlayerControllerServerInternal* _internal;

}

@property (nonatomic,readonly) MPAVController * player; 
+(void)startMusicPlayerControllerServerWithDelegate:(id)arg1 ;
+(BOOL)isMusicPlayerControllerServerRunning;
+(id)sharedInstance;
-(void)_runMigServer;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void).cxx_destruct;
-(id)player;
@end

