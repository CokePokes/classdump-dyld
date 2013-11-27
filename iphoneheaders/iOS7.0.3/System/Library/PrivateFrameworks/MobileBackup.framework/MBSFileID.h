/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MBSFileID : PBCodable {

	NSData* _fileID;

}

@property (nonatomic,readonly) BOOL hasFileID; 
@property (nonatomic,retain) NSData * fileID;               //@synthesize fileID=_fileID - In the implementation block
+(id)fileIDWithData:(id)arg1 ;
+(id)fileIDWithMBFileID:(id)arg1 ;
-(void)setFileID:(id)arg1 ;
-(BOOL)hasFileID;
-(id)fileID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

