/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DDataBuffer;

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor {

	TSCH3DDataBuffer* mBuffer;

}

@property (nonatomic,readonly) TSCH3DDataBuffer * buffer; 
+(id)processorWithOriginal:(id)arg1 ;
-(void)geometry:(id)arg1 ;
-(void)setOriginal:(id)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)buffer;
-(id)matrix;
@end

