/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIViewController.h>

@class SKUIApplicationLicensePage, SSVLoadURLOperation, NSURL, UIWebView;

@interface SKUIApplicationLicenseViewController : SKUIViewController {

	SKUIApplicationLicensePage* _licensePage;
	SSVLoadURLOperation* _loadOperation;
	NSURL* _url;
	UIWebView* _webView;

}
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)initWithLicenseAgreementURL:(id)arg1 ;
-(void)_displayPage:(id)arg1 error:(id)arg2 ;
-(id)initWithLicenseAgreementPage:(id)arg1 ;
-(void).cxx_destruct;
@end

