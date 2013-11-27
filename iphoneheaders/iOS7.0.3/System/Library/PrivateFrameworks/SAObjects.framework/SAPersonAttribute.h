/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * data; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,retain) SAPerson * object; 
@property (nonatomic,retain) <SAAceSerializable> * typedData; 
+(id)personAttribute;
+(id)personAttributeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)displayText;
-(id)groupIdentifier;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setDisplayText:(id)arg1 ;
-(id)encodedClassName;
-(id)typedData;
-(void)setTypedData:(id)arg1 ;
@end

