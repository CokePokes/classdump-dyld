/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol XMLRPCEncoder;
@class NSMutableURLRequest, ;

@interface XMLRPCRequest : NSObject {

	NSMutableURLRequest* myRequest;
	<XMLRPCEncoder>* myXMLEncoder;

}
-(void)setMethod:(id)arg1 withParameters:(id)arg2 ;
-(id)initWithURL:(id)arg1 withEncoder:(id)arg2 ;
-(void)setEncoder:(id)arg1 ;
-(void)setMethod:(id)arg1 withParameter:(id)arg2 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)dealloc;
-(id)body;
-(id)URL;
-(id)request;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)method;
-(void)setUserAgent:(id)arg1 ;
-(id)parameters;
-(void)setMethod:(id)arg1 ;
-(id)userAgent;
@end

