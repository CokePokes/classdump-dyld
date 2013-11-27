/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GEOTileRequester.h>

@class NSMutableArray, NSMutableSet;

@interface MKTileOverlayRequester : GEOTileRequester {

	BOOL _cancelled;
	NSMutableArray* _waiting;
	NSMutableSet* _running;
	NSMutableArray* _errors;

}
+(unsigned)registerOverlay:(id)arg1 ;
+(void)unregisterOverlay:(unsigned)arg1 ;
+(unsigned char)tileProviderIdentifier;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(BOOL)isRunning;
-(void)_cleanup;
-(void)_doWorkOrFinish;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)_operationFinished:(id)arg1 ;
@end

