/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSDictionary;

@interface KNAnimationAttributes : NSObject <NSCopying> {

	NSString* mEffect;
	NSDictionary* mAttributes;

}

@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)supportedCustomAttributes;
+(id)attributesWithEffect:(id)arg1 attributes:(id)arg2 ;
+(BOOL)customAttributeKeyIsValid:(id)arg1 ;
-(id)valueForAttributeKey:(id)arg1 ;
-(id)initWithEffect:(id)arg1 attributes:(id)arg2 ;
-(id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2 ;
-(BOOL)containsAttributeForKey:(id)arg1 ;
-(id)attributesByChangingEffectToEffect:(id)arg1 ;
-(id)attributesByAddingAttributesFromDictionary:(id)arg1 ;
-(id)attributesByAddingMissingAttributesFromDictionary:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)attributes;
-(id)effect;
@end

