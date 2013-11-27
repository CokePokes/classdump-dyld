/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUViewController.h>

@class NSURL, UIViewController, NSString, SUGradient, SUPlaceholderViewController, SUShadow, SUSplitView, SUStructuredPage;

@interface SUSplitViewController : SUViewController {

	NSURL* _displayedURL;
	UIViewController* _firstViewController;
	NSString* _mainTitle;
	SUGradient* _placeholderGradient;
	SUPlaceholderViewController* _placeholderViewController;
	UIViewController* _secondViewController;
	SUShadow* _splitShadow;
	SUSplitView* _splitView;
	SUStructuredPage* _structuredPage;
	BOOL _usesSharedPlaceholder;
	BOOL _viewIsReady;

}

@property (nonatomic,retain) UIViewController * firstViewController;               //@synthesize firstViewController=_firstViewController - In the implementation block
@property (nonatomic,retain) UIViewController * secondViewController;              //@synthesize secondViewController=_secondViewController - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                 //@synthesize mainTitle=_mainTitle - In the implementation block
@property (assign,nonatomic) int layoutType; 
@property (assign,nonatomic) float minimumPaneSize; 
@property (assign,nonatomic) float splitPosition; 
@property (nonatomic,copy) SUShadow * splitShadow;                                 //@synthesize splitShadow=_splitShadow - In the implementation block
@property (assign,nonatomic) BOOL usesSharedPlaceholder;                           //@synthesize usesSharedPlaceholder=_usesSharedPlaceholder - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical; 
@property (nonatomic,retain) NSURL * displayedURL;                                 //@synthesize displayedURL=_displayedURL - In the implementation block
@property (assign,nonatomic) BOOL viewIsReady;                                     //@synthesize viewIsReady=_viewIsReady - In the implementation block
+(BOOL)isValidSplitPositionValue:(id)arg1 ;
+(BOOL)isValidSplitTypeString:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)mainTitle;
-(void)dealloc;
-(id)init;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)loadView;
-(void)removeChildViewController:(id)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)isVertical;
-(void)setVertical:(BOOL)arg1 ;
-(id)firstViewController;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)copyChildViewControllersForReason:(int)arg1 ;
-(BOOL)shouldExcludeFromNavigationHistory;
-(id)storePageProtocol;
-(id)newRotationController;
-(void)_loadingDidChangeNotification:(id)arg1 ;
-(id)copyScriptViewController;
-(BOOL)viewIsReady;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(id)displayedURL;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(void)setViewIsReady:(BOOL)arg1 ;
-(void)_navigationItemDidChangeNotification:(id)arg1 ;
-(int)layoutType;
-(float)minimumPaneSize;
-(float)splitPosition;
-(id)splitShadow;
-(BOOL)usesSharedPlaceholder;
-(id)_splitView;
-(void)_reloadView;
-(void)setFirstViewController:(id)arg1 ;
-(void)setSecondViewController:(id)arg1 ;
-(void)setLayoutType:(int)arg1 ;
-(void)setMainTitle:(id)arg1 ;
-(void)setSplitPosition:(float)arg1 ;
-(void)setSplitShadow:(id)arg1 ;
-(void)setUsesSharedPlaceholder:(BOOL)arg1 ;
-(void)_setPlaceholderVisible:(BOOL)arg1 ;
-(void)setDisplayedURL:(id)arg1 ;
-(void)_setStructuredPage:(id)arg1 ;
-(void)_reloadWithStorePageDictionary:(id)arg1 ;
-(void)_setViewController:(id*)arg1 toValue:(id)arg2 ;
-(void)_reloadTitle;
-(void)setMinimumPaneSize:(float)arg1 ;
-(void)_reloadLoadingState;
-(id)_newGradientWithValue:(id)arg1 ;
-(void)setSplitPositionAndLayoutTypeFromValue:(id)arg1 ;
-(void)setSplitTypeString:(id)arg1 ;
-(id)_newViewControllerFromDictionary:(id)arg1 ;
-(void)_reloadViewController:(id)arg1 fromDictionary:(id)arg2 ;
-(id)splitPositionString;
-(id)splitTypeString;
-(id)secondViewController;
@end

