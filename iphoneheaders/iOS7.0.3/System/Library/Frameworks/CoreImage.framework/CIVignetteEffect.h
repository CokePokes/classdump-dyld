/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIVignetteEffect : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputIntensity;
	NSNumber* inputFalloff;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
@property (nonatomic,retain) NSNumber * inputFalloff; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(BOOL)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputIntensity:(id)arg1 ;
-(id)_kernel;
-(id)inputIntensity;
-(void)setInputRadius:(id)arg1 ;
-(id)inputRadius;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputFalloff:(id)arg1 ;
-(id)inputFalloff;
@end

