/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKBasicCollectionViewController.h>

@class GKPlayer;

@interface GKFriendRequestsViewController : GKBasicCollectionViewController {

	GKPlayer* _selectedPlayer;

}

@property (nonatomic,retain) GKPlayer * selectedPlayer;              //@synthesize selectedPlayer=_selectedPlayer - In the implementation block
+(id)friendRequestsViewController;
-(void)selectPlayer:(id)arg1 ;
-(id)selectedPlayer;
-(void)setSelectedPlayer:(id)arg1 ;
-(void)didTouchAcceptForPlayer:(id)arg1 ;
-(void)didTouchIgnoreForPlayer:(id)arg1 ;
-(void)didEnterNoContentState;
-(void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

