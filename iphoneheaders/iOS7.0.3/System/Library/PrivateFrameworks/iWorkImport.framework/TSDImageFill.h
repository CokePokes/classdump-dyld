/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSSPreset.h>
#import <iWorkImport/TSSPresetSource.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@protocol OS_dispatch_queue;
@class TSPData, TSUColor, TSUFlushableCachedImage, NSObject, NSString;

@interface TSDImageFill : TSDFill <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying> {

	TSPData* mImageData;
	TSPData* mOriginalImageData;
	int mTechnique;
	TSUColor* mTintColor;
	TSUFlushableCachedImage* mStandardSizeTintedImage;
	TSUFlushableCachedImage* mHalfSizeTintedImage;
	TSUFlushableCachedImage* mQuarterSizeTintedImage;
	TSUColor* mReferenceColor;
	CGSize mFillSize;
	BOOL mHasIndicatedInterestInProvider;
	NSObject<OS_dispatch_queue>* mTempRenderLock;
	CGImageRef mTempRenderCopy;
	CGImageRef mSourceOfTempRenderCopy;
	int mTempRenderCount;

}

@property (nonatomic,readonly) TSPData * imageData; 
@property (nonatomic,readonly) TSPData * originalImageData; 
@property (assign,nonatomic) int technique; 
@property (nonatomic,readonly) CGSize fillSize; 
@property (nonatomic,readonly) TSUColor * tintColor; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,readonly) NSString * presetKind; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)presetKind;
-(SEL)mapThemeAssetSelector;
-(CGSize)fillSize;
-(id)initWithImageData:(id)arg1 technique:(int)arg2 tintColor:(id)arg3 size:(CGSize)arg4 originalImageData:(id)arg5 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(id)originalImageData;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(void)p_paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)drawsInOneStep;
-(CGSize)renderedImageSizeForObjectSize:(CGSize)arg1 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 forShapeRep:(id)arg2 inContext:(CGContextRef)arg3 ;
-(void)applyToCALayer:(id)arg1 withScale:(float)arg2 ;
-(BOOL)canApplyToCALayer;
-(id)p_validatedImageProvider;
-(void)p_setFillSizeForApplicationData;
-(id)p_standardSizeCachedImage;
-(BOOL)p_shouldApplyTintedImage;
-(id)p_quarterSizeCachedImage;
-(id)p_halfSizeCachedImage;
-(BOOL)canApplyToCALayerByAddingSublayers;
-(id)p_cachedImageForSize:(CGSize)arg1 inContext:(CGContextRef)arg2 orLayer:(id)arg3 ;
-(CGRect)p_drawnRectForImageSize:(CGSize)arg1 destRect:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(CGSize)p_sizeOfFillImageForDestRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)p_drawBitmapImage:(CGImageRef)arg1 withOrientation:(int)arg2 inContext:(CGContextRef)arg3 bounds:(CGRect)arg4 ;
-(void)p_drawPDFWithProvider:(id)arg1 inContext:(CGContextRef)arg2 bounds:(CGRect)arg3 ;
-(CGImageRef)p_newTintedImageWithScale:(float)arg1 ;
-(CGImageRef)p_newStandardSizeImage;
-(CGImageRef)p_newHalfSizeImage;
-(CGImageRef)p_newQuarterSizeImage;
-(id)imageDataAtFillSize;
-(BOOL)shouldBeReappliedToCALayer:(id)arg1 ;
-(BOOL)p_shouldPersistFillSizeForData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(float)scale;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isOpaque;
-(id)tintColor;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)imageData;
-(int)technique;
-(void)setTechnique:(int)arg1 ;
-(int)fillType;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)referenceColor;
@end

