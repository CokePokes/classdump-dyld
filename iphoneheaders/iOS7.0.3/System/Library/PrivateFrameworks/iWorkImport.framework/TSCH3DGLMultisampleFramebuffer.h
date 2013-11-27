/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLMixinFramebuffer.h>
#import <iWorkImport/TSCH3DGLResolveFramebuffer.h>

@class TSCH3DGLFramebufferMultisample;

@interface TSCH3DGLMultisampleFramebuffer : TSCH3DGLMixinFramebuffer <TSCH3DGLResolveFramebuffer> {

	TSCH3DGLFramebufferMultisample* mMultisample;
	BOOL mDisableDestroyAssertion;

}

@property (nonatomic,readonly) FramebufferAttributes resolveAttributes; 
@property (assign,nonatomic) BOOL disableDestroyAssertion; 
+(id)multisampleFramebufferWithFramebufferAttributes:(const FramebufferAttributes*)arg1 ;
+(FramebufferAttributes)resolveAttributesFromFramebufferAttribute:(const FramebufferAttributes*)arg1 ;
-(void)bindColorbufferInSession:(id)arg1 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(id)resolvingFramebuffer;
-(void)disableSamplingInSession:(id)arg1 ;
-(BOOL)validForSession:(id)arg1 ;
-(id)initWithFramebufferAttributes:(const FramebufferAttributes*)arg1 ;
-(BOOL)bindInSession:(id)arg1 ;
-(void)destroyResourcesInSession:(id)arg1 ;
-(FramebufferAttributes)resolveAttributes;
-(BOOL)disableDestroyAssertion;
-(void)setDisableDestroyAssertion:(BOOL)arg1 ;
-(id)resolveFramebufferContext;
-(BOOL)activateResolveFramebufferInsideSession:(id)arg1 ;
-(tvec2<int>)resolveFramebufferSize;
-(BOOL)resolveFramebufferValidForSession:(id)arg1 ;
-(id)resolveFramebufferHandleForSession:(id)arg1 ;
-(FramebufferAttributes)resolveFramebufferAttributes;
-(BOOL)p_usingMultisample;
-(void)dealloc;
@end

