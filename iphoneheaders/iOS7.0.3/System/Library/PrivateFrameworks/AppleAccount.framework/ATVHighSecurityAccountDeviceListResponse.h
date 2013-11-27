/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSDictionary * userDisplayStrings; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) int errorCode; 
-(id)errorTitle;
-(id)errorMessage;
-(id)userDisplayStrings;
-(id)devices;
-(int)errorCode;
@end

