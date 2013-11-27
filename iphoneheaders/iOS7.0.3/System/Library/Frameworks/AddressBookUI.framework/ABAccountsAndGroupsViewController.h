/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABAbstractViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class UIRefreshControl, ABAccountsAndGroupDataSource, ABPeoplePickerNavigationController;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {

	UIRefreshControl* _refreshControl;
	ABAccountsAndGroupDataSource* _dataSource;
	BOOL _needsReload;
	BOOL _tableViewNeedsReloadAfterResume;
	BOOL _showsRefreshButton;
	ABPeoplePickerNavigationController* _peoplePickerNavigationController;

}

@property (nonatomic,readonly) ABAccountsAndGroupDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) ABPeoplePickerNavigationController * peoplePickerNavigationController;              //@synthesize peoplePickerNavigationController=_peoplePickerNavigationController - In the implementation block
-(id)initWithModel:(id)arg1 ;
-(id)peoplePickerNavigationController;
-(BOOL)hidesSearchableSources;
-(BOOL)hidesGlobalGroupWrapper;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)setHidesGlobalGroupWrapper:(BOOL)arg1 ;
-(void)updateRefreshButton;
-(void)refreshEverythingNow;
-(void)_updateDisplayedContactsFilterFromSelection;
-(int)abViewControllerType;
-(void)modelDatabaseChange:(id)arg1 ;
-(void)setPeoplePickerNavigationController:(id)arg1 ;
-(id)allGroupWrapperIndexPaths;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)dataSource;
-(void)applicationDidResume;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)model;
-(void)done:(id)arg1 ;
-(void)setModel:(id)arg1 ;
@end

