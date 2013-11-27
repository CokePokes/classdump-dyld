/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSError, UIAlertView;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {

	/*^block*/ id _completionHandler;
	NSError* _error;
	UIAlertView* _alert;

}
+(id)_presentAlertWithError:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(id)initWithError:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_forceFinishNow;
@end

