/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UINavigationButton.h>

@interface PLAirTunesButton : UINavigationButton {

	int _mode;
	BOOL _isInMiniBar;

}

@property (assign,nonatomic) int mode;                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL isInMiniBar;              //@synthesize isInMiniBar=_isInMiniBar - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)_imageNameForMode:(int)arg1 isInMinibar:(BOOL)arg2 ;
-(void)_setImagesForMode:(int)arg1 miniBar:(BOOL)arg2 ;
-(id)initWithAirTunesMode:(int)arg1 ;
-(BOOL)isInMiniBar;
-(void)setIsInMiniBar:(BOOL)arg1 ;
@end

