/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSLock, GEOProxyClient, NSMutableSet;

@interface GEOProxyClientRegistry : NSObject {

	NSLock* _lock;
	GEOProxyClient* _currentComposite;
	NSMutableSet* _currentSet;

}
+(id)sharedRegistry;
-(void)dealloc;
-(void)_updateComposite;
-(void)enableRegistry;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id)compositeClient;
@end

