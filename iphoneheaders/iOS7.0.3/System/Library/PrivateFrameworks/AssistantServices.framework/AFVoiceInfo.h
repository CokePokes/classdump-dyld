/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCustom;
	NSString* _languageCode;
	int _gender;

}

@property (nonatomic,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) int gender;                             //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) BOOL isCustom;                          //@synthesize isCustom=_isCustom - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(id)languageCode;
-(id)initWithLanguageCode:(id)arg1 gender:(int)arg2 isCustom:(BOOL)arg3 ;
-(void)setIsCustom:(BOOL)arg1 ;
-(BOOL)isCustom;
-(int)gender;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setGender:(int)arg1 ;
-(void).cxx_destruct;
@end

