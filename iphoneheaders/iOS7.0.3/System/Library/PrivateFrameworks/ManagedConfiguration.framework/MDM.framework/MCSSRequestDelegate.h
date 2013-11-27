/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSRequestDelegate.h>

@class SSRequest, NSTimer;

@interface MCSSRequestDelegate : NSObject <SSRequestDelegate> {

	SSRequest* _request;
	/*^block*/ id _completionBlock;
	NSTimer* _timeoutTimer;

}

@property (nonatomic,readonly) SSRequest * request;              //@synthesize request=_request - In the implementation block
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
-(id)request;
-(void)_timerDidFire:(id)arg1 ;
-(void)_startTimeout:(double)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void).cxx_destruct;
@end

