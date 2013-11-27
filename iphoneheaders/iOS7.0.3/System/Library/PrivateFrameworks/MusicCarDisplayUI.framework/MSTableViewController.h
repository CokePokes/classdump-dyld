/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>

@protocol MSCarDisplayServiceProvider;
@class , MPAVController, MPMediaQuery, MSNowPlayingButton;

@interface MSTableViewController : UITableViewController {

	<MSCarDisplayServiceProvider>* _serviceProvider;
	MPAVController* _player;
	MPMediaQuery* _query;
	BOOL _viewHasAppeared;
	MSNowPlayingButton* _nowPlayingButton;
	BOOL _alwaysShowNavBar;

}

@property (nonatomic,readonly) <MSCarDisplayServiceProvider> * serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,readonly) MPAVController * player;                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * query;                                         //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowNavBar;                                          //@synthesize alwaysShowNavBar=_alwaysShowNavBar - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppeared;                                           //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
+(id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3 ;
+(id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2 rowHeight:(float)arg3 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_itemChanged:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)query;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setAlwaysShowNavBar:(BOOL)arg1 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(void)_updateNowPlayingVisibility;
-(BOOL)hasRowsToDisplay;
-(id)dequeueReusableCarDisplayCellForTableView:(id)arg1 withIdentifier:(id)arg2 ;
-(id)serviceProvider;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(BOOL)alwaysShowNavBar;
-(void)_restartNowPlayingTimer;
-(void)setViewHasAppeared:(BOOL)arg1 ;
-(void)_cancelNowPlayingTimer;
-(void)_presentNowPlayingViewController;
-(BOOL)viewHasAppeared;
-(void).cxx_destruct;
-(id)player;
@end

