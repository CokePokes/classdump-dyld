/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface MBSBackupAttributes : PBCodable {

	NSString* _deviceClass;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSString* _hardwareModel;
	NSString* _marketingName;
	NSString* _productType;
	NSString* _serialNumber;

}

@property (nonatomic,readonly) BOOL hasDeviceClass; 
@property (nonatomic,retain) NSString * deviceClass;                       //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) BOOL hasProductType; 
@property (nonatomic,retain) NSString * productType;                       //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceColor; 
@property (nonatomic,retain) NSString * deviceColor;                       //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel;                     //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) BOOL hasMarketingName; 
@property (nonatomic,retain) NSString * marketingName;                     //@synthesize marketingName=_marketingName - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceEnclosureColor; 
@property (nonatomic,retain) NSString * deviceEnclosureColor;              //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
+(id)systemAttributes;
-(void)setDeviceClass:(id)arg1 ;
-(void)setProductType:(id)arg1 ;
-(void)setDeviceColor:(id)arg1 ;
-(void)setMarketingName:(id)arg1 ;
-(void)setDeviceEnclosureColor:(id)arg1 ;
-(BOOL)hasDeviceClass;
-(BOOL)hasProductType;
-(BOOL)hasSerialNumber;
-(BOOL)hasDeviceColor;
-(id)deviceColor;
-(BOOL)hasMarketingName;
-(BOOL)hasDeviceEnclosureColor;
-(id)deviceEnclosureColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHardwareModel:(id)arg1 ;
-(BOOL)hasHardwareModel;
-(id)hardwareModel;
-(id)serialNumber;
-(void)setSerialNumber:(id)arg1 ;
-(id)deviceClass;
-(id)marketingName;
-(BOOL)readFrom:(id)arg1 ;
-(id)productType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

