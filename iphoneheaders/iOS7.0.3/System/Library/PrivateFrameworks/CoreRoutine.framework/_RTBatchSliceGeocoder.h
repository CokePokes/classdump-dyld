/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_semaphore;
#import <CoreRoutine/CoreRoutine-Structs.h>
@class GEOBatchReverseGeocodeRequest, NSObject, NSMutableArray;

@interface _RTBatchSliceGeocoder : NSObject {

	GEOBatchReverseGeocodeRequest* _batchRequest;
	NSObject<OS_dispatch_semaphore>* _semaphore;
	NSMutableArray* _placeResults;
	NSRange _range;

}

@property (nonatomic,retain) GEOBatchReverseGeocodeRequest * batchRequest;              //@synthesize batchRequest=_batchRequest - In the implementation block
@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_semaphore> * semaphore;               //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeResults;                             //@synthesize placeResults=_placeResults - In the implementation block
-(void)dealloc;
-(id)init;
-(void)cancel;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)_cancelRequest:(id)arg1 ;
-(void)setSemaphore:(id)arg1 ;
-(void)setBatchRequest:(id)arg1 ;
-(id)batchRequest;
-(id)semaphore;
-(void)geocodeLocations:(id)arg1 ;
-(void)setPlaceResults:(id)arg1 ;
-(id)placeResults;
-(void).cxx_destruct;
@end

