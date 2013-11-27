/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface NavigationBarReaderButton : UIButton {

	UIImageView* _glyphView;
	UIImageView* _glyphKnockoutView;
	BOOL _drawsLightGlyph;

}

@property (assign,nonatomic) BOOL drawsLightGlyph;              //@synthesize drawsLightGlyph=_drawsLightGlyph - In the implementation block
@property (nonatomic,readonly) CGSize visibleSize; 
-(CGSize)visibleSize;
-(void)setDrawsLightGlyph:(BOOL)arg1 ;
-(BOOL)drawsLightGlyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end

