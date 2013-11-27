/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSBundleController.h>

@class PSSpecifier, NSString, WiFiManager;

@interface AirPortController : PSBundleController {

	PSSpecifier* _specifier;
	NSString* _disconnectedStr;
	NSString* _onStr;
	NSString* _offStr;
	NSString* _unavailableStr;
	WiFiManager* _manager;
	BOOL _displayedInRootMenu;

}
-(void)dealloc;
-(id)bundle;
-(void)networkChanged:(id)arg1 ;
-(id)currentNetwork:(id)arg1 ;
-(void)updateUI:(BOOL)arg1 ;
-(void)setCurrentNetwork:(id)arg1 specifier:(id)arg2 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
@end

