/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class SUControlAppearance, NSMutableDictionary, NSDictionary, SUTabBarAppearance, SUToolbarAppearance;

@interface SUUIAppearance : NSObject <NSCopying> {

	SUControlAppearance* _backButtonAppearance;
	SUControlAppearance* _confirmationButtonAppearance;
	SUControlAppearance* _destructiveButtonAppearance;
	SUControlAppearance* _exitStoreButtonAppearance;
	SUControlAppearance* _forwardButtonAppearance;
	BOOL _isDefaultAppearance;
	NSMutableDictionary* _navigationBarBackgroundImages;
	NSDictionary* _navigationBarTitleTextAttributes;
	NSMutableDictionary* _navigationButtonAppearance;
	NSMutableDictionary* _segmentedControlAppearance;
	SUTabBarAppearance* _tabBarAppearance;
	SUToolbarAppearance* _toolbarAppearance;

}

@property (nonatomic,copy) SUControlAppearance * backButtonAppearance;                      //@synthesize backButtonAppearance=_backButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * confirmationButtonAppearance;              //@synthesize confirmationButtonAppearance=_confirmationButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * destructiveButtonAppearance;               //@synthesize destructiveButtonAppearance=_destructiveButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * exitStoreButtonAppearance;                 //@synthesize exitStoreButtonAppearance=_exitStoreButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * forwardButtonAppearance;                   //@synthesize forwardButtonAppearance=_forwardButtonAppearance - In the implementation block
@property (nonatomic,copy) NSDictionary * navigationBarTitleTextAttributes;                 //@synthesize navigationBarTitleTextAttributes=_navigationBarTitleTextAttributes - In the implementation block
@property (nonatomic,copy) SUTabBarAppearance * tabBarAppearance;                           //@synthesize tabBarAppearance=_tabBarAppearance - In the implementation block
@property (nonatomic,copy) SUToolbarAppearance * toolbarAppearance;                         //@synthesize toolbarAppearance=_toolbarAppearance - In the implementation block
+(id)defaultAppearance;
+(id)_defaultTabBarAppearance;
+(id)_defaultShadowWithColor:(id)arg1 offset:(CGSize)arg2 ;
+(id)_defaultBackButtonAppearance;
+(id)_defaultConfirmationButtonAppearance;
+(id)_defaultDestructiveButtonAppearance;
+(id)_defaultForwardButtonAppearance;
+(id)_defaultButtonAppearance;
+(id)_defaultDoneButtonAppearance;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)tabBarAppearance;
-(void)styleNavigationBar:(id)arg1 ;
-(void)styleTabBarItem:(id)arg1 ;
-(void)styleBarButtonItem:(id)arg1 ;
-(void)styleExitStoreButtonItem:(id)arg1 ;
-(void)styleToolbar:(id)arg1 ;
-(void)_styleBackBarButtonItem:(id)arg1 ;
-(void)styleConfirmationButtonItem:(id)arg1 ;
-(void)styleForwardButtonItem:(id)arg1 ;
-(void)styleSegmentedControl:(id)arg1 tintStyle:(int)arg2 ;
-(void)setNavigationBarBackgroundImage:(id)arg1 forBarMetrics:(int)arg2 ;
-(void)setTabBarAppearance:(id)arg1 ;
-(void)setNavigationBarTitleTextAttributes:(id)arg1 ;
-(void)setNavigationButtonAppearance:(id)arg1 forStyle:(int)arg2 ;
-(id)_copySegmentedControlKeyWithStyle:(int)arg1 tintStyle:(int)arg2 ;
-(void)setSegmentedControlAppearance:(id)arg1 forStyle:(int)arg2 tintStyle:(int)arg3 ;
-(id)navigationButtonAppearanceForStyle:(int)arg1 ;
-(id)confirmationButtonAppearance;
-(id)destructiveButtonAppearance;
-(id)backButtonAppearance;
-(id)navigationBarTitleTextAttributes;
-(id)segmentedControlAppearanceForStyle:(int)arg1 tintStyle:(int)arg2 ;
-(id)toolbarAppearance;
-(id)exitStoreButtonAppearance;
-(id)forwardButtonAppearance;
-(id)navigationBarBackgroundImageForBarMetrics:(int)arg1 ;
-(void)styleDestructiveButton:(id)arg1 ;
-(void)styleTabBar:(id)arg1 ;
-(void)setBackButtonAppearance:(id)arg1 ;
-(void)setConfirmationButtonAppearance:(id)arg1 ;
-(void)setDestructiveButtonAppearance:(id)arg1 ;
-(void)setExitStoreButtonAppearance:(id)arg1 ;
-(void)setForwardButtonAppearance:(id)arg1 ;
-(void)setToolbarAppearance:(id)arg1 ;
@end

