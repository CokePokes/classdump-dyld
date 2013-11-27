/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem, BrowserICSPreviewPanel;

@interface BrowserICSPreviewPanelNavController : UINavigationController {

	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _activitiesBarButtonItem;
	BrowserICSPreviewPanel* _icsPanel;
	BOOL _closeBrowserPanelAlreadyCalled;

}
-(id)_activtyBarButtonItem;
-(id)_doneBarButonItem;
-(void)_ensureLeftBarButtonItemsIncludesActivitiesItem:(id)arg1 ;
-(void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1 ;
-(void)_ensureRightBarButtonItemsIncludesDoneItem:(id)arg1 ;
-(void)_updateNavigationBarItems;
-(void)setOwningPanel:(id)arg1 ;
-(void)setCloseBrowserPanelAlreadyCalled:(BOOL)arg1 ;
-(void)dealloc;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

