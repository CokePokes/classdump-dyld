/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTextParaPropertyBag : NSObject
+(void)readParagraphProperties:(xmlNode*)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readAlign:(id)arg1 paragraphProperties:(id)arg2 ;
+(void)readFontAlign:(id)arg1 paragraphProperties:(id)arg2 ;
+(id)readSpacing:(xmlNode*)arg1 ;
+(void)readTabList:(xmlNode*)arg1 paragraphProperties:(id)arg2 ;
+(int)readBulletScheme:(id)arg1 ;
@end

