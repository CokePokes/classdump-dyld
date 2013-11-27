/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DRenderProcessor, TSCH3DSession, TSCH3DGLContext;

@interface TSCH3DRenderPipeline : NSObject {

	TSCH3DRenderProcessor* mProcessor;
	TSCH3DSession* mSession;

}

@property (nonatomic,retain) TSCH3DRenderProcessor * processor; 
@property (nonatomic,readonly) TSCH3DSession * session; 
@property (nonatomic,readonly) TSCH3DGLContext * context; 
+(id)clipRectForTargetSize:(const tvec2<int>*)arg1 intermediateSize:(const tvec2<int>*)arg2 ;
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 ;
-(id)processor;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)setProcessor:(id)arg1 ;
-(id)session;
-(void)dealloc;
-(id)context;
@end

