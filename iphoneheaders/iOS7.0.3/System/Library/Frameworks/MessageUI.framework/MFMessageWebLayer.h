/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIWebBrowserView.h>

@protocol MFMessageWebLayerDelegate;
@class NSString, NSTimer, NSObject, MFLibraryMessage, NSMutableDictionary, MFMessageReformattingContext, DOMRange;

@interface MFMessageWebLayer : UIWebBrowserView {

	NSString* _currentUUID;
	NSTimer* _ignorePendingStylesheetsTimer;
	NSObject<MFMessageWebLayerDelegate>* _mwlDelegate;
	int _displayStyle;
	unsigned _shouldReformat : 1;
	unsigned _unitTests : 1;
	unsigned _isFromEntourage : 1;
	BOOL _prePrintDataDetectionPending;
	BOOL _showRemoteImages;
	BOOL _hasUnloadedRemoteImages;
	/*^block*/ id _postDisplayOperationBlock;
	/*^block*/ id _postDisplayCancellationBlock;
	NSString* _mainFrameURL;
	MFLibraryMessage* _displayInfoCacheLibraryMessage;
	NSMutableDictionary* _displayInfoCache;
	BOOL _stoppedLoading;
	BOOL _didReformatMessage;
	NSString* _originalHTMLString;
	MFMessageReformattingContext* _reformattingContext;
	DOMRange* _bottomReplyRange;
	unsigned _bottomReplyLastQuoteLevel;

}

@property (assign) BOOL prePrintDataDetectionPending;                               //@synthesize prePrintDataDetectionPending=_prePrintDataDetectionPending - In the implementation block
@property (assign) BOOL showRemoteImages;                                           //@synthesize showRemoteImages=_showRemoteImages - In the implementation block
@property (assign) BOOL hasUnloadedRemoteImages;                                    //@synthesize hasUnloadedRemoteImages=_hasUnloadedRemoteImages - In the implementation block
@property (copy) NSString * originalHTMLString;                                     //@synthesize originalHTMLString=_originalHTMLString - In the implementation block
@property (retain) MFMessageReformattingContext * reformattingContext;              //@synthesize reformattingContext=_reformattingContext - In the implementation block
@property (retain) DOMRange * bottomReplyRange;                                     //@synthesize bottomReplyRange=_bottomReplyRange - In the implementation block
@property (assign) unsigned bottomReplyLastQuoteLevel;                              //@synthesize bottomReplyLastQuoteLevel=_bottomReplyLastQuoteLevel - In the implementation block
+(void)beginBlockingRemoteImagesExceptForMessageWebLayer:(id)arg1 ;
+(void)endBlockingRemoteImages;
+(void)clearUnblockedRemoteImagesCache;
+(void)clearMessageContentCache;
+(void)initialize;
-(id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2 ;
-(void)_preferredContentSizeDidChangeNotification:(id)arg1 ;
-(void)setOriginalHTMLString:(id)arg1 ;
-(void)setReformattingContext:(id)arg1 ;
-(void)setBottomReplyRange:(id)arg1 ;
-(void)setBottomReplyLastQuoteLevel:(unsigned)arg1 ;
-(id)reformattingContext;
-(void)_sendDelegateSizeDidChange;
-(BOOL)usePadDisplayStyle;
-(void)_replaceElement:(id)arg1 with:(id)arg2 ;
-(id)_createInlinePluginElementWithHTMLRepresentation:(id)arg1 inDocument:(id)arg2 ;
-(void)addMessageContentURL:(id)arg1 ;
-(BOOL)showRemoteImages;
-(void)addUnblockedRemoteImageURL:(id)arg1 ;
-(void)setHasUnloadedRemoteImages:(BOOL)arg1 ;
-(void)_cancelPendingIgnoreStylesheets;
-(void)setPrePrintDataDetectionPending:(BOOL)arg1 ;
-(void)setBool:(BOOL)arg1 forDisplayInfoCacheKey:(id)arg2 ;
-(id)objectForDisplayInfoCacheKey:(id)arg1 ;
-(void)setObject:(id)arg1 forDisplayInfoCacheKey:(id)arg2 ;
-(BOOL)boolForDisplayInfoCacheKey:(id)arg1 ;
-(id)newQuoteSubparser;
-(void)setPostDisplayOperationBlock:(/*^block*/ id)arg1 cancellationBlock:(/*^block*/ id)arg2 ;
-(BOOL)reformatMessageOnce;
-(id)bottomReplyRange;
-(unsigned)bottomReplyLastQuoteLevel;
-(void)attemptEarlyMessageReformat;
-(id)originalHTMLString;
-(void)parseDocument:(id)arg1 ;
-(void)reformatMessage:(id)arg1 ;
-(BOOL)canReformatMessageWithoutSubresources:(id)arg1 resultCanBeCached:(BOOL*)arg2 ;
-(void)_ignorePendingStylesheets:(id)arg1 ;
-(void)_frameDidFinishPrePrintURLification:(id)arg1 ;
-(void)_schedulePendingIgnoreStylesheets;
-(void)prepareDisplayInfoCacheWithLibraryMessage:(id)arg1 ;
-(void)cancelPostDisplayOperation;
-(void)stopLoadingAndClear;
-(void)clearMessageReformattingCache;
-(void)saveDisplayInfoCache;
-(id)initWithFrame:(CGRect)arg1 visibleSize:(CGSize)arg2 viewportWidth:(float)arg3 displayStyle:(int)arg4 ;
-(void)setMessageWebLayerDelegate:(id)arg1 ;
-(id)messageWebLayerDelegate;
-(void)performBatchUpdates:(/*^block*/ id)arg1 ;
-(void)appendMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(void)updateImageURL:(id)arg1 withURL:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)updateInlinePluginWithContentID:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)updateImageWithSource:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)webThreadWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)adjustSizeBasedOnMainFrame:(id)arg1 ;
-(void)setMessageIsFromEntourage:(BOOL)arg1 ;
-(void)_webthread_webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)_webthread_webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldPaintBrokenImageForURL:(id)arg2 ;
-(void)loadFragments:(id)arg1 forLibraryMessage:(id)arg2 ;
-(void)displayDidEnd;
-(BOOL)hasPluginWithUninitializedSize;
-(id)attachmentDownloadProgressObserversByUniqueIdentifiers;
-(BOOL)prePrintDataDetectionPending;
-(void)setShowRemoteImages:(BOOL)arg1 ;
-(BOOL)hasUnloadedRemoteImages;
-(void)invalidateDisplayInfoCache;
-(void)_willBeginReformattingMessage;
-(BOOL)_shouldResizeMessage;
-(BOOL)_shouldContinueResizingMessage;
-(id)_reformatOneElementUsingMethod:(/*^block*/ id)arg1 shouldCancel:(BOOL*)arg2 ;
-(void)_reformattingDidFail;
-(BOOL)_shouldRescaleMessage;
-(BOOL)_rescaleTopLevelElements;
-(void)_didFinishReformattingMessage;
-(id)_rangeOfFirstText;
-(BOOL)_elementHasDefinedWidth:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)reload;
-(BOOL)isCancelled;
-(float)defaultWidth;
-(void)copy:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)stopLoading:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(float)maximumDoubleTapScale;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(int)displayStyle;
-(id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
@end

