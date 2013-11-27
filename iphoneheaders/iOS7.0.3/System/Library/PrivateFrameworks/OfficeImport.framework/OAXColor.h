/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXColor : NSObject
+(id)readColorFromNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromAttribute:(id)arg1 ;
+(id)readSystemColorFromAttribute:(id)arg1 ;
+(id)readScRgbColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSRgbColorFromXmlNode:(xmlNode*)arg1 attribute:(const char*)arg2 ;
+(id)readHslColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSystemColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readSchemeColorFromXmlNode:(xmlNode*)arg1 ;
+(id)readPresetColorFromXmlNode:(xmlNode*)arg1 ;
+(id)presetColorEnumMap;
+(id)systemColorEnumMap;
+(id)readColorFromParentXmlNode:(xmlNode*)arg1 ;
+(id)schemeColorEnumMap;
@end

