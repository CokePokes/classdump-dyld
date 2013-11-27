/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Compass/Compass-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIApplicationDelegatePrivate.h>

@class UIWindow, CompassController;

@interface CompassAppDelegate : UIResponder <UIApplicationDelegate, UIApplicationDelegatePrivate> {

	CompassController* _compassController;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;              //@synthesize window=_window - In the implementation block
-(void)dealloc;
-(id)window;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
@end

