/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSDictionary, NSArray, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject <NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSNumber * failureType; 
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (getter=isSupportedProtocolVersion,nonatomic,readonly) BOOL supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)responseDictionary;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)actions;
-(id)pingURLs;
-(id)_valueForProtocolKey:(id)arg1 ;
-(id)_copyAccount;
-(id)failureType;
-(BOOL)isSupportedProtocolVersion;
-(id)versionMismatchURL;
-(id)actionsWithActionType:(id)arg1 ;
@end

