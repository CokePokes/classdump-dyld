/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUStorePageViewController.h>

@class SUMescalSession, NSString;

@interface SUAccountViewController : SUStorePageViewController {

	BOOL _failed;
	int _style;
	SUMescalSession* _mescalSession;
	int _mescalState;
	NSString* _primingSignature;

}

@property (assign,nonatomic) int style;                                                             //@synthesize style=_style - In the implementation block
@property (getter=_mescalSession,nonatomic,readonly) SUMescalSession * _mescalSession;              //@synthesize mescalSession=_mescalSession - In the implementation block
+(id)_latestAccountViewController;
-(void)dealloc;
-(id)init;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)copyArchivableContext;
-(void)enqueueFetchOperation;
-(id)newFetchOperation;
-(id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id*)arg3 ;
-(void)handleFailureWithError:(id)arg1 ;
-(id)_mescalSession;
-(id)_bagKeyForStyle:(int)arg1 ;
-(void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2 ;
-(id)_authenticationQueryParametersForStyle:(int)arg1 ;
-(id)initWithExternalAccountURL:(id)arg1 ;
-(void)_closeMescalSession;
@end

