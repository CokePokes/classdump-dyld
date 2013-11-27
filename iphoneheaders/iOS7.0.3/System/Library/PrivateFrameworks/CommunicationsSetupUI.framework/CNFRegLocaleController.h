/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>
#import <CommunicationsSetupUI/CNFRegRegionChooserDelegate.h>

@class NSString, PSSpecifier, NSArray;

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate> {

	NSString* _currentRegionID;
	NSString* _currentPhoneValue;
	PSSpecifier* _countryFieldSpecifier;
	NSArray* _phoneNumberSpecifiers;
	PSSpecifier* _phoneNumberGroupSpecifier;
	PSSpecifier* _phoneNumberFieldSpecifier;
	NSArray* _regionData;
	BOOL _isLoading;
	BOOL _isError;
	id _regionListChangeObserver;

}

@property (nonatomic,copy) NSString * currentRegionID;                //@synthesize currentRegionID=_currentRegionID - In the implementation block
@property (nonatomic,copy) NSString * currentPhoneValue;              //@synthesize currentPhoneValue=_currentPhoneValue - In the implementation block
@property (nonatomic,retain) NSArray * regionData;                    //@synthesize regionData=_regionData - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)bundle;
-(id)initWithRegController:(id)arg1 ;
-(id)specifierList;
-(id)logName;
-(void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupEventHandlers;
-(void)_buildSpecifierCache:(id)arg1 ;
-(void)_handleTimeout;
-(id)titleString;
-(void)_rightButtonTapped;
-(id)validationString;
-(void)_updateControllerState;
-(void)_startTimeout;
-(void)_loadRegionsIfNecessary;
-(void)setRegionData:(id)arg1 ;
-(void)showCountryPicker;
-(id)regionData;
-(void)_startListeningForRegionListChanges;
-(id)currentRegionID;
-(void)setCurrentRegionID:(id)arg1 ;
-(id)currentPhoneValue;
-(id)_unformattedPhoneNumber:(id)arg1 ;
-(void)setCurrentPhoneValue:(id)arg1 ;
-(void)_loadInitialValues;
-(id)_phoneTextField;
-(void)_stopListeningForRegionListChanges;
-(void)_handleRegionListLoad;
-(void)_refreshCountryFieldAnimated:(BOOL)arg1 ;
-(void)_refreshPhoneFieldAnimated:(BOOL)arg1 ;
-(id)_currentRegion;
-(void)_showPhoneField:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)currentPhoneCompatibleCountryCode;
-(void)_finishValidation;
-(void)_failValidationWithError:(id)arg1 ;
-(void)hideCountryPicker;
-(void)_showCountryPickerAnimated:(BOOL)arg1 ;
-(void)_hideCountryPickerAnimated:(BOOL)arg1 ;
-(void)_buildCountryFieldSpecifierCache:(id)arg1 ;
-(void)_buildPhoneNumberSpecifierCache:(id)arg1 ;
-(void)regionChooser:(id)arg1 selectedRegionID:(id)arg2 ;
-(id)countryList;
-(id)currentCountryValueForSpecifier:(id)arg1 ;
-(id)currentPhoneNumberForSpecifier:(id)arg1 ;
-(void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)_updateUI;
@end

