/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface ACFPrincipal : NSObject <NSCopying, NSCoding> {

	NSString* _userName;
	NSString* _realm;
	NSString* _principalString;

}

@property (nonatomic,retain) NSString * userName;                     //@synthesize userName=_userName - In the implementation block
@property (nonatomic,retain) NSString * realm;                        //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * principalString; 
+(id)principalWithUserName:(id)arg1 realm:(id)arg2 ;
+(id)principalWithPrincipalString:(id)arg1 ;
-(id)userName;
-(id)realm;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setRealm:(id)arg1 ;
-(void)setUserName:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(void)setPrincipalString:(id)arg1 ;
-(id)principalString;
-(void)releaseCaches;
@end

