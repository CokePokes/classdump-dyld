/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@interface _UIFieldEditorLayoutManager : NSLayoutManager {

	bool _needsExtraBulletRendering;

}

@property (assign) bool needsExtraBulletRendering;              //@synthesize needsExtraBulletRendering=_needsExtraBulletRendering - In the implementation block
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned)arg3 font:(id)arg4 matrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(bool)needsExtraBulletRendering;
-(void)setNeedsExtraBulletRendering:(bool)arg1 ;
@end

