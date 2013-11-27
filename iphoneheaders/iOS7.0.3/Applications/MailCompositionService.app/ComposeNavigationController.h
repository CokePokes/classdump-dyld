/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MailCompositionService.app/MailCompositionService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MailCompositionService/MailCompositionService-Structs.h>
#import <UIKit/UINavigationController.h>

@class MFMailComposeController;

@interface ComposeNavigationController : UINavigationController {

	MFMailComposeController* _composeViewController;

}

@property (assign,nonatomic) <MFMailComposeViewControllerDelegate> * mailComposeDelegate; 
+(BOOL)hasAutosavedMessageWithIdentifier:(id)arg1 ;
+(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(id)initWithComposition:(id)arg1 mailComposeControllerOptions:(unsigned)arg2 ;
-(id)_mailComposeView;
-(void)_setCompositionContext:(id)arg1 ;
-(id)_mailComposeController;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(CGRect)frameForAttachmentWithIdentifier:(id)arg1 ;
-(int)resolution;
-(void)setInitialTitle:(id)arg1 ;
-(id)mailComposeDelegate;
-(void)dealloc;
-(id)view;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/ id)arg1 ;
-(void)setMailComposeDelegate:(id)arg1 ;
-(void)recoverAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)isDirty;
@end

