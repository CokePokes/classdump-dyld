/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MBFileID, NSString, MBSFileReference;

@interface MBServiceFileChange : NSObject {

	MBFileID* _fileID;
	int _type;
	NSString* _domainName;
	NSString* _relativePath;
	MBSFileReference* _duplicateFileReference;
	int _result;
	long long _size;

}

@property (nonatomic,retain) MBFileID * fileID;                                      //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * typeString; 
@property (nonatomic,retain) NSString * domainName;                                  //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,retain) NSString * relativePath;                                //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) MBSFileReference * duplicateFileReference;              //@synthesize duplicateFileReference=_duplicateFileReference - In the implementation block
@property (assign,nonatomic) long long size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int result;                                             //@synthesize result=_result - In the implementation block
@property (getter=isUnmodified,nonatomic,readonly) BOOL unmodified; 
@property (getter=isAdded,nonatomic,readonly) BOOL added; 
@property (getter=isModified,nonatomic,readonly) BOOL modified; 
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted; 
+(id)fileChangeWithFile:(id)arg1 type:(int)arg2 ;
+(id)fileChange;
+(id)stringForType:(int)arg1 ;
-(void)setFileID:(id)arg1 ;
-(void)setRelativePath:(id)arg1 ;
-(id)fileID;
-(void)setDuplicateFileReference:(id)arg1 ;
-(BOOL)isModified;
-(BOOL)isUnmodified;
-(id)duplicateFileReference;
-(BOOL)isEqualToFileChange:(id)arg1 ;
-(BOOL)isAdded;
-(void)dealloc;
-(long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setSize:(long long)arg1 ;
-(id)typeString;
-(void)setResult:(int)arg1 ;
-(int)result;
-(id)domainName;
-(void)setDomainName:(id)arg1 ;
-(BOOL)isDeleted;
-(id)relativePath;
@end

