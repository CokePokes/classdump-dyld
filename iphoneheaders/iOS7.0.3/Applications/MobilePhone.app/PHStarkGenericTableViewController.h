/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/PHStarkGenericViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, PHStarkNoContentBannerView, NSString;

@interface PHStarkGenericTableViewController : PHStarkGenericViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _tableViewReloadIsRequiredOnViewWillAppear;
	BOOL _viewIsInAppearedState;
	UITableView* _mainTableView;
	PHStarkNoContentBannerView* _noContentBannerView;

}

@property (retain) UITableView * mainTableView;                                   //@synthesize mainTableView=_mainTableView - In the implementation block
@property (assign) BOOL tableViewReloadIsRequiredOnViewWillAppear;                //@synthesize tableViewReloadIsRequiredOnViewWillAppear=_tableViewReloadIsRequiredOnViewWillAppear - In the implementation block
@property (readonly) BOOL viewIsInAppearedState;                                  //@synthesize viewIsInAppearedState=_viewIsInAppearedState - In the implementation block
@property (readonly) NSString * badgeString; 
@property (retain) PHStarkNoContentBannerView * noContentBannerView;              //@synthesize noContentBannerView=_noContentBannerView - In the implementation block
-(BOOL)viewIsInAppearedState;
-(void)setTableViewReloadIsRequiredOnViewWillAppear:(BOOL)arg1 ;
-(void)setNoContentBannerShown:(BOOL)arg1 ;
-(void)programmaticallySelectRowAtIndexPath:(id)arg1 ;
-(id)titleForNoContentBanner;
-(id)subtitleForNoContentBanner;
-(id)badgeString;
-(void)hardwareControlEventNotification:(id)arg1 ;
-(void)applicationBadgeChangedNotification:(id)arg1 ;
-(void)updateBadgeString;
-(BOOL)tableViewReloadIsRequiredOnViewWillAppear;
-(BOOL)shouldRespondToHardwareControlEvent;
-(id)noContentBannerView;
-(void)setNoContentBannerView:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)mainTableView;
-(void)setMainTableView:(id)arg1 ;
-(float)defaultRowHeight;
@end

