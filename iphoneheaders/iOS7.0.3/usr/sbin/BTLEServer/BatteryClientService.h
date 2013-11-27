/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BTLEServer/ClientService.h>

@class CBCharacteristic;

@interface BatteryClientService : ClientService {

	CBCharacteristic* _batteryLevel;

}
-(id)initWithManager:(id)arg1 peripheral:(id)arg2 service:(id)arg3 ;
-(void)dealloc;
-(void)start;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
@end

