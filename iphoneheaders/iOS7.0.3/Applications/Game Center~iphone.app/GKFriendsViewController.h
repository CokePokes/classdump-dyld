/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewController.h>
#import <GameCenterUI/GKSegmentedSectionDataSourceEventHandler.h>
#import <UIKit/UIStateRestoring.h>
#import <Game Center~iphone/GKMasterDetailViewControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@class GKPlayer, GKFriendRequestSynopsisDataSource, GKSegmentedSectionDataSource, GKFriendsDataSource, GKFriendRecommendationsDataSource, GKCollectionViewAggregateDataSource, GKAchievementPointsDataSource, GKNavigationController, UIPopoverController;

@interface GKFriendsViewController : GKCollectionViewController <GKSegmentedSectionDataSourceEventHandler, UIStateRestoring, GKMasterDetailViewControllerDelegate, UICollectionViewDelegate> {

	BOOL _shouldUpdateContentOnlyWhenAuthenticated;
	BOOL _isDisplayingPlayerNotInList;
	GKPlayer* _selectedPlayer;
	GKFriendRequestSynopsisDataSource* _friendRequestSynopsisDataSource;
	GKSegmentedSectionDataSource* _friendsDataSource;
	GKFriendsDataSource* _atozDataSource;
	GKFriendsDataSource* _recentDataSource;
	GKFriendRecommendationsDataSource* _recsDataSource;
	GKCollectionViewAggregateDataSource* _pointsDataSource;
	GKAchievementPointsDataSource* _globalPointsDataSource;
	GKAchievementPointsDataSource* _friendsPointsDataSource;
	GKNavigationController* _modalNavController;
	UIPopoverController* _detailPopoverController;
	/*^block*/ id _deferredPresentRequestsBlock;

}

@property (assign,nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated;                                    //@synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated - In the implementation block
@property (nonatomic,retain) GKPlayer * selectedPlayer;                                                        //@synthesize selectedPlayer=_selectedPlayer - In the implementation block
@property (nonatomic,retain) GKFriendRequestSynopsisDataSource * friendRequestSynopsisDataSource;              //@synthesize friendRequestSynopsisDataSource=_friendRequestSynopsisDataSource - In the implementation block
@property (nonatomic,retain) GKSegmentedSectionDataSource * friendsDataSource;                                 //@synthesize friendsDataSource=_friendsDataSource - In the implementation block
@property (nonatomic,retain) GKFriendsDataSource * atozDataSource;                                             //@synthesize atozDataSource=_atozDataSource - In the implementation block
@property (nonatomic,retain) GKFriendsDataSource * recentDataSource;                                           //@synthesize recentDataSource=_recentDataSource - In the implementation block
@property (nonatomic,retain) GKFriendRecommendationsDataSource * recsDataSource;                               //@synthesize recsDataSource=_recsDataSource - In the implementation block
@property (nonatomic,retain) GKCollectionViewAggregateDataSource * pointsDataSource;                           //@synthesize pointsDataSource=_pointsDataSource - In the implementation block
@property (nonatomic,retain) GKAchievementPointsDataSource * globalPointsDataSource;                           //@synthesize globalPointsDataSource=_globalPointsDataSource - In the implementation block
@property (nonatomic,retain) GKAchievementPointsDataSource * friendsPointsDataSource;                          //@synthesize friendsPointsDataSource=_friendsPointsDataSource - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingPlayerNotInList;                                                 //@synthesize isDisplayingPlayerNotInList=_isDisplayingPlayerNotInList - In the implementation block
@property (nonatomic,retain) GKNavigationController * modalNavController;                                      //@synthesize modalNavController=_modalNavController - In the implementation block
@property (nonatomic,retain) UIPopoverController * detailPopoverController;                                    //@synthesize detailPopoverController=_detailPopoverController - In the implementation block
@property (nonatomic,copy) id deferredPresentRequestsBlock;                                                    //@synthesize deferredPresentRequestsBlock=_deferredPresentRequestsBlock - In the implementation block
@property (nonatomic,readonly) <UIStateRestoring> * restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
+(id)friendsControllerForLocalPlayer;
-(void)showFriendRequest:(id)arg1 ;
-(void)selectPlayer:(id)arg1 ;
-(void)updateShowcaseCellMetrics;
-(void)didTouchShowcaseFriends:(id)arg1 ;
-(void)didTouchShowMoreFriends:(id)arg1 ;
-(void)addShowcaseCellToMetrics:(id)arg1 ;
-(void)didTouchShowcaseGlobal:(id)arg1 ;
-(void)didTouchShowMoreGlobal:(id)arg1 ;
-(id)selectedPlayer;
-(void)setSelectedPlayer:(id)arg1 ;
-(void)showFriendOfFriend:(id)arg1 highlightTarget:(id)arg2 ;
-(void)displayPlayerWithID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)showAchievement:(id)arg1 forGameRecord:(id)arg2 purchasableGame:(BOOL)arg3 ;
-(void)showScore:(id)arg1 inLeaderboard:(id)arg2 forGameRecord:(id)arg3 purchasableGame:(BOOL)arg4 ;
-(void)popToRootAndShowNonFriendPlayer:(id)arg1 ;
-(void)showRequestsAnimated:(BOOL)arg1 ;
-(void)showFriendRequestForPlayerID:(id)arg1 ;
-(id)detailPopoverController;
-(void)updateSelectedPlayerAfterLoading;
-(void)restoreSelectedPlayer;
-(void)setFriendRequestSynopsisDataSource:(id)arg1 ;
-(void)setAtozDataSource:(id)arg1 ;
-(id)atozDataSource;
-(void)setRecsDataSource:(id)arg1 ;
-(void)setRecentDataSource:(id)arg1 ;
-(id)recentDataSource;
-(void)setPointsDataSource:(id)arg1 ;
-(void)setFriendsPointsDataSource:(id)arg1 ;
-(void)setGlobalPointsDataSource:(id)arg1 ;
-(void)registerHeaderFactoryForDataSource:(id)arg1 withFormatter:(/*function pointer*/ void*)arg2 ;
-(id)friendsPointsDataSource;
-(id)globalPointsDataSource;
-(void)addFriend;
-(void)setDeferredPresentRequestsBlock:(/*^block*/ id)arg1 ;
-(id)recsDataSource;
-(void)selectPlayer:(id)arg1 animated:(BOOL)arg2 ;
-(void)showPlayer:(id)arg1 forViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)showPopoverWithNavigationController:(id)arg1 highlightTarget:(id)arg2 arrowDirection:(unsigned)arg3 ;
-(void)showPopoverWithViewController:(id)arg1 highlightTarget:(id)arg2 arrowDirection:(unsigned)arg3 ;
-(void)showRequestsAnimated:(BOOL)arg1 pushRequestForPlayer:(id)arg2 ;
-(void)showScore:(id)arg1 inLeaderboard:(id)arg2 orAchievement:(id)arg3 forGameRecord:(id)arg4 purchasableGame:(BOOL)arg5 ;
-(void)updateTextOffsetForDataSource:(id)arg1 scope:(int)arg2 ;
-(void)didTouchShowAllWithSectionIndex:(unsigned)arg1 ;
-(void)showRequests;
-(id)friendRequestSynopsisDataSource;
-(id)pointsDataSource;
-(BOOL)isDisplayingPlayerNotInList;
-(void)setIsDisplayingPlayerNotInList:(BOOL)arg1 ;
-(id)modalNavController;
-(void)setModalNavController:(id)arg1 ;
-(void)setDetailPopoverController:(id)arg1 ;
-(/*^block*/ id)deferredPresentRequestsBlock;
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)swipeToDeleteCell:(id)arg1 ;
-(void)configureViewFactories;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/ id)arg1 ;
-(void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned)arg2 didSelectDataSourceWithIndex:(int)arg3 ;
-(void)updateMetrics;
-(void)didExitRefreshingState;
-(BOOL)shouldUpdateContentOnlyWhenAuthenticated;
-(void)setShouldUpdateContentOnlyWhenAuthenticated:(BOOL)arg1 ;
-(void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setFriendsDataSource:(id)arg1 ;
-(void)masterDetailViewController:(id)arg1 willSlideInDetailContentViewController:(id)arg2 ;
-(void)masterDetailViewController:(id)arg1 didSlideInDetailContentViewController:(id)arg2 ;
-(id)friendsDataSource;
-(void)dealloc;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

