/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAObjectSupport, NSURL, NSArray;

@interface SACommandSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * aceVersion; 
@property (nonatomic,copy) NSString * commandId; 
@property (nonatomic,retain) SAObjectSupport * resultSupport; 
@property (nonatomic,copy) NSURL * serverEndpoint; 
@property (nonatomic,copy) NSArray * supportedConstraints; 
@property (assign,nonatomic) int weight; 
+(id)commandSupport;
+(id)commandSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)weight;
-(void)setWeight:(int)arg1 ;
-(id)encodedClassName;
-(id)aceVersion;
-(void)setAceVersion:(id)arg1 ;
-(id)commandId;
-(void)setCommandId:(id)arg1 ;
-(id)resultSupport;
-(void)setResultSupport:(id)arg1 ;
-(id)serverEndpoint;
-(void)setServerEndpoint:(id)arg1 ;
-(id)supportedConstraints;
-(void)setSupportedConstraints:(id)arg1 ;
@end

