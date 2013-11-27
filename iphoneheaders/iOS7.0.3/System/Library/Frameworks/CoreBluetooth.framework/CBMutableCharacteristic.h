/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreBluetooth/CBCharacteristic.h>

@class NSNumber, NSMutableArray, NSArray, CBUUID, NSData;

@interface CBMutableCharacteristic : CBCharacteristic {

	NSNumber* _ID;
	int _permissions;
	NSMutableArray* _subscribedCentrals;

}

@property (assign,nonatomic) int permissions;                   //@synthesize permissions=_permissions - In the implementation block
@property (readonly) NSArray * subscribedCentrals;              //@synthesize subscribedCentrals=_subscribedCentrals - In the implementation block
@property (nonatomic,retain) CBUUID * UUID; 
@property (assign,nonatomic) int properties; 
@property (retain) NSData * value; 
@property (retain) NSArray * descriptors; 
@property (retain) NSNumber * ID;                               //@synthesize ID=_ID - In the implementation block
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(id)initWithType:(id)arg1 properties:(int)arg2 value:(id)arg3 permissions:(int)arg4 ;
-(BOOL)handleCentralSubscribed:(id)arg1 ;
-(BOOL)handleCentralUnsubscribed:(id)arg1 ;
-(int)permissions;
-(void)setPermissions:(int)arg1 ;
-(id)subscribedCentrals;
-(void)dealloc;
-(id)description;
-(void)setProperties:(int)arg1 ;
-(void)setDescriptors:(id)arg1 ;
-(id)ID;
-(void)setID:(id)arg1 ;
@end

