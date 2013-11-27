/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(id)types;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)addTypes:(id)arg1 ;
-(void)addType:(id)arg1 ;
-(BOOL)isPrimary;
-(void)dealloc;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(id)grouping;
-(void)setGrouping:(id)arg1 ;
-(void)finalize;
@end

