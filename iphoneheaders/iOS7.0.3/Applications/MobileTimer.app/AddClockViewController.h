/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol AddClockViewControllerDelegate;
@class , ClockSearchField, UILabel, NSArray, NSMutableIndexSet;

@interface AddClockViewController : UITableViewController <UISearchBarDelegate> {

	<AddClockViewControllerDelegate>* _delegate;
	ClockSearchField* _searchField;
	UILabel* _noResultsFoundLabel;
	NSArray* _cities;
	NSArray* _partitionedCities;
	NSArray* _sectionIndexTitles;
	NSMutableIndexSet* _populatedIndexSet;

}

@property (assign,nonatomic) <AddClockViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ClockSearchField * searchField;                         //@synthesize searchField=_searchField - In the implementation block
-(void)prepopulateSuggestions;
-(void)_showNoResultsFound:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3 ;
-(id)delegate;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)searchField;
-(void)_dismiss;
@end

