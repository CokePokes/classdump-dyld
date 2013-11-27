/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKTexture, SKNode, SKKeyframeSequence, UIColor, SKAction;

@interface SKEmitterNode : SKNode {

	SKTexture* _particleTexture;
	SKCEmitterSprite* _eSprite;
	SKNode* _target;
	SKKeyframeSequence* _colorSequence;
	SKKeyframeSequence* _colorBlendSequence;
	SKKeyframeSequence* _alphaSequence;
	SKKeyframeSequence* _scaleSequence;
	SKKeyframeSequence* _rotationSequence;

}

@property (nonatomic,retain) SKTexture * particleTexture; 
@property (assign,nonatomic) float particleZPosition; 
@property (assign,nonatomic) float particleZPositionRange; 
@property (assign,nonatomic) int particleBlendMode; 
@property (nonatomic,retain) UIColor * particleColor; 
@property (assign,nonatomic) float particleColorRedRange; 
@property (assign,nonatomic) float particleColorGreenRange; 
@property (assign,nonatomic) float particleColorBlueRange; 
@property (assign,nonatomic) float particleColorAlphaRange; 
@property (assign,nonatomic) float particleColorRedSpeed; 
@property (assign,nonatomic) float particleColorGreenSpeed; 
@property (assign,nonatomic) float particleColorBlueSpeed; 
@property (assign,nonatomic) float particleColorAlphaSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleColorSequence; 
@property (assign,nonatomic) float particleColorBlendFactor; 
@property (assign,nonatomic) float particleColorBlendFactorRange; 
@property (assign,nonatomic) float particleColorBlendFactorSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleColorBlendFactorSequence; 
@property (assign,nonatomic) CGPoint particlePosition; 
@property (assign,nonatomic) CGVector particlePositionRange; 
@property (assign,nonatomic) float particleSpeed; 
@property (assign,nonatomic) float particleSpeedRange; 
@property (assign,nonatomic) float emissionAngle; 
@property (assign,nonatomic) float emissionAngleRange; 
@property (assign,nonatomic) float xAcceleration; 
@property (assign,nonatomic) float yAcceleration; 
@property (assign,nonatomic) float particleBirthRate; 
@property (assign,nonatomic) unsigned numParticlesToEmit; 
@property (assign,nonatomic) float particleLifetime; 
@property (assign,nonatomic) float particleLifetimeRange; 
@property (assign,nonatomic) float particleRotation; 
@property (assign,nonatomic) float particleRotationRange; 
@property (assign,nonatomic) float particleRotationSpeed; 
@property (assign,nonatomic) CGSize particleSize; 
@property (assign,nonatomic) float particleScale; 
@property (assign,nonatomic) float particleScaleRange; 
@property (assign,nonatomic) float particleScaleSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleScaleSequence; 
@property (assign,nonatomic) float particleAlpha; 
@property (assign,nonatomic) float particleAlphaRange; 
@property (assign,nonatomic) float particleAlphaSpeed; 
@property (nonatomic,retain) SKKeyframeSequence * particleAlphaSequence; 
@property (nonatomic,copy) SKAction * particleAction; 
@property (assign,nonatomic,__weak) SKNode * targetNode; 
-(float)xAcceleration;
-(float)yAcceleration;
-(void)setXAcceleration:(float)arg1 ;
-(void)setYAcceleration:(float)arg1 ;
-(id)particleTexture;
-(void)setTargetNode:(id)arg1 ;
-(void)setParticleTexture:(id)arg1 ;
-(void)setParticlePosition:(CGPoint)arg1 ;
-(void)setParticlePositionRange:(CGVector)arg1 ;
-(void)setParticleBirthRate:(float)arg1 ;
-(void)setParticleAction:(id)arg1 ;
-(void)setNumParticlesToEmit:(unsigned)arg1 ;
-(void)setParticleAlphaSequence:(id)arg1 ;
-(void)setParticleColorSequence:(id)arg1 ;
-(void)setParticleColorBlendFactorSequence:(id)arg1 ;
-(void)setParticleScaleSequence:(id)arg1 ;
-(void)setParticleRotationSequence:(id)arg1 ;
-(id)particleAction;
-(CGPoint)particlePosition;
-(CGVector)particlePositionRange;
-(unsigned)numParticlesToEmit;
-(id)particleAlphaSequence;
-(id)particleColorSequence;
-(id)particleColorBlendFactorSequence;
-(id)particleScaleSequence;
-(id)particleRotationSequence;
-(id)particleColor;
-(void)setParticleColor:(id)arg1 ;
-(float)particleColorRedRange;
-(void)setParticleColorRedRange:(float)arg1 ;
-(float)particleColorGreenRange;
-(void)setParticleColorGreenRange:(float)arg1 ;
-(float)particleColorBlueRange;
-(void)setParticleColorBlueRange:(float)arg1 ;
-(float)particleColorAlphaRange;
-(void)setParticleColorAlphaRange:(float)arg1 ;
-(float)particleColorRedSpeed;
-(void)setParticleColorRedSpeed:(float)arg1 ;
-(float)particleColorGreenSpeed;
-(void)setParticleColorGreenSpeed:(float)arg1 ;
-(float)particleColorBlueSpeed;
-(void)setParticleColorBlueSpeed:(float)arg1 ;
-(float)particleColorAlphaSpeed;
-(void)setParticleColorAlphaSpeed:(float)arg1 ;
-(float)particleColorBlendFactor;
-(void)setParticleColorBlendFactor:(float)arg1 ;
-(float)particleColorBlendFactorRange;
-(void)setParticleColorBlendFactorRange:(float)arg1 ;
-(float)particleColorBlendFactorSpeed;
-(void)setParticleColorBlendFactorSpeed:(float)arg1 ;
-(float)particleLifetime;
-(void)setParticleLifetime:(float)arg1 ;
-(float)particleLifetimeRange;
-(void)setParticleLifetimeRange:(float)arg1 ;
-(float)particleRotation;
-(void)setParticleRotation:(float)arg1 ;
-(float)particleRotationRange;
-(void)setParticleRotationRange:(float)arg1 ;
-(float)particleRotationSpeed;
-(void)setParticleRotationSpeed:(float)arg1 ;
-(float)particleScale;
-(void)setParticleScale:(float)arg1 ;
-(float)particleScaleRange;
-(void)setParticleScaleRange:(float)arg1 ;
-(float)particleScaleSpeed;
-(void)setParticleScaleSpeed:(float)arg1 ;
-(float)particleAlpha;
-(void)setParticleAlpha:(float)arg1 ;
-(float)particleAlphaRange;
-(void)setParticleAlphaRange:(float)arg1 ;
-(float)particleAlphaSpeed;
-(void)setParticleAlphaSpeed:(float)arg1 ;
-(int)particleBlendMode;
-(void)setParticleBlendMode:(int)arg1 ;
-(float)particleSpeed;
-(void)setParticleSpeed:(float)arg1 ;
-(float)particleSpeedRange;
-(void)setParticleSpeedRange:(float)arg1 ;
-(float)emissionAngle;
-(void)setEmissionAngle:(float)arg1 ;
-(float)emissionAngleRange;
-(void)setEmissionAngleRange:(float)arg1 ;
-(id)targetNode;
-(float)particleZPosition;
-(void)setParticleZPosition:(float)arg1 ;
-(float)particleZPositionRange;
-(void)setParticleZPositionRange:(float)arg1 ;
-(float)particleBirthRate;
-(CGSize)particleSize;
-(void)setParticleSize:(CGSize)arg1 ;
-(void)resetSimulation;
-(void)advanceSimulationTime:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

