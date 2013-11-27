/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AVAssetResourceLoadingContentInformationRequestInternal, NSString;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {

	AVAssetResourceLoadingContentInformationRequestInternal* _contentInformationRequest;

}

@property (nonatomic,copy) NSString * contentType; 
@property (assign,nonatomic) long long contentLength; 
@property (assign,getter=isByteRangeAccessSupported,nonatomic) BOOL byteRangeAccessSupported; 
-(long long)contentLength;
-(BOOL)isByteRangeAccessSupported;
-(BOOL)isDiskCachingPermitted;
-(void)setContentLength:(long long)arg1 ;
-(void)setByteRangeAccessSupported:(BOOL)arg1 ;
-(void)setDiskCachingPermitted:(BOOL)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setContentType:(id)arg1 ;
-(id)contentType;
-(void)finalize;
@end

