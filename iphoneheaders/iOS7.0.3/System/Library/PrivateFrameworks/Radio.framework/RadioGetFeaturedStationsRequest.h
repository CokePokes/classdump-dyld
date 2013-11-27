/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest;

@interface RadioGetFeaturedStationsRequest : RadioRequest {

	NSObject<OS_dispatch_queue>* _artworkQueue;
	SSURLConnectionRequest* _request;
	unsigned _stationCount;
	BOOL _disableArtworkLoading;
	BOOL _disableCachedResponses;

}

@property (assign,nonatomic) BOOL disableArtworkLoading;               //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) BOOL disableCachedResponses;              //@synthesize disableCachedResponses=_disableCachedResponses - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)init;
-(void)cancel;
-(void)setDisableArtworkLoading:(BOOL)arg1 ;
-(BOOL)disableArtworkLoading;
-(id)initWithStationCount:(unsigned)arg1 ;
-(id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(BOOL)arg3 ;
-(void)startWithFeaturedStationsCompletionHandler:(/*^block*/ id)arg1 ;
-(id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableCachedResponses;
-(void)setDisableCachedResponses:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

