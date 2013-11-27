/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>

@class SLComposeServiceViewController, NSMutableArray, UIView;

@interface SLSheetContainerViewController : UIViewController {

	SLComposeServiceViewController* _sheetViewController;
	NSMutableArray* _constraints;
	float _topOffset;
	float _sheetHeight;
	UIView* _keyboardTrackingView;
	CGSize _keyboardSize;
	int _currentOrientation;

}
-(id)init;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)updateViewConstraints;
-(void)addImage:(id)arg1 ;
-(void)keyboardDidChange:(id)arg1 ;
-(void).cxx_destruct;
@end

