/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
@required
-(oneway void)serverProxyDidChangeActiveTileGroup:(id)arg1 finishedCallback:(/*^block*/ id)arg2;
-(oneway void)serverProxyWillStartUpdatingResourceManifest;
-(oneway void)serverProxyDidStopUpdatingResourceManifest;
-(oneway void)serverProxyWillStartLoadingResources;
-(oneway void)serverProxyDidStopLoadingResources;
@end

