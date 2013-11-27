/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUClientDelegate;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class SUClientInterface, , SUImageCache, ISURLOperationPool, NSLock, SUScriptExecutionContext, NSString;

@interface SUClient : NSObject {

	CFArrayRef _assetTypes;
	SUClientInterface* _clientInterface;
	<SUClientDelegate>* _delegate;
	BOOL _dontSaveNavigationPath;
	SUImageCache* _imageCache;
	ISURLOperationPool* _imagePool;
	NSLock* _lock;
	SUScriptExecutionContext* _scriptExecutionContext;

}

@property (readonly) SUClientInterface * clientInterface; 
@property (assign,nonatomic) <SUClientDelegate> * delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL dontSaveNavigationPath;                                      //@synthesize dontSaveNavigationPath=_dontSaveNavigationPath - In the implementation block
@property (nonatomic,retain) NSString * searchHintsURLBagKey; 
@property (nonatomic,retain) NSString * searchURLBagKey; 
@property (nonatomic,retain) SUImageCache * imageCache;                                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ISURLOperationPool * imagePool;                                   //@synthesize imagePool=_imagePool - In the implementation block
@property (nonatomic,readonly) SUScriptExecutionContext * scriptExecutionContext;              //@synthesize scriptExecutionContext=_scriptExecutionContext - In the implementation block
+(id)sharedClient;
+(id)viewControllerFactory;
+(id)imagePool;
+(void)setSharedClient:(id)arg1 ;
-(id)imageCache;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)clientInterface;
-(id)scriptExecutionContext;
-(id)initWithClientInterface:(id)arg1 ;
-(id)viewControllerFactory;
-(id)clientIdentifier;
-(void)setClientIdentifier:(id)arg1 ;
-(BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)imagePool;
-(void)setImageCache:(id)arg1 ;
-(void)setImagePool:(id)arg1 ;
-(BOOL)sendActionForDialog:(id)arg1 button:(id)arg2 ;
-(id)queueSessionManager;
-(void)setQueueSessionManager:(id)arg1 ;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_memoryWarningNotification:(id)arg1 ;
-(BOOL)dismissTopViewControllerAnimated:(BOOL)arg1 ;
-(id)_newComposeReviewViewControllerForButtonAction:(id)arg1 ;
-(id)_newAccountViewControllerForButtonAction:(id)arg1 ;
-(BOOL)openInternalURL:(id)arg1 ;
-(void)setViewControllerFactory:(id)arg1 ;
-(void)_purgeCaches;
-(void)_reloadScriptExecutionContext;
-(CFArrayRef)assetTypes;
-(BOOL)openExternalURL:(id)arg1 ;
-(BOOL)openURL:(id)arg1 inClientApplication:(id)arg2 ;
-(id)searchHintsURLBagKey;
-(id)searchURLBagKey;
-(void)setAssetTypes:(CFArrayRef)arg1 ;
-(void)setSearchHintsURLBagKey:(id)arg1 ;
-(void)setSearchURLBagKey:(id)arg1 ;
-(BOOL)_presentModalViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)dontSaveNavigationPath;
-(void)setDontSaveNavigationPath:(BOOL)arg1 ;
@end

