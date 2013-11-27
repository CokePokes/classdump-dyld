/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray;

@interface IDSIDQueryMessage : FTIDSMessage <NSCopying> {

	NSString* _uri;
	NSArray* _responseIdentities;
	NSArray* _responseSessionTokens;

}

@property (setter=setURI:,copy) NSString * uri;                //@synthesize uri=_uri - In the implementation block
@property (copy) NSArray * responseIdentities;                 //@synthesize responseIdentities=_responseIdentities - In the implementation block
@property (copy) NSArray * responseSessionTokens;              //@synthesize responseSessionTokens=_responseSessionTokens - In the implementation block
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)hasRequiredKeys:(id*)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(BOOL)wantsBodySignature;
-(BOOL)wantsHTTPGet;
-(id)responseIdentities;
-(id)responseSessionTokens;
-(void)setResponseIdentities:(id)arg1 ;
-(void)setResponseSessionTokens:(id)arg1 ;
-(id)additionalQueryStringParameters;
-(BOOL)wantsManagedRetries;
-(id)dataUsageBundleIdentifier;
-(void)handleResponseHeaders:(id)arg1 ;
-(id)messageBody;
-(id)uri;
-(void)setURI:(id)arg1 ;
-(id)requiredKeys;
@end

