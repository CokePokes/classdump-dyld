/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <iWorkImport/TSDMixing.h>

@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing> {

	float mExposure;
	float mSaturation;
	float mContrast;
	float mHighlights;
	float mShadows;
	float mSharpness;
	float mDenoise;
	float mTemperature;
	float mTint;
	float mBottomLevel;
	float mTopLevel;
	float mGamma;
	BOOL mEnhance;

}

@property (nonatomic,readonly) float exposure; 
@property (nonatomic,readonly) float saturation; 
@property (nonatomic,readonly) float contrast; 
@property (nonatomic,readonly) float highlights; 
@property (nonatomic,readonly) float shadows; 
@property (nonatomic,readonly) float sharpness; 
@property (nonatomic,readonly) float denoise; 
@property (nonatomic,readonly) float temperature; 
@property (nonatomic,readonly) float tint; 
@property (nonatomic,readonly) float bottomLevel; 
@property (nonatomic,readonly) float topLevel; 
@property (nonatomic,readonly) float gamma; 
@property (nonatomic,readonly) BOOL enhance; 
-(void)saveToArchive:(ImageAdjustmentsArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ImageAdjustmentsArchive*)arg1 unarchiver:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(id)imageAdjustmentsWithoutEnhance;
-(BOOL)enhance;
-(float)bottomLevel;
-(float)topLevel;
-(float)exposure;
-(float)highlights;
-(float)denoise;
-(void)i_initFromDefaultArchive;
-(float)saturation;
-(float)sharpness;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)contrast;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(float)shadows;
-(float)tint;
-(float)gamma;
-(float)temperature;
@end

