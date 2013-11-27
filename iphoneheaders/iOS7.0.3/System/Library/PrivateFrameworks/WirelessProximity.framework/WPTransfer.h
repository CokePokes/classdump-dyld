/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPTransferDelegate, OS_dispatch_queue;
@class , NSObject, XPCClient;

@interface WPTransfer : NSObject <XPCClientDelegate> {

	int _advertiserState;
	int _scannerState;
	<WPTransferDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _queue;
	XPCClient* _connection;

}

@property (assign) int advertiserState;                              //@synthesize advertiserState=_advertiserState - In the implementation block
@property (assign) int scannerState;                                 //@synthesize scannerState=_scannerState - In the implementation block
@property (__weak) <WPTransferDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) XPCClient * connection;                           //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)stopScan;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void)stopAdvertising;
-(int)scannerState;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startScan;
-(int)advertiserState;
-(void)startAdvertising;
-(void).cxx_destruct;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)connectionInterrupted;
-(id)stateToString:(int)arg1 ;
-(void)updateAdvertiserState:(int)arg1 ;
-(void)updateScannerState:(int)arg1 ;
-(void)setScannerState:(int)arg1 ;
-(void)setAdvertiserState:(int)arg1 ;
@end

