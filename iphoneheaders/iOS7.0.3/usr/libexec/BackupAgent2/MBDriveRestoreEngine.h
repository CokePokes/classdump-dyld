/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileBackup/MBEngine.h>
#import <BackupAgent2/MBFileHandleFactory.h>

@class MBProgress, MBDriveScript, MBDrive, MBBackupHelper, MBStatus, MBManifest, MBKeyBag, NSMutableDictionary, NSMutableSet, NSString, MBDriveSettingsContext, MBDriveRestoreDomainManager;

@interface MBDriveRestoreEngine : MBEngine <MBFileHandleFactory> {

	MBProgress* _progress;
	MBDriveScript* _script;
	MBDrive* _drive;
	MBBackupHelper* _backupHelper;
	MBStatus* _status;
	MBManifest* _manifest;
	MBKeyBag* _keybag;
	NSMutableDictionary* _regularFileIDsByInodeNumber;
	NSMutableSet* _restoredAppBundleIDs;
	NSString* _temporaryDir;
	unsigned long long _totalDownloadCount;
	unsigned long long _totalDownloadSize;
	BOOL _digestDidNotMatchForSomeFiles;

}

@property (nonatomic,readonly) MBDriveSettingsContext * settingsContext; 
@property (nonatomic,readonly) MBDriveRestoreDomainManager * domainManager; 
@property (nonatomic,readonly) MBManifest * manifest; 
@property (nonatomic,readonly) MBProgress * progress;                                      //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) MBKeyBag * keybag; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (getter=shouldVerifyDigests,nonatomic,readonly) BOOL verifyDigests; 
+(id)restoreEngineWithSettingsContext:(id)arg1 debugContext:(id)arg2 ;
-(id)keybag;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 ;
-(id)_postconditions;
-(id)_prepare;
-(id)_restore;
-(id)_annotate;
-(id)fileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)_preconditions;
-(id)_resumeAfterFailureUploading;
-(id)_resumeAfterFailureMoving;
-(id)_resumeAfterFailureRemoving;
-(id)_resumeAfterSuccess;
-(id)_prepareProgress;
-(id)_prepareFreeSpace;
-(id)endWithError:(id)arg1 ;
-(id)restore;
-(id)_restoreContent;
-(id)_restoreDirectoryModificationTimes;
-(id)_moveRestoreDir;
-(id)_prepareEncryption;
-(id)_prepareC0pyBackup;
-(BOOL)_shouldRestoreContentWithFile:(id)arg1 quiet:(BOOL)arg2 ;
-(id)_restorePathOfFile:(id)arg1 ;
-(id)_restoreRegularFiles:(id)arg1 size:(unsigned long long)arg2 ;
-(BOOL)isIPod;
-(id)fileForTemporaryPath:(id)arg1 ;
-(BOOL)shouldVerifyDigests;
-(void)digestDidNotMatchForFile:(id)arg1 ;
-(void)dealloc;
-(id)progress;
-(id)properties;
-(id)_cleanup;
-(id)_setup;
-(BOOL)isMigrate;
-(int)engineType;
-(int)engineMode;
-(int)restoreType;
-(id)settingsContext;
-(id)domainManager;
-(BOOL)isEncrypted;
-(id)manifest;
-(id)_resume;
@end

