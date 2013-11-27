/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKDrawStyle.h>

@class NSString;

@interface VKGridDrawStyle : VKDrawStyle {

	NSString* _texture;
	VGLColor _fillColor;
	VGLColor _lineColor;

}

@property (nonatomic,readonly) NSString * texture;              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) VGLColor fillColor; 
@property (nonatomic,readonly) VGLColor lineColor; 
-(id)variant;
-(void)dealloc;
-(VGLColor)fillColor;
-(id).cxx_construct;
-(VGLColor)lineColor;
-(id)texture;
-(void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned)arg2 globals:(id)arg3 ;
-(void)takeFromZoomInvariantProperties:(id)arg1 ;
@end

