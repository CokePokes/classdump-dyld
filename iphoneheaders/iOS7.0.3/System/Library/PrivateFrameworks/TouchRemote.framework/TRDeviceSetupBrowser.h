/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TRTransferBrowserDelegate.h>

@protocol TRDeviceSetupBrowserDelegate;
@class TRTransferBrowser, TRDeviceSetupPeripheral, ;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate> {

	TRTransferBrowser* _transferBrowser;
	TRDeviceSetupPeripheral* _peripheral;
	<TRDeviceSetupBrowserDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <TRDeviceSetupBrowserDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int state; 
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)state;
-(void)start;
-(void)stop;
-(id)browserDidStartTransfer:(id)arg1 ;
-(void)browserDidDisconnect:(id)arg1 ;
-(id)browser:(id)arg1 didReceiveData:(id)arg2 ;
-(void)browserDidChangeState:(id)arg1 ;
-(void).cxx_destruct;
@end

