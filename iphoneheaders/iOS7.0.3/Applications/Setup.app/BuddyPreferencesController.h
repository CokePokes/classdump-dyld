/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface BuddyPreferencesController : NSObject {

	NSMutableDictionary* _preferences;

}
+(id)buddyPreferences;
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(BOOL)boolForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)reset;
-(void)persist;
@end

