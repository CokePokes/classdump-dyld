/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporterDelegate.h>

@class TSARenderingExporter, NSString;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter* mRenderingExporter;
	NSString* mPassphraseOpen;
	NSString* mPassphrasePrintCopy;
	BOOL mRequireOpenPassword;
	BOOL mRequireCopyPassword;
	BOOL mRequirePrintPassword;
	int mRenderingQuality;

}
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(float)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(int)renderingQuality;
-(id)initWithRenderingExporter:(id)arg1 ;
-(void)setRenderingQuality:(int)arg1 ;
-(void)dealloc;
-(void)teardown;
-(void)setup;
@end

