/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GEOSearchAttributionServerProxy.h>

@class NSMapTable, NSMutableArray;

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy> {

	NSMapTable* _listeners;
	BOOL _updatingManifest;
	NSMutableArray* _updateManifestCompletionHandlers;
	NSMutableArray* _updateManifestErrorHandlers;

}
-(void)dealloc;
-(id)init;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/ id)arg3 errorHandler:(/*^block*/ id)arg4 ;
-(void)_pruneOldAttributionLogos;
-(void)_sendInfo:(id)arg1 updatedManifest:(BOOL)arg2 toListener:(id)arg3 ;
-(void)_sendError:(id)arg1 toListener:(id)arg2 ;
-(void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(BOOL)arg2 ;
-(void)_updateManifestWithCompletionHandler:(/*^block*/ id)arg1 errorHandler:(/*^block*/ id)arg2 ;
@end

