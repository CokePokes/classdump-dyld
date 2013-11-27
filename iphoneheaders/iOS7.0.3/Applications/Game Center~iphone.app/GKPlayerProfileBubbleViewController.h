/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/GKProfileViewController.h>

@class GKPlayer, GKPlayerProfileHeaderView, GKValueWithCaptionBubbleControl;

@interface GKPlayerProfileBubbleViewController : GKProfileViewController {

	GKPlayer* _player;
	GKPlayerProfileHeaderView* _headerView;
	GKValueWithCaptionBubbleControl* _gamesBubble;
	GKValueWithCaptionBubbleControl* _pointsBubble;
	GKValueWithCaptionBubbleControl* _friendsBubble;

}

@property (nonatomic,retain) GKPlayer * player;                                            //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKPlayerProfileHeaderView * headerView;                       //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) GKValueWithCaptionBubbleControl * gamesBubble;                //@synthesize gamesBubble=_gamesBubble - In the implementation block
@property (nonatomic,retain) GKValueWithCaptionBubbleControl * pointsBubble;               //@synthesize pointsBubble=_pointsBubble - In the implementation block
@property (nonatomic,retain) GKValueWithCaptionBubbleControl * friendsBubble;              //@synthesize friendsBubble=_friendsBubble - In the implementation block
+(Class)headerViewClass;
-(void)setPointsBubble:(id)arg1 ;
-(id)pointsBubble;
-(void)setAccentColor:(id)arg1 ;
-(void)didTouchGamesBubble;
-(void)didTouchPointsBubble;
-(void)didTouchFriendsBubble;
-(void)_updateTextForBubbleOfType:(int)arg1 ;
-(void)didUpdateModel;
-(id)gamesBubble;
-(void)setGamesBubble:(id)arg1 ;
-(id)friendsBubble;
-(void)setFriendsBubble:(id)arg1 ;
-(void)configureControlForBubble:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

