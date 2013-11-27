/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/KNSlideExporter.h>
#import <iWorkImport/TSKImageExporter.h>

@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>

@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) unsigned height; 
@property (assign,nonatomic) BOOL scaleToFit; 
-(id)p_renderingExporterDelegate;
-(BOOL)scaleToFit;
-(void)setScaleToFit:(BOOL)arg1 ;
-(unsigned)width;
-(void)setWidth:(unsigned)arg1 ;
-(unsigned)height;
-(void)setHeight:(unsigned)arg1 ;
-(void)setup;
@end

