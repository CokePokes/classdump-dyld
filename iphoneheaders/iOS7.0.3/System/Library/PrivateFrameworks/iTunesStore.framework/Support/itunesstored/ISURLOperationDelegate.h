/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ISURLOperationDelegate <ISOperationDelegate>
@optional
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2;
-(id)operation:(id)arg1 needNewBodyStream:(id)arg2;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3;
-(void)operation:(id)arg1 willSendRequest:(id)arg2;
-(BOOL)operation:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2;
@end

