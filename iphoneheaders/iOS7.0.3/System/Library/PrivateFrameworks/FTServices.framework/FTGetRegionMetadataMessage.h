/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying> {

	NSString* _language;
	NSDictionary* _responseRegionInformation;

}

@property (copy) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (copy) NSDictionary * responseRegionInformation;              //@synthesize responseRegionInformation=_responseRegionInformation - In the implementation block
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(int)command;
-(id)responseRegionInformation;
-(void)setResponseRegionInformation:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(BOOL)wantsBagKey;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBinaryPush;
-(int)responseCommand;
-(BOOL)wantsHTTPGet;
-(id)messageBody;
-(id)requiredKeys;
@end

