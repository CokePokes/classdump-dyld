/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>

@class TrafficIncidentsHeaderView, UILabel, UIView, VKTrafficIncident, NSMutableArray, NSMutableDictionary;

@interface TrafficIncidentsViewController : UITableViewController {

	TrafficIncidentsHeaderView* _tableHeaderView;
	UILabel* _incidentInfo;
	UILabel* _timeLabel;
	UIView* _tableFooterContainer;
	VKTrafficIncident* _incident;
	NSMutableArray* _sectionKeys;
	NSMutableDictionary* _sectionContents;

}

@property (nonatomic,retain) VKTrafficIncident * incident;                       //@synthesize incident=_incident - In the implementation block
@property (nonatomic,retain) NSMutableArray * sectionKeys;                       //@synthesize sectionKeys=_sectionKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionContents;              //@synthesize sectionContents=_sectionContents - In the implementation block
-(void)updateForLightLevel:(int)arg1 ;
-(void)setIncident:(id)arg1 ;
-(void)_updateTableFooter;
-(void)_contentSizeDidChange:(id)arg1 ;
-(id)_tableHeaderView;
-(void)setSectionContents:(id)arg1 ;
-(void)setSectionKeys:(id)arg1 ;
-(id)_tableFooterContainer;
-(void)_transformIncidentObject;
-(id)sectionKeys;
-(id)sectionContents;
-(float)_cellContentWidth;
-(id)_incidentInfo;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)_timeLabel;
-(BOOL)isDimmed;
-(id)incident;
@end

