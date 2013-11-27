/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MSStreamsProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class , NSString, NSURL;

@interface MSStreamsProtocol : NSObject {

	<MSStreamsProtocolDelegate>* _delegate;
	NSString* _personID;

}

@property (assign,nonatomic) <MSStreamsProtocolDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                               //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) NSURL * putURL; 
@property (nonatomic,readonly) NSURL * getURL; 
@property (nonatomic,readonly) NSURL * resetURL; 
@property (nonatomic,readonly) NSURL * reauthorizeURL; 
@property (nonatomic,readonly) NSURL * uploadCompleteURL; 
@property (nonatomic,readonly) NSURL * deleteURL; 
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(id)deviceInfoDict;
-(void)_refreshAuthTokenForContext:(_MSSPCContext*)arg1 ;
-(id)putURL;
-(id)uploadCompleteURL;
-(void)_didFindServerSideConfigurationVersion:(id)arg1 ;
-(void)_didReceiveRetryAfterDate:(id)arg1 ;
-(id)getURL;
-(id)resetURL;
-(id)reauthorizeURL;
-(id)deleteURL;
-(void)abort;
-(id)personID;
-(void).cxx_destruct;
@end

