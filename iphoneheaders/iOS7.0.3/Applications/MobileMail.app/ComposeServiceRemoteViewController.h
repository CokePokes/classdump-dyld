/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <MessageUI/MFMailComposeRemoteService.h>

@class ComposeNavigationController, _MFMailCompositionContext, NSMutableDictionary;

@interface ComposeServiceRemoteViewController : UIViewController <MFMailComposeViewControllerDelegate, MFMailComposeRemoteService> {

	ComposeNavigationController* _navigationController;
	_MFMailCompositionContext* _compositionContext;
	NSMutableDictionary* _attachmentIdentifiersMap;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)_firstDraw:(id)arg1 ;
-(void)_invokeReply:(/*^block*/ id)arg1 ;
-(void)setCompositionValues:(id)arg1 ;
-(void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 identifier:(id)arg4 ;
-(void)commitCompositionValuesWithReply:(/*^block*/ id)arg1 ;
-(void)framesForAttachmentsWithIdentifiers:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(void)autosaveWithReply:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(void)setContentVisible:(BOOL)arg1 ;
@end

