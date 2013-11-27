/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/lockdownd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
#import <lockdownd/lockdownd-Structs.h>
@class NSObject;

@interface watchedServiceInfo : NSObject {

	int _ourFD;
	int _theirPID;
	CFStringRef _hostID;
	CFStringRef _description;
	NSObject<OS_dispatch_source>* _procExitSource;
	unsigned long long _heartbeatRef;

}

@property (readonly) unsigned long long heartbeatRef;              //@synthesize heartbeatRef=_heartbeatRef - In the implementation block
+(int)processWatchCommand:(id)arg1 ;
-(void)logService:(const char*)arg1 ;
-(bool)hasHeartbeatRef:(unsigned long long)arg1 pid:(int)arg2 ;
-(id)initWithWatchCommand:(id)arg1 ;
-(unsigned long long)heartbeatRef;
-(void)dealloc;
-(id)description;
-(void)invalidate;
@end

