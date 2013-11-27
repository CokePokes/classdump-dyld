/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <GameCenterUI/GKCollectionViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@class GKPlayer, GKLeaderboard, GKGameRecord, GKLeaderboardScoresDataSource, UIPopoverController;

@interface GKLeaderboardScoresViewController : GKCollectionViewController <UIPopoverControllerDelegate, UICollectionViewDelegate> {

	int _timeScope;
	unsigned _controllerMode;
	GKPlayer* _player;
	GKLeaderboard* _leaderboard;
	GKGameRecord* _game;
	GKLeaderboardScoresDataSource* _friendsDataSource;
	GKLeaderboardScoresDataSource* _globalDataSource;
	UIPopoverController* _detailPopover;
	NSRange _shownRange;

}

@property (assign,nonatomic) int timeScope;                                                  //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,nonatomic) unsigned controllerMode;                                        //@synthesize controllerMode=_controllerMode - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                    //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKGameRecord * game;                                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKLeaderboardScoresDataSource * friendsDataSource;              //@synthesize friendsDataSource=_friendsDataSource - In the implementation block
@property (nonatomic,retain) GKLeaderboardScoresDataSource * globalDataSource;               //@synthesize globalDataSource=_globalDataSource - In the implementation block
@property (assign,nonatomic) NSRange shownRange;                                             //@synthesize shownRange=_shownRange - In the implementation block
@property (nonatomic,retain) UIPopoverController * detailPopover;                            //@synthesize detailPopover=_detailPopover - In the implementation block
-(void)updateShowcaseCellMetrics;
-(id)initWithLeaderboard:(id)arg1 game:(id)arg2 player:(id)arg3 ;
-(void)didTouchShowcaseFriends:(id)arg1 ;
-(void)didTouchShowMoreFriends:(id)arg1 ;
-(void)addShowcaseCellToMetrics:(id)arg1 ;
-(void)didTouchShowcaseGlobal:(id)arg1 ;
-(void)didTouchShowMoreGlobal:(id)arg1 ;
-(void)setGlobalDataSource:(id)arg1 ;
-(id)globalDataSource;
-(void)showScore:(id)arg1 fromCell:(id)arg2 leaderboard:(id)arg3 ;
-(unsigned)controllerMode;
-(void)setControllerMode:(unsigned)arg1 ;
-(NSRange)shownRange;
-(void)setShownRange:(NSRange)arg1 ;
-(void)setLeaderboard:(id)arg1 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(int)timeScope;
-(void)setTimeScope:(int)arg1 ;
-(void)configureDataSource;
-(void)updateMetrics;
-(void)setDetailPopover:(id)arg1 ;
-(id)detailPopover;
-(void)setFriendsDataSource:(id)arg1 ;
-(id)leaderboard;
-(id)friendsDataSource;
-(void)dealloc;
-(id)title;
-(void)loadView;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

