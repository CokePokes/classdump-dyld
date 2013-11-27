/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * attributionId; 
@property (nonatomic,copy) NSArray * urls; 
@property (assign,nonatomic) int version; 
+(id)attribution;
+(id)attributionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(id)urls;
-(void)setUrls:(id)arg1 ;
-(id)encodedClassName;
-(id)attributionId;
-(void)setAttributionId:(id)arg1 ;
@end

