/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXGeometry : NSObject
+(int)shapeTypeForString:(id)arg1 ;
+(id)stringForShapeType:(int)arg1 ;
+(id)readCustomGeometryFromXmlNode:(xmlNode*)arg1 hasImplicitFormulas:(BOOL)arg2 ;
+(id)readPresetGeometryFromXmlNode:(xmlNode*)arg1 ;
+(void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 ;
+(void)addFormulasFromFile:(id)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 ;
+(void)readFormulasFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 adjustValueNameToIndexMap:(id)arg3 formulaNameToIndexMap:(id)arg4 ;
+(void)readTextRectFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 ;
+(void)readPathsFromCustomGeometryXmlNode:(xmlNode*)arg1 toCustomGeometry:(id)arg2 formulaNameToIndexMap:(id)arg3 ;
+(id)shapeTypeEnumMap;
+(id)readFromParentXmlNode:(xmlNode*)arg1 ;
+(int)adjustValueWithGuideXmlNode:(xmlNode*)arg1 ;
+(id)formulaTypeEnumMap;
+(id)formulaKeywordEnumMap;
+(OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode*)arg1 name:(const char*)arg2 formulaNameToIndexMap:(id)arg3 ;
+(id)pathFillModeEnumMap;
@end

