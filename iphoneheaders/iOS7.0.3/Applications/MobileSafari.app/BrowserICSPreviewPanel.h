/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/RotatablePopoverControllerDelegate.h>
#import <MobileSafari/BrowserPanel.h>

@class OpenInOtherAppActivityViewController, BrowserICSPreviewPanelNavController, RotatablePopoverController, EKICSPreviewController, NSString;

@interface BrowserICSPreviewPanel : NSObject <RotatablePopoverControllerDelegate, BrowserPanel> {

	OpenInOtherAppActivityViewController* _activityViewController;
	BrowserICSPreviewPanelNavController* _wrappingNavController;
	RotatablePopoverController* _activityPopover;
	EKICSPreviewController* _icsController;
	NSString* _filePath;

}
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(BOOL)shouldHideOnSuspend;
-(void)_openInOtherAppsButtonPressed:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(id)viewController;
-(id)activityViewController;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 ;
@end

