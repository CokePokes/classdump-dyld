/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBApplication.h>

@interface SBNewsstandApplication : SBApplication {

	BOOL _isMagazineApp;
	BOOL _iconIsBoundOnRight;
	unsigned _supportsNewsstandContentBackgroundMode : 1;
	unsigned _allowedContentNotificationsPerDay;
	unsigned char _newsstandWakes;
	unsigned _lastPostedState;

}

@property (nonatomic,readonly) BOOL isMagazineApp;                   //@synthesize isMagazineApp=_isMagazineApp - In the implementation block
@property (nonatomic,readonly) BOOL iconIsBoundOnRight;              //@synthesize iconIsBoundOnRight=_iconIsBoundOnRight - In the implementation block
-(BOOL)isNewsstandApplication;
-(id)initWithBundleIdentifier:(id)arg1 webClip:(id)arg2 path:(id)arg3 bundle:(id)arg4 infoDictionary:(id)arg5 isSystemApplication:(BOOL)arg6 signerIdentity:(id)arg7 provisioningProfileValidated:(BOOL)arg8 entitlements:(id)arg9 ;
-(Class)iconClass;
-(void)setApplicationState:(unsigned)arg1 ;
-(void)resumeForContentAvailable;
-(BOOL)shouldThrottleContentNotificationOnDate:(id)arg1 withLastCount:(unsigned*)arg2 onDay:(int*)arg3 ;
-(BOOL)isFakeApp;
-(BOOL)isMagazineApp;
-(BOOL)iconIsBoundOnRight;
-(void)activate;
@end

