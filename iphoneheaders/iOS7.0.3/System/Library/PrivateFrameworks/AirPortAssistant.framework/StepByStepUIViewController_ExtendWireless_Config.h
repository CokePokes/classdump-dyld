/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/StepByStepUIViewController_DevicePicker.h>
#import <AirPortAssistant/StepByStepUIDevicePicker.h>

@class NSString;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {

	NSString* connectionType;
	NSString* unlocalizedStatusString;
	NSString* personalizedBaseName;
	BOOL isReallyJoin;

}

@property (nonatomic,retain) NSString * personalizedBaseName; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned)arg3 toString:(id)arg4 ;
-(void)setPersonalizedBaseName:(id)arg1 ;
-(id)personalizedBaseName;
-(void)validateAndUpdateNextButton;
-(void)setupAndShowEditableBaseStationName;
-(void)setupHeaderAndFooter;
-(void)setupDevices;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)primaryActionSelected:(BOOL)arg1 ;
-(void)updateNavigationButtons;
-(void)selectedDeviceUpdated;
@end

