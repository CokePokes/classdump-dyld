/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/WebContentAnalysisUI.app/WebContentAnalysisUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <WebContentAnalysis/WFServicePINEntryControllerProtocol.h>

@protocol WFPINEntryViewControllerProtocol;
@class , UINavigationController, WFServicePINEntryViewController, NSURL, NSString;

@interface WFServicePINEntryNavigationController : UIViewController <WFServicePINEntryControllerProtocol> {

	<WFPINEntryViewControllerProtocol>* _remoteViewControllerProxy;
	UINavigationController* _navController;
	WFServicePINEntryViewController* _PINEntryViewController;
	NSURL* _URL;
	NSString* _pageTitle;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)viewDidLoad;
-(void)cancel;
-(void)setURL:(id)arg1 ;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
-(void)setPageTitle:(id)arg1 ;
-(void).cxx_destruct;
@end

