/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DPhongLikeLightingModel.h>

@interface TSCH3DFixedFunctionLightingModel : TSCH3DPhongLikeLightingModel
+(id)instanceWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
+(Class)effectClass;
+(Class)materialEffectClass;
-(void)saveToArchive:(Chart3DLightingModelArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightingModelArchive*)arg1 unarchiver:(id)arg2 ;
@end

