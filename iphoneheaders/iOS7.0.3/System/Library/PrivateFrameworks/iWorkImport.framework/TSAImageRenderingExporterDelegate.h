/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporterDelegate.h>

@protocol TSKImageExporter;
@class TSARenderingExporter, NSURL, NSString;

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter<TSKImageExporter>* mRenderingExporter;
	unsigned mWidth;
	unsigned mHeight;
	BOOL mScaleToFit;
	NSURL* mURL;
	NSString* mImageType;
	float mCompressionFactor;

}

@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) unsigned height; 
@property (assign,nonatomic) BOOL scaleToFit; 
@property (nonatomic,retain) NSString * imageType; 
@property (assign,nonatomic) float compressionFactor; 
-(float)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(id)initWithRenderingExporter:(id)arg1 ;
-(id)imageType;
-(float)compressionFactor;
-(BOOL)scaleToFit;
-(void)setScaleToFit:(BOOL)arg1 ;
-(void)setImageType:(id)arg1 ;
-(void)setCompressionFactor:(float)arg1 ;
-(unsigned)width;
-(void)setWidth:(unsigned)arg1 ;
-(unsigned)height;
-(void)setHeight:(unsigned)arg1 ;
-(void)teardown;
-(void)setup;
@end

