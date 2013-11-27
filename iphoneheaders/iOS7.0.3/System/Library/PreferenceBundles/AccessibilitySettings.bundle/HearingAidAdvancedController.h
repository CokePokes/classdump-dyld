/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilityListController.h>

@class AXRemoteHearingAidDevice;

@interface HearingAidAdvancedController : AccessibilityListController {

	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(id)connection:(id)arg1 ;
-(id)HIID:(id)arg1 ;
-(id)firmwareVersion:(id)arg1 ;
-(id)hardwareVersion:(id)arg1 ;
-(id)specifiersForEar:(int)arg1 ;
-(void)setDevice:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)device;
-(id)specifiers;
@end

