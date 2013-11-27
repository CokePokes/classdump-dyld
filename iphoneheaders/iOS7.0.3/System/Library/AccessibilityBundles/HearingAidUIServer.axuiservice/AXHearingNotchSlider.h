/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <HearingAidUIServer/HearingAidUIServer-Structs.h>
#import <UIKit/UISlider.h>

@class AXHearingNotchView;

@interface AXHearingNotchSlider : UISlider {

	AXHearingNotchView* _notchView;

}

@property (nonatomic,retain) AXHearingNotchView * notchView;              //@synthesize notchView=_notchView - In the implementation block
-(void)setNotchValues:(id)arg1 ;
-(void)setNotchView:(id)arg1 ;
-(id)notchView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)sliderValueDidChange:(id)arg1 ;
@end

