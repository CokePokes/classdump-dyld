/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface SLLastAccountManager : NSObject
+(void)_setLastAccount:(id)arg1 prefKey:(id)arg2 prefAppID:(id)arg3 ;
+(id)_lastAccountOfTypeIdentifier:(id)arg1 inStore:(id)arg2 updatePrefs:(BOOL)arg3 prefKey:(id)arg4 prefAppID:(id)arg5 ;
+(id)lastTwitterAccountInAccountStore:(id)arg1 updatePrefs:(BOOL)arg2 ;
+(void)setLastTwitterAccount:(id)arg1 ;
@end

