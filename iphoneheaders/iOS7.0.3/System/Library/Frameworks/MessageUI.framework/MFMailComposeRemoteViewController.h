/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <MessageUI/MFMailComposeRemoteHost.h>

@protocol MFMailComposeRemoteViewControllerDelegate;
@class ;

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost> {

	<MFMailComposeRemoteViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <MFMailComposeRemoteViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/ id)arg1 ;
-(void)serviceCompositionFinishedWithResult:(int)arg1 error:(id)arg2 ;
-(void)bodyFinishedDrawing;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

