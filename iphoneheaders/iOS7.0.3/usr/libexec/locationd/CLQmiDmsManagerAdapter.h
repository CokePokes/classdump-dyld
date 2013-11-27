/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLIntersiloService.h>
#import <locationd/CLQmiDmsManagerProtocol.h>

@interface CLQmiDmsManagerAdapter : CLIntersiloService <CLQmiDmsManagerProtocol> {

	CLQmiDmsManager* _manager;

}

@property (assign,nonatomic) CLQmiDmsManager* manager;              //@synthesize manager=_manager - In the implementation block
+(id)getSilo;
-(void)enablePingTimer:(BOOL)arg1 ;
-(void)releaseClient;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
-(void)start;
-(void)stop;
-(CLQmiDmsManager*)manager;
-(void)setManager:(CLQmiDmsManager*)arg1 ;
@end

