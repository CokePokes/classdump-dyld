/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKit/SKStoreProductViewControllerDelegate.h>

@class SSLookupRequest, NSMutableSet, NSURL, NSString;

@interface BusinessPortalController : NSObject <SKStoreProductViewControllerDelegate> {

	BOOL _loading;
	SSLookupRequest* _storeRequest;
	NSMutableSet* _loadingCompletionHandlers;
	NSURL* _storeURL;

}

@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * actionText; 
@property (nonatomic,retain) SSLookupRequest * storeRequest;              //@synthesize storeRequest=_storeRequest - In the implementation block
@property (nonatomic,copy) NSURL * storeURL;                              //@synthesize storeURL=_storeURL - In the implementation block
-(BOOL)canOpenPortalForAction:(int)arg1 business:(id)arg2 ;
-(void)fetchPortalAvailabilityWithCompletion:(/*^block*/ id)arg1 ;
-(void)presentPortalForAction:(int)arg1 business:(id)arg2 fromViewController:(id)arg3 ;
-(id)actionText;
-(id)_URLForOpeningPortal;
-(id)_localizedTextForNetworkDefaultsKey:(id)arg1 ;
-(BOOL)_networkDefaultsAllowShowing;
-(BOOL)_canOpenAppDirectly;
-(void)_refreshWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)_openPortalWithURL:(id)arg1 ;
-(void)_presentPortalWithURL:(id)arg1 fromViewController:(id)arg2 ;
-(id)_portalURLForAction:(int)arg1 business:(id)arg2 ;
-(BOOL)openPortal;
-(void)presentPortalFromViewController:(id)arg1 ;
-(BOOL)openPortalForAction:(int)arg1 business:(id)arg2 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)setStoreRequest:(id)arg1 ;
-(id)storeRequest;
-(id)_bundleIdentifier;
-(id)storeURL;
-(void)dealloc;
-(id)_URLScheme;
-(id)titleText;
-(void)setStoreURL:(id)arg1 ;
@end

