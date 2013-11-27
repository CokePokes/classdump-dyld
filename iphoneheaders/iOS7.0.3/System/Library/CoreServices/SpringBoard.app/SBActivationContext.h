/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMapTable, NSHashTable;

@interface SBActivationContext : NSObject <NSCopying> {

	NSMapTable* _displayValues;
	NSMapTable* _activationValues;
	NSMapTable* _deactivationValues;
	NSHashTable* _displayFlags;
	NSHashTable* _activationFlags;
	NSHashTable* _deactivationFlags;

}

@property (nonatomic,copy) NSMapTable * displayValues;                   //@synthesize displayValues=_displayValues - In the implementation block
@property (nonatomic,copy) NSMapTable * activationValues;                //@synthesize activationValues=_activationValues - In the implementation block
@property (nonatomic,copy) NSMapTable * deactivationValues;              //@synthesize deactivationValues=_deactivationValues - In the implementation block
@property (nonatomic,copy) NSHashTable * displayFlags;                   //@synthesize displayFlags=_displayFlags - In the implementation block
@property (nonatomic,copy) NSHashTable * activationFlags;                //@synthesize activationFlags=_activationFlags - In the implementation block
@property (nonatomic,copy) NSHashTable * deactivationFlags;              //@synthesize deactivationFlags=_deactivationFlags - In the implementation block
+(id)newFlagTable;
+(id)newValueTable;
+(id)contextFromDisplay:(id)arg1 ;
-(void)setActivationSetting:(unsigned)arg1 flag:(BOOL)arg2 ;
-(void)clearActivationSettings;
-(void)setActivationSetting:(unsigned)arg1 value:(id)arg2 ;
-(void)setDeactivationSetting:(unsigned)arg1 flag:(BOOL)arg2 ;
-(id)displayValue:(unsigned)arg1 ;
-(BOOL)activationFlag:(unsigned)arg1 ;
-(id)activationValue:(unsigned)arg1 ;
-(BOOL)deactivationFlag:(unsigned)arg1 ;
-(void)setDeactivationSetting:(unsigned)arg1 value:(id)arg2 ;
-(void)clearDeactivationSettings;
-(id)deactivationValue:(unsigned)arg1 ;
-(id)activationValues;
-(id)deactivationValues;
-(id)activationFlags;
-(id)deactivationFlags;
-(id)displayValues;
-(void)setDisplayValues:(id)arg1 ;
-(void)setDisplayFlags:(id)arg1 ;
-(void)setActivationValues:(id)arg1 ;
-(void)setActivationFlags:(id)arg1 ;
-(void)setDeactivationValues:(id)arg1 ;
-(void)setDeactivationFlags:(id)arg1 ;
-(id)_displaySettingsDescription;
-(id)_activationSettingsDescription;
-(id)_deactivationSettingsDescription;
-(id)_descriptionForDisplaySetting:(unsigned)arg1 ;
-(id)_descriptionForActivationSetting:(unsigned)arg1 ;
-(id)_descriptionForDeactivationSetting:(unsigned)arg1 ;
-(BOOL)displayFlag:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)displayFlags;
@end

