/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UISettingsKeyPathObserver.h>
#import <PrototypeTools/PTSSectionObserver.h>

@class NSHashTable, NSString, NSMutableArray, _UISettings;

@interface PTSModule : NSObject <_UISettingsKeyPathObserver, PTSSectionObserver> {

	NSHashTable* _observers;
	NSString* _title;
	NSMutableArray* _allSections;
	NSMutableArray* _enabledSections;
	_UISettings* _settings;

}

@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * allSections;                  //@synthesize allSections=_allSections - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledSections;              //@synthesize enabledSections=_enabledSections - In the implementation block
@property (nonatomic,retain) _UISettings * settings;                        //@synthesize settings=_settings - In the implementation block
+(id)sectionWithRows:(id)arg1 ;
+(id)moduleWithTitle:(id)arg1 contents:(id)arg2 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 ;
+(id)moduleWithSettings:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)title;
-(unsigned)numberOfSections;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(void)addObserver:(id)arg1 ;
-(void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3 ;
-(void)sectionDidReload:(id)arg1 ;
-(void)enumerateAllRowsUsingBlock:(/*^block*/ id)arg1 ;
-(void)enumerateEnabledRowsUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)hasEnabledEditableRows;
-(id)initWithContents:(id)arg1 ;
-(void)_addSection:(id)arg1 ;
-(void)_addSubmodule:(id)arg1 ;
-(id)_settingsForSection:(id)arg1 ;
-(void)_updateEnabledSections;
-(id)sectionAtIndex:(unsigned)arg1 ;
-(id)rowAtIndexPath:(id)arg1 ;
-(BOOL)_shouldEnableSection:(id)arg1 ;
-(id)indexPathForRow:(id)arg1 ;
-(id)destinationForRowAtIndexPath:(id)arg1 withProposedDestination:(id)arg2 ;
-(void)setAllSections:(id)arg1 ;
-(id)enabledSections;
-(void)setEnabledSections:(id)arg1 ;
-(void).cxx_destruct;
-(void)deleteRowAtIndexPath:(id)arg1 ;
-(id)allSections;
@end

