/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSCore/IDSProfileMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSDictionary;

@interface IDSProfileValidateInvitationContext : IDSProfileMessage <NSCopying> {

	NSString* _basePhoneNumber;
	NSString* _regionID;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * regionID;                             //@synthesize regionID=_regionID - In the implementation block
@property (copy) NSString * basePhoneNumber;                      //@synthesize basePhoneNumber=_basePhoneNumber - In the implementation block
@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setRegionID:(id)arg1 ;
-(id)responseRegionID;
-(id)responseBasePhoneNumber;
-(id)responseExtraInfo;
-(void)setBasePhoneNumber:(id)arg1 ;
-(id)regionID;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setResponseBasePhoneNumber:(id)arg1 ;
-(void)setResponseRegionID:(id)arg1 ;
-(void)setResponseExtraInfo:(id)arg1 ;
-(BOOL)wantsExtraTimeoutRetry;
-(int)maxTimeoutRetries;
-(id)basePhoneNumber;
-(id)messageBody;
-(id)requiredKeys;
@end

