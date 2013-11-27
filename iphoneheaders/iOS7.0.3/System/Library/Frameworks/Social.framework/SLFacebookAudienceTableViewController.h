/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Social/SLFacebookAudienceViewController.h>

@protocol SLFacebookAudienceViewControllerDelegate;
@class NSArray, SLFacebookPostPrivacySetting, , UINavigationItem;

@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController> {

	NSArray* _privacySettings;
	SLFacebookPostPrivacySetting* _selectedSetting;
	<SLFacebookAudienceViewControllerDelegate>* _selectionDelegate;
	UINavigationItem* _navigationItem;

}
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setSelectionDelegate:(id)arg1 ;
-(id)_privacySettingForIndexPath:(id)arg1 ;
-(void)setPrivacySettings:(id)arg1 ;
-(void)setCurrentPrivacySetting:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

