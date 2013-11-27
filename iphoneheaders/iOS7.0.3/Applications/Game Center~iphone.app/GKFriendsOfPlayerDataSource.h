/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKPlayer, NSString;

@interface GKFriendsOfPlayerDataSource : GKBasicCollectionViewDataSource {

	BOOL _showSharedFriends;
	BOOL _hideHiddenFriendsCount;
	GKPlayer* _player;
	unsigned _hiddenFriendCount;
	NSString* _title;
	NSString* _alternateTitle;

}

@property (nonatomic,retain) GKPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL showSharedFriends;                   //@synthesize showSharedFriends=_showSharedFriends - In the implementation block
@property (assign,nonatomic) BOOL hideHiddenFriendsCount;              //@synthesize hideHiddenFriendsCount=_hideHiddenFriendsCount - In the implementation block
@property (assign,nonatomic) unsigned hiddenFriendCount;               //@synthesize hiddenFriendCount=_hiddenFriendCount - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * alternateTitle;                //@synthesize alternateTitle=_alternateTitle - In the implementation block
-(void)setShowSharedFriends:(BOOL)arg1 ;
-(unsigned)hiddenFriendCount;
-(BOOL)showSharedFriends;
-(BOOL)hideHiddenFriendsCount;
-(void)setHideHiddenFriendsCount:(BOOL)arg1 ;
-(void)setHiddenFriendCount:(unsigned)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)footerText;
-(id)sectionTitle;
-(id)player;
-(void)setPlayer:(id)arg1 ;
-(void)setAlternateTitle:(id)arg1 ;
-(id)alternateTitle;
@end

