/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameKitServices/GameKitServices-Structs.h>
#import <GameKitServices/GKTableCleanupWhenRemoved.h>

@class NSString, GKSessionInternal;

@interface GKPeerInternal : NSObject <GKTableCleanupWhenRemoved> {

	unsigned _pid;
	NSString* _displayName;
	NSString* _serviceName;
	BOOL _isBusy;
	GKSessionInternal* _session;
	int _serviceCount;
	DNSServiceRef_tRef _resolveService;
	DNSServiceRef_tRef _txtRecordService;
	id* _addrList;
	unsigned* _interfaceList;
	unsigned _servicePort;
	DNSServiceRef_t* _lookupServiceList;
	int _lookupServiceCount;
	int _lookupServiceSize;
	BOOL _moreResolvesComing;
	double _connectTimeout;
	BOOL _needsToTimeout;

}

@property (readonly) unsigned pid;                                     //@synthesize pid=_pid - In the implementation block
@property (readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (getter=isBusy) BOOL busy;                                   //@synthesize isBusy=_isBusy - In the implementation block
@property (assign) int serviceCount;                                   //@synthesize serviceCount=_serviceCount - In the implementation block
@property (assign) DNSServiceRef_tRef resolveService;                  //@synthesize resolveService=_resolveService - In the implementation block
@property (assign) DNSServiceRef_tRef txtRecordService;                //@synthesize txtRecordService=_txtRecordService - In the implementation block
@property (assign) unsigned servicePort;                               //@synthesize servicePort=_servicePort - In the implementation block
@property (assign) BOOL moreResolvesComing;                            //@synthesize moreResolvesComing=_moreResolvesComing - In the implementation block
@property (nonatomic,retain) GKSessionInternal * session;              //@synthesize session=_session - In the implementation block
@property (assign) double connectTimeout;                              //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign) BOOL needsToTimeout;                                //@synthesize needsToTimeout=_needsToTimeout - In the implementation block
+(void)freeLookupList:(DNSServiceRef_t*)arg1 andAddrList:(id*)arg2 andInterfaceList:(unsigned*)arg3 count:(int)arg4 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(id)serviceName;
-(void)dealloc;
-(id)displayName;
-(unsigned)pid;
-(void)cleanupForGKTable:(id)arg1 ;
-(BOOL)tryDetruncateDisplayName:(id)arg1 ;
-(void)clearResolving;
-(void)setNeedsToTimeout:(BOOL)arg1 ;
-(void)stopResolving;
-(void)stopTXTRecordMonitoring;
-(double)connectTimeout;
-(BOOL)needsToTimeout;
-(void)setConnectTimeout:(double)arg1 ;
-(void)setResolveService:(DNSServiceRef_tRef)arg1 ;
-(void)setBusy:(BOOL)arg1 ;
-(int)serviceCount;
-(void)setServiceCount:(int)arg1 ;
-(id)initWithPID:(unsigned)arg1 displayName:(id)arg2 serviceName:(id)arg3 ;
-(void)setTxtRecordService:(DNSServiceRef_tRef)arg1 ;
-(int)usableAddrs;
-(void)removeAndReturnLookupList:(DNSServiceRef_t*)arg1 andAddrList:(id*)arg2 andInterfaceList:(unsigned*)arg3 count:(int*)arg4 ;
-(BOOL)containsLookupService:(DNSServiceRef_tRef)arg1 ;
-(void)setAddr:(const sockaddr_in*)arg1 interface:(unsigned)arg2 forLookupService:(DNSServiceRef_tRef)arg3 ;
-(DNSServiceRef_tRef)resolveService;
-(void)setServicePort:(unsigned)arg1 ;
-(void)addLookup:(DNSServiceRef_tRef)arg1 ;
-(void)copyLookupList:(DNSServiceRef_t*)arg1 count:(int*)arg2 ;
-(DNSServiceRef_tRef)txtRecordService;
-(unsigned)servicePort;
-(BOOL)moreResolvesComing;
-(void)setMoreResolvesComing:(BOOL)arg1 ;
-(BOOL)isBusy;
@end

