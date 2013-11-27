/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>

@protocol GAXOptionsViewControllerDataSource, GAXOptionsViewControllerDelegate;
@class , GAXStyleProvider;

@interface GAXOptionsViewController : UITableViewController {

	<GAXOptionsViewControllerDataSource>* _dataSource;
	<GAXOptionsViewControllerDelegate>* _delegate;
	GAXStyleProvider* _styleProvider;
	int _type;

}

@property (assign,nonatomic) <GAXOptionsViewControllerDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) <GAXOptionsViewControllerDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) int type;                                                       //@synthesize type=_type - In the implementation block
+(id)optionsViewControllerWithType:(int)arg1 ;
-(id)_textForFeatureAtIndex:(int)arg1 ;
-(id)_detailTextForFeatureAtIndex:(int)arg1 ;
-(BOOL)_stateForForFeatureAtIndex:(int)arg1 ;
-(void)_featureAtIndex:(unsigned)arg1 didChangeState:(BOOL)arg2 ;
-(int)_numberOfFeatures;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_handleValueChanged:(id)arg1 ;
@end

