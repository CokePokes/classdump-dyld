/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MPUTableViewController.h>
#import <AVFoundation/MCProfileConnectionObserver.h>

@class VideosTableHeaderView;

@interface VideosTableViewController : MPUTableViewController <MCProfileConnectionObserver> {

	VideosTableHeaderView* _headerView;

}
-(void)selectItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updatePrompt;
-(void)_allowsDeletionDidChange:(id)arg1 ;
-(void)_updateNavigationBarButtons;
-(void)_playItem:(id)arg1 ;
-(int)artworkFormat;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_didEnterBackground:(id)arg1 ;
-(void)dataSourceDidInvalidate;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(id)_createTableView;
-(void).cxx_destruct;
@end

