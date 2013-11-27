/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CLIntersiloServiceProtocol;
@class CLSilo, ;

@interface CLServiceVendorHeartbeatRecord : NSObject {

	int _synCount;
	int _ackCount;
	CLSilo* _silo;
	<CLIntersiloServiceProtocol>* _service;

}

@property (nonatomic,readonly) CLSilo * silo;                                       //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) <CLIntersiloServiceProtocol> * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) int synCount;                                        //@synthesize synCount=_synCount - In the implementation block
@property (nonatomic,readonly) int ackCount;                                        //@synthesize ackCount=_ackCount - In the implementation block
-(id)silo;
-(id)initTrackingService:(id)arg1 ;
-(void)syn;
-(void)ack;
-(id)service;
-(int)synCount;
-(int)ackCount;
-(void).cxx_destruct;
@end

