/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, NSMutableDictionary;

@interface _UISegmentedControlAppearanceStorage : NSObject {

	UIImage* _optionsBackgroundImage;
	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _miniBackgroundImages;
	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _miniDividerImages;
	NSMutableDictionary* _textAttributesForState;
	NSMutableDictionary* _backgroundPositionAdjustmentsForBarMetrics;
	NSMutableDictionary* _contentPositionOffsets;
	NSMutableDictionary* _miniContentPositionOffsets;
	BOOL _legacyDontHighlight;
	BOOL _legacySuppressOptionsBackground;
	BOOL _isTiled;
	unsigned _leftCapWidth;
	unsigned _rightCapWidth;

}

@property (nonatomic,retain) UIImage * optionsBackgroundImage;              //@synthesize optionsBackgroundImage=_optionsBackgroundImage - In the implementation block
-(void)dealloc;
-(id)init;
-(id)textAttributesForState:(unsigned)arg1 ;
-(void)setTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(BOOL)arg2 noFallback:(BOOL)arg3 ;
-(id)backgroundImageForState:(unsigned)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3 ;
-(id)anyDividerImageForMini:(BOOL)arg1 ;
-(id)dividerImageForLeftSegmentState:(unsigned)arg1 rightSegmentState:(unsigned)arg2 isMini:(BOOL)arg3 withFallback:(BOOL)arg4 ;
-(void)setContentPositionOffset:(id)arg1 forSegment:(int)arg2 inMiniBar:(BOOL)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 isMini:(BOOL)arg3 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned)arg2 rightSegmentState:(unsigned)arg3 isMini:(BOOL)arg4 ;
-(void)takeTextAttributesFrom:(SCD_Struct_UI28)arg1 forState:(unsigned)arg2 ;
-(BOOL)wantsTrackingSuppressed;
-(void)setBackgroundPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(float)backgroundPositionAdjustmentForBarMetrics:(int)arg1 ;
-(id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(BOOL)arg2 ;
-(id)backgroundImageForState:(unsigned)arg1 isMini:(BOOL)arg2 ;
-(id)anyDividerImage;
-(id)dividerImageForLeftSegmentState:(unsigned)arg1 rightSegmentState:(unsigned)arg2 isMini:(BOOL)arg3 ;
-(BOOL)legacySuppressOptionsBackground;
-(void)setDetail:(SCD_Struct_UI29*)arg1 ;
-(void)setIsTiled:(BOOL)arg1 leftCapWidth:(unsigned)arg2 rightCapWidth:(unsigned)arg3 ;
-(id)optionsBackgroundImage;
-(void)setOptionsBackgroundImage:(id)arg1 ;
@end

