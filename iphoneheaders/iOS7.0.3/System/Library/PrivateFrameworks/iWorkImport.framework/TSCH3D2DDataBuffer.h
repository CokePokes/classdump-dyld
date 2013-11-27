/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DDataBuffer.h>

@interface TSCH3D2DDataBuffer : TSCH3DDataBuffer {

	DataBuffer2DDimension mDimension;

}

@property (nonatomic,readonly) DataBuffer2DDimension dimension; 
@property (nonatomic,readonly) tvec3<int> size; 
+(id)bufferWithCapacityDimension:(const DataBuffer2DDimension*)arg1 ;
+(id)bufferWithCapacitySize:(const tvec2<int>*)arg1 components:(unsigned)arg2 ;
-(DataBufferLevelData*)dataAtLevel:(unsigned)arg1 ;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 ;
-(tvec3<int>)size;
-(id).cxx_construct;
-(DataBuffer2DDimension)dimension;
-(unsigned)components;
-(BOOL)hasLevels;
@end

