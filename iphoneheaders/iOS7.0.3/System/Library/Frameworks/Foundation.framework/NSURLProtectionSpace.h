/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {

	NSURLProtectionSpaceInternal* _internal;

}
+(BOOL)supportsSecureCoding;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(id)_internalInit;
-(id)realm;
-(id)proxyType;
-(id)initWithHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)initWithProxyHost:(id)arg1 port:(int)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(BOOL)receivesCredentialSecurely;
-(id)distinguishedNames;
-(SecTrustRef)serverTrust;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(BOOL)isProxy;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)host;
-(id)authenticationMethod;
-(id)protocol;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(int)port;
@end

