/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/MBDrive.h>

@class MBDriveScript, MBDrive;

@interface MBProgressDrive : MBDrive {

	MBDriveScript* _script;
	MBDrive* _delegate;

}
-(BOOL)createDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)uploadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)downloadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)moveItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)removeItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)freeSpace:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)initWithScript:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;
@end

