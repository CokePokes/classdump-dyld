/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyConstantColor : GLKEffectProperty {

	GLKVector4 _color;
	unsigned char _enabled;

}

@property (assign,nonatomic) GLKVector4 color;                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned char enabled;              //@synthesize enabled=_enabled - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(void)dirtyAllUniforms;
-(void)setShaderBindings;
-(void)bind;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setEnabled:(unsigned char)arg1 ;
-(_GLKVector4)color;
-(void)setColor:(_GLKVector4)arg1 ;
-(unsigned char)enabled;
@end

