/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UITextMagnifierRenderer : UIView {

	int m_autoscrollDirections;
	int m_magnifierMethod;

}

@property (assign,nonatomic) int autoscrollDirections; 
@property (assign,nonatomic) int magnifierMethod; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)drawMagnifier:(CGRect)arg1 ;
-(int)autoscrollDirections;
-(void)drawAutoscroller:(CGRect)arg1 ;
-(int)magnifierMethod;
-(void)setMagnifierMethod:(int)arg1 ;
@end

