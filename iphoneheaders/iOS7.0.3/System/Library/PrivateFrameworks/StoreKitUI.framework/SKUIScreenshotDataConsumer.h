/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIImageDataConsumer {

	BOOL _forcesPortrait;
	CGSize _screenshotSize;

}

@property (assign,nonatomic) BOOL forcesPortrait;                  //@synthesize forcesPortrait=_forcesPortrait - In the implementation block
@property (nonatomic,readonly) CGSize constraintSize;              //@synthesize screenshotSize=_screenshotSize - In the implementation block
+(id)consumerWithScreenshotSize:(CGSize)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(id)imageForImage:(id)arg1 ;
-(BOOL)forcesPortrait;
-(void)setForcesPortrait:(BOOL)arg1 ;
-(CGSize)constraintSize;
-(id)imageForColor:(id)arg1 ;
@end

