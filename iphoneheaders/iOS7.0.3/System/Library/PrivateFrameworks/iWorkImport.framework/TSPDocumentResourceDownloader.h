/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSPDocumentResourceDownloader <NSObject>
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) long long estimatedDownloadSize; 
@property (nonatomic,readonly) BOOL isEstimatedDownloadSizePrecise; 
@required
-(BOOL)needsDownload;
-(void)cancelDownloads;
-(long long)estimatedDownloadSize;
-(BOOL)isEstimatedDownloadSizePrecise;
-(id)downloadWithDelegate:(id)arg1 description:(id)arg2;
@end

