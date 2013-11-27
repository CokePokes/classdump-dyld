/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NDCallbackQueueDelegate;
@class NSMutableArray, ;

@interface NDCallbackQueue : NSObject {

	NSMutableArray* _callbacks;
	<NDCallbackQueueDelegate>* _delegate;

}

@property (__weak) <NDCallbackQueueDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addPendingCallback:(id)arg1 forceWakeup:(BOOL)arg2 ;
-(void)addPendingCallbackToFront:(id)arg1 ;
-(void)performAllCallbacks;
-(void)performCallback:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(unsigned)count;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void).cxx_destruct;
@end

