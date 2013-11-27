/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <StoreKit/SKUIClientComposeReviewViewController.h>

@class SKComposeReviewViewController;

@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController> {

	SKComposeReviewViewController* _composeReviewViewController;

}

@property (assign,nonatomic,__weak) SKComposeReviewViewController * composeReviewViewController;              //@synthesize composeReviewViewController=_composeReviewViewController - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)promptForStarRating;
-(void)setComposeReviewViewController:(id)arg1 ;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2 ;
-(id)composeReviewViewController;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

