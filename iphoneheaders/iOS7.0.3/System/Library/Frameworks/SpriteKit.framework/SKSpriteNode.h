/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKTexture, UIColor;

@interface SKSpriteNode : SKNode {

	BOOL _shouldRepeatTexture;

}

@property (nonatomic,retain) SKTexture * texture; 
@property (assign,nonatomic) CGRect centerRect; 
@property (assign,nonatomic) float colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) int blendMode; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) BOOL shouldRepeatTexture;              //@synthesize shouldRepeatTexture=_shouldRepeatTexture - In the implementation block
@property (assign,nonatomic) CGSize repeatTextureSize; 
+(id)spriteNodeWithTexture:(id)arg1 ;
+(id)spriteNodeWithImageNamed:(id)arg1 ;
+(id)spriteNodeWithTexture:(id)arg1 size:(CGSize)arg2 ;
+(id)spriteNodeWithColor:(id)arg1 size:(CGSize)arg2 ;
-(float)colorBlendFactor;
-(void)setColorBlendFactor:(float)arg1 ;
-(id)initWithImageNamed:(id)arg1 ;
-(id)initWithTexture:(id)arg1 color:(id)arg2 size:(CGSize)arg3 ;
-(id)initWithTexture:(id)arg1 ;
-(id)initWithColor:(id)arg1 size:(CGSize)arg2 ;
-(CGRect)centerRect;
-(void)setCenterRect:(CGRect)arg1 ;
-(BOOL)repeatTexture;
-(void)setRepeatTexture:(BOOL)arg1 ;
-(CGSize)repeatTextureSize;
-(void)setRepeatTextureSize:(CGSize)arg1 ;
-(BOOL)shouldRepeatTexture;
-(void)setShouldRepeatTexture:(BOOL)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(id)texture;
-(void)setTexture:(id)arg1 ;
@end

