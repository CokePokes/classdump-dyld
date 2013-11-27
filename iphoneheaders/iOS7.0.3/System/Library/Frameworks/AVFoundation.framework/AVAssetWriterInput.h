/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInputInternal, NSString, NSDictionary, NSArray, AVOutputSettings, AVWeakReference, AVAssetWriterInputHelper;

@interface AVAssetWriterInput : NSObject {

	AVAssetWriterInputInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (nonatomic,copy) NSArray * metadata; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) BOOL readyForMoreMediaData; 
@property (assign,nonatomic) BOOL expectsMediaDataInRealTime; 
@property (getter=_outputSettingsObject,nonatomic,readonly) AVOutputSettings * outputSettingsObject; 
@property (setter=_setWeakReferenceToAssetWriter:,getter=_weakReferenceToAssetWriter,nonatomic,retain) AVWeakReference * weakReferenceToAssetWriter; 
@property (getter=_trackID,nonatomic,readonly) int trackID; 
@property (assign,setter=_setAlternateGroupID:,getter=_alternateGroupID,nonatomic) short alternateGroupID; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (setter=_setHelper:,getter=_helper,nonatomic,retain) AVAssetWriterInputHelper * helper; 
@property (getter=_status,nonatomic,readonly) int status; 
@property (setter=_setSourcePixelBufferAttributes:,getter=_sourcePixelBufferAttributes,nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (getter=_pixelBufferPool,nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (assign,setter=_setAttachedToPixelBufferAdaptor:,getter=_isAttachedToPixelBufferAdaptor,nonatomic) BOOL attachedToPixelBufferAdaptor; 
@property (readonly) int numberOfAppendFailures; 
+(id)keyPathsForValuesAffectingStatus;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
+(id)keyPathsForValuesAffectingReadyForMoreMediaData;
+(void)initialize;
-(float)preferredVolume;
-(id)extendedLanguageTag;
-(id)_trackReferences;
-(int)_status;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)_outputSettingsObject;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(short)_alternateGroupID;
-(BOOL)expectsMediaDataInRealTime;
-(BOOL)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(int)_trackID;
-(void)_prepareToEndSession;
-(BOOL)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)_transitionToTerminalStatus:(int)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(BOOL)marksOutputTrackAsEnabled;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(BOOL)arg1 ;
-(id)_sourcePixelBufferAttributes;
-(int)numberOfAppendFailures;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)_setHelper:(id)arg1 ;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)markAsFinished;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(BOOL)_isAttachedToPixelBufferAdaptor;
-(void)_setAttachedToPixelBufferAdaptor:(BOOL)arg1 ;
-(BOOL)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(id)_helper;
-(void)dealloc;
-(int)layer;
-(id)init;
-(id)description;
-(void)setLayer:(int)arg1 ;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)languageCode;
-(CGSize)naturalSize;
-(id)outputSettings;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(id)mediaType;
-(void)setLanguageCode:(id)arg1 ;
-(void)finalize;
@end

