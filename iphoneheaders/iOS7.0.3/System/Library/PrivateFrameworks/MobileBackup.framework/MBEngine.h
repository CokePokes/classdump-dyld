/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MBSettingsContext, MBDebugContext, MBProperties, MBDomainManager, MBAppManager, NSString;

@interface MBEngine : NSObject {

	MBSettingsContext* _settingsContext;
	MBDebugContext* _debugContext;
	MBProperties* _properties;
	MBDomainManager* _domainManager;
	MBAppManager* _appManager;

}

@property (nonatomic,readonly) int engineType; 
@property (nonatomic,readonly) NSString * engineTypeString; 
@property (getter=isDriveEngine,nonatomic,readonly) BOOL driveEngine; 
@property (getter=isServiceEngine,nonatomic,readonly) BOOL serviceEngine; 
@property (nonatomic,readonly) int engineMode; 
@property (nonatomic,readonly) NSString * engineModeString; 
@property (getter=isBackupEngine,nonatomic,readonly) BOOL backupEngine; 
@property (getter=isRestoreEngine,nonatomic,readonly) BOOL restoreEngine; 
@property (nonatomic,readonly) int restoreType; 
@property (nonatomic,readonly) NSString * restoreTypeString; 
@property (getter=isForegroundRestore,nonatomic,readonly) BOOL foregroundRestore; 
@property (getter=isBackgroundRestore,nonatomic,readonly) BOOL backgroundRestore; 
@property (nonatomic,readonly) MBSettingsContext * settingsContext;                              //@synthesize settingsContext=_settingsContext - In the implementation block
@property (nonatomic,readonly) MBDebugContext * debugContext;                                    //@synthesize debugContext=_debugContext - In the implementation block
@property (nonatomic,readonly) MBProperties * properties;                                        //@synthesize properties=_properties - In the implementation block
@property (getter=isMigrate,nonatomic,readonly) BOOL migrate; 
@property (nonatomic,readonly) MBDomainManager * domainManager;                                  //@synthesize domainManager=_domainManager - In the implementation block
@property (nonatomic,readonly) MBAppManager * appManager;                                        //@synthesize appManager=_appManager - In the implementation block
@property (getter=shouldCommitIfPossible,nonatomic,readonly) BOOL commitIfPossible; 
+(id)stringForEngineType:(int)arg1 ;
+(id)stringForEngineMode:(int)arg1 ;
+(id)stringForRestoreType:(int)arg1 ;
-(void)dealloc;
-(id)properties;
-(BOOL)isMigrate;
-(id)appManager;
-(int)engineType;
-(int)engineMode;
-(int)restoreType;
-(BOOL)isRestoreEngine;
-(BOOL)isServiceEngine;
-(BOOL)isDriveEngine;
-(BOOL)isBackupEngine;
-(id)engineTypeString;
-(id)engineModeString;
-(id)restoreTypeString;
-(id)aggregateDictionaryKey:(id)arg1 ;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3 ;
-(BOOL)isForegroundRestore;
-(BOOL)isBackgroundRestore;
-(BOOL)shouldCommitIfPossible;
-(id)validateFile:(id)arg1 ;
-(id)validateRestorePath:(id)arg1 ;
-(void)pushAggregateDictionaryTotalFileCount:(long long)arg1 totalFileSize:(long long)arg2 duration:(double)arg3 ;
-(id)settingsContext;
-(id)debugContext;
-(id)domainManager;
@end

