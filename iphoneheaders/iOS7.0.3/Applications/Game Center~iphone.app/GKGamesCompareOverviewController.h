/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewController.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/UICollectionViewDelegate.h>

@class GKPlayer;

@interface GKGamesCompareOverviewController : GKCollectionViewController <UIViewControllerRestoration, UICollectionViewDelegate> {

	GKPlayer* _player;

}

@property (nonatomic,retain) GKPlayer * player;              //@synthesize player=_player - In the implementation block
+(id)gamesControllerForOverviewCompareWithPlayer:(id)arg1 ;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)didTouchShowAll:(int)arg1 ;
-(void)configureDataSource;
-(void)dealloc;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

