/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockOverlayViewDelegate.h>

@class SBLockOverlayView, SBAwayBulletinListItem;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {

	SBLockOverlayView* _bulletinView;
	SBAwayBulletinListItem* _bulletinItem;

}

@property (nonatomic,retain) SBAwayBulletinListItem * bulletinItem;              //@synthesize bulletinItem=_bulletinItem - In the implementation block
-(void)handleTapGestureFromView:(id)arg1 ;
-(id)bulletinItem;
-(void)setBulletinItem:(id)arg1 ;
-(void)updateContent;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
@end

