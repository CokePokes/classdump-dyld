/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKLeaderboardViewControllerDelegate;
@class , NSString;

@interface GKLeaderboardViewController : GKGameCenterViewController {

	<GKLeaderboardViewControllerDelegate>* _leaderboardDelegate;

}

@property (assign,nonatomic) int timeScope; 
@property (nonatomic,retain) NSString * category; 
@property (assign,nonatomic) <GKLeaderboardViewControllerDelegate> * leaderboardDelegate;              //@synthesize leaderboardDelegate=_leaderboardDelegate - In the implementation block
-(int)timeScope;
-(void)setTimeScope:(int)arg1 ;
-(void)notifyDelegateOnWillFinish;
-(id)leaderboardDelegate;
-(void)setLeaderboardDelegate:(id)arg1 ;
-(id)init;
-(void)setCategory:(id)arg1 ;
-(id)category;
@end

