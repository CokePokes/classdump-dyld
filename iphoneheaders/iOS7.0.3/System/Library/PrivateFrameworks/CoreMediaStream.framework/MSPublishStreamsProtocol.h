/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {

	MSPSPCContext* _context;
	NSArray* _assetCollectionsInFlight;
	MSPSPCUCContext* _UCContext;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)sendMetadataForAssetCollections:(id)arg1 ;
-(void)sendUploadCompleteForAssetCollections:(id)arg1 ;
-(id)_missingAssetFieldErrorWithFieldName:(id)arg1 ;
-(id)_metadataDictForAsset:(id)arg1 outError:(id*)arg2 ;
-(id)_metadataDictForAssetCollection:(id)arg1 outError:(id*)arg2 ;
-(void)_resetConnectionVariables;
-(BOOL)_insertInfoAboutAsset:(id)arg1 intoDictionary:(id)arg2 outError:(id*)arg3 ;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)_coreProtocolDidFinishUCResults:(id)arg1 error:(id)arg2 ;
-(void)abort;
-(void).cxx_destruct;
@end

