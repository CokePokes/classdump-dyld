/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ADSStoryboardWebViewDelegate <ADWebViewDelegate>
@optional
-(void)webView:(id)arg1 didReportEventWithMessage:(id)arg2;
-(void)webView:(id)arg1 didReportSystemEventWithType:(int)arg2;

@required
-(void)webView:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3;
-(void)webView:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2;
-(void)storyboardWebViewPrivilegedAdWantsToDismiss:(id)arg1;
-(BOOL)storyboardWebViewVoiceOverWantsToDismiss:(id)arg1;
-(void)webView:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(CGRect)arg3 animated:(BOOL)arg4 tapDismissalHandler:(/*^block*/ id)arg5;
-(void)webViewPopoverShouldResize:(id)arg1;
-(void)webView:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2;
-(void)webView:(id)arg1 requestsPreview:(id)arg2 completion:(/*^block*/ id)arg3;
-(void)webViewContentSignalsReady:(id)arg1;
-(unsigned)storyboardWebViewRequestsSupportedInterfaceOrientations:(id)arg1;
-(void)storyboardWebView:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned)arg2;
-(void)webViewWillTakeScreenShot:(id)arg1;
-(void)webViewDidTakeScreenShot:(id)arg1;
-(int)interfaceOrientation;
@end

