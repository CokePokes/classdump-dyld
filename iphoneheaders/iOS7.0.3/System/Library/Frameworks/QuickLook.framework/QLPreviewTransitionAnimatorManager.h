/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@interface QLPreviewTransitionAnimatorManager : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
+(id)sharedManager;
-(id)animatorForShowing:(BOOL)arg1 previewController:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

