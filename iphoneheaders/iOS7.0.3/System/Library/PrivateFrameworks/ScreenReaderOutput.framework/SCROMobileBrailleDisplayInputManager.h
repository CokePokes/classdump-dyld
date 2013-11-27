/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSMutableDictionary, NSSet, NSBundle, NSArray;

@interface SCROMobileBrailleDisplayInputManager : NSObject {

	NSMutableDictionary* _displayInfoDict;
	NSSet* _brailleKeys;
	NSBundle* _bundle;
	NSArray* _sixDotCommands;
	NSArray* _eightDotCommands;

}
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(void)initialize;
+(id)sharedManager;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)_commandsFromBrailleInputMode:(int)arg1 ;
-(id)_sixDotCommands;
-(id)_eightDotCommands;
-(id)inputIdentifierAtIndex:(unsigned)arg1 forDisplayWithToken:(long)arg2 ;
-(id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(long)arg2 ;
-(void)configureWithDriverConfiguration:(id)arg1 ;
-(id)driverIdentifierForDisplayWithToken:(long)arg1 ;
-(id)modelIdentifierForDisplayWithToken:(long)arg1 ;
-(id)commandForBrailleKey:(id)arg1 ;
-(unsigned)countForDisplayWithToken:(long)arg1 ;
-(id)commandAtIndex:(unsigned)arg1 forDisplayWithToken:(long)arg2 ;
-(id)buttonNamesAtIndex:(unsigned)arg1 forDisplayWithToken:(long)arg2 ;
-(id)_bundle;
@end

