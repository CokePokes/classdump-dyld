/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXWorkbook : NSObject
+(void)setupProcessors:(id)arg1 ;
+(id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5 ;
+(void)readStringsFrom:(id)arg1 state:(id)arg2 ;
+(id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 resourcesOnly:(bool)arg4 fileName:(id)arg5 temporaryDirectory:(id)arg6 ;
+(void)readStylesFrom:(id)arg1 state:(id)arg2 ;
+(void)readSheetsFrom:(id)arg1 relationNS:(xmlNs*)arg2 state:(id)arg3 ;
+(void)setupDefaultTextStyleWithState:(id)arg1 ;
+(void)setDefaultParagraphProperties:(id)arg1 ;
@end

