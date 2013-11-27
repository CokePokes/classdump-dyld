/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKImageBrush.h>
#import <GameCenterUI/GKBrushIdentification.h>

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification> {

	CGSize _sizeOverride;

}

@property (assign,nonatomic) CGSize sizeOverride;              //@synthesize sizeOverride=_sizeOverride - In the implementation block
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(id)renderedImageIdentifier;
-(float)scaleForInput:(id)arg1 ;
-(CGSize)sizeOverride;
-(void)setSizeOverride:(CGSize)arg1 ;
@end

