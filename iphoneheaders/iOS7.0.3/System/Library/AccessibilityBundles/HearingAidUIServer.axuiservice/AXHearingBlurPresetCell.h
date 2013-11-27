/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <HearingAidUIServer/AXHearingBlurCell.h>

@class UIImageView, AXHearingAidMode;

@interface AXHearingBlurPresetCell : AXHearingBlurCell {

	UIImageView* _checkedView;
	AXHearingAidMode* _preset;

}

@property (nonatomic,retain) AXHearingAidMode * preset;              //@synthesize preset=_preset - In the implementation block
+(id)cellWithPreset:(id)arg1 ;
-(void)setPreset:(id)arg1 ;
-(id)preset;
-(void)updateCell;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

