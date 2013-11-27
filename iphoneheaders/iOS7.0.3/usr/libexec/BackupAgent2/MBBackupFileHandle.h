/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <backupd/MBFileHandleProxy.h>

@class MBDriveBackupEngine, MBFile, MBDigest;

@interface MBBackupFileHandle : MBFileHandleProxy {

	MBDriveBackupEngine* _engine;
	MBFile* _file;
	MBDigest* _digest;
	double _startTime;
	unsigned long _bytesReadSinceLastModificationCheck;
	BOOL _shouldCheckForModifications;

}
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithEngine:(id)arg1 fileHandle:(id)arg2 file:(id)arg3 ;
-(BOOL)_isModifiedWithStat:(stat*)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

