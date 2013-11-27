/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

@interface TSCH3Dvec1DataBuffer : TSCH3DFloatVectorDataBuffer {

	vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float> > >* mContainer;

}

@property (nonatomic,readonly) vector<glm::detail::tvec1<float>* container; 
-(unsigned)componentByteSize;
-(void)fillCapacity;
-(id)elementsAtIndices:(id)arg1 ;
-(unsigned)count;
-(id)initWithCapacity:(unsigned)arg1 ;
-(const void*)data;
-(vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float> > >*)container;
-(id).cxx_construct;
-(void)clear;
-(unsigned)components;
-(void).cxx_destruct;
@end

