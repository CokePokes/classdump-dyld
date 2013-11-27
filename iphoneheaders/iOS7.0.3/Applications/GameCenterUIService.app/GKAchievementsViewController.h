/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKCollectionViewController.h>

@class GKGameRecord, NSArray;

@interface GKAchievementsViewController : GKCollectionViewController {

	GKGameRecord* _gameRecord;
	NSArray* _achievements;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * achievements;                 //@synthesize achievements=_achievements - In the implementation block
-(id)initWithGameRecord:(id)arg1 ;
-(void)showAchievementDetails:(id)arg1 ;
-(id)achievements;
-(void)setAchievements:(id)arg1 ;
-(void)configureDataSource;
-(id)gameRecord;
-(void)setGameRecord:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end

