/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoard/SBLockScreenNotificationViewDelegate.h>
#import <SpringBoard/SBLockScreenNotificationModel.h>
#import <MobileMail/BBObserverDelegate.h>
#import <SpringBoard/SBVolumePressBandit.h>
#import <SpringBoard/SBUIBannerSource.h>
#import <SpringBoard/SBUIBannerTargetManagerObserver.h>
#import <SpringBoard/SBUnlockActionHandler.h>
#import <SpringBoard/SBLockScreenNotificationBannerItemDelegate.h>

@protocol SBLockScreenNotificationListDelegate, SBUIBannerTarget;
@class SBLockScreenNotificationListView, , BBObserver, NSMutableArray, SBUnlockActionContext;

@interface SBLockScreenNotificationListController : UIViewController <SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel, BBObserverDelegate, SBVolumePressBandit, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBUnlockActionHandler, SBLockScreenNotificationBannerItemDelegate> {

	SBLockScreenNotificationListView* _notificationView;
	<SBLockScreenNotificationListDelegate>* _delegate;
	BBObserver* _observer;
	NSMutableArray* _listItems;
	NSMutableArray* _realertTimers;
	BOOL _hibernating;
	BOOL _quietModeEnabled;
	SBUnlockActionContext* _actionContext;
	<SBUIBannerTarget>* _bannerTarget;
	NSMutableArray* _listItemsBannerQueue;
	BOOL _bannersEnabled;
	BOOL _isOnscreen;
	BOOL _hasMissedUnreadNotifications;
	int _messagePrivacyRevealState;
	BOOL _hasAnyContent;

}

@property (assign,nonatomic) <SBLockScreenNotificationListDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasAnyContent;                                             //@synthesize hasAnyContent=_hasAnyContent - In the implementation block
@property (nonatomic,retain) SBUnlockActionContext * unlockActionContext;                    //@synthesize actionContext=_actionContext - In the implementation block
@property (nonatomic,readonly) BOOL quietModeEnabled;                                        //@synthesize quietModeEnabled=_quietModeEnabled - In the implementation block
@property (assign,getter=isBannersEnabled,nonatomic) BOOL bannersEnabled;                    //@synthesize bannersEnabled=_bannersEnabled - In the implementation block
@property (assign,nonatomic) BOOL isHibernating;                                             //@synthesize hibernating=_hibernating - In the implementation block
+(id)underlayPropertiesFactory;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)setBannersEnabled:(BOOL)arg1 ;
-(id)unlockActionContext;
-(void)bannerItemWasTapped:(id)arg1 ;
-(BOOL)shouldPlaySoundForItem:(id)arg1 ;
-(void)turnOnScreenIfNecessaryForItem:(id)arg1 ;
-(void)_reloadVolumePressBanditPreference;
-(void)_killRealerts:(id)arg1 ;
-(void)setIsHibernating:(BOOL)arg1 ;
-(void)prepareForTeardown;
-(void)concealForChangeInMessagePrivacy;
-(void)_updateModelAndViewForModificationOfItem:(id)arg1 ;
-(id)_listItemForNewBulletin:(id)arg1 ;
-(void)_updateModelAndViewForAdditionOfItem:(id)arg1 ;
-(void)_scheduleRealerts:(id)arg1 ;
-(void)_playSoundForBulletinIfPossible:(id)arg1 ;
-(void)setUnlockActionContext:(id)arg1 ;
-(void)_updateModelAndViewForRemovalOfItem:(id)arg1 ;
-(BOOL)shouldTreatItemAsInert:(id)arg1 ;
-(id)_listItemContainingSystemAlert:(id)arg1 ;
-(id)_listItemContainingCardItem:(id)arg1 ;
-(void)_activateOrUpdateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_sortListItems;
-(BOOL)_shouldAddBannerItem:(id)arg1 ;
-(void)_updateModelForRemovalOfItem:(id)arg1 updateView:(BOOL)arg2 ;
-(id)lockScreenScrollView;
-(void)_realertTimerFired:(id)arg1 ;
-(void)_showTestBulletin;
-(void)noteUnlockActionChanged:(id)arg1 ;
-(id)listItemAtIndexPath:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(void)setIsOnscreen:(BOOL)arg1 ;
-(BOOL)hasMissedUnreadNotifications;
-(BOOL)dismissReadNotifications;
-(id)pendOrDeactivateAlertItems;
-(void)performSystemAlertUnlockActions;
-(void)activateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)deactivateCardItem:(id)arg1 ;
-(void)updateCardItem:(id)arg1 ;
-(void)_updateModelAndViewForReplacingItem:(id)arg1 withNewItem:(id)arg2 ;
-(void)clearItemsForNotificationCenter;
-(void)revealForChangeInMessagePrivacy;
-(void)lockScreenViewDidEndScrollingOnPage:(int)arg1 ;
-(BOOL)quietModeEnabled;
-(BOOL)isBannersEnabled;
-(BOOL)isHibernating;
-(void)setHasAnyContent:(BOOL)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)unlockUIWithActionContext:(id)arg1 ;
-(void)deactivateAlertItem:(id)arg1 ;
-(id)_listItemContainingBulletinID:(id)arg1 ;
-(BOOL)activateAlertItem:(id)arg1 ;
-(BOOL)hasAnyContent;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(unsigned)count;
-(id)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1 ;
-(id)observer:(id)arg1 multipleThumbnailSizeConstraintsForAttachmentType:(int)arg2 ;
-(id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
@end

