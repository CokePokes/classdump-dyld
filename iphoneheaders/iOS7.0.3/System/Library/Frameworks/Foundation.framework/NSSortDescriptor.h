/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {

	unsigned _sortDescriptorFlags;
	NSString* _key;
	SEL _selector;
	id _selectorOrBlock;

}
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/ id)arg3 ;
+(id)_defaultSelectorName;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 ;
-(void)allowEvaluation;
-(BOOL)ascending;
-(/*^block*/ id)comparator;
-(int)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/ id)arg3 ;
-(id)_selectorName;
-(void)_setSelectorName:(id)arg1 ;
-(void)_disallowEvaluation;
-(BOOL)_isEqualToSortDescriptor:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(void)_setAscending:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 ;
-(SEL)selector;
-(id)key;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
-(id)reversedSortDescriptor;
@end

