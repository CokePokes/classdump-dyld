/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <routined/RTNotification.h>

@interface RTDataProtectionManagerUnlockedSinceBootNotification : RTNotification {

	BOOL _unlockedSinceBoot;

}

@property (assign,nonatomic) BOOL unlockedSinceBoot;              //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
+(id)notificationName;
-(BOOL)unlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(id)initWithUnlockedSinceBoot:(BOOL)arg1 ;
@end

