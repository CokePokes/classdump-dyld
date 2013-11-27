/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKSearchCompleter.h>

@class NSArray, NSTimer, GEOSearchRequest;

@interface MKLocalSearchCompleter : MKSearchCompleter {

	double _lastRequestTime;
	BOOL _dirty;
	NSArray* _results;
	NSTimer* _timer;
	GEOSearchRequest* _request;
	int _source;

}
+(void)initialize;
-(BOOL)isSearching;
-(void)setFragment:(id)arg1 ;
-(BOOL)resultsAreCurrent;
-(void)setBoundingRegion:(SCD_Struct_MK2)arg1 ;
-(void)_handleResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)_schedulePendingRequest;
-(void)_handleError:(id)arg1 forRequest:(id)arg2 ;
-(void)_cancelTimer;
-(void)_scheduleRequest;
-(void)_fireRequest;
-(void)_markDirty;
-(void)_cancelRequest;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(int)source;
-(void)setSource:(int)arg1 ;
-(id)results;
-(void)retry;
@end

