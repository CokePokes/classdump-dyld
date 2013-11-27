/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AXHearingAidSupport/AXHearingDetailViewController.h>

@class AXRemoteHearingAidDevice, NSString;

@interface HearingAidDetailController : AXHearingDetailViewController {

	AXRemoteHearingAidDevice* _device;
	NSString* _propertyUpdateIdentifier;

}

@property (nonatomic,retain) NSString * propertyUpdateIdentifier;              //@synthesize propertyUpdateIdentifier=_propertyUpdateIdentifier - In the implementation block
-(void)forgetAid:(id)arg1 ;
-(id)propertyUpdateIdentifier;
-(void)setPropertyUpdateIdentifier:(id)arg1 ;
-(id)shouldStream:(id)arg1 ;
-(void)setShouldStream:(id)arg1 specifier:(id)arg2 ;
-(void)setIndependentAids:(id)arg1 specifier:(id)arg2 ;
-(id)independentAids:(id)arg1 ;
-(void)setDevice:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)device;
-(id)disconnectedSpecifiers;
-(NSRange)programsRange;
-(id)specifiers;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(void)willBecomeActive;
@end

