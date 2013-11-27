/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/BrowserPanel.h>

@class BrowserPrintPageRenderer, WebFrame;

@interface PrintBrowserPanel : NSObject <BrowserPanel> {

	BrowserPrintPageRenderer* _pageRenderer;
	WebFrame* _webFrame;

}
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(id)printControllerWithBrowserView:(id)arg1 URLString:(id)arg2 pageTitle:(id)arg3 printFooter:(BOOL)arg4 ;
-(void)dealloc;
-(id)initWithWebFrame:(id)arg1 ;
@end

