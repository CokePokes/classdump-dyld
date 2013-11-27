/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUIService/GKServiceViewController.h>
#import <GameCenterUI/GKFriendRequestComposeViewControllerDelegateServiceSide.h>

@class NSNumber, NSString, ServiceFriendRequestComposeController, GKGame;

@interface FriendRequestComposeServiceViewController : GKServiceViewController <GKFriendRequestComposeViewControllerDelegateServiceSide> {

	NSNumber* _rid;
	NSString* _defaultMessage;

}

@property (nonatomic,readonly) ServiceFriendRequestComposeController * composeController; 
@property (nonatomic,retain) NSNumber * rid;                                                           //@synthesize rid=_rid - In the implementation block
@property (nonatomic,copy) NSString * defaultMessage;                                                  //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) GKGame * game; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)constructPrivateViewController;
-(BOOL)_useBackdropViewForWindowBackground;
-(void)updateOneShotViewPieces;
-(void)setDefaultMessage:(id)arg1 ;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(id)observedKeyPaths;
-(void)didRequestFriends:(id)arg1 ;
-(id)rid;
-(void)setRid:(id)arg1 ;
-(id)defaultMessage;
-(id)composeController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)addRecipients:(id)arg1 ;
@end

