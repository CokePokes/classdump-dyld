/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/ReportAProblemReporter.h>

@protocol NSObjectReportAProblemReporter;
@class NSMutableArray, NSArray, , ReportAProblemNavigationController;

@interface ReportAProblemDirectionsViewController : UITableViewController <ReportAProblemReporter> {

	NSMutableArray* _problemItems;
	NSArray* _directionsItems;
	<NSObject><ReportAProblemReporter>* _commentsViewController;

}

@property (nonatomic,readonly) ReportAProblemNavigationController * navigationController; 
-(void)populateRPProblem:(id)arg1 request:(id)arg2 ;
-(void)updateEnabledState;
-(BOOL)canReportProblem;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(id)navigationController;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)next;
-(void)cancel:(id)arg1 ;
@end

