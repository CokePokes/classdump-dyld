/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSString, NSURLConnection, NSObject, NSMutableData, NSURLResponse, NSError, NSURLRequest;

@interface LakituRequest : NSObject <NSURLConnectionDataDelegate> {

	NSString* _urlString;
	NSString* _dsid;
	NSString* _authToken;
	NSURLConnection* conn;
	NSObject<OS_dispatch_semaphore>* connLock;
	NSMutableData* connData;
	NSURLResponse* connResponse;
	NSError* connError;
	NSString* dsid;
	NSString* authToken;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (nonatomic,retain) NSString * dsid; 
@property (nonatomic,retain) NSString * authToken; 
+(id)protocolVersion;
+(Class)responseClass;
-(id)performRequestWithError:(id*)arg1 ;
-(void)connectionThread:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setDsid:(id)arg1 ;
-(id)urlString;
-(id)urlRequest;
-(id)redactedBodyStringWithPropertyList:(id)arg1 ;
-(id)initWithURLString:(id)arg1 ;
-(id)urlCredential;
-(id)bodyDictionary;
-(void).cxx_destruct;
-(id)dsid;
-(void)performRequestWithHandler:(/*^block*/ id)arg1 ;
@end

