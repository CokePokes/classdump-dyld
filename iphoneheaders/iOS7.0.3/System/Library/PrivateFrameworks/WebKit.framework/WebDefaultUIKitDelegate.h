/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebDefaultUIKitDelegate : NSObject
+(id)sharedUIKitDelegate;
-(id)supportedPasteboardTypesForCurrentSelection;
-(void)addInputString:(id)arg1 withFlags:(unsigned)arg2 ;
-(void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2 ;
-(void)deleteFromInput;
-(BOOL)hasRichlyEditableSelection;
-(void)webViewDidDrawTiles:(id)arg1 ;
-(void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2 ;
-(void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webViewDidStartOverflowScroll:(id)arg1 ;
-(void)webViewDidEndOverflowScroll:(id)arg1 ;
-(void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(BOOL)arg3 acceptMIMETypes:(id)arg4 ;
-(void)webViewDidRestoreFromPageCache:(id)arg1 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveDocTypeForFrame:(id)arg2 ;
-(void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(BOOL)arg4 ;
-(BOOL)webView:(id)arg1 shouldScrollToPoint:(CGPoint)arg2 forFrame:(id)arg3 ;
-(void)writeDataToPasteboard:(id)arg1 ;
-(int)getPasteboardItemsCount;
-(BOOL)performsTwoStepPaste:(id)arg1 ;
-(id)readDataFromPasteboard:(id)arg1 withIndex:(int)arg2 ;
-(int)getPasteboardChangeCount;
-(BOOL)isUnperturbedDictationResultMarker:(id)arg1 ;
-(void)revealedSelectionByScrollingWebFrame:(id)arg1 ;
-(void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg1 ;
-(id)checkSpellingOfString:(id)arg1 ;
-(id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3 ;
-(void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2 ;
-(void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2 ;
-(void)webView:(id)arg1 willAddPlugInView:(id)arg2 ;
-(void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3 ;
-(void)webViewDidPreventDefaultForEvent:(id)arg1 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 willCloseFrame:(id)arg2 ;
-(void)webView:(id)arg1 elementDidFocusNode:(id)arg2 ;
-(void)webView:(id)arg1 elementDidBlurNode:(id)arg2 ;
-(void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3 ;
-(void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7 ;
-(void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4 ;
-(void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(CGPoint)contentsPointForWebView:(id)arg1 ;
-(CGRect)documentVisibleRectForWebView:(id)arg1 ;
-(void)webView:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webViewDidLayout:(id)arg1 ;
@end

