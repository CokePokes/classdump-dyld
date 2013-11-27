/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SASportsEntity.h>

@class NSArray, NSString;

@interface SASportsEntityGroup : SASportsEntity

@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSString * groupType; 
+(id)entityGroup;
+(id)entityGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntities:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)groupType;
-(void)setGroupType:(id)arg1 ;
-(id)entities;
@end

