/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/_SBIconWallpaperColorClient.h>

@protocol SBIconBlurryBackgroundViewObserver;
@class ;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperColorClient> {

	CGRect _wallpaperRelativeBounds;
	BOOL _isBlurring;
	BOOL _suppressesExternalUpdates;
	<SBIconBlurryBackgroundViewObserver>* _observer;
	/*^block*/ id _wantsBlurEvaluator;
	CGPoint _wallpaperRelativeCenter;

}

@property (assign,nonatomic) <SBIconBlurryBackgroundViewObserver> * observer;                                 //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeCenter;                                                 //@synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter - In the implementation block
@property (nonatomic,readonly) BOOL isBlurring;                                                               //@synthesize isBlurring=_isBlurring - In the implementation block
@property (nonatomic,copy) id wantsBlurEvaluator;                                                             //@synthesize wantsBlurEvaluator=_wantsBlurEvaluator - In the implementation block
@property (assign,getter=isSuppressingExternalUpdates,nonatomic) BOOL suppressesExternalUpdates;              //@synthesize suppressesExternalUpdates=_suppressesExternalUpdates - In the implementation block
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesExternalUpdates:(BOOL)arg1 ;
-(BOOL)isBlurring;
-(void)setWantsBlurEvaluator:(/*^block*/ id)arg1 ;
-(CGRect)wallpaperRelativeBounds;
-(BOOL)wantsBlur:(id)arg1 ;
-(void)setWallpaperColor:(CGColorRef)arg1 phase:(CGSize)arg2 ;
-(void)setBlurring:(BOOL)arg1 ;
-(CGPoint)wallpaperRelativeCenter;
-(/*^block*/ id)wantsBlurEvaluator;
-(BOOL)isSuppressingExternalUpdates;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end

