/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/ptpd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ptpd/ptpd-Structs.h>
@class NSString, NSMutableDictionary, NSMutableIndexSet;

@interface Container : NSObject {

	NSString* _path;
	unsigned long long _serialNumber;
	timespec _captureTimeSpec;
	long long _size;
	id _parent;
	NSMutableDictionary* _files;
	NSMutableIndexSet* _fileIndices;
	NSMutableDictionary* _folders;
	NSMutableIndexSet* _folderIndices;
	unsigned long _storageID;
	unsigned long _objectHandle;

}
-(void)addContent;
-(BOOL)largeFileEnumeration;
-(id)objectHandlesForObjectFormatCode:(unsigned short)arg1 inAssociation:(unsigned long)arg2 ;
-(id)objectHandlesForFolders;
-(id)objectHandlesForFiles;
-(id)objectForObjectHandle:(id)arg1 ;
-(unsigned long)appendObjectFilesystemInfo:(id)arg1 forObjectFormatCode:(unsigned short)arg2 inAssociation:(unsigned long)arg3 ;
-(void)appendObjectInfo:(id)arg1 forObjectFormatCode:(unsigned short)arg2 inAssociation:(unsigned long)arg3 ;
-(void)appendObjectInfo64:(id)arg1 forObjectFormatCode:(unsigned short)arg2 inAssociation:(unsigned long)arg3 ;
-(id)initWithObjectHandle:(unsigned long)arg1 path:(id)arg2 andParent:(id)arg3 ;
-(id)fileMatchingName:(id)arg1 ;
-(id)foldeMatchingName:(id)arg1 ;
-(id)fileObjectHandleMatchingName:(id)arg1 serialNumber:(unsigned long long)arg2 captureTimeSpec:(timespec*)arg3 andSize:(long long)arg4 ;
-(id)folderObjectHandleMatchingName:(id)arg1 serialNumber:(unsigned long long)arg2 captureTimeSpec:(timespec*)arg3 andSize:(long long)arg4 ;
-(void)dealloc;
-(void)deleteFile:(id)arg1 ;
-(void)deleteFolder:(id)arg1 ;
@end

