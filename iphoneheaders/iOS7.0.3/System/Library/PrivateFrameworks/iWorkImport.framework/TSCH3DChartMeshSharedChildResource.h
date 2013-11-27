/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartMeshResources;

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent> {

	TSCH3DChartMeshResources* mParent;
	BOOL mChildRegenerated;
	int mCaching;
	DataBufferInfo mBufferInfo;
	unsigned long long mResourceIdentifier;

}

@property (readonly) DataBufferInfo bufferInfo; 
@property (assign,nonatomic) int caching; 
@property (nonatomic,readonly) unsigned long long resourceIdentifier; 
@property (assign,nonatomic) BOOL childRegenerated; 
+(id)resourceWithParent:(id)arg1 ;
-(void)clearParent;
-(DataBufferInfo)bufferInfo;
-(int)caching;
-(void)setCaching:(int)arg1 ;
-(unsigned long long)resourceIdentifier;
-(BOOL)childRegenerated;
-(void)setChildRegenerated:(BOOL)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(id)initWithParent:(id)arg1 ;
@end

