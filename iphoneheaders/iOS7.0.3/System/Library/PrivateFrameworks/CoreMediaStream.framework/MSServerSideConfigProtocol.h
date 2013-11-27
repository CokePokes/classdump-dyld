/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MSServerSideConfigProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class , NSString, NSURL;

@interface MSServerSideConfigProtocol : NSObject {

	<MSServerSideConfigProtocolDelegate>* _delegate;
	NSString* _personID;
	NSURL* _configURL;
	MSSSCPCContext* _context;

}

@property (assign,nonatomic) <MSServerSideConfigProtocolDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                                        //@synthesize personID=_personID - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_didFailAuthenticationWithError:(id)arg1 ;
-(void)queryConfiguration;
-(void)_didFinishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)abort;
-(id)personID;
-(void).cxx_destruct;
@end

