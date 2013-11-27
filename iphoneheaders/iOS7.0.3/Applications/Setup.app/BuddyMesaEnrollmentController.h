/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class ;

@interface BuddyMesaEnrollmentController : UIViewController <BuddyController> {

	<BuddyControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <BuddyControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(CGRect)frameForEnrollmentController;
-(void)controllerWasPopped;
-(BOOL)shouldAllowStartOver;
-(BOOL)controllerAllowsNavigatingBack;
-(void)beginEnrollment;
-(void)endEnrollment;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

