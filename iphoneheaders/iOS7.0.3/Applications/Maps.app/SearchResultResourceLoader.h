/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSMapTable, ACAccountStore, ACAccountCredential, OAURLRequestSigner;

@interface SearchResultResourceLoader : NSObject <NSURLConnectionDelegate> {

	NSMapTable* _requestsForURLs;
	NSMapTable* _connectionsForURLs;
	NSMapTable* _dataForConnections;
	BOOL _hasCheckedYelpAccountCredentials;
	ACAccountStore* _accountStore;
	ACAccountCredential* _yelpAccountCredentials;
	OAURLRequestSigner* _signer;

}

@property (nonatomic,readonly) BOOL canPersonalizeYelpDetails; 
@property (nonatomic,readonly) OAURLRequestSigner * signer; 
@property (nonatomic,readonly) ACAccountCredential * yelpAccountCredentials; 
+(id)sharedInstance;
-(void)cancelRequestsForSearchResult:(id)arg1 ;
-(void)sendImageRequest:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)sendURLRequest:(id)arg1 ;
-(void)handleConnection:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(id)yelpAccountCredentials;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)sendDealRequest:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)sendReviewsRequest:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(BOOL)canPersonalizeYelpDetails;
-(id)accountStore;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)signer;
@end

