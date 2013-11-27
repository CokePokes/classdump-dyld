/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol RadiosPreferencesDelegate;
#import <AppSupport/AppSupport-Structs.h>
@class ;

@interface RadiosPreferences : NSObject {

	SCPreferencesRef _prefs;
	int _applySkipCount;
	<RadiosPreferencesDelegate>* _delegate;
	BOOL _isCachedAirplaneModeValid;
	BOOL _cachedAirplaneMode;
	BOOL notifyForExternalChangeOnly;

}

@property (assign,nonatomic) BOOL airplaneMode; 
@property (assign,nonatomic) <RadiosPreferencesDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notifyForExternalChangeOnly; 
-(void*)getValueForKey:(id)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(void)setAirplaneMode:(BOOL)arg1 ;
-(void)notifyTarget:(unsigned)arg1 ;
-(void)initializeSCPrefs:(id)arg1 ;
-(void)setCallback:(/*function pointer*/ void*)arg1 withContext:(SCD_Struct_Ra9*)arg2 ;
-(BOOL)notifyForExternalChangeOnly;
-(void)setNotifyForExternalChangeOnly:(BOOL)arg1 ;
-(void)refresh;
-(BOOL)airplaneMode;
@end

