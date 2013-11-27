/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {

	NSArray* _queueItems;

}

@property (nonatomic,readonly) NSArray * items; 
-(unsigned)itemCount;
-(id)copyRawItemAtIndex:(unsigned)arg1 ;
-(id)playbackInfoAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(id)pathAtIndex:(unsigned)arg1 ;
-(void).cxx_destruct;
@end

