/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXOfficeArt : NSObject
+(void)initialize;
+(void)readFrom:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readOAX:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readVml:(xmlNode*)arg1 parentRElement:(xmlNode*)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5 ;
+(void)readClientData:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readPosition:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(bool)arg4 ;
+(void)readWrap:(xmlNode*)arg1 state:(id)arg2 to:(id)arg3 ;
+(void)readWrapDistance:(xmlNode*)arg1 parentElement:(xmlNode*)arg2 state:(id)arg3 to:(id)arg4 ;
@end

