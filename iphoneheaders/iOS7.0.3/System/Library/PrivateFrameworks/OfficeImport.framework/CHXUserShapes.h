/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXUserShapes : NSObject
+(void)readFromCharSpaceNode:(xmlNode*)arg1 state:(id)arg2 ;
+(float)readRealCoordinate:(xmlNode*)arg1 ;
+(CGPoint)readRealPoint:(xmlNode*)arg1 ;
+(id)readDrawable:(xmlNode*)arg1 anchor:(id)arg2 drawingState:(id)arg3 ;
+(id)readRelativeSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readAbsoluteSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
@end

