/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewController.h>

@protocol GKNearbyBrowserDelegate;
@class GKGame, , GKSimpleComposeController, NSArray;

@interface GKPlayerPickerViewController : GKCollectionViewController {

	BOOL _supportsNearby;
	int _maxSelectable;
	GKGame* _game;
	<GKNearbyBrowserDelegate>* _nearbyDelegate;
	/*^block*/ id _handler;
	GKSimpleComposeController* _composeController;
	NSArray* _preselectedPlayerIDs;

}

@property (assign,nonatomic) int maxSelectable;                                          //@synthesize maxSelectable=_maxSelectable - In the implementation block
@property (assign,nonatomic) BOOL supportsNearby;                                        //@synthesize supportsNearby=_supportsNearby - In the implementation block
@property (nonatomic,retain) GKGame * game;                                              //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) <GKNearbyBrowserDelegate> * nearbyDelegate;                 //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
@property (nonatomic,copy) id handler;                                                   //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) GKSimpleComposeController * composeController;              //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,retain) NSArray * preselectedPlayerIDs;                             //@synthesize preselectedPlayerIDs=_preselectedPlayerIDs - In the implementation block
+(id)multiplayerPickerForGame:(id)arg1 withSelectedPlayerIDs:(id)arg2 hiddenPlayers:(id)arg3 ;
+(id)challengesPickerWithChallenge:(id)arg1 selectedPlayerIDs:(id)arg2 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)setMaxSelectable:(int)arg1 ;
-(void)configureViewFactories;
-(void)setSupportsNearby:(BOOL)arg1 ;
-(void)setNearbyDelegate:(id)arg1 ;
-(id)nearbyDelegate;
-(void)updateMetrics;
-(void)didEnterLoadedState;
-(id)composeController;
-(void)setComposeController:(id)arg1 ;
-(void)setPreselectedPlayerIDs:(id)arg1 ;
-(id)splitingDataSource;
-(id)initWithGame:(id)arg1 selectedPlayerIDs:(id)arg2 ;
-(BOOL)_gkWantsCustomRightBarButtonItemInViewService;
-(int)maxSelectable;
-(BOOL)supportsNearby;
-(id)preselectedPlayerIDs;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)done;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
@end

