/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {

	BOOL _customStrokeColor;
	BOOL _customFillColor;
	CAShapeLayer* _lighteningOutline;
	float _outlineAlpha;
	float _cornerRadius;

}

@property (assign,nonatomic) float outlineAlpha; 
@property (assign,nonatomic) float cornerRadius;                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIBezierPath * customPath; 
+(Class)layerClass;
+(id)_strokeColor:(BOOL)arg1 ;
+(id)_fillColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_layer;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)fillColor;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)strokeColor;
-(id)_fillColor:(BOOL)arg1 ;
-(void)_updatePath;
-(void)setLineWidth:(float)arg1 updatePath:(BOOL)arg2 ;
-(float)_pathInset;
-(float)_pixelAlignment;
-(void)_updateLightingOutlinePath;
-(id)customPath;
-(void)setOutlineAlpha:(float)arg1 ;
-(float)outlineAlpha;
@end

