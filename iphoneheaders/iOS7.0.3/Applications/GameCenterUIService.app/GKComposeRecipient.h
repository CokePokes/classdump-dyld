/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface GKComposeRecipient : NSObject <NSCopying, NSCoding> {

	unsigned _addressType;
	NSString* _address;
	NSString* _label;
	NSString* _displayString;

}

@property (readonly) unsigned addressType;                  //@synthesize addressType=_addressType - In the implementation block
@property (retain) NSString * label;                        //@synthesize label=_label - In the implementation block
@property (readonly) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (readonly) NSString * displayString;              //@synthesize displayString=_displayString - In the implementation block
@property (readonly) BOOL hasValidAddress; 
+(id)recipientWithAddress:(id)arg1 ;
+(id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)initWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 address:(id)arg4 ;
-(BOOL)hasValidAddress;
-(unsigned)addressType;
-(unsigned)guessAddressTypeForString:(id)arg1 ;
-(void)_initWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(void)_initWithAddress:(id)arg1 ;
-(void)_findEmailInAddressBookAndInitFromRecord;
-(void)_findTwitterInAddressBookAndInitFromRecord;
-(void)_fixupAddressAndLabel;
-(id)initWithAddress:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)displayString;
-(id)address;
@end

