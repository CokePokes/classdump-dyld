/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputOrigI;
	NSNumber* inputOrigQ;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOrigI; 
@property (nonatomic,retain) NSNumber * inputOrigQ; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(BOOL)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputOrigI:(id)arg1 ;
-(void)setInputOrigQ:(id)arg1 ;
-(void)setInputStrength:(id)arg1 ;
-(void)setInputWarmth:(id)arg1 ;
-(id)inputOrigI;
-(id)inputOrigQ;
-(id)inputStrength;
-(id)inputWarmth;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
@end

