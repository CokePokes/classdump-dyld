/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBUIBannerItem.h>
#import <SpringBoard/SBDefaultBannerViewSource.h>
#import <SpringBoardUI/SBUIQuietModePlayability.h>

@protocol SBUnlockActionHandler, SBLockScreenNotificationBannerItemDelegate;
@class SBAwayListItem, ;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability> {

	SBAwayListItem* _listItem;
	<SBUnlockActionHandler>* _unlockActionHandler;
	<SBLockScreenNotificationBannerItemDelegate>* _delegate;

}

@property (nonatomic,readonly) SBAwayListItem * listItem;                                          //@synthesize listItem=_listItem - In the implementation block
@property (nonatomic,retain) <SBUnlockActionHandler> * unlockActionHandler;                        //@synthesize unlockActionHandler=_unlockActionHandler - In the implementation block
@property (assign,nonatomic) <SBLockScreenNotificationBannerItemDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithListItem:(id)arg1 ;
-(id)sourceDate;
-(id)attachmentImage;
-(id)unlockActionContext;
-(void)setUnlockActionHandler:(id)arg1 ;
-(id)unlockActionHandler;
-(id)sortDate;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(/*^block*/ id)action;
-(id)title;
-(id)message;
-(id)iconImage;
-(BOOL)inertWhenLocked;
-(id)attachmentText;
-(BOOL)isVIP;
-(BOOL)isCritical;
-(id)listItem;
-(BOOL)overridesQuietMode;
-(BOOL)canShowWhileLocked;
@end

