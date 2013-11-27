/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MPVideoView, MPImageCache, NSArray, UIMovieChapterListView;

@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate> {

	MPVideoView* _videoView;
	MPImageCache* _imageCache;
	unsigned _currentMarker;
	NSArray* _chapterTimeMarkers;
	UIMovieChapterListView* _chapterListView;
	float _timeColumnWidth;
	unsigned _haveThumbnails : 1;
	unsigned _videoOutActive : 1;

}

@property (assign,nonatomic) unsigned currentMarkerIndex;               //@synthesize currentMarker=_currentMarker - In the implementation block
@property (nonatomic,retain) NSArray * chapterTimeMarkers;              //@synthesize chapterTimeMarkers=_chapterTimeMarkers - In the implementation block
@property (assign,nonatomic) float topPadding; 
@property (assign,nonatomic) BOOL videoOutActive; 
@property (nonatomic,retain) MPVideoView * videoView;                   //@synthesize videoView=_videoView - In the implementation block
-(id)videoView;
-(id)chapterTimeMarkers;
-(BOOL)videoOutActive;
-(void)setChapterTimeMarkers:(id)arg1 ;
-(void)setCurrentMarkerIndex:(unsigned)arg1 ;
-(void)setVideoOutActive:(BOOL)arg1 ;
-(void)setVideoView:(id)arg1 ;
-(void)_reloadThumbnails;
-(void)setTopPadding:(float)arg1 ;
-(void)_sizeColumnsToFit;
-(float)topPadding;
-(id)newImageRequestWithMediaEntity:(id)arg1 timeMarker:(id)arg2 ;
-(void)setCurrentMarker:(unsigned)arg1 ;
-(unsigned)currentMarkerIndex;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

