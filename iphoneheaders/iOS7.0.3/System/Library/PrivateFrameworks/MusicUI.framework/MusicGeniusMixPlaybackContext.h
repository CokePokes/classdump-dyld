/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicQueryPlaybackContext.h>
#import <MusicUI/MusicGeniusMixQueueFeederDataSource.h>

@class NSMutableArray, MPMediaItem, MPGeniusMix;

@interface MusicGeniusMixPlaybackContext : MusicQueryPlaybackContext <MusicGeniusMixQueueFeederDataSource> {

	NSMutableArray* _playlistQueries;
	MPMediaItem* _requiredInitialMediaItem;
	MPGeniusMix* _mix;
	BOOL _finite;

}

@property (nonatomic,readonly) MPGeniusMix * mix;                                 //@synthesize mix=_mix - In the implementation block
@property (nonatomic,retain) MPMediaItem * requiredInitialMediaItem;              //@synthesize requiredInitialMediaItem=_requiredInitialMediaItem - In the implementation block
+(Class)queueFeederClass;
-(void)dealloc;
-(id)query;
-(id)initWithGeniusMix:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3 ;
-(id)mix;
-(unsigned)geniusMixQueueFeederMediaItemCount:(id)arg1 ;
-(id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned)arg2 ;
-(id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned)arg2 ;
-(unsigned)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2 ;
-(id)requiredInitialMediaItem;
-(void)setRequiredInitialMediaItem:(id)arg1 ;
-(id)_queryForMediaItemAtIndex:(unsigned)arg1 ;
-(id)_generateNewPlaylistQuery:(id*)arg1 index:(unsigned)arg2 ;
-(void).cxx_destruct;
@end

