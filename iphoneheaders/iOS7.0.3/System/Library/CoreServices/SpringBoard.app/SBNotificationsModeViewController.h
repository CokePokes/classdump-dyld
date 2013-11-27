/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBulletinObserverViewController.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface SBNotificationsModeViewController : SBBulletinObserverViewController {

	struct {
		unsigned suppliesInsertionAnimation : 1;
		unsigned suppliesRemovalAnimation : 1;
		unsigned suppliesReplacementAnimation : 1;
		unsigned handlesBulletinActions : 1;
	}  _notificationsModeViewControllerDelegateFlags;
	NSMutableArray* _orderedSectionIDs;
	NSMutableDictionary* _sectionIDsToOrderedBulletins;

}

@property (assign,nonatomic) <SBBulletinViewControllerDelegate><SBBulletinActionHandler> * delegate; 
@property (nonatomic,readonly) NSArray * orderedSectionIDs; 
@property (nonatomic,readonly) NSMutableDictionary * sectionIDsToOrderedBulletins; 
-(BOOL)handleActionForBulletin:(id)arg1 ;
-(id)initWithObserverFeed:(unsigned)arg1 ;
-(void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitRemovalOfSection:(id)arg1 ;
-(void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned)arg4 ;
-(void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3 ;
-(int)bulletinViewController:(id)arg1 insertionAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)populateBulletinInfo:(id)arg1 inSection:(id)arg2 ;
-(void)updateForChangeInMessagePrivacy;
-(int)bulletinViewController:(id)arg1 removalAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(int)bulletinViewController:(id)arg1 replacementAnimationForBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)updateSection:(id)arg1 withInfo:(id)arg2 ;
-(void)updateSection:(id)arg1 withParameters:(id)arg2 ;
-(void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2 ;
-(void)commitMoveOfBulletin:(id)arg1 inSection:(id)arg2 beforeBulletin:(id)arg3 inSection:(id)arg4 ;
-(id)orderedSectionIDs;
-(id)sectionIDsToOrderedBulletins;
-(void)_sortSectionIDs;
-(void)_updateSectionOrderForOperationInSection:(id)arg1 ;
-(void)_sortBulletins:(id)arg1 forSection:(id)arg2 ;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withProcessingBlock:(/*^block*/ id)arg2 ;
-(void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)arg1 ;
-(void)_updateSectionForChangeInNumberOfLines:(id)arg1 ;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withLockState:(BOOL)arg2 updatedSubsectionIDs:(id)arg3 ;
-(void)_updateSection:(id)arg1 withLockState:(BOOL)arg2 ;
-(id)infoForBulletinInfo:(id)arg1 inSection:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)hostWillPresent;
@end

