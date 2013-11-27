/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class NSDictionary, NSArray, UIActionSheet, UIAlertView, PSSpecifier, NSMutableDictionary, NSDate;

@interface LocationServicesListController : PSListController {

	NSDictionary* _locationEntitiesDetails;
	NSArray* _ignoredLocationEntities;
	UIActionSheet* _locationConfirmationSheet;
	UIAlertView* _locationConfirmationAlert;
	BOOL _locationSwitchedAlertButtons;
	BOOL _deferredRefreshDueToConfirm;
	BOOL _locationNotificationsEnabled;
	BOOL _disablingFMiP;
	PSSpecifier* _findMyFriendsSpecifier;
	NSMutableDictionary* _coalesceAppKeys;
	NSDate* _twentyFourHoursAgo;
	/*^block*/ id _deviceLocatorChangedHandler;

}

@property (nonatomic,copy) id deviceLocatorChangedHandler;              //@synthesize deviceLocatorChangedHandler=_deviceLocatorChangedHandler - In the implementation block
+(BOOL)isLocationRestricted;
+(BOOL)isFindMyiPhoneAuthorized;
+(void)setFindMyiPhoneAuthorized:(BOOL)arg1 ;
+(BOOL)isCoreRoutineAuthorized;
+(void)setCoreRoutineAuthorized:(BOOL)arg1 ;
-(void)updateSpecifiersForImposedSettings;
-(void)locatorStateDidChange:(id)arg1 ;
-(void)updateRecentlyUsedDate;
-(void)updateForApplicationDidBecomeActive:(id)arg1 ;
-(void)stopLocationStatusUpdates;
-(int)locationUsageForEntity:(id)arg1 ;
-(void)setUsage:(int)arg1 forCell:(id)arg2 ;
-(int)locationUsageBasedOnDetails:(id)arg1 ;
-(void)runAndClearDeviceLocatorChangedHandler:(BOOL)arg1 ;
-(void)_setLocationServicesEnabled:(BOOL)arg1 ;
-(void)refreshLinkStatusInParent;
-(id)locationDetailSpecifiers;
-(void)confirmationClickedButtonAtIndex:(int)arg1 ;
-(void)disableLocationServicesAfterConfirm:(id)arg1 ;
-(void)confirmationActionWithSpecifier:(id)arg1 ;
-(void)updateMutableStateBasedOnRestriction;
-(void)updateMutableStateForFMF;
-(id)hiddenBundlesByIdentifier;
-(void)setEntityAuthorized:(id)arg1 specifier:(id)arg2 ;
-(id)isEntityAuthorized:(id)arg1 ;
-(id)findMyiPhoneEnabledStatus:(id)arg1 ;
-(void)startLocationStatusUpdates;
-(void)setLocationServicesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isLocationServicesEnabled:(id)arg1 ;
-(void)updateLocationUsage;
-(void)showLocationPrivacyPage;
-(/*^block*/ id)deviceLocatorChangedHandler;
-(void)setDeviceLocatorChangedHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)willBecomeActive;
@end

