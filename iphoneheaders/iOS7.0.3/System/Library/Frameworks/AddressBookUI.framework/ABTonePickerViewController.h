/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@interface ABTonePickerViewController : ABPickerViewController {

	BOOL _isTextToneViewController;

}

@property (nonatomic,readonly) id tonePicker; 
-(void)setStyleProvider:(id)arg1 ;
-(float)ab_heightToFitForViewInPopoverView;
-(id)initAsRingtoneViewController:(BOOL)arg1 ;
-(id)tonePicker;
-(void)ringtoneSaveButtonClicked:(id)arg1 ;
-(id)init;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
@end

