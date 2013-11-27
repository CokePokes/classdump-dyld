/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/CustomGestureController.h>

@class SCATController, NSArray;

@interface HandController : CustomGestureController {

	SCATController* _scannerController;
	NSArray* _originalSpecifiers;

}
-(void)setTouchSpeed:(id)arg1 ;
-(id)touchSpeed;
-(id)handEnabled:(id)arg1 ;
-(void)_orientationChange:(id)arg1 ;
-(SEL)customGesturesGetter;
-(id)customGesturesTitle;
-(void)_handleAssistiveTouchToggled:(id)arg1 ;
-(void)_updateAssistiveTouchControlItems:(id)arg1 reload:(BOOL)arg2 ;
-(id)customGesturesExplanatoryText;
-(unsigned)maximumNumberOfCustomGestures;
-(SEL)customGesturesSetter;
-(id)alwaysShowMenuEnabled:(id)arg1 ;
-(void)setAlwaysShowMenuEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setHandEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)swaggleOpensMenu;
-(void)setSwaggleOpensMenu:(id)arg1 specifier:(id)arg2 ;
-(void)_handleSettingsChange;
-(void)dealloc;
-(id)init;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

