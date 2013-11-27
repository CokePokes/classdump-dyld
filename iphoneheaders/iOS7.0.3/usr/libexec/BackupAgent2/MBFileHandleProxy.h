/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <backupd/MBFileHandle.h>

@class MBFileHandle;

@interface MBFileHandleProxy : MBFileHandle {

	MBFileHandle* _fileHandle;

}

@property (nonatomic,readonly) MBFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(id)encryptionKeyWithError:(id*)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)fd;
-(void)dealloc;
-(id)path;
-(id)initWithFileHandle:(id)arg1 ;
-(id)fileHandle;
@end

