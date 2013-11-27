/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {

	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriPrefix;
	CFStringRef mUuidStr;

}
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)setPageElementXPath:(CFStringRef)arg1 withThumbnailsOnLeft:(BOOL)arg2 ;
-(BOOL)setData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 forNamedResource:(CFStringRef)arg3 ;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)arg1 ;
-(CFStringRef)createUriForResource:(CFStringRef)arg1 ;
-(CFDataRef)mainHtmlData;
-(void)setUriPrefix:(CFStringRef)arg1 ;
-(CFDictionaryRef)createOutputDictionary;
-(void)dealloc;
-(id)init;
-(CFDictionaryRef)attachments;
@end

