/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODXData : NSObject
+(id)readPointListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)readConnectionListFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(void)associatePresentationsInIdMap:(id)arg1 ;
+(void)readNode:(xmlNode*)arg1 toDiagram:(id)arg2 state:(id)arg3 ;
+(id)readModelIdentifierFromNode:(xmlNode*)arg1 attributeName:(const char*)arg2 ;
+(id)readPointFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readPointTypeFromNode:(xmlNode*)arg1 ;
+(void)readConnectionFromNode:(xmlNode*)arg1 pointIdMap:(id)arg2 state:(id)arg3 ;
+(int)readConnectionTypeFromNode:(xmlNode*)arg1 ;
@end

