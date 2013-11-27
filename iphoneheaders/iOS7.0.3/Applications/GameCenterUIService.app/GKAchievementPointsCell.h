/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class GKPlayerPhotoView, GKLabel, GKScore;

@interface GKAchievementPointsCell : GKCollectionViewCell {

	GKPlayerPhotoView* _iconView;
	GKLabel* _nameLabel;
	GKLabel* _rankLabel;
	GKLabel* _pointsLabel;
	GKLabel* _achievementsLabel;

}

@property (nonatomic,retain) GKScore * score; 
@property (nonatomic,retain) GKPlayerPhotoView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * rankLabel;                       //@synthesize rankLabel=_rankLabel - In the implementation block
@property (nonatomic,retain) GKLabel * pointsLabel;                     //@synthesize pointsLabel=_pointsLabel - In the implementation block
@property (nonatomic,retain) GKLabel * achievementsLabel;               //@synthesize achievementsLabel=_achievementsLabel - In the implementation block
+(float)defaultShowcaseRowHeight;
+(float)defaultRowHeight;
-(id)rankLabel;
-(id)achievementsLabel;
-(void)setRankLabel:(id)arg1 ;
-(void)setAchievementsLabel:(id)arg1 ;
-(id)score;
-(void)setRepresentedItem:(id)arg1 ;
-(id)iconView;
-(void)didUpdateModel;
-(BOOL)canRemoveItem;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)setIconView:(id)arg1 ;
-(id)pointsLabel;
-(void)setPointsLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setScore:(id)arg1 ;
@end

