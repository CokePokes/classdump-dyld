/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrack.h>

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack {

	AVCompositionTrackInternal* _priv;

}

@property (nonatomic,readonly) NSArray * segments; 
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3 ;
-(id)segments;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(void)dealloc;
-(id)description;
-(void)finalize;
@end

