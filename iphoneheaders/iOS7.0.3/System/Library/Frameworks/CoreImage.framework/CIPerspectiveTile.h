/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveTile : CIFilter {

	CIImage* inputImage;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputTopLeft; 
@property (nonatomic,retain) CIVector * inputTopRight; 
@property (nonatomic,retain) CIVector * inputBottomRight; 
@property (nonatomic,retain) CIVector * inputBottomLeft; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputBottomLeft:(id)arg1 ;
-(void)setInputBottomRight:(id)arg1 ;
-(void)setInputTopRight:(id)arg1 ;
-(void)setInputTopLeft:(id)arg1 ;
-(id)inputTopLeft;
-(id)inputTopRight;
-(id)inputBottomRight;
-(id)inputBottomLeft;
@end

