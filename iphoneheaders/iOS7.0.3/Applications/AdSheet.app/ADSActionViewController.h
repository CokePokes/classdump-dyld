/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <iAd/ADSActionViewController_RPC.h>

@class ADSAdSpaceController;

@interface ADSActionViewController : UIViewController <ADSActionViewController_RPC> {

	ADSAdSpaceController* _adSpaceController;

}

@property (assign,nonatomic) ADSAdSpaceController * adSpaceController; 
+(void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
+(void)requestActionViewControllerForAdSpaceController:(id)arg1 ;
+(id)_exportedInterface;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(id)adSpaceController;
-(void)setAdSpaceController:(id)arg1 ;
-(void)didSetAdSpaceController;
-(void)dealloc;
-(void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1 ;
@end

