/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <Game Center~iphone/GKGameProfileHeaderView.h>

@class GKFacebookLikeButton, GKRatingControl, GKLabel, GKHairlineView, UIView;

@interface GKGameProfileHeaderViewOwnedPhone : GKGameProfileHeaderView {

	BOOL _playerIsUnderage;
	GKFacebookLikeButton* _likeButton;
	GKRatingControl* _ratingControl;
	GKLabel* _nameLabel;
	GKHairlineView* _verticalRule;
	UIView* _ratingSpacerLeft;
	UIView* _ratingSpacerRight;

}

@property (nonatomic,retain) GKFacebookLikeButton * likeButton;              //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) GKRatingControl * ratingControl;                //@synthesize ratingControl=_ratingControl - In the implementation block
@property (assign,nonatomic) BOOL playerIsUnderage;                          //@synthesize playerIsUnderage=_playerIsUnderage - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKHairlineView * verticalRule;                  //@synthesize verticalRule=_verticalRule - In the implementation block
@property (nonatomic,retain) UIView * ratingSpacerLeft;                      //@synthesize ratingSpacerLeft=_ratingSpacerLeft - In the implementation block
@property (nonatomic,retain) UIView * ratingSpacerRight;                     //@synthesize ratingSpacerRight=_ratingSpacerRight - In the implementation block
-(void)rateGame;
-(void)applyIconAndNameConstraints;
-(void)applyRatingAndLikeButtonConstraints;
-(void)applyLikeButtonAndVerticalRuleVerticalPositioning;
-(void)applyCenteredRatingControlConstraint;
-(void)applyRatingControlVerticalPositioning;
-(void)applyRatingLabelConstraints;
-(void)updateRating;
-(id)likeButton;
-(void)setLikeButton:(id)arg1 ;
-(void)setRatingControl:(id)arg1 ;
-(BOOL)playerIsUnderage;
-(void)setPlayerIsUnderage:(BOOL)arg1 ;
-(id)verticalRule;
-(void)setVerticalRule:(id)arg1 ;
-(id)ratingSpacerLeft;
-(void)setRatingSpacerLeft:(id)arg1 ;
-(id)ratingSpacerRight;
-(void)setRatingSpacerRight:(id)arg1 ;
-(void)didUpdateModel;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)applyConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)ratingControl;
@end

