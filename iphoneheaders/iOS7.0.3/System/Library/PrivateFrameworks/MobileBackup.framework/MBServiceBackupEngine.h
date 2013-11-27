/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <backupd/MBServiceEngine.h>
#import <backupd/MBFileScannerDelegate.h>

@class MBFileScanner, NSMutableSet, MBSBackup;

@interface MBServiceBackupEngine : MBServiceEngine <MBFileScannerDelegate> {

	int _mode;
	int _reason;
	int _type;
	MBFileScanner* _fileScanner;
	NSMutableSet* _modifiedDomains;
	MBSBackup* _backup;
	BOOL _fullBackup;
	int _snapshotID;
	unsigned _totalFileChangeCount;
	unsigned long long _totalFileChangeSize;
	unsigned long long _snapshotQuotaReserved;

}
-(id)initWithMode:(int)arg1 reason:(int)arg2 settingsContext:(id)arg3 debugContext:(id)arg4 ;
-(id)cleanupAfterError:(id)arg1 ;
-(id)_backUp;
-(void)_postconditions;
-(id)_tryBackingUp;
-(id)_removeAbortedFiles;
-(id)_commitSnapshot;
-(id)_refreshCache;
-(id)_setupEncryption;
-(id)_scanFiles;
-(id)_createBackupAndSnapshot;
-(id)_tryScanning;
-(id)_trySettingUpBackup;
-(id)_prepare;
-(id)_addFiles;
-(id)_findDeletedFiles;
-(int)_fileChangeTypeForNewFile:(id)arg1 oldFile:(id)arg2 ;
-(id)_extendedAttributesForPathFSR:(const char*)arg1 quiet:(BOOL)arg2 error:(id*)arg3 ;
-(id)_snapshotAttributes;
-(id)_addFileChangesToBatch:(id)arg1 ;
-(id)_addBatch:(id)arg1 ;
-(id)_addFileChange:(id)arg1 toBatch:(id)arg2 ;
-(id)_setupAddOfFileChange:(id)arg1 file:(id*)arg2 item:(id*)arg3 ;
-(id)_addBatchToService:(id)arg1 fileAuthTokens:(id*)arg2 ;
-(id)_putBatchInChunkStore:(id)arg1 fileAuthTokens:(id)arg2 ;
-(id)_commitBatchToService:(id)arg1 ;
-(BOOL)fileScanner:(id)arg1 isFileAddedOrModified:(id)arg2 ;
-(id)fileScanner:(id)arg1 didFindFile:(id)arg2 ;
-(void)dealloc;
-(id)_run;
-(void)cancel;
-(id)run;
-(int)engineMode;
-(BOOL)shouldCommitIfPossible;
-(id)setup;
-(void)_retry;
@end

