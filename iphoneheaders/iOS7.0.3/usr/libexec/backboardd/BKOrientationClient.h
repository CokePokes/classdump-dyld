/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface BKOrientationClient : NSObject {

	unsigned _port;
	double _updateInterval;
	BOOL _wantsOrientationEvents;
	double _lastUpdateTime;

}

@property (nonatomic,readonly) unsigned port;                          //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) double updateInterval;                    //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) BOOL wantsOrientationEvents;              //@synthesize wantsOrientationEvents=_wantsOrientationEvents - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                    //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
-(void)setWantsOrientationEvents:(BOOL)arg1 ;
-(BOOL)wantsOrientationEvents;
-(double)lastUpdateTime;
-(void)setLastUpdateTime:(double)arg1 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(id)initWithPort:(unsigned)arg1 ;
-(unsigned)port;
@end

