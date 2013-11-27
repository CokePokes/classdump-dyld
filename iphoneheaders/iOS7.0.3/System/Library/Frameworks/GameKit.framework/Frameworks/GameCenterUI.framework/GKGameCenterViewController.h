/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@protocol GKGameCenterControllerDelegate;
@class , GKHostedGameCenterViewController, GKRemoteGameCenterViewController, NSMutableDictionary, NSString;

@interface GKGameCenterViewController : UINavigationController {

	<GKGameCenterControllerDelegate>* _gameCenterDelegateWeak;
	GKHostedGameCenterViewController* _privateViewController;
	GKRemoteGameCenterViewController* _remoteViewController;
	NSMutableDictionary* _volatileProperties;

}

@property (assign,nonatomic) <GKGameCenterControllerDelegate> * gameCenterDelegate;                 //@synthesize gameCenterDelegateWeak=_gameCenterDelegateWeak - In the implementation block
@property (assign,nonatomic,@dynamic) int viewState; 
@property (nonatomic,retain) GKHostedGameCenterViewController * privateViewController;              //@synthesize privateViewController=_privateViewController - In the implementation block
@property (nonatomic,retain) GKRemoteGameCenterViewController * remoteViewController;               //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic,@dynamic) int leaderboardTimeScope; 
@property (nonatomic,@dynamic,retain) NSString * leaderboardIdentifier; 
@property (nonatomic,@dynamic,retain) NSString * leaderboardCategory; 
@property (nonatomic,retain) NSMutableDictionary * volatileProperties;                              //@synthesize volatileProperties=_volatileProperties - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)setViewState:(int)arg1 ;
-(id)gameCenterDelegate;
-(void)notifyDelegateOnWillFinish;
-(void)setLeaderboardIdentifier:(id)arg1 ;
-(id)leaderboardIdentifier;
-(void)_setupChildViewController;
-(void)setVolatileProperties:(id)arg1 ;
-(id)privateViewController;
-(id)volatileProperties;
-(BOOL)_canSetPropertiesOnRemoteViewController;
-(int)viewState;
-(void)_flushVolatileProperties;
-(void)setGameCenterDelegate:(id)arg1 ;
-(BOOL)_remoteControllerIsPresented;
-(int)leaderboardTimeScope;
-(void)setLeaderboardTimeScope:(int)arg1 ;
-(id)leaderboardCategory;
-(void)setLeaderboardCategory:(id)arg1 ;
-(void)setPrivateViewController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(id)remoteViewController;
@end

