/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <StoreKit/SKUIClientProductPageViewController.h>

@class SKStoreProductViewController;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {

	SKStoreProductViewController* _productViewController;

}

@property (assign,nonatomic,__weak) SKStoreProductViewController * productViewController;              //@synthesize productViewController=_productViewController - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setProductViewController:(id)arg1 ;
-(id)productViewController;
-(void)didFinishWithResult:(id)arg1 ;
-(void)didReceiveTitle:(id)arg1 ;
-(void)loadDidFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)presentPageWithRequest:(id)arg1 animated:(id)arg2 ;
-(void)promptForStarRating;
-(void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2 ;
-(void)setStatusBarStyle:(id)arg1 animated:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didFinish;
@end

