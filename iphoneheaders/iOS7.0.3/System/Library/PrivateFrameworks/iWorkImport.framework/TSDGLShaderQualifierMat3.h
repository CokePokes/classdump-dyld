/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLShaderQualifier.h>

@interface TSDGLShaderQualifierMat3 : TSDGLShaderQualifier {

	CGAffineTransform _affineTransform;
	CGAffineTransform _proposedAffineTransform;

}

@property (nonatomic,readonly) CGAffineTransform affineTransform;                    //@synthesize affineTransform=_affineTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform proposedAffineTransform;              //@synthesize proposedAffineTransform=_proposedAffineTransform - In the implementation block
-(void)setGLUniformWithShader:(id)arg1 ;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
-(void)setProposedAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)proposedAffineTransform;
-(id)description;
-(CGAffineTransform)affineTransform;
@end

