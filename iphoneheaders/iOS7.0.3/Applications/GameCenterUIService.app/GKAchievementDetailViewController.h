/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKBubbleDetailViewController.h>

@class GKAchievementIconView, GKLabel, GKHorizontalBubbleControlsView, GKTextBubbleControl, GKAchievement, NSArray;

@interface GKAchievementDetailViewController : GKBubbleDetailViewController {

	BOOL _hasEligibleFriends;
	BOOL _didFloatInBubbles;
	BOOL _didTransition;
	GKAchievementIconView* _iconView;
	GKLabel* _titleLabel;
	GKLabel* _descriptionLabel;
	GKLabel* _progressLabel;
	GKHorizontalBubbleControlsView* _bubblesView;
	GKTextBubbleControl* _shareBubble;
	GKTextBubbleControl* _challengeBubble;
	GKLabel* _infoLabel;
	GKAchievement* _achievement;
	GKAchievement* _localAchievement;
	NSArray* _portraitConstraints;
	NSArray* _landscapeConstraints;

}

@property (nonatomic,retain) GKAchievementIconView * iconView;                          //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GKLabel * descriptionLabel;                                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) GKLabel * progressLabel;                                   //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) GKHorizontalBubbleControlsView * bubblesView;              //@synthesize bubblesView=_bubblesView - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * shareBubble;                         //@synthesize shareBubble=_shareBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * challengeBubble;                     //@synthesize challengeBubble=_challengeBubble - In the implementation block
@property (nonatomic,retain) GKLabel * infoLabel;                                       //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) GKAchievement * achievement;                               //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;                          //@synthesize localAchievement=_localAchievement - In the implementation block
@property (nonatomic,retain) NSArray * portraitConstraints;                             //@synthesize portraitConstraints=_portraitConstraints - In the implementation block
@property (nonatomic,retain) NSArray * landscapeConstraints;                            //@synthesize landscapeConstraints=_landscapeConstraints - In the implementation block
@property (assign,nonatomic) BOOL hasEligibleFriends;                                   //@synthesize hasEligibleFriends=_hasEligibleFriends - In the implementation block
@property (assign,nonatomic) BOOL didFloatInBubbles;                                    //@synthesize didFloatInBubbles=_didFloatInBubbles - In the implementation block
@property (assign,nonatomic) BOOL didTransition;                                        //@synthesize didTransition=_didTransition - In the implementation block
+(id)achievementDetailWithLocalAchievement:(id)arg1 hasEligibleFriends:(BOOL)arg2 ;
+(id)achievementDetailWithAchievement:(id)arg1 localPlayerAchievement:(id)arg2 hasEligibleFriends:(BOOL)arg3 ;
-(void)didTouchShareBubble;
-(void)pushRightBubble;
-(void)didTouchChallengeBubble;
-(void)pushLeftBubble;
-(void)setPortraitConstraints:(id)arg1 ;
-(void)setLandscapeConstraints:(id)arg1 ;
-(void)hideBubbles;
-(id)shareBubble;
-(void)setShareBubble:(id)arg1 ;
-(id)challengeBubble;
-(void)setChallengeBubble:(id)arg1 ;
-(id)portraitConstraints;
-(id)landscapeConstraints;
-(BOOL)didTransition;
-(void)setDidTransition:(BOOL)arg1 ;
-(id)initWithAchievement:(id)arg1 localAchievement:(id)arg2 hasEligibleFriends:(BOOL)arg3 ;
-(void)configureForAchievements;
-(id)progressLabel;
-(void)setProgressLabel:(id)arg1 ;
-(BOOL)hasEligibleFriends;
-(void)setHasEligibleFriends:(BOOL)arg1 ;
-(id)iconView;
-(void)setIconView:(id)arg1 ;
-(void)floatInBubbles;
-(void)animateOutBubbleWithFocus:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)didFloatInBubbles;
-(void)setDidFloatInBubbles:(BOOL)arg1 ;
-(void)setAchievement:(id)arg1 ;
-(void)setLocalAchievement:(id)arg1 ;
-(id)achievement;
-(id)localAchievement;
-(void)willAnimateAppearingWithBubbleFlow;
-(void)setInfoLabel:(id)arg1 ;
-(id)bubblesView;
-(void)setBubblesView:(id)arg1 ;
-(void)dealloc;
-(id)titleLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)setTitleLabel:(id)arg1 ;
-(id)descriptionLabel;
-(void)setDescriptionLabel:(id)arg1 ;
-(id)infoLabel;
@end

