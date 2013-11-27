/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIViewController.h>

@class SSAccount, NSArray, SSTermsAndConditions, UITextView;

@interface ASTermsViewController : SKUIViewController {

	SSAccount* _account;
	NSArray* _items;
	SSTermsAndConditions* _terms;
	UITextView* _textView;

}
-(id)initWithTerms:(id)arg1 account:(id)arg2 items:(id)arg3 ;
-(void)_agreeToTerms:(id)arg1 ;
-(void)_finishAfterAcceptingTerms;
-(void)_acceptTermsFailedWithError:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void).cxx_destruct;
@end

