/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization; 
@property (assign) int subdivisionSteps; 
+(id)meshTransform;
-(id)depthNormalization;
-(int)subdivisionSteps;
-(void)replaceVertexAtIndex:(unsigned long)arg1 withVertex:(CAMeshVertex)arg2 ;
-(void)replaceFaceAtIndex:(unsigned long)arg1 withFace:(CAMeshFace)arg2 ;
-(void)setDepthNormalization:(id)arg1 ;
-(void)setSubdivisionSteps:(int)arg1 ;
-(void)removeVertexAtIndex:(unsigned long)arg1 ;
-(void)addFace:(CAMeshFace)arg1 ;
-(void)removeFaceAtIndex:(unsigned long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)addVertex:(CAMeshVertex)arg1 ;
@end

