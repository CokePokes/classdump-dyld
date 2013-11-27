/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DGLHandle.h>

@class TSCH3DShaderHandle, TSCH3DShaderEffectsStates, NSMutableDictionary;

@interface TSCH3DShaderProgramHandle : TSCH3DGLHandle {

	TSCH3DShaderHandle* mVertexShader;
	TSCH3DShaderHandle* mFragmentShader;
	TSCH3DShaderEffectsStates* mCurrentEffectsStates;
	NSMutableDictionary* mUniformLocations;
	NSMutableDictionary* mAttributeLocations;

}

@property (nonatomic,readonly) TSCH3DShaderHandle * vertexShader; 
@property (nonatomic,readonly) TSCH3DShaderHandle * fragmentShader; 
@property (nonatomic,readonly) TSCH3DShaderEffectsStates * currentEffectsStates; 
@property (nonatomic,readonly) NSMutableDictionary * uniformLocations; 
@property (nonatomic,readonly) NSMutableDictionary * attributeLocations; 
-(void)destroyResourcesInContext:(id)arg1 ;
-(id)initWithGLHandle:(unsigned)arg1 ;
-(id)vertexShader;
-(id)fragmentShader;
-(id)currentEffectsStates;
-(id)uniformLocations;
-(id)attributeLocations;
-(void)dealloc;
@end

