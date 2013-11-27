/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UISettings.h>

@interface SBCarDisplaySettings : _UISettings {

	int _lockOutMode;
	int _lockOutAnimationType;

}

@property (assign) int lockOutMode;                       //@synthesize lockOutMode=_lockOutMode - In the implementation block
@property (assign) int lockOutAnimationType;              //@synthesize lockOutAnimationType=_lockOutAnimationType - In the implementation block
+(id)settingsControllerModule;
-(int)lockOutMode;
-(int)lockOutAnimationType;
-(void)setLockOutMode:(int)arg1 ;
-(void)setLockOutAnimationType:(int)arg1 ;
-(void)setDefaultValues;
@end

