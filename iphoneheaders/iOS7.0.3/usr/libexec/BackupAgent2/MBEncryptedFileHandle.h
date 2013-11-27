/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <backupd/MBFileHandle.h>

@class NSString, MBKeyBag, NSMutableData;

@interface MBEncryptedFileHandle : MBFileHandle {

	NSString* _path;
	MBKeyBag* _keybag;
	mkbfilerefRef _file;
	NSMutableData* _buffer;
	BOOL _restore;

}
+(id)encryptedFileHandleForRestoreWithPath:(id)arg1 keybag:(id)arg2 key:(id)arg3 error:(id*)arg4 ;
+(id)encryptedFileHandleForBackupWithPath:(id)arg1 keybag:(id)arg2 error:(id*)arg3 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(BOOL)validateEncryptionKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 keybag:(id)arg2 file:(mkbfilerefRef)arg3 restore:(BOOL)arg4 ;
-(int)fd;
-(void)dealloc;
-(id)path;
@end

