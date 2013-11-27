/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSData, NSDate, NSDictionary, NSString;

@interface MBProperties : NSObject {

	NSMutableDictionary* _plist;
	BOOL _protect;
	BOOL _protected;

}

@property (nonatomic,readonly) id propertyList;                                   //@synthesize plist=_plist - In the implementation block
@property (assign,getter=isProtected,nonatomic) BOOL protected;                   //@synthesize protected=_protected - In the implementation block
@property (assign,nonatomic) double systemDomainsVersion; 
@property (nonatomic,retain) NSData * keybagData; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double version; 
@property (assign,getter=wasPasscodeSet,nonatomic) BOOL passcodeSet; 
@property (assign,getter=isEncrypted,nonatomic) BOOL encrypted; 
@property (nonatomic,readonly) NSDictionary * applications; 
@property (nonatomic,readonly) NSDictionary * appleIDs; 
@property (nonatomic,retain) NSDictionary * lockdownKeys; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) BOOL hasCorruptSQLiteDBs; 
+(id)properties;
+(id)propertiesWithFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_boolForKey:(id)arg1 ;
-(id)date;
-(void)setDate:(id)arg1 ;
-(id)buildVersion;
-(void)setVersion:(double)arg1 ;
-(double)version;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)deviceID;
-(id)deviceName;
-(id)_dataForKey:(id)arg1 ;
-(id)_dictionaryForKey:(id)arg1 ;
-(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)serialNumber;
-(void)setEncrypted:(BOOL)arg1 ;
-(id)initWithFile:(id)arg1 error:(id*)arg2 ;
-(double)systemDomainsVersion;
-(void)setSystemDomainsVersion:(double)arg1 ;
-(void)_setData:(id)arg1 forKey:(id)arg2 ;
-(void)_setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)lockdownKeys;
-(id)_stringForLockdownKey:(id)arg1 ;
-(id)appleIDs;
-(void)addApp:(id)arg1 ;
-(BOOL)wasPasscodeSet;
-(id)keybagData;
-(void)setKeybagData:(id)arg1 ;
-(void)setPasscodeSet:(BOOL)arg1 ;
-(void)setLockdownKeys:(id)arg1 ;
-(BOOL)hasCorruptSQLiteDBs;
-(void)addAppleIDsFromSet:(id)arg1 ;
-(id)appWithBundleID:(id)arg1 ;
-(void)addAppsFromArray:(id)arg1 ;
-(void)setProtected:(BOOL)arg1 ;
-(BOOL)isEncrypted;
-(id)productType;
-(BOOL)isProtected;
-(id)applications;
@end

