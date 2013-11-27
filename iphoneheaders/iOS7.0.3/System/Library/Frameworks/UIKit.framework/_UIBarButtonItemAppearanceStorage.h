/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor, NSValue, _UIBarBackButtonItemAppearanceStorage;

@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	UIColor* tintColor;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;
	_UIBarBackButtonItemAppearanceStorage* backButtonAppearance;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
@property (nonatomic,retain) NSValue * backButtonTitlePositionOffset; 
@property (nonatomic,retain) NSValue * miniBackButtonTitlePositionOffset; 
-(void)dealloc;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(id)backgroundImageForState:(unsigned)arg1 style:(int)arg2 isMini:(BOOL)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 style:(int)arg3 isMini:(BOOL)arg4 ;
-(id)backButtonBackgroundImageForState:(unsigned)arg1 isMini:(BOOL)arg2 ;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned)arg2 isMini:(BOOL)arg3 ;
-(id)anyBackgroundImage;
-(id)miniTitlePositionOffset;
-(id)titlePositionOffset;
-(float)backgroundVerticalAdjustmentForBarMetrics:(int)arg1 ;
-(void)setBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)setMiniTitlePositionOffset:(id)arg1 ;
-(void)setTitlePositionOffset:(id)arg1 ;
-(id)miniBackButtonTitlePositionOffset;
-(id)backButtonTitlePositionOffset;
-(id)anyBackButtonBackgroundImage;
-(float)backButtonBackgroundVerticalAdjustmentForBarMetrics:(int)arg1 ;
-(void)setBackButtonBackgroundVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(void)setMiniBackButtonTitlePositionOffset:(id)arg1 ;
-(void)setBackButtonTitlePositionOffset:(id)arg1 ;
@end

