/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CBPeripheralManagerDelegate <NSObject>
@optional
-(void)peripheralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;

@required
-(void)peripheralManagerDidUpdateState:(id)arg1;
@end

