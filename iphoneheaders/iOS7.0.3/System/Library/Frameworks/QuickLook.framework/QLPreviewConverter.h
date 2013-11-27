/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class QLPreviewParts, NSDictionary, NSString, NSURLRequest, NSURLResponse;

@interface QLPreviewConverter : NSObject {

	QLPreviewParts* _previewParts;
	NSDictionary* _options;

}

@property (nonatomic,readonly) NSString * previewFileName; 
@property (nonatomic,readonly) NSString * previewUTI; 
@property (nonatomic,readonly) NSURLRequest * previewRequest; 
@property (nonatomic,readonly) NSURLResponse * previewResponse; 
@property (nonatomic,readonly) QLPreviewParts * previewParts; 
+(id)_officeUTIs;
+(id)_iWorkUTIs;
+(id)_csvUTIs;
+(id)_lpdfUTIs;
+(id)_rtfUTIs;
+(id)_spreadSheetUTIs;
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(BOOL)isSafeURL:(id)arg1 ;
+(BOOL)isOfficeDocumentType:(id)arg1 ;
+(BOOL)isIWorkDocumentType:(id)arg1 ;
+(BOOL)isCSVDocumentType:(id)arg1 ;
+(BOOL)isLPDFDocumentType:(id)arg1 ;
+(BOOL)isRTFDocumentType:(id)arg1 ;
+(BOOL)isSpreadSheetDocumentType:(id)arg1 ;
+(BOOL)isSafeRequest:(id)arg1 ;
-(BOOL)isComputed;
-(void)setHtmlErrorDisabled:(BOOL)arg1 ;
-(BOOL)htmlErrorDisabled;
-(id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
-(void)_register;
-(id)previewParts;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)cancel;
-(void)appendData:(id)arg1 ;
-(id)previewUTI;
-(id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4 ;
-(id)previewRequest;
-(id)safeRequestForRequest:(id)arg1 ;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4 ;
-(id)previewResponse;
-(id)previewFileName;
-(void)appendDataArray:(id)arg1 ;
-(void)finishedAppendingData;
-(void)finishConverting;
@end

