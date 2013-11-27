/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSTimer;

@interface ContentProtectionTesting : NSObject {

	NSTimer* _lockTimer;

}
+(id)sharedInstance;
-(void)_simulateContentProtectionState:(int)arg1 ;
-(void)_lockTimerFired:(id)arg1 ;
-(void)_invalidateLockTimer;
-(void)toggleLockState;
-(void)disableContentProtection;
-(id)init;
@end

