/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation, NSArray;

@interface RadioGetTracksRequest : RadioRequest {

	unsigned long long _globalVersion;
	BOOL _includeCleanTracksOnly;
	unsigned _numberOfTracks;
	BOOL _replaceExistingTracks;
	SSURLConnectionRequest* _request;
	RadioStation* _station;
	/*^block*/ id _storeIdentifiersBlock;
	NSArray* _tracksToRemove;

}

@property (nonatomic,copy) id storeIdentifiersBlock;                   //@synthesize storeIdentifiersBlock=_storeIdentifiersBlock - In the implementation block
@property (assign,nonatomic) unsigned numberOfTracks;                  //@synthesize numberOfTracks=_numberOfTracks - In the implementation block
@property (assign,nonatomic) BOOL includeCleanTracksOnly;              //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (assign,nonatomic) BOOL replaceExistingTracks;               //@synthesize replaceExistingTracks=_replaceExistingTracks - In the implementation block
@property (nonatomic,copy) NSArray * tracksToRemove;                   //@synthesize tracksToRemove=_tracksToRemove - In the implementation block
-(void)setIncludeCleanTracksOnly:(BOOL)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(void)startWithGetTracksCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setNumberOfTracks:(unsigned)arg1 ;
-(void)setStoreIdentifiersBlock:(/*^block*/ id)arg1 ;
-(id)init;
-(void)cancel;
-(BOOL)includeCleanTracksOnly;
-(/*^block*/ id)storeIdentifiersBlock;
-(unsigned)numberOfTracks;
-(BOOL)replaceExistingTracks;
-(void)setReplaceExistingTracks:(BOOL)arg1 ;
-(id)tracksToRemove;
-(void)setTracksToRemove:(id)arg1 ;
-(void).cxx_destruct;
@end

