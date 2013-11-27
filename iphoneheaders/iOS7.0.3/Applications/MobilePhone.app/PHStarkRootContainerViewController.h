/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, PHStarkMainMenuContainerViewController;

@interface PHStarkRootContainerViewController : UIViewController <UINavigationControllerDelegate> {

	UINavigationController* _wrapperNavigationController;
	PHStarkMainMenuContainerViewController* _mainMenuContainerViewController;

}

@property (retain) UINavigationController * wrapperNavigationController;                                  //@synthesize wrapperNavigationController=_wrapperNavigationController - In the implementation block
@property (retain) PHStarkMainMenuContainerViewController * mainMenuContainerViewController;              //@synthesize mainMenuContainerViewController=_mainMenuContainerViewController - In the implementation block
-(id)wrapperNavigationController;
-(void)setMainMenuContainerViewController:(id)arg1 ;
-(id)mainMenuContainerViewController;
-(void)setWrapperNavigationController:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

