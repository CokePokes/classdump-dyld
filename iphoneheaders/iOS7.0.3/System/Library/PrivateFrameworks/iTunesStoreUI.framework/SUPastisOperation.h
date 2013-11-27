/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSURL, AVAssetResourceLoadingRequest;

@interface SUPastisOperation : ISOperation {

	NSURL* _certificateUrl;
	NSURL* _keyUrl;
	AVAssetResourceLoadingRequest* _loadingRequest;

}

@property (nonatomic,retain) AVAssetResourceLoadingRequest * loadingRequest;              //@synthesize loadingRequest=_loadingRequest - In the implementation block
@property (nonatomic,retain) NSURL * keyURL;                                              //@synthesize keyUrl=_keyUrl - In the implementation block
@property (nonatomic,retain) NSURL * certificateURL;                                      //@synthesize certificateUrl=_certificateUrl - In the implementation block
-(void)dealloc;
-(void)run;
-(id)_getURIWithError:(id*)arg1 ;
-(id)_getAppCertWithError:(id*)arg1 ;
-(id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id*)arg3 ;
-(id)certificateURL;
-(void)setCertificateURL:(id)arg1 ;
-(id)keyURL;
-(void)setKeyURL:(id)arg1 ;
-(id)loadingRequest;
-(void)setLoadingRequest:(id)arg1 ;
@end

