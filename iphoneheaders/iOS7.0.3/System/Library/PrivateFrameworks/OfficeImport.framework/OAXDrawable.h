/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXDrawable : NSObject
+(id)readDrawableFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
+(void)readNonVisualPropertiesFromDrawableXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 visualNodeName:(const char*)arg3 toDrawable:(id)arg4 drawingState:(id)arg5 ;
+(id)readDrawablesFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
@end

