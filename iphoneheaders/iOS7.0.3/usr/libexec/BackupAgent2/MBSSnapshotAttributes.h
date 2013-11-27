/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface MBSSnapshotAttributes : PBCodable {

	int _backupReason;
	int _backupType;
	NSString* _buildVersion;
	NSString* _deviceName;
	unsigned _keybagID;
	NSData* _keybagUUID;
	NSString* _productVersion;
	SCD_Struct_MB4 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasProductVersion; 
@property (nonatomic,retain) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;                //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) BOOL hasKeybagID; 
@property (assign,nonatomic) unsigned keybagID;                      //@synthesize keybagID=_keybagID - In the implementation block
@property (nonatomic,readonly) BOOL hasKeybagUUID; 
@property (nonatomic,retain) NSData * keybagUUID;                    //@synthesize keybagUUID=_keybagUUID - In the implementation block
@property (assign,nonatomic) BOOL hasBackupReason; 
@property (assign,nonatomic) int backupReason;                       //@synthesize backupReason=_backupReason - In the implementation block
@property (assign,nonatomic) BOOL hasBackupType; 
@property (assign,nonatomic) int backupType;                         //@synthesize backupType=_backupType - In the implementation block
+(id)systemAttributes;
+(id)snapshotAttributes;
-(BOOL)hasKeybagID;
-(unsigned)keybagID;
-(void)setKeybagID:(unsigned)arg1 ;
-(void)setHasKeybagID:(BOOL)arg1 ;
-(void)setKeybagUUID:(id)arg1 ;
-(BOOL)hasDeviceName;
-(BOOL)hasProductVersion;
-(BOOL)hasBuildVersion;
-(BOOL)hasKeybagUUID;
-(id)keybagUUID;
-(BOOL)hasBackupReason;
-(int)backupReason;
-(void)setBackupReason:(int)arg1 ;
-(BOOL)hasBackupType;
-(int)backupType;
-(void)setBackupType:(int)arg1 ;
-(void)setHasBackupReason:(BOOL)arg1 ;
-(void)setHasBackupType:(BOOL)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)buildVersion;
-(id)deviceName;
-(BOOL)readFrom:(id)arg1 ;
-(void)setProductVersion:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)productVersion;
@end

