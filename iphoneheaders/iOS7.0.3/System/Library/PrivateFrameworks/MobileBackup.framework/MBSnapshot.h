/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString, NSDate;

@interface MBSnapshot : NSObject <NSCopying, NSCoding> {

	unsigned _snapshotID;
	NSString* _deviceName;
	NSDate* _date;
	int _state;
	BOOL _isCompatible;
	NSString* _systemVersion;
	unsigned long long _quotaReserved;

}

@property (nonatomic,readonly) unsigned snapshotID;                           //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isCompatible;                             //@synthesize isCompatible=_isCompatible - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                      //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long quotaReserved;              //@synthesize quotaReserved=_quotaReserved - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)state;
-(id)date;
-(id)systemVersion;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)deviceName;
-(id)initWithSnapshotID:(unsigned)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(BOOL)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7 ;
-(unsigned)snapshotID;
-(BOOL)isCompatible;
-(unsigned long long)quotaReserved;
@end

